/*
 * XREFs of ?HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z @ 0x180029298
 * Callers:
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180029018 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180032338 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 */

__int64 __fastcall HampSystemIsProcessLifetimeManaged(void *a1, unsigned int *a2)
{
  __int64 v3; // rdx
  NTSTATUS Policy_Internal; // ebx
  _BYTE v6[8]; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v7[16]; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  Policy_Internal = NtOpenProcessToken(a1, 8u, &TokenHandle);
  if ( Policy_Internal >= 0 )
  {
    Policy_Internal = AppModelPolicy_GetPolicy_Internal(TokenHandle, v3, &v8, v7, v6);
    if ( Policy_Internal >= 0 )
    {
      Policy_Internal = 0;
      *a2 = v8 == 65537;
    }
  }
  if ( TokenHandle )
    NtClose(TokenHandle);
  return (unsigned int)Policy_Internal;
}
