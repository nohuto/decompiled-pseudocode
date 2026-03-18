/*
 * XREFs of ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0037938
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0034CD8 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0037830 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::Reset(DirectComposition::CBatchSharedMemoryPool *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( *((_QWORD *)this + 6) )
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(this);
}
