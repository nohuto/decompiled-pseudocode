/*
 * XREFs of MiFreeLargePages @ 0x14022E560
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGetLeafPfnBuddy @ 0x1400D00B8 (MiGetLeafPfnBuddy.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 */

__int64 __fastcall MiFreeLargePages(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 LeafPfnBuddy; // rbx
  unsigned __int64 v5; // rdx
  _BOOL8 v6; // r9
  __int64 v7; // r8

  v1 = 0LL;
  v2 = 0LL;
  v3 = a1;
  if ( a1 )
  {
    do
    {
      MiLockPageInline(v3);
      LeafPfnBuddy = MiGetLeafPfnBuddy((_QWORD *)v3);
      *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 24) & 0xC000000000000000uLL | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v5);
      v6 = (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFBLL;
      v1 += MiLargePageSizes[v6];
      v2 += MiFreeLargePageMemory((v3 + 0x58000000000LL) / 48, v6, 0);
      v3 = LeafPfnBuddy;
    }
    while ( LeafPfnBuddy );
    if ( v2 )
    {
      v7 = *(_QWORD *)(qword_140388AF0
                     + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 2));
      if ( (ULONG_PTR *)v7 == &MiSystemPartition )
        MiReturnResidentAvailable(v2);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 6016), v2);
    }
  }
  return v1 - v2;
}
