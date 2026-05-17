/*
 * XREFs of RtlNumberOfClearBits @ 0x180089070
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180089090 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlNumberOfClearBits(_DWORD *a1)
{
  return *a1 - (unsigned int)RtlNumberOfSetBits();
}
