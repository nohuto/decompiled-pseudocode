/*
 * XREFs of ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z @ 0x1801BFC04
 * Callers:
 *     ?ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL@@@Z @ 0x1801BCF38 (-ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHIC.c)
 * Callees:
 *     ??$DwmHolographicCompositionAdd@$$V@CompositorTracing@@SAXXZ @ 0x1801BF14C (--$DwmHolographicCompositionAdd@$$V@CompositorTracing@@SAXXZ.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1801C05D8 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801C0B3C (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicComposition(
        CHolographicManager *this,
        struct HOLOGRAPHIC_COMPOSITION_DESC *a2)
{
  bool v5; // zf

  if ( *((_BYTE *)this + 192) )
    return 0;
  if ( (int)CHolographicManager::EnsureHolographicClient(this) >= 0 )
  {
    *((_BYTE *)this + 192) = CHolographicInteropTaskQueue::PostMessageW(
                               *((CHolographicInteropTaskQueue **)this + 5),
                               9u,
                               0LL,
                               (void *)*(unsigned int *)a2,
                               0LL,
                               0LL,
                               0LL);
    CompositorTracing::DwmHolographicCompositionAdd<>();
    v5 = *((_BYTE *)this + 192) == 0;
    *((_DWORD *)this + 14) = DisplayId::Hmd;
    if ( !v5 )
      CHolographicManager::InitializeClient(this);
  }
  return *((_BYTE *)this + 192);
}
