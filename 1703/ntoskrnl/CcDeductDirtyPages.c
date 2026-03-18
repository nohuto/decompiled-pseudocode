/*
 * XREFs of CcDeductDirtyPages @ 0x14011BDF4
 * Callers:
 *     CcDeleteMbcb @ 0x14011992C (CcDeleteMbcb.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     CcAcquireByteRangeForWrite @ 0x14011B330 (CcAcquireByteRangeForWrite.c)
 *     CcDeleteBcbs @ 0x140136248 (CcDeleteBcbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcDeductDirtyPages(__int64 a1, unsigned int a2)
{
  _QWORD *result; // rax

  if ( a1 )
    result = *(_QWORD **)(a1 + 528);
  else
    result = &CcSystemPartition;
  result[84] -= a2;
  if ( a1 )
  {
    if ( a2 == -1 )
      KeBugCheckEx(0x34u, 0x13D9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= a2;
    result = *(_QWORD **)(a1 + 504);
    result[4] -= a2;
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      result = *(_QWORD **)(a1 + 240);
      result[3] -= a2;
    }
  }
  return result;
}
