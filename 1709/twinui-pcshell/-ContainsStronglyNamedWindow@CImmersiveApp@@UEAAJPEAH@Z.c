/*
 * XREFs of ?ContainsStronglyNamedWindow@CImmersiveApp@@UEAAJPEAH@Z @ 0x180056490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::ContainsStronglyNamedWindow(CImmersiveApp *this, int *a2)
{
  RTL_SRWLOCK *v4; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = *((_QWORD *)this + 41) != 0LL;
  ReleaseSRWLockShared(v4);
  return 0LL;
}
