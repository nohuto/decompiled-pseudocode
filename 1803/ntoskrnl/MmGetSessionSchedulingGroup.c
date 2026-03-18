/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x14074D9B0
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x140283F24 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
