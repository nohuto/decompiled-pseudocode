/*
 * XREFs of MiExpandPartitionIds @ 0x140757314
 * Callers:
 *     MiAllocatePartitionId @ 0x14074D568 (MiAllocatePartitionId.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
  unsigned __int64 SizeOfBitMap; // rax

  if ( (__int64 *)qword_1403CBD88 == &qword_1403CBD80 )
    v0 = 512;
  else
    v0 = qword_1403CBD68->SizeOfBitMap + 512;
  if ( v0 <= qword_1403CBD68->SizeOfBitMap || v0 > 0x400 )
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
  if ( (__int64 *)qword_1403CBD88 == &qword_1403CBD80 )
  {
    v5 = MiReservePtes((__int64)&qword_1403CC5E0, 2u);
    if ( !v5 )
      goto LABEL_14;
    v6 = (__int64)(v5 << 25) >> 16;
    if ( !v6 )
      goto LABEL_14;
  }
  else
  {
    v6 = qword_1403CBD88 + 8LL * qword_1403CBD68->SizeOfBitMap;
  }
  PteAddress = MiGetPteAddress(v6);
  if ( !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress, 0x21u, 9) )
  {
    if ( (__int64 *)qword_1403CBD88 == &qword_1403CBD80 )
      MiReleasePtes((__int64)&qword_1403CC5E0, PteAddress, 1uLL);
LABEL_14:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset((void *)v6, 0, 0x1000uLL);
  if ( (__int64 *)qword_1403CBD88 == &qword_1403CBD80 )
  {
    *(_QWORD *)v6 = *(_QWORD *)qword_1403CBD88;
    qword_1403CBD88 = v6;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_1403CBD68->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_1403CBD68->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_1403CBD68 != (PRTL_BITMAP)&dword_1403CBD70 )
    ExFreePoolWithTag(qword_1403CBD68, 0);
  qword_1403CBD68 = v3;
  return 1LL;
}
