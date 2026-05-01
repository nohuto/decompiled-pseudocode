/*
 * XREFs of ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180058B34
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180052DF0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180054140 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180054C00 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180054E40 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x180055E30 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1800570C8 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180059230 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_SdL @ 0x18004FC7C (WPP_SF_SdL.c)
 *     WPP_SF_Sdq @ 0x18004FE3C (WPP_SF_Sdq.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(
        CImmersiveApp::CImmersiveWindowCollection *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // si
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  char v10[4]; // [rsp+20h] [rbp-18h]
  __int64 v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+28h] [rbp-10h]

  v4 = 1;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = *((_QWORD *)this + 18);
    v12 = *((_DWORD *)this + 49);
    *(_DWORD *)v10 = *(_DWORD *)(v5 + 512);
    WPP_SF_SdL(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, *(const wchar_t **)(v5 + 504), *(_DWORD *)v10, v12);
    if ( *((_QWORD *)this + 20) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 19) + 240LL))(**((_QWORD **)this + 19))
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v6 = *((_QWORD *)this + 18);
        v7 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 19) + 32LL))(**((_QWORD **)this + 19));
        LODWORD(v11) = *(_DWORD *)(v6 + 512);
        WPP_SF_Sdq(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, v8, *(const wchar_t **)(v6 + 504), v11, v7);
      }
    }
  }
  if ( *((_DWORD *)this + 49)
    || !*((_QWORD *)this + 20)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 19) + 240LL))(**((_QWORD **)this + 19))
    || *(_DWORD *)(*((_QWORD *)this + 29) + 144LL) == 1 )
  {
    return 0;
  }
  return v4;
}
