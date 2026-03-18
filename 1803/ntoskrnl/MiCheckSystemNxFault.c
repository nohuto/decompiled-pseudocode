/*
 * XREFs of MiCheckSystemNxFault @ 0x1400B545C
 * Callers:
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiRaisedIrqlFault @ 0x1400B5050 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x140261DA4 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall MiCheckSystemNxFault(__int64 a1, signed __int64 a2, unsigned int a3)
{
  _BOOL8 result; // rax

  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
  {
    if ( (KeFeatureBits & 1) != 0 && (a2 & 4) != 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3 | 0x80000000LL);
    result = a2 >= 0;
    if ( a2 < 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3);
  }
  return result;
}
