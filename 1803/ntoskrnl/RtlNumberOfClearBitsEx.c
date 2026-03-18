/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x140288970
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x1402889D0 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(_QWORD *a1)
{
  return *a1 - RtlNumberOfSetBitsEx(a1);
}
