/*
 * XREFs of MiExpandPartitionIds @ 0x1406BCBCC
 * Callers:
 *     MiAllocatePartitionId @ 0x1406B607C (MiAllocatePartitionId.c)
 * Callees:
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiExpandPartitionIds(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // rcx
  PRTL_BITMAP v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v8; // rdi
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // rbx
  _QWORD *PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  v3 = (__int64 *)qword_14036C8F8;
  v4 = qword_14036C8D8;
  if ( (__int64 *)qword_14036C8F8 == &qword_14036C8F0 )
    v5 = 512;
  else
    v5 = qword_14036C8D8->SizeOfBitMap + 512;
  if ( v5 <= qword_14036C8D8->SizeOfBitMap || v5 > 0x400 )
  {
    v6 = 0LL;
    v8 = 0LL;
  }
  else
  {
    v6 = 0LL;
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * ((v5 >> 6) + ((v5 & 0x3F) != 0)) + 16,
                                   0x20206D4Du);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    PoolWithTag->SizeOfBitMap = v5;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    v3 = (__int64 *)qword_14036C8F8;
    v4 = qword_14036C8D8;
  }
  if ( !v8 )
    return 0LL;
  if ( v3 == &qword_14036C8F0 )
  {
    v10 = MiReservePtes((__int64)&qword_14036D0A0, 2uLL, a3);
    if ( !v10 )
      goto LABEL_14;
    v11 = (__int64)(v10 << 25) >> 16;
    if ( !v11 )
      goto LABEL_14;
  }
  else
  {
    v11 = (unsigned __int64)&v3[v4->SizeOfBitMap];
  }
  PteAddress = (_QWORD *)MiGetPteAddress(v11);
  if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, (__int64)PteAddress, 33, 9) )
  {
    if ( (__int64 *)qword_14036C8F8 == &qword_14036C8F0 )
      MiReleasePtes((__int64)&qword_14036D0A0, PteAddress, 1u);
LABEL_14:
    ExFreePoolWithTag(v8, 0);
    return 0LL;
  }
  memset((void *)v11, 0, 0x1000uLL);
  if ( (__int64 *)qword_14036C8F8 == &qword_14036C8F0 )
  {
    *(_QWORD *)v11 = *(_QWORD *)qword_14036C8F8;
    qword_14036C8F8 = v11;
  }
  RtlClearAllBits(v8);
  SizeOfBitMap = qword_14036C8D8->SizeOfBitMap;
  LOBYTE(v6) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v8->Buffer, qword_14036C8D8->Buffer, 8 * ((SizeOfBitMap >> 6) + v6));
  if ( qword_14036C8D8 != (PRTL_BITMAP)&dword_14036C8E0 )
    ExFreePoolWithTag(qword_14036C8D8, 0);
  qword_14036C8D8 = v8;
  return 1LL;
}
