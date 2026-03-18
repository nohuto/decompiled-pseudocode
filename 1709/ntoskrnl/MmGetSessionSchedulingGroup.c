/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x1406E2F60
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x14024DB44 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
