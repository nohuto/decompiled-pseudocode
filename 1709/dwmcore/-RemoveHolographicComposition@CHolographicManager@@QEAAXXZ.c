/*
 * XREFs of ?RemoveHolographicComposition@CHolographicManager@@QEAAXXZ @ 0x1801C0E90
 * Callers:
 *     ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801BCF10 (-DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ??$DwmHolographicCompositionRemove@$$V@CompositorTracing@@SAXXZ @ 0x1801BF244 (--$DwmHolographicCompositionRemove@$$V@CompositorTracing@@SAXXZ.c)
 *     ?UninitializeClientDisplays@CHolographicManager@@AEAAXXZ @ 0x1801C1444 (-UninitializeClientDisplays@CHolographicManager@@AEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveHolographicComposition(CHolographicInteropTaskQueue **this)
{
  CHolographicInteropTaskQueue *v2; // rcx

  if ( *((_BYTE *)this + 192) )
  {
    CHolographicManager::UninitializeClientDisplays((CHolographicManager *)this);
    *((_BYTE *)this + 192) = 0;
    CompositorTracing::DwmHolographicCompositionRemove<>();
    v2 = this[5];
    if ( v2 )
      CHolographicInteropTaskQueue::PostMessageW(v2, 0xAu, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
}
