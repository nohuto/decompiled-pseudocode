/*
 * XREFs of ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180059A3C
 * Callers:
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x1800580AC (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180058908 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1800589A0 (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 * Callees:
 *     WPP_SF_q @ 0x180050080 (WPP_SF_q.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005681C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180059230 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x1800599B0 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::_CleanupPendingPresentedWindow(HWND *this)
{
  HWND v2; // rbx
  CImmersiveApp *v3; // rcx
  __int64 v4; // rcx
  HWND v5; // rcx
  int v6; // [rsp+20h] [rbp-18h] BYREF
  HWND v7; // [rsp+28h] [rbp-10h]
  unsigned __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
    (CImmersiveApp::CImmersiveWindowCollection *)this,
    this[15],
    &v8);
  v2 = this[15];
  if ( (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this[19] + 32LL))(*(_QWORD *)this[19]) != v2 )
  {
    v3 = (CImmersiveApp *)this[18];
    v7 = this[15];
    v6 = 15;
    CImmersiveApp::_ScheduleApplicationNotifications(v3, (const struct APP_CHANGE_INFO *)&v6, 1uLL);
    v4 = *((_QWORD *)this[19] + v8);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 208LL))(v4, 0LL, 0LL);
    CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility((CImmersiveApp::CImmersiveWindowCollection *)this);
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_62695e9b884c3ff85ccc232e92679a04_Traceguids, this[15]);
  this[15] = 0LL;
  v5 = this[14];
  if ( v5 )
  {
    this[14] = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 32) = 0;
}
