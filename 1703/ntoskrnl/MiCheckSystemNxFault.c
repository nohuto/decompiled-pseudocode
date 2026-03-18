/*
 * XREFs of MiCheckSystemNxFault @ 0x14003446C
 * Callers:
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiRaisedIrqlFault @ 0x1401314B8 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiCheckSystemNxFault(char a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4, unsigned int a5)
{
  ULONG_PTR result; // rax

  result = a4;
  if ( (a1 & 0x10) != 0 )
  {
    if ( (KeFeatureBits & 1) != 0 && (a4 & 4) != 0 )
      KeBugCheckEx(0xFCu, a2, a4, a3, a5 | 0x80000000LL);
    if ( a4 >= 0x8000000000000000uLL )
      KeBugCheckEx(0xFCu, a2, a4, a3, a5);
  }
  return result;
}
