/*
 * XREFs of PiDqQueryDeleteObjectFromResultSet @ 0x1404B64A8
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1404B83D4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 */

void __fastcall PiDqQueryDeleteObjectFromResultSet(__int64 a1, unsigned int *a2)
{
  unsigned int *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  if ( RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) )
    PiDmObjectRelease(Buffer);
}
