/*
 * XREFs of RtlTryEndReadTickLock @ 0x140132B4C
 * Callers:
 *     KeQueryCpuSetInformation @ 0x14064D9F0 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
