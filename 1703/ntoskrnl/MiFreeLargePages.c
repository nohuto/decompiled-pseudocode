/*
 * XREFs of MiFreeLargePages @ 0x1402216DC
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 */

__int64 __fastcall MiFreeLargePages(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  _BOOL8 v6; // r9
  __int64 v7; // r8

  v1 = 0LL;
  v2 = 0LL;
  v3 = a1;
  if ( a1 )
  {
    do
    {
      v4 = *(_QWORD *)v3;
      v5 = MiLockPageInline(v3);
      *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 24) & 0xC000000000000000uLL | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v5);
      v6 = (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFBLL;
      v1 += MiLargePageSizes[v6];
      v2 += MiFreeLargePageMemory((v3 + 0x58000000000LL) / 48, v6, 0);
      v3 = v4;
    }
    while ( v4 );
    if ( v2 )
    {
      v7 = *(_QWORD *)(qword_14036C8F8 + 8LL * WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid));
      if ( (ULONG_PTR *)v7 == &MiSystemPartition )
        MiReturnResidentAvailable(v2);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 5824), v2);
    }
  }
  return v1 - v2;
}
