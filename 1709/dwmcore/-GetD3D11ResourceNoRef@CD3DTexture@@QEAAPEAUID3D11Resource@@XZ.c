/*
 * XREFs of ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x1801A7704
 * Callers:
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1801A63E4 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_NAEBUtagRECT@@3@Z @ 0x1801AD680 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

struct ID3D11Resource *__fastcall CD3DTexture::GetD3D11ResourceNoRef(CD3DTexture *this)
{
  char *v1; // rbx
  void (__fastcall ***v2)(_QWORD, GUID *, char *); // rcx

  v1 = (char *)this + 200;
  if ( !*((_QWORD *)this + 25) )
  {
    v2 = (void (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 15);
    if ( v2 )
      (**v2)(v2, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, v1);
  }
  return *(struct ID3D11Resource **)v1;
}
