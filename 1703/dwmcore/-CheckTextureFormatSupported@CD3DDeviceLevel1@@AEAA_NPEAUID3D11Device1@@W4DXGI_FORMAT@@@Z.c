/*
 * XREFs of ?CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NPEAUID3D11Device1@@W4DXGI_FORMAT@@@Z @ 0x180077FB0
 * Callers:
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x180078000 (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD3DDeviceLevel1::CheckTextureFormatSupported(
        CD3DDeviceLevel1 *this,
        struct ID3D11Device1 *a2,
        unsigned int a3)
{
  struct ID3D11Device1Vtbl *lpVtbl; // rax
  char v4; // bl
  CD3DDeviceLevel1 *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  lpVtbl = a2->lpVtbl;
  v4 = 0;
  LODWORD(v6) = 0;
  if ( ((int (__fastcall *)(struct ID3D11Device1 *, _QWORD, CD3DDeviceLevel1 **))lpVtbl->CheckFormatSupport)(
         a2,
         a3,
         &v6) >= 0 )
    return ((unsigned __int16)v6 & 0x8220) == 33312;
  return v4;
}
