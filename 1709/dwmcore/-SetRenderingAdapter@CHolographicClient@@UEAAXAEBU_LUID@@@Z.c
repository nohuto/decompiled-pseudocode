/*
 * XREFs of ?SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z @ 0x1801C3940
 * Callers:
 *     <none>
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicClient::SetRenderingAdapter(CHolographicInteropTaskQueue **this, const struct _LUID *a2)
{
  CHolographicInteropTaskQueue::PostMessageW(this[25], 0x13u, 0LL, (void *)a2->HighPart, (void *)a2->LowPart, 0LL, 0LL);
}
