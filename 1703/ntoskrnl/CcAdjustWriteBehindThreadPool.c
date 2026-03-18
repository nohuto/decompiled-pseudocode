/*
 * XREFs of CcAdjustWriteBehindThreadPool @ 0x1400ADE84
 * Callers:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400AD48C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcAdjustWriteBehindThreadPool(__int64 a1, char a2)
{
  _QWORD *result; // rax
  bool v3; // zf

  result = &CcSystemPartition;
  if ( &CcSystemPartition != (_UNKNOWN *)a1 )
    KeBugCheckEx(0x34u, 0x58CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a2 )
  {
    v3 = *(_BYTE *)(a1 + 808) == 0;
    CcMaxNumberOfWriteBehindThreads = 1;
    if ( !v3 )
      *(_BYTE *)(a1 + 808) = 0;
  }
  else
  {
    CcMaxNumberOfWriteBehindThreads = -1;
    result = (_QWORD *)(a1 + 328);
    if ( (_QWORD *)*result != result && !*(_BYTE *)(a1 + 384) )
      return (_QWORD *)CcReEngageWorkerThreads(a1, *(unsigned int *)(a1 + 272), 0LL);
  }
  return result;
}
