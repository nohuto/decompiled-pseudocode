/*
 * XREFs of KiIntSteerComputeCpuSet @ 0x14020B994
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x140002B90 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerAssignCpuSet @ 0x14020B910 (KiIntSteerAssignCpuSet.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x140002E58 (KiIntSteerVerifyDestination.c)
 *     KiComputeCpuSetAffinityMask @ 0x14020930C (KiComputeCpuSetAffinityMask.c)
 */

__int64 __fastcall KiIntSteerComputeCpuSet(__int64 a1)
{
  int v1; // r8d
  unsigned __int64 v2; // r9
  unsigned int v4; // edi
  __int64 v5; // r9
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 144);
  v2 = *(_QWORD *)(a1 + 136);
  v7[1] = 0LL;
  v4 = 0;
  v7[0] = KiComputeCpuSetAffinityMask(0LL, (__int64 *)(a1 + 152), v1, v2);
  if ( (int)KiIntSteerVerifyDestination(a1, (__int64)v7) >= 0 )
  {
    *(_WORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 176) = v5;
  }
  else
  {
    v4 = -1073741823;
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  return v4;
}
