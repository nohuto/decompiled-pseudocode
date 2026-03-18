/*
 * XREFs of SpiMax311RxReady @ 0x1402CD8C0
 * Callers:
 *     <none>
 * Callees:
 *     SpiMax311BufferRxData @ 0x1402CD724 (SpiMax311BufferRxData.c)
 *     SpiSend16 @ 0x1402CDAA8 (SpiSend16.c)
 */

bool __fastcall SpiMax311RxReady(_QWORD *a1)
{
  __int16 v2; // ax

  if ( !a1 || !*a1 )
    return 0;
  while ( 1 )
  {
    v2 = SpiSend16(a1, 0LL);
    if ( v2 >= 0 )
      break;
    SpiMax311BufferRxData(v2);
  }
  return (_DWORD)qword_1403EBF90 != HIDWORD(qword_1403EBF90);
}
