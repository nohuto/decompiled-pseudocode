/*
 * XREFs of ?IsInteractive@CImmersiveApp@@UEAAJPEAH@Z @ 0x18004D160
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x1800498A0 (-IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsInteractive(CImmersiveApp *this, int *a2)
{
  __int64 (*v4)(void); // rax
  char IsApplicationInteractive; // al
  RTL_SRWLOCK *v6; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(__int64 (**)(void))(*((_QWORD *)this + 3) + 392LL);
  if ( (char *)v4 == (char *)CImmersiveApp::IsApplicationInteractive )
    IsApplicationInteractive = CImmersiveApp::IsApplicationInteractive((CImmersiveApp *)((char *)this + 24));
  else
    IsApplicationInteractive = v4();
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = IsApplicationInteractive != 0;
  ReleaseSRWLockShared(v6);
  return 0LL;
}
