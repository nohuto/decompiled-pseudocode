/*
 * XREFs of ?IsRunning@CImmersiveApp@@UEAAJPEAH@Z @ 0x18004D2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsRunning(CImmersiveApp *this, int *a2)
{
  RTL_SRWLOCK *v4; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = *((_BYTE *)this + 448) & 1;
  ReleaseSRWLockShared(v4);
  return 0LL;
}
