/*
 * XREFs of ?StopOnGpu@CComputeScribbleStopwatch@@QEAAXPEAUID3D12GraphicsCommandList@@@Z @ 0x18021EE64
 * Callers:
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18021C30C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CComputeScribbleStopwatch::StopOnGpu(
        CComputeScribbleStopwatch *this,
        struct ID3D12GraphicsCommandList *a2)
{
  ((void (__fastcall *)(struct ID3D12GraphicsCommandList *, _QWORD, __int64))a2->lpVtbl->EndQuery)(
    a2,
    *((_QWORD *)this + 4),
    2LL);
  ((void (__fastcall *)(struct ID3D12GraphicsCommandList *, _QWORD, __int64))a2->lpVtbl->ResolveQueryData)(
    a2,
    *((_QWORD *)this + 4),
    2LL);
  *((_BYTE *)this + 64) = 0;
}
