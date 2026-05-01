/*
 * XREFs of ?IsApplicationWindowPresented@CImmersiveApp@@UEAAHXZ @ 0x1800532B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CImmersiveApp::IsApplicationWindowPresented(CImmersiveApp *this)
{
  RTL_SRWLOCK *v2; // rbx
  BOOL v3; // edi
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK v7; // [rsp+48h] [rbp+10h]

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  v7 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 56LL))(
                    *((_QWORD *)this + 35),
                    &v6) != 0LL;
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
