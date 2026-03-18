/*
 * XREFs of ?SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z @ 0x1801A8860
 * Callers:
 *     <none>
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicClient::SetRenderingAdapter(CHolographicInteropTaskQueue **this, const struct _LUID *a2)
{
  CHolographicInteropTaskQueue::PostMessageW(this[26], 0x12u, 0LL, (void *)a2->HighPart, (void *)a2->LowPart, 0LL, 0LL);
}
