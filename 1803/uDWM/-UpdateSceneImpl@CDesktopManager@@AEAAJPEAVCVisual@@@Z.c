/*
 * XREFs of ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180025110
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180001D0C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800273D0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A290 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x180025658 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D5C0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSceneImpl(CDesktopManager *this, struct CVisual *a2)
{
  int v2; // eax
  int v3; // edi
  CDesktopManager *v4; // rsi
  __int64 i; // rbx
  __int64 v8; // rbx
  char v9; // bp
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  v2 = *((_DWORD *)a2 + 20);
  v3 = 0;
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  if ( (v2 & 0xFFFFFFFE) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 48LL))(a2);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x149u);
      goto LABEL_4;
    }
    v2 = *((_DWORD *)a2 + 20);
  }
  if ( (v2 & 1) != 0 )
  {
    LODWORD(v8) = -1;
    v9 = 0;
    while ( 1 )
    {
      if ( !v9 )
      {
        LODWORD(v8) = *((_DWORD *)a2 + 18);
        v9 = 1;
      }
      v8 = (unsigned int)(v8 - 1);
      if ( (_DWORD)v8 == -1 )
        break;
      v10 = CVisual::RenderRecursive(*(CVisual **)(*((_QWORD *)a2 + 6) + 8 * v8));
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x15Au);
        goto LABEL_4;
      }
    }
    *((_DWORD *)a2 + 20) &= ~1u;
    v2 = *((_DWORD *)a2 + 20);
  }
  if ( (v2 & 0xFFFFFFFE) != 0 )
  {
    v13 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 56LL))(a2);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x165u);
  }
LABEL_4:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x5ECu);
  }
  else
  {
    for ( i = *((_QWORD *)v4 + 56);
          *(_DWORD *)(i + 272);
          CWindowList::ImmediateDestroySprite((CWindowList *)i, **(struct CWindowData ***)(i + 248)) )
    {
      ;
    }
    *(_DWORD *)(i + 272) = 0;
    DynArrayImpl<0>::ShrinkToSize(i + 248, 8u);
    if ( !*((_BYTE *)v4 + 18) )
    {
      if ( *((_DWORD *)v4 + 140) )
      {
        if ( !*((_BYTE *)v4 + 19) )
        {
          *((_BYTE *)v4 + 19) = 1;
          v11 = CDesktopManager::SendRoundTripRequest(v4, 0LL);
          v3 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x5FDu);
        }
      }
    }
  }
  return (unsigned int)v3;
}
