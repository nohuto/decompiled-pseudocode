/*
 * XREFs of ?IsCompositionThread@CPartitionVerticalBlankScheduler@@UEBA_NXZ @ 0x18005A230
 * Callers:
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180080DBC (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPartitionVerticalBlankScheduler::IsCompositionThread(CPartitionVerticalBlankScheduler *this)
{
  return GetCurrentThreadId() == *((_DWORD *)this + 8818);
}
