/*
 * XREFs of ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180025B30
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180006204 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800081F0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800130F0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001690C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x180027234 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002DB70 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18003DBA0 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008E380 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180098C1C (-Capture@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::MoveToFront(CVisual *this, char a2)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  char v4; // r14
  volatile signed __int32 *v6; // rdi
  int v7; // eax
  int inserted; // eax

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  v4 = 0;
  if ( !v2
    || (*((_BYTE *)this + 84) &= ~0x10u, *((_BYTE *)this + 84) |= 16 * a2, !*(_DWORD *)(v2 + 72))
    || *(CVisual **)(*(_QWORD *)(v2 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 72) - 1)) == this )
  {
LABEL_6:
    v6 = (volatile signed __int32 *)((char *)this + 8);
    if ( !v4 )
      return v3;
    goto LABEL_7;
  }
  v6 = (volatile signed __int32 *)((char *)this + 8);
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  v4 = 1;
  v7 = VisualCollection::Remove((VisualCollection *)(v2 + 32), this);
  v3 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1B6u);
  }
  else
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(v2 + 32), (struct CVisual **)this, 0LL, 0, 1);
    v3 = inserted;
    if ( inserted >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1B9u);
  }
LABEL_7:
  if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CVisual *, __int64))this)(this, 1LL);
  return v3;
}
