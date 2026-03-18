/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x1406B66AC
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x140238A68 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
