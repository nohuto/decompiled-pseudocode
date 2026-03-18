/*
 * XREFs of SpiMax311GetByte @ 0x1402CD760
 * Callers:
 *     <none>
 * Callees:
 *     SpiSend16 @ 0x1402CDAA8 (SpiSend16.c)
 */

__int64 __fastcall SpiMax311GetByte(_QWORD *a1, _BYTE *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax

  if ( !a1 || !*a1 )
    return 3LL;
  if ( HIDWORD(qword_1403EBF90) != (_DWORD)qword_1403EBF90 )
  {
    v3 = (unsigned __int16)word_1403EBF9A[HIDWORD(qword_1403EBF90)];
    *a2 = v3;
    HIDWORD(qword_1403EBF90) = (WORD2(qword_1403EBF90) + 1) & 0x3FF;
    v4 = v3;
    return (v4 >> 9) & 2;
  }
  LOWORD(v4) = SpiSend16(a1, 0LL);
  if ( (v4 & 0x8000u) != 0 )
  {
    *a2 = v4;
    v4 = (unsigned __int16)v4;
    return (v4 >> 9) & 2;
  }
  return 1LL;
}
