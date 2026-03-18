/*
 * XREFs of MiZeroSystemPdes @ 0x1400F7190
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiDeleteSystemPageTables @ 0x1400F6F60 (MiDeleteSystemPageTables.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiInsertLargeTbFlushEntry @ 0x140110068 (MiInsertLargeTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x140152B20 (MiReplicatePteChange.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

void __fastcall MiZeroSystemPdes(unsigned __int64 a1, _KPROCESS *a2, __int64 a3, int *a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx

  v5 = (unsigned __int64)a2;
  v6 = a1;
  for ( i = a1; i < v5; i += 8LL )
  {
    v8 = *(_QWORD *)i;
    if ( i >= 0xFFFFF6FB7DBED000uLL && i <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v8) = MiReadPteShadow(i, *(_QWORD *)i);
    if ( (v8 & 0x81) == 0x81 )
      MiInsertLargeTbFlushEntry(a4, 1LL, i, a4);
    else
      MiInsertTbFlushEntry(a4, (__int64)(i << 25) >> 16, 1LL, 0);
    *(_QWORD *)i = 0LL;
    if ( i >= 0xFFFFF6FB7DBED000uLL && i <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(i, 0LL);
  }
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v9 = 3LL;
    do
    {
      v6 = (__int64)(v6 << 25) >> 16;
      v5 = (__int64)(v5 << 25) >> 16;
      --v9;
    }
    while ( v9 );
    MiReplicatePteChange(v6, v5 - 8);
  }
  MiFlushTbList((__int64)a4, a2);
}
