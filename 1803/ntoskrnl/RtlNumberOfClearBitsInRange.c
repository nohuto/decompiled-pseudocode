/*
 * XREFs of RtlNumberOfClearBitsInRange @ 0x1402889A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsInRange @ 0x140288B70 (RtlNumberOfSetBitsInRange.c)
 */

__int64 __fastcall RtlNumberOfClearBitsInRange(__int64 a1, __int64 a2, int a3)
{
  int v4; // eax

  v4 = RtlNumberOfSetBitsInRange();
  if ( v4 == -1 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned int)(a3 - v4);
}
