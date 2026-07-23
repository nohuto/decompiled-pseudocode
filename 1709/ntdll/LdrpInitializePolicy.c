/*
 * XREFs of LdrpInitializePolicy @ 0x180082224
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrSetDllDirectory @ 0x180001F70 (LdrSetDllDirectory.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x1800710A0 (AppModelPolicy_GetPolicy_Internal.c)
 *     LdrSetDefaultDllDirectories @ 0x180082380 (LdrSetDefaultDllDirectories.c)
 */

char LdrpInitializePolicy()
{
  struct _PEB *v0; // rbx
  _UNICODE_STRING *ProcessParameters; // rdi
  __int64 v2; // rcx
  int Policy_Internal; // eax
  _UNICODE_STRING v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _PS_PKG_CLAIM v9; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  _PS_PKG_CLAIM v11; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  _PS_PKG_CLAIM v13; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+20h] BYREF
  unsigned __int64 v15; // [rsp+88h] [rbp+28h] BYREF
  _PS_PKG_CLAIM v16; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  v0 = NtCurrentPeb();
  ProcessParameters = (_UNICODE_STRING *)v0->ProcessParameters;
  RtlInitUnicodeString(&LdrpAppPackagesPath, 0LL);
  RtlInitUnicodeString(&LdrpOriginalAppPackagesPath, 0LL);
  LOBYTE(Policy_Internal) = v0->BitField;
  if ( (Policy_Internal & 0x10) != 0 && ProcessParameters[5].Length )
  {
    v4 = ProcessParameters[5];
    LdrpPolicyBits = 41;
    LdrpAppPackagesPath = v4;
    LdrpOriginalAppPackagesPath = v4;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v2, 4, &v14, &v16, &v15) < 0 || v14 == 262145 )
      LdrSetDefaultDllDirectories(0x1000u);
    else
      LdrpPolicyBits &= ~1u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v5, 7, &v14, &v9, &v17) >= 0 && v14 == 458753 )
      LdrpPolicyBits |= 2u;
    if ( (int)AppModelPolicy_GetPolicy_Internal(v6, 19, &v14, &v11, &v10) >= 0 && v14 == 1245185 )
      LdrpPolicyBits |= 0x40u;
    Policy_Internal = AppModelPolicy_GetPolicy_Internal(v7, 32, &v14, &v13, &v12);
    if ( Policy_Internal >= 0 && v14 == 2097153 )
      LdrpPolicyBits |= 4u;
  }
  else if ( (Policy_Internal & 2) != 0 )
  {
    ProcessParameters[5].Length = 0;
  }
  else if ( ProcessParameters[5].Length )
  {
    LOBYTE(Policy_Internal) = LdrSetDllDirectory(ProcessParameters + 5);
  }
  return Policy_Internal;
}
