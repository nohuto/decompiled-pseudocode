/*
 * XREFs of ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x1801B79F0
 * Callers:
 *     ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x1801B4F68 (-CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180081200 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x1801A6840 (-CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::CreateSharedTexture(
        const struct DWM_TEXTURE2D_DESC *a1,
        struct CD3DDeviceLevel1 *this,
        struct D3D11_SUBRESOURCE_DATA *a3,
        struct CD3DVidMemOnlyTexture **a4)
{
  signed int v7; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  struct ID3D11Texture2D *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  v7 = CD3DDeviceLevel1::CreateSharedTexture(this, a1, a3, (void **)a3, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x6Fu);
  }
  else
  {
    v9 = CD3DVidMemOnlyTexture::CreateFromTexture(v11, 0, 1, this, a4);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x75u);
    else
      *((_QWORD *)*a4 + 30) = a3->pSysMem;
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v11);
  return v8;
}
