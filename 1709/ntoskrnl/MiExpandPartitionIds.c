/*
 * XREFs of MiExpandPartitionIds @ 0x1406EDE84
 * Callers:
 *     MiAllocatePartitionId @ 0x1406E27D0 (MiAllocatePartitionId.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 MiExpandPartitionIds()
{
  unsigned int v0; // ebx
  _RTL_BITMAP *PoolWithTag; // rax
  __int64 v2; // rsi
  _RTL_BITMAP *v3; // rdi
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // rbx
  __int64 PteAddress; // rbp
  unsigned __int64 v8; // r9
  unsigned __int64 SizeOfBitMap; // rax

  if ( (__int64 *)qword_140388AF0 == &qword_140388AE8 )
    v0 = 512;
  else
    v0 = qword_140388AD0->SizeOfBitMap + 512;
  if ( v0 <= qword_140388AD0->SizeOfBitMap || v0 > 0x400 )
  {
    v2 = 0LL;
    v3 = 0LL;
  }
  else
  {
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                   NonPagedPoolNx,
                                   8 * ((v0 >> 6) + ((v0 & 0x3F) != 0) + 2),
                                   0x20206D4Du);
    v2 = 0LL;
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    PoolWithTag->SizeOfBitMap = v0;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
  }
  if ( !v3 )
    return 0LL;
  if ( (__int64 *)qword_140388AF0 == &qword_140388AE8 )
  {
    v5 = MiReservePtes((__int64)&qword_140389360, 2uLL, qword_140388AF0);
    if ( !v5 )
      goto LABEL_14;
    v6 = (__int64)(v5 << 25) >> 16;
    if ( !v6 )
      goto LABEL_14;
  }
  else
  {
    v6 = qword_140388AF0 + 8LL * qword_140388AD0->SizeOfBitMap;
  }
  PteAddress = MiGetPteAddress(v6);
  if ( !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress, 33, 9) )
  {
    if ( (__int64 *)qword_140388AF0 == &qword_140388AE8 )
      MiReleasePtes((__int64)&qword_140389360, PteAddress, 1u, v8);
LABEL_14:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset((void *)v6, 0, 0x1000uLL);
  if ( (__int64 *)qword_140388AF0 == &qword_140388AE8 )
  {
    *(_QWORD *)v6 = *(_QWORD *)qword_140388AF0;
    qword_140388AF0 = v6;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_140388AD0->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_140388AD0->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_140388AD0 != (PRTL_BITMAP)&dword_140388AD8 )
    ExFreePoolWithTag(qword_140388AD0, 0);
  qword_140388AD0 = v3;
  return 1LL;
}
