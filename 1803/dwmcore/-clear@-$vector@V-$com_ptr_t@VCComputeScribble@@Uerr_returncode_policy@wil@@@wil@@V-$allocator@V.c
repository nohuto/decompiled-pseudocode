/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18021CCAC
 * Callers:
 *     ?PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x180218EA4 (-PostRender@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 *     ?AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z @ 0x18021C06C (-AcquireForRender@CFramebuffer@CComputeScribbleRenderer@@QEAAJ_KPEAVCRegion@@@Z.c)
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18021C30C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 *     ?Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z @ 0x18021CA90 (-Schedule@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAVCScheduler@2@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  v3 = *(_QWORD **)a1;
  if ( *(_QWORD **)a1 != v1 )
  {
    do
    {
      if ( *v3 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
      ++v3;
    }
    while ( v3 != v1 );
    v3 = *(_QWORD **)a1;
  }
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
