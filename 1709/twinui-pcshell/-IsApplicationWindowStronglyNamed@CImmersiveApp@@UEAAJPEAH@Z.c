/*
 * XREFs of ?IsApplicationWindowStronglyNamed@CImmersiveApp@@UEAAJPEAH@Z @ 0x180056430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsApplicationWindowStronglyNamed(CImmersiveApp *this, int *a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 424LL))((char *)this + 16) != 0;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
