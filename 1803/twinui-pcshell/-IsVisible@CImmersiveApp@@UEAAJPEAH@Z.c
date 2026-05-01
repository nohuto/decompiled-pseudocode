/*
 * XREFs of ?IsVisible@CImmersiveApp@@UEAAJPEAH@Z @ 0x18004D240
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationVisible@CImmersiveApp@@UEBA_NXZ @ 0x180049890 (-IsApplicationVisible@CImmersiveApp@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsVisible(CImmersiveApp *this, int *a2)
{
  __int64 (*v4)(void); // rax
  char IsApplicationVisible; // al
  RTL_SRWLOCK *v6; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(__int64 (**)(void))(*((_QWORD *)this + 3) + 400LL);
  if ( (char *)v4 == (char *)CImmersiveApp::IsApplicationVisible )
    IsApplicationVisible = CImmersiveApp::IsApplicationVisible((CImmersiveApp *)((char *)this + 24));
  else
    IsApplicationVisible = v4();
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = IsApplicationVisible != 0;
  ReleaseSRWLockShared(v6);
  return 0LL;
}
