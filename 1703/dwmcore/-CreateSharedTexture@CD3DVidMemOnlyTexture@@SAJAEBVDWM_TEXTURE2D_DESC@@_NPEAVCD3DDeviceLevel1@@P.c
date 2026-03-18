/*
 * XREFs of ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x1801A000C
 * Callers:
 *     ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x18019F060 (-CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007D10C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x1801963D8 (-CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::CreateSharedTexture(
        const struct DWM_TEXTURE2D_DESC *a1,
        __int64 a2,
        struct CD3DDeviceLevel1 *a3,
        void **a4,
        struct CD3DVidMemOnlyTexture **a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct ID3D11Texture2D *v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  v7 = CD3DDeviceLevel1::CreateSharedTexture(a3, a1, (struct D3D11_SUBRESOURCE_DATA *)a3, a4, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x78u);
  }
  else
  {
    v9 = CD3DVidMemOnlyTexture::CreateFromTexture(v11, 0, 0, 1, a3, a5);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x7Fu);
    else
      *((_QWORD *)*a5 + 32) = *a4;
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v11);
  return v8;
}
