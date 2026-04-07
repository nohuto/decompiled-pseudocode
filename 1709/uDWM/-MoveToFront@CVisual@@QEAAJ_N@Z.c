/*
 * XREFs of ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001957C
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180006070 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001019C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180015C6C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002770C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x180027E80 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180030324 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C50 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180085280 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18009046C (-Capture@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::MoveToFront(CVisual *this, char a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  int v5; // eax
  int inserted; // eax

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    *((_BYTE *)this + 84) &= ~0x10u;
    *((_BYTE *)this + 84) |= 16 * a2;
    if ( *(_DWORD *)(v2 + 72) )
    {
      if ( *(CVisual **)(*(_QWORD *)(v2 + 48) + 8LL * (unsigned int)(*(_DWORD *)(v2 + 72) - 1)) != this )
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 2);
        v5 = VisualCollection::Remove((VisualCollection *)(v2 + 32), this);
        v3 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x23Eu);
        }
        else
        {
          inserted = VisualCollection::InsertRelative((VisualCollection *)(v2 + 32), (struct CVisual **)this, 0LL, 0, 1);
          v3 = inserted;
          if ( inserted < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x241u);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(CVisual *, __int64))this)(this, 1LL);
      }
    }
  }
  return v3;
}
