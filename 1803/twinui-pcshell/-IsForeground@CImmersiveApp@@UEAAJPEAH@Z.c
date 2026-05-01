/*
 * XREFs of ?IsForeground@CImmersiveApp@@UEAAJPEAH@Z @ 0x18004D1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationForeground@CImmersiveApp@@UEBA_NXZ @ 0x180049870 (-IsApplicationForeground@CImmersiveApp@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsForeground(CImmersiveApp *this, int *a2)
{
  __int64 (*v4)(void); // rax
  char IsApplicationForeground; // al
  RTL_SRWLOCK *v6; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(__int64 (**)(void))(*((_QWORD *)this + 3) + 416LL);
  if ( (char *)v4 == (char *)CImmersiveApp::IsApplicationForeground )
    IsApplicationForeground = CImmersiveApp::IsApplicationForeground((CImmersiveApp *)((char *)this + 24));
  else
    IsApplicationForeground = v4();
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = IsApplicationForeground != 0;
  ReleaseSRWLockShared(v6);
  return 0LL;
}
