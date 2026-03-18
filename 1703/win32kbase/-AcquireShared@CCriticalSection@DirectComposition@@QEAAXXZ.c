/*
 * XREFs of ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C007C7F4
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0015964 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCriticalSection::AcquireShared(struct _ERESOURCE *this)
{
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(this, 1u);
}
