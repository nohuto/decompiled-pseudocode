/*
 * XREFs of ??0CScheduler@CComputeScribbleRenderer@@AEAA@PEAUID3D12CommandQueue@@@Z @ 0x18021D168
 * Callers:
 *     ?Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@@Z @ 0x18021D52C (-Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0_unnamed_type_m_sharedData_@CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x18021D10C (--0_unnamed_type_m_sharedData_@CScheduler@CComputeScribbleRenderer@@QEAA@XZ.c)
 */

CComputeScribbleRenderer::CScheduler *__fastcall CComputeScribbleRenderer::CScheduler::CScheduler(
        CComputeScribbleRenderer::CScheduler *this,
        struct ID3D12CommandQueue *a2)
{
  *((_DWORD *)this + 1) = 973279855;
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct ID3D12CommandQueue *))a2->lpVtbl->AddRef)(a2);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  CComputeScribbleRenderer::CScheduler::_unnamed_type_m_sharedData_::_unnamed_type_m_sharedData_((CComputeScribbleRenderer::CScheduler *)((char *)this + 80));
  return this;
}
