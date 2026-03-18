/*
 * XREFs of ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00DB220
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::UnLock(CInpLockGuard *this)
{
  *((_QWORD *)this + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
}
