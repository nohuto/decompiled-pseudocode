/*
 * XREFs of InitDriver @ 0x1C002D008
 * Callers:
 *     ProcLibGlobalInit @ 0x1C002D3E4 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000BF90 (GetCpuIdInfo.c)
 */

__int64 __fastcall InitDriver(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  _DWORD v8[3]; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+3Ch] [rbp-1Ch]

  *(_QWORD *)(a1 + 64) = ValidatePStateCapability;
  *(_QWORD *)(a1 + 72) = SetFFHPState;
  v4 = 0x20000000LL;
  *(_QWORD *)(a1 + 40) = AmdPpmDeviceStart;
  GetCpuIdInfo(0, v8);
  if ( v8[0] >= 6u )
  {
    GetCpuIdInfo(6u, &v6);
    if ( (v7 & 1) != 0 )
    {
      v4 = 603979776LL;
      *(_QWORD *)(a1 + 112) = ACountMCountHardwareFeedback;
    }
  }
  GetCpuIdInfo(0x80000000, &v6);
  if ( v6 >= 7 )
  {
    GetCpuIdInfo(0x80000007, v8);
    if ( (v9 & 0x200) != 0 )
      *(_QWORD *)(a1 + 136) = SetPerformanceBoostMode;
  }
  *a2 |= v4;
  result = 0LL;
  *(_DWORD *)(a1 + 208) = -1073676190;
  *(_QWORD *)(a1 + 216) = -16LL;
  return result;
}
