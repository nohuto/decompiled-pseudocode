/*
 * XREFs of ?GetMonitor@CImmersiveApp@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18004C540
 * Callers:
 *     ?GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18001C840 (-GetMonitor@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z @ 0x18004C7B0 (-GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetMonitor(CImmersiveApp *this, struct IImmersiveMonitor **a2)
{
  CImmersiveApp *v4; // rcx
  void (__fastcall *v5)(CImmersiveApp *__hidden, struct IImmersiveMonitor **); // rax

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (CImmersiveApp *)((char *)this + 24);
  v5 = *(void (__fastcall **)(CImmersiveApp *__hidden, struct IImmersiveMonitor **))(*((_QWORD *)this + 3) + 464LL);
  if ( v5 == CImmersiveApp::GetMonitorInternal )
    CImmersiveApp::GetMonitorInternal(v4, a2);
  else
    v5(v4, a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
