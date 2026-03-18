/*
 * XREFs of ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001B078
 * Callers:
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C000ACA0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C000FF3C (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001B0B0 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0046310 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(
        DirectComposition::CBatchSharedMemoryPool *this)
{
  __int64 v2; // rcx

  if ( *((_QWORD *)this + 6) )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( v2 )
      MmUnmapViewOfSection(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
}
