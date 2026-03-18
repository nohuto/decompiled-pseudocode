/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x14059EF20
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x14054CF70 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryApplyObjectEvent @ 0x14054D08C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 */

void __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, unsigned int *a2)
{
  unsigned int *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  if ( RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) )
    PiDmObjectRelease(Buffer);
}
