/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801B70A4
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B6734 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZAT.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B6824 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18007D10C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B6934 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Initialize(
        CDxHandleYUVBitmapRealization *this,
        struct CDxHandleYUVBitmapRealization *a2)
{
  CMILPoolResource *v2; // rsi
  int v5; // eax
  int v6; // ebx
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v8; // r15
  struct ID3D11Texture2D *v9; // rbx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // eax
  CMILPoolResource *v17; // [rsp+58h] [rbp+10h] BYREF
  struct CD3DDeviceLevel1 *v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  v2 = 0LL;
  v17 = 0LL;
  if ( !a2 )
  {
    v5 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(this);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x49u);
    return (unsigned int)v6;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (struct _GUID *)this + 2,
                *(struct _LUID *)((char *)this + 256),
                &v18);
  v8 = v18;
  v6 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x53u);
LABEL_22:
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_24;
  }
  v9 = 0LL;
  v10 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(a2);
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1EAu);
  else
    v9 = *(struct ID3D11Texture2D **)(*((_QWORD *)a2 + 52) + 128LL);
  v11 = CD3DVidMemOnlyTexture::CreateFromTexture(v9, *((_DWORD *)this + 66), 0, 1, v8, &v17);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x5Au);
    v2 = v17;
    goto LABEL_22;
  }
  v2 = v17;
  v12 = (unsigned int)v17;
  v18 = (CDxHandleYUVBitmapRealization *)((char *)this + 24);
  v13 = *((unsigned int *)v17 + 26);
  v14 = v13 + 1;
  if ( (int)v13 + 1 >= (unsigned int)v13 )
    v12 = v13 + 1;
  v6 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
  if ( v14 < (unsigned int)v13 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v12 > *((_DWORD *)v17 + 25) )
  {
    v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17 + 80, 8u, 1, &v18);
    v6 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v17 + 10) + 8 * v13) = v18;
    *((_DWORD *)v2 + 26) = v12;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x5Cu);
    goto LABEL_22;
  }
  *((_QWORD *)this + 52) = v2;
LABEL_24:
  if ( v8 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 488));
  return (unsigned int)v6;
}
