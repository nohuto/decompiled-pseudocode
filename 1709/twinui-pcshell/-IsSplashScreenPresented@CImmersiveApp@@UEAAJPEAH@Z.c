/*
 * XREFs of ?IsSplashScreenPresented@CImmersiveApp@@UEAAJPEAH@Z @ 0x180054C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsSplashScreenPresented(CImmersiveApp *this, int *a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 38) + 48LL))(*((_QWORD *)this + 38)) == 1;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
