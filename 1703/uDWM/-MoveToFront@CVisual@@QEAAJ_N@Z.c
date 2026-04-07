/*
 * XREFs of ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800233E0
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180008AD4 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x18001FA7C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002EEB0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002EFC0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x1800350D8 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180038EF0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004146C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x1800419B0 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008BD90 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180093F7C (-Capture@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::MoveToFront(CVisual *this, char a2)
{
  __int64 v2; // r8
  VisualCollection *v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  int inserted; // eax

  v2 = *((_QWORD *)this + 3);
  if ( !v2 )
    return 0LL;
  *((_BYTE *)this + 84) &= ~0x10u;
  *((_BYTE *)this + 84) |= 16 * a2;
  if ( !*(_DWORD *)(v2 + 72)
    || *(CVisual **)(*(_QWORD *)(v2 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 72) - 1)) == this )
  {
    return 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  v4 = (VisualCollection *)(v2 + 32);
  v5 = VisualCollection::Remove((VisualCollection *)(v2 + 32), this);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x23Eu);
  }
  else
  {
    inserted = VisualCollection::InsertRelative(v4, this, 0LL, 0, 1);
    v6 = inserted;
    if ( inserted < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x241u);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CVisual *, __int64))this)(this, 1LL);
  return v6;
}
