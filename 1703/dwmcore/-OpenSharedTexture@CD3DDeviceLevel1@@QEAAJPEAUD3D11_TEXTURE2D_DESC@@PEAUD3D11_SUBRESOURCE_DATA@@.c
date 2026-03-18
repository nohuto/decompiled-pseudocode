/*
 * XREFs of ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180079490
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180042720 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800C4FBC (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 */

__int64 __fastcall CD3DDeviceLevel1::OpenSharedTexture(
        __int64 **this,
        struct D3D11_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        void *a4,
        bool a5,
        struct ID3D11Texture2D **a6)
{
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  int v15; // eax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_x(this, &OPEN_SHARED_TEXTURE_EVENT_Start, a4);
  v9 = this[80];
  v10 = *v9;
  if ( a5 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v10 + 384))(
            v9,
            a4,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            a6);
    v12 = v11;
    if ( v11 >= 0 )
    {
LABEL_5:
      ((void (__fastcall *)(_QWORD, struct D3D11_TEXTURE2D_DESC *))(*a6)->lpVtbl->GetDesc)(*a6, a2);
      goto LABEL_6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x7B3u);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v10 + 224))(
            v9,
            a4,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            a6);
    v12 = v15;
    if ( v15 >= 0 )
      goto LABEL_5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x7B9u);
  }
LABEL_6:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v13, &OPEN_SHARED_TEXTURE_EVENT_Stop);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v12, 7u);
}
