/*
 * XREFs of KiIntSteerComputeCpuSet @ 0x140249F98
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x140034EA0 (KiIntSteerCalculateDistribution.c)
 *     KiIntSteerAssignCpuSet @ 0x140249F14 (KiIntSteerAssignCpuSet.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x1400C8360 (KiIntSteerVerifyDestination.c)
 *     KiComputeCpuSetAffinityMask @ 0x140246E84 (KiComputeCpuSetAffinityMask.c)
 */

__int64 __fastcall KiIntSteerComputeCpuSet(__int64 a1)
{
  int v1; // r8d
  unsigned __int64 v2; // r9
  int v4; // eax
  __int64 v5; // r9
  int v6; // ecx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 144);
  v2 = *(_QWORD *)(a1 + 136);
  v8[1] = 0LL;
  v8[0] = KiComputeCpuSetAffinityMask(0LL, (__int64 *)(a1 + 152), v1, v2);
  v4 = KiIntSteerVerifyDestination(a1, (__int64)v8);
  v6 = 0;
  if ( v4 < 0 )
    v6 = -1073741823;
  if ( v6 < 0 )
  {
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  else
  {
    *(_WORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 176) = v5;
  }
  return (unsigned int)v6;
}
