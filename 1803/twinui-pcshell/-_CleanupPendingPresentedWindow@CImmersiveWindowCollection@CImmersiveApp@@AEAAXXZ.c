/*
 * XREFs of ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180131984
 * Callers:
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18012D83C (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180130604 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801306C4 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x18005C23C (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     WPP_SF_q @ 0x180132BE4 (WPP_SF_q.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  RTL_SRWLOCK *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  CImmersiveApp::CImmersiveWindowCollection::_FindWindow(this, *((HWND *)this + 15), &v9);
  v2 = *((_QWORD *)this + 15);
  if ( (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 19) + 32LL))(**((_QWORD **)this + 19)) != v2 )
  {
    v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 18);
    v8 = *((_QWORD *)this + 15);
    v7 = 15;
    CImmersiveApp::_ScheduleApplicationNotifications(v3, (const struct APP_CHANGE_INFO *const)&v7, 1uLL);
    v4 = *(_QWORD *)(*((_QWORD *)this + 19) + 8 * v9);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 208LL))(v4, 0LL, 0LL);
    CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(this, v5, v6);
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      32LL,
      &WPP_ace03dded3743996b6b4d2e4c589bf4a_Traceguids,
      *((_QWORD *)this + 15));
  *((_QWORD *)this + 15) = 0LL;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 14, 0LL);
  *((_DWORD *)this + 32) = 0;
}
