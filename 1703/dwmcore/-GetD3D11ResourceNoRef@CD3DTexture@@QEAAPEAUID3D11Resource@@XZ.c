/*
 * XREFs of ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x180196AFC
 * Callers:
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z @ 0x180196120 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z.c)
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2@Z @ 0x18019C130 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

struct ID3D11Resource *__fastcall CD3DTexture::GetD3D11ResourceNoRef(CD3DTexture *this)
{
  char *v1; // rbx
  void (__fastcall ***v2)(_QWORD, GUID *, char *); // rcx

  v1 = (char *)this + 208;
  if ( !*((_QWORD *)this + 26) )
  {
    v2 = (void (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 16);
    if ( v2 )
      (**v2)(v2, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, v1);
  }
  return *(struct ID3D11Resource **)v1;
}
