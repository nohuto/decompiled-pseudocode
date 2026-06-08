/*
 * XREFs of InitDriver @ 0x1C0031008
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003140C (ProcLibGlobalInit.c)
 * Callees:
 *     IsACountMCountSupported @ 0x1C00011CC (IsACountMCountSupported.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000C8E0 (GetCpuIdInfo.c)
 *     IsMonitorMWaitSupported @ 0x1C001A2B4 (IsMonitorMWaitSupported.c)
 *     GetHvPpmCapabilities @ 0x1C001A310 (GetHvPpmCapabilities.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  char v6[8]; // [rsp+20h] [rbp-48h] BYREF
  _DWORD v7[4]; // [rsp+28h] [rbp-40h] BYREF
  _DWORD v8[3]; // [rsp+38h] [rbp-30h] BYREF
  int v9; // [rsp+44h] [rbp-24h]

  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  v4 = 0x20000000LL;
  *(_QWORD *)(a1 + 72) = SetFFHPState;
  *(_QWORD *)(a1 + 40) = AmdPpmDeviceStart;
  if ( IsACountMCountSupported() )
  {
    v4 = 603979776LL;
    *(_QWORD *)(a1 + 112) = ACountMCountHardwareFeedback;
  }
  GetCpuIdInfo(0x80000000, v7);
  if ( v7[0] >= 7u )
  {
    GetCpuIdInfo(0x80000007, v8);
    if ( (v9 & 0x200) != 0 )
      *(_QWORD *)(a1 + 136) = SetPerformanceBoostMode;
  }
  if ( IsACountMCountSupported() )
  {
    GetCpuIdInfo(1u, v7);
    if ( (v7[0] & 0xF00) == 0xF00 && (unsigned int)(unsigned __int8)(v7[0] >> 20) + 15 >= 0x17 )
      v4 |= 0x400000uLL;
  }
  v6[0] = IsMonitorMWaitSupported();
  if ( v6[0] || (GetHvPpmCapabilities(0LL, 0LL, v6), v6[0]) )
  {
    *(_QWORD *)(a1 + 48) = InitAcpiIdleStateSupport;
    *(_QWORD *)(a1 + 56) = DecodeMWaitIdleState;
    v4 |= 0x2000007F000uLL;
  }
  *a2 |= v4;
  result = 0LL;
  *(_DWORD *)(a1 + 208) = -1073676190;
  *(_QWORD *)(a1 + 216) = -16LL;
  return result;
}
