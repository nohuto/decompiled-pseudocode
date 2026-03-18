/*
 * XREFs of CcDeductDirtyPages @ 0x1400DC394
 * Callers:
 *     CcDeleteMbcb @ 0x1400BE080 (CcDeleteMbcb.c)
 *     CcAcquireByteRangeForWrite @ 0x1400E0910 (CcAcquireByteRangeForWrite.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcDeleteBcbs @ 0x14014C85C (CcDeleteBcbs.c)
 * Callees:
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcDeductDirtyPages(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a2;
  if ( a1 )
    result = CcGetPartition(a1);
  else
    result = *((_QWORD *)PspSystemPartition + 1);
  *(_QWORD *)(result + 600) -= v2;
  if ( a1 )
  {
    if ( (_DWORD)v2 == -1 )
      KeBugCheckEx(0x34u, 0x1577uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(a1 + 112) -= v2;
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 504) + 32LL), -v2);
    if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
    {
      result = *(_QWORD *)(a1 + 240);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(result + 24), -v2);
    }
  }
  return result;
}
