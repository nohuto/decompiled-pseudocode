/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x14023D630
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x14023D690 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(_QWORD *a1)
{
  return *a1 - RtlNumberOfSetBitsEx(a1);
}
