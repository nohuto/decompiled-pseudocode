/*
 * XREFs of MiFreeSessionSpaceMap @ 0x14013E238
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

unsigned __int64 MiFreeSessionSpaceMap()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( *(_QWORD *)(result + 2960) )
    KeBugCheckEx(0xBAu, *(unsigned int *)(result + 8), *(unsigned int *)(result + 2968), 0LL, 0LL);
  return result;
}
