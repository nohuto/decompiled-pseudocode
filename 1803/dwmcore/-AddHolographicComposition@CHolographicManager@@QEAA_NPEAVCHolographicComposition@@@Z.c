/*
 * XREFs of ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1801F7C84
 * Callers:
 *     ?ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITION_CREATE@@@Z @ 0x1801F9610 (-ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITI.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800C6D9C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ @ 0x1801F815C (-DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1801F879C (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1801F8BFC (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicComposition(
        CHolographicManager *this,
        struct CHolographicComposition *a2)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  CompositorTracing *v7; // rcx
  bool v8; // zf

  if ( *((_BYTE *)this + 224) )
    return 0;
  if ( (int)CHolographicManager::EnsureHolographicClient(this) >= 0 )
  {
    *((_BYTE *)this + 224) = CHolographicInteropTaskQueue::PostMessageW(
                               *((CHolographicInteropTaskQueue **)this + 5),
                               9u,
                               (struct IUnknown *)(((unsigned __int64)a2 + 64) & -(__int64)(a2 != 0LL)),
                               0LL,
                               0LL,
                               0LL,
                               0LL);
    if ( CompositorTracing::IsEnabled(v5) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v6,
        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicCompositionAdd_(v7);
    }
    v8 = *((_BYTE *)this + 224) == 0;
    *((_DWORD *)this + 14) = DisplayId::Hmd;
    if ( !v8 )
      CHolographicManager::InitializeClient(this);
  }
  return *((_BYTE *)this + 224);
}
