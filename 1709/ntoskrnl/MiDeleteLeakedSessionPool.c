/*
 * XREFs of MiDeleteLeakedSessionPool @ 0x1406E3110
 * Callers:
 *     MiCheckSessionPoolAllocations @ 0x1406E3020 (MiCheckSessionPoolAllocations.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiPartitionIdToPointer @ 0x14012862C (MiPartitionIdToPointer.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiDeleteSessionPoolRange @ 0x140221EC4 (MiDeleteSessionPoolRange.c)
 *     RtlFindNextForwardRunClearEx @ 0x140252A10 (RtlFindNextForwardRunClearEx.c)
 *     RtlFindSetBitsEx @ 0x140252DC0 (RtlFindSetBitsEx.c)
 */

unsigned __int64 MiDeleteLeakedSessionPool()
{
  unsigned __int64 v0; // rdi
  __int64 v1; // rbp
  ULONG64 v2; // rsi
  ULONG64 SetBits; // rax
  ULONG64 v4; // rbx
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 SizeOfBitMap; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 result; // rax
  _RTL_BITMAP_EX BitMapHeader; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  memset(v11, 0, 0x20uLL);
  v0 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v1 = MiPartitionIdToPointer(*(_WORD *)(v0 + 3180));
  BitMapHeader = *(_RTL_BITMAP_EX *)(v0 + 7896);
  v2 = 0LL;
  do
  {
    SetBits = RtlFindSetBitsEx(&BitMapHeader, 1uLL, v2);
    v4 = SetBits;
    if ( SetBits < v2 || SetBits == -1LL )
      break;
    NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)&BitMapHeader, SetBits, &v12);
    SizeOfBitMap = v12;
    if ( !NextForwardRunClear )
      SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v7 = SizeOfBitMap - v4;
    v2 += v7;
    MiDeleteSessionPoolRange(qword_140388478 + (v4 << 21), v7 << 21, v11);
  }
  while ( v2 < BitMapHeader.SizeOfBitMap );
  v8 = v11[3];
  result = MiReturnCommit(v1, v11[3] - v11[1]);
  *(_QWORD *)(v0 + 208) -= v8;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v0 + 48), -v8);
  return result;
}
