/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x180215D44
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1802153E8 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1802154C4 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180021E6C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802155C8 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Initialize(
        struct _LUID *this,
        struct CDxHandleYUVBitmapRealization *a2)
{
  CMILPoolResource *v2; // rdi
  int v5; // eax
  int v6; // ebx
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v8; // r15
  struct ID3D11Texture2D *v9; // rbx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // eax
  CMILPoolResource *v17; // [rsp+58h] [rbp+10h] BYREF
  struct CD3DDeviceLevel1 *v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  v2 = 0LL;
  v17 = 0LL;
  if ( !a2 )
  {
    v5 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture((CDxHandleYUVBitmapRealization *)this);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x46u);
    return (unsigned int)v6;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, this[36], &v18);
  v8 = v18;
  v6 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v15 = 77;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v15);
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_22;
  }
  v9 = 0LL;
  v10 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(a2);
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1CCu);
  else
    v9 = *(struct ID3D11Texture2D **)(*((_QWORD *)a2 + 50) + 120LL);
  v11 = CD3DVidMemOnlyTexture::CreateFromTexture(v9, this[37].LowPart, 1, v8, &v17);
  v2 = v17;
  v6 = v11;
  if ( v11 < 0 )
  {
    v15 = 83;
    goto LABEL_20;
  }
  v18 = (struct CD3DDeviceLevel1 *)&this[3];
  v12 = *((_DWORD *)v17 + 24);
  v13 = v12 + 1;
  v6 = v12 + 1 < v12 ? 0x80070216 : 0;
  if ( v12 + 1 < v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v13 > *((_DWORD *)v17 + 23) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17 + 72, 8u, 1, &v18);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v17 + 9) + 8LL * v12) = v18;
    *((_DWORD *)v2 + 24) = v13;
  }
  if ( v6 < 0 )
  {
    v15 = 85;
    goto LABEL_20;
  }
  this[50] = (struct _LUID)v2;
LABEL_22:
  if ( v8 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 472));
  return (unsigned int)v6;
}
