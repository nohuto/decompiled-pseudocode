/*
 * XREFs of ?EnsureInteropRenderTarget@CHolographicManager@@QEAAJXZ @ 0x1801F88C4
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x1801F79C8 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18005F25C (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800C6D9C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x1801F8B58 (-HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801FDAA4 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureInteropRenderTarget(CHolographicManager *this)
{
  struct _LUID *v1; // rsi
  unsigned int v2; // ebx
  struct CHolographicInteropTarget **v4; // r14
  int v5; // eax
  CHolographicInteropTaskQueue *v6; // rcx
  __int64 v7; // rcx
  CompositorTracing *v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-28h]

  v1 = (struct _LUID *)((char *)this + 60);
  v2 = 0;
  if ( !*((_DWORD *)this + 15) && !*((_DWORD *)this + 16) || !*((_BYTE *)this + 224) )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x353u);
    return v2;
  }
  v4 = (struct CHolographicInteropTarget **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    return v2;
  v5 = CHolographicInteropTarget::Create(*((struct CComposition **)this + 2), v1, v4);
  v2 = v5;
  if ( v5 < 0 )
  {
    v10 = 856;
    goto LABEL_15;
  }
  v5 = CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 72LL), *v4);
  v2 = v5;
  if ( v5 < 0 )
  {
    v10 = 858;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v10);
    return v2;
  }
  v6 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 5);
  if ( v6 && *((_BYTE *)this + 224) )
    CHolographicInteropTaskQueue::PostMessageW(v6, 0x14u, (struct IUnknown *)*v4, 0LL, 0LL, 0LL, 0LL);
  if ( CompositorTracing::IsEnabled((__int64)v6) )
  {
    wil::details::static_lazy<CompositorTracing>::get(
      v7,
      (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
    CompositorTracing::HolographicInteropTargetCreated_(v8, v1);
  }
  return v2;
}
