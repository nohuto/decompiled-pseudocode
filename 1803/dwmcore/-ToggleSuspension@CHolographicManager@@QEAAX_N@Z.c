/*
 * XREFs of ?ToggleSuspension@CHolographicManager@@QEAAX_N@Z @ 0x1800C6D58
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800C6D9C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z @ 0x1801F8538 (-DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ToggleSuspension(CHolographicManager *this, unsigned __int64 a2)
{
  bool v2; // bl
  __int64 v4; // rcx
  CHolographicInteropTaskQueue *v5; // rcx
  CompositorTracing *v6; // rcx

  v2 = a2;
  if ( (_BYTE)a2 != *((_BYTE *)this + 225) )
  {
    if ( CompositorTracing::IsEnabled((unsigned __int8)this, a2) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v4,
        lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicSuspendRequest_(v6, v2);
    }
    v5 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
    *((_BYTE *)this + 225) = v2;
    if ( v5 )
      CHolographicInteropTaskQueue::PostMessageW(v5, 0x1Bu, 0LL, (void *)v2, 0LL, 0LL, 0LL);
  }
}
