/*
 * XREFs of ?IsEqualByHwnd@CImmersiveApp@@UEAAJPEAUHWND__@@PEAH@Z @ 0x1800518F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::IsEqualByHwnd(CImmersiveApp *this, HWND a2, int *a3)
{
  __int64 v6; // rcx
  HWND v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = a2;
  v9 = 0LL;
  *a3 = (*(unsigned __int8 (__fastcall **)(char *, HWND *, __int64))(*((_QWORD *)this + 2) + 296LL))(
          (char *)this + 16,
          &v8,
          2LL) != 0;
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
