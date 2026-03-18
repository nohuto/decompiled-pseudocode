/*
 * XREFs of RtlTryEndReadTickLock @ 0x1401106EC
 * Callers:
 *     KeQueryCpuSetInformation @ 0x1405CBA44 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
