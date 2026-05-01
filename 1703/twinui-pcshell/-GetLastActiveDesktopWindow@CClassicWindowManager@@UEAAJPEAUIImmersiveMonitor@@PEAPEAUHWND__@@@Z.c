/*
 * XREFs of ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x180036840
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18003734C (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveDesktopWindow(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        HWND *a3)
{
  struct IClassicWindow *v6; // rbx
  struct IClassicWindow *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  CClassicWindowManager::_GetLastActiveClassicWindow((CClassicWindowManager *)((char *)this - 72), a2, &v8);
  v6 = v8;
  *a3 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v8 + 24LL))(v8);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
