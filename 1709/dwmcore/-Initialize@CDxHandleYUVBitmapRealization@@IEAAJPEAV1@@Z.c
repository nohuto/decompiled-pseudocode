/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801D3DF4
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D3498 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D3574 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180081200 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801D3678 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Initialize(
        struct _LUID *this,
        struct CDxHandleYUVBitmapRealization *a2)
{
  CMILPoolResource *v2; // rsi
  signed int v5; // eax
  DWORD v6; // ebx
  signed int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v8; // r15
  struct ID3D11Texture2D *v9; // rbx
  signed int v10; // eax
  signed int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  signed int v15; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x46u);
    return v6;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, this[36], &v18);
  v8 = v18;
  v6 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DDevice, 0x4Du);
LABEL_22:
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_24;
  }
  v9 = 0LL;
  v10 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(a2);
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1CCu);
  else
    v9 = *(struct ID3D11Texture2D **)(*((_QWORD *)a2 + 50) + 120LL);
  v11 = CD3DVidMemOnlyTexture::CreateFromTexture(v9, this[37].LowPart, 1, v8, &v17);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x53u);
    v2 = v17;
    goto LABEL_22;
  }
  v2 = v17;
  v12 = (unsigned int)v17;
  v18 = (struct CD3DDeviceLevel1 *)&this[3];
  v13 = *((unsigned int *)v17 + 24);
  v14 = v13 + 1;
  if ( (int)v13 + 1 >= (unsigned int)v13 )
    v12 = v13 + 1;
  v6 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
  if ( v14 < (unsigned int)v13 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( v12 > *((_DWORD *)v17 + 23) )
  {
    v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17 + 72, 8u, 1, &v18);
    v6 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v17 + 9) + 8 * v13) = v18;
    *((_DWORD *)v2 + 24) = v12;
  }
  if ( (v6 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x55u);
    goto LABEL_22;
  }
  this[50] = (struct _LUID)v2;
LABEL_24:
  if ( v8 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 472));
  return v6;
}
