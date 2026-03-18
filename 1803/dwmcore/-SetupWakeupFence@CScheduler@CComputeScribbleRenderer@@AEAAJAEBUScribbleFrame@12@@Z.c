/*
 * XREFs of ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18021E3E4
 * Callers:
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021DD44 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 *     ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18021E1C4 (-Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@DirectDisplay@Graphics@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x18021D5C4 (-CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDispla.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::SetupWakeupFence(
        struct ID3D12Fence **this,
        const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *a2)
{
  struct Windows::Graphics::DirectDisplay::IDisplayFence **v2; // rsi
  struct ID3D12Fence *v5; // rcx
  float v6; // xmm1_4
  float v7; // xmm0_4
  int WakeupFence; // eax
  unsigned int v9; // esi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct Windows::Graphics::DirectDisplay::IDisplayFence **)(this + 11);
  if ( !this[11]
    || (v5 = this[12]) == 0LL
    || (v6 = *((float *)a2 + 5), v7 = *((float *)this + 37), v6 > v7)
    || (float)(v7 - v6) >= *((float *)this + 1) )
  {
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(this + 12);
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(v2);
    WakeupFence = CComputeScribbleRenderer::CScheduler::CreateWakeupFence(
                    (CComputeScribbleRenderer::CScheduler *)this,
                    a2,
                    v2,
                    this + 12);
    v9 = WakeupFence;
    if ( WakeupFence < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)WakeupFence);
      return v9;
    }
    v5 = this[12];
    *((_DWORD *)this + 37) = *((_DWORD *)a2 + 5);
  }
  v11 = ((__int64 (__fastcall *)(struct ID3D12Fence *, _QWORD, struct ID3D12Fence *))v5->lpVtbl->SetEventOnCompletion)(
          v5,
          *((unsigned int *)a2 + 4),
          this[8]);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x146,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
