/*
 * XREFs of ?HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z @ 0x180036540
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180038938 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CClassicWindowManager::HandleMonitorMove(
        CClassicWindowManager *this,
        HWND a2,
        struct IImmersiveMonitor *a3)
{
  CClassicWindowManager *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // ebp
  int ClassicWindow; // ebx
  bool v9; // bl
  struct IClassicWindow *v10; // rcx
  struct IClassicWindow *v12; // [rsp+60h] [rbp+8h] BYREF

  v5 = (CClassicWindowManager *)((char *)this - 80);
  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 64) & -(__int64)(this != (CClassicWindowManager *)80));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v12 = 0LL;
  ClassicWindow = CClassicWindowManager::_FindClassicWindow(v5, a2, &v12, 0LL);
  if ( ClassicWindow >= 0 )
    (*(void (__fastcall **)(struct IClassicWindow *, struct IImmersiveMonitor *))(*(_QWORD *)v12 + 88LL))(v12, a3);
  v9 = ClassicWindow >= 0;
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return v9;
}
