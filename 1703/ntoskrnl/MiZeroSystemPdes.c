/*
 * XREFs of MiZeroSystemPdes @ 0x140082A5C
 * Callers:
 *     MiDeleteSystemPageTables @ 0x14008283C (MiDeleteSystemPageTables.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x1400344A8 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiReplicatePteChange @ 0x140164BE0 (MiReplicatePteChange.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiZeroSystemPdes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 i; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx

  v5 = a2;
  v6 = a1;
  for ( i = a1; i < v5; i += 8LL )
  {
    if ( (MI_READ_PTE_LOCK_FREE(i) & 0x81) == 0x81 )
      MiInsertLargeTbFlushEntry(a4, 1u, i);
    else
      MiInsertTbFlushEntry(a4, (__int64)(i << 25) >> 16, 1LL, 0LL);
    *(_QWORD *)i = 0LL;
    if ( (unsigned int)MiPteInShadowRange(i) )
      MiWritePteShadow(v8);
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
  return MiFlushTbList(a4);
}
