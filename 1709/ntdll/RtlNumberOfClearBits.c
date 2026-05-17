/*
 * XREFs of RtlNumberOfClearBits @ 0x18008E5D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x18008E5F0 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlNumberOfClearBits(_DWORD *a1)
{
  return *a1 - (unsigned int)RtlNumberOfSetBits();
}
