/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x140573508
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140573470 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryApplyObjectEvent @ 0x1405DD894 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 */

void __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, unsigned int *a2)
{
  unsigned int *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  if ( RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) )
    PiDmObjectRelease(Buffer);
}
