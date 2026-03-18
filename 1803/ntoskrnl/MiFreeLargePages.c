/*
 * XREFs of MiFreeLargePages @ 0x140268BB8
 * Callers:
 *     MiDeletePagablePteRange @ 0x1400726A0 (MiDeletePagablePteRange.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x140003F94 (MiGetLeafPfnBuddy.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiReturnCrossPartitionCharges @ 0x14026FC54 (MiReturnCrossPartitionCharges.c)
 */

unsigned __int64 __fastcall MiFreeLargePages(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 LeafPfnBuddy; // rbx
  unsigned __int64 v6; // rdx
  _BOOL8 v7; // r9

  v1 = a1;
  v2 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  do
  {
    MiLockPageInline(v1);
    LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)v1);
    *(_QWORD *)(v1 + 24) = *(_QWORD *)(v1 + 24) & 0xC000000000000000uLL | 1;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
    v7 = (*(_QWORD *)(v1 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFBLL;
    v2 += MiLargePageSizes[v7];
    v3 += MiFreeLargePageMemory((v1 + 0x58000000000LL) / 48, v7, 0);
    v1 = LeafPfnBuddy;
  }
  while ( LeafPfnBuddy );
  if ( v3 )
  {
    if ( (ULONG_PTR *)v4 == &MiSystemPartition )
      MiReturnResidentAvailable(v3);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 7104), v3);
  }
  if ( v4 != *(_QWORD *)(qword_1403CBD88
                       + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3)) )
  {
    if ( v3 )
      MiReturnCommit(v4, v3);
    MiReturnCrossPartitionCharges(v4, 4LL, 1LL, v2);
    v3 = v2;
  }
  return v2 - v3;
}
