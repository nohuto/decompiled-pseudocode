/*
 * XREFs of ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x18018C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800835D8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18018C808 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     SHRegSubKeyExistsW @ 0x18030234C (SHRegSubKeyExistsW.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::ShouldCreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        int *a3,
        struct _GUID *a4)
{
  __int64 v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int8 (*v13)(void); // rax
  OLECHAR sz[40]; // [rsp+30h] [rbp-188h] BYREF
  wchar_t Buffer[128]; // [rsp+80h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  *a3 = 0;
  v6 = a2;
  *a4 = 0u;
  v7 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  if ( v7 < 0 )
  {
    v8 = 590LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( (unsigned int)v6 >= 0x7A )
  {
    v7 = -2147483637;
    v8 = 591LL;
    goto LABEL_3;
  }
  *a4 = *(struct _GUID *)*(&off_18042F2B0 + 3 * v6);
  v10 = (*((_DWORD *)&off_18042F2B0 + 6 * v6 + 3) & 1) == 0;
  v11 = *((_DWORD *)&off_18042F2B0 + 6 * v6 + 3) & 1;
  *a3 = v11;
  if ( !v10 && (*(_BYTE *)(&off_18042F2B0 + 3 * v6 + 1) & 1) != 0 )
  {
    StringFromGUID2((const GUID *const)*(&off_18042F2B0 + 3 * v6), sz, 39);
    StringCchPrintfW(Buffer, 128LL, L"SOFTWARE\\Classes\\CLSID\\%s", sz, 0LL, 0LL);
    v11 = SHRegSubKeyExistsW(v12, Buffer);
    *a3 = v11;
  }
  if ( v11 )
  {
    v13 = (unsigned __int8 (*)(void))*(&off_18042F2B0 + 3 * v6 + 2);
    if ( v13 )
      *a3 = v13();
  }
  return 0LL;
}
