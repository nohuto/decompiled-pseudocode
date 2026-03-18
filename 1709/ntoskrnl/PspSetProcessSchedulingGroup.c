/*
 * XREFs of PspSetProcessSchedulingGroup @ 0x14059AAA8
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x14050D3E4 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x14059AA30 (PspSetCpuRateControlJobPostCallback.c)
 * Callees:
 *     KeSetProcessSchedulingGroup @ 0x1400ACEB4 (KeSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetProcessSchedulingGroup(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 772) & 8;
  if ( !v4 || !a2 )
    KeSetProcessSchedulingGroup(a1, a2);
  result = *(_DWORD *)(a1 + 772) & 8;
  if ( v4 != (_DWORD)result )
  {
    if ( a2 )
      return KeSetProcessSchedulingGroup(a1, 0LL);
  }
  return result;
}
