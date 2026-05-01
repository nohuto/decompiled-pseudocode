/*
 * XREFs of ?IsForeground@CImmersiveApp@@UEAAJPEAH@Z @ 0x1800536E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsForeground(CImmersiveApp *this, int *a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 416LL))((char *)this + 16) != 0;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
