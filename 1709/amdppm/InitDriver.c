/*
 * XREFs of InitDriver @ 0x1C0030008
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00303D4 (ProcLibGlobalInit.c)
 * Callees:
 *     IsACountMCountSupported @ 0x1C00010BC (IsACountMCountSupported.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000C6C0 (GetCpuIdInfo.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  _DWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v7[3]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+3Ch] [rbp-1Ch]

  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  v4 = 0x20000000LL;
  *(_QWORD *)(a1 + 72) = SetFFHPState;
  *(_QWORD *)(a1 + 40) = AmdPpmDeviceStart;
  if ( IsACountMCountSupported() )
  {
    v4 = 603979776LL;
    *(_QWORD *)(a1 + 112) = ACountMCountHardwareFeedback;
  }
  GetCpuIdInfo(0x80000000, v6);
  if ( v6[0] >= 7u )
  {
    GetCpuIdInfo(0x80000007, v7);
    if ( (v8 & 0x200) != 0 )
      *(_QWORD *)(a1 + 136) = SetPerformanceBoostMode;
  }
  if ( IsACountMCountSupported() )
  {
    GetCpuIdInfo(1u, v6);
    if ( (v6[0] & 0xF00) == 0xF00 && (unsigned int)(unsigned __int8)(v6[0] >> 20) + 15 >= 0x17 )
      v4 |= 0x400000uLL;
  }
  *a2 |= v4;
  result = 0LL;
  *(_DWORD *)(a1 + 208) = -1073676190;
  *(_QWORD *)(a1 + 216) = -16LL;
  return result;
}
