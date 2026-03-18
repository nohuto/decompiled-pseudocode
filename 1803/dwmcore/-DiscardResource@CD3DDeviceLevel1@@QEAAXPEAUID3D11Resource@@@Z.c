/*
 * XREFs of ?DiscardResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@@Z @ 0x1801DFBD0
 * Callers:
 *     ?Discard@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x1801EC900 (-Discard@CHwSurfaceRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 */

void __fastcall CD3DDeviceLevel1::DiscardResource(CD3DDeviceLevel1 *this, struct ID3D11Resource *a2)
{
  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 82) + 936LL))(*((_QWORD *)this + 82));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_RENDEROPT_DISCARDRESOURCEEVENT,
        (__int64)a2);
  }
}
