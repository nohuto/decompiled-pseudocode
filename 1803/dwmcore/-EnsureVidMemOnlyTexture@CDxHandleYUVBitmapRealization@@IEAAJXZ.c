/*
 * XREFs of ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802155C8
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180215890 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x180215D44 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180216084 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180088CFC (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800899E0 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x1801EDE60 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(CDxHandleYUVBitmapRealization *this)
{
  struct CD3DDeviceLevel1 *v1; // r14
  CMILPoolResource *v2; // rsi
  unsigned int v3; // ebx
  int v5; // eax
  int D3DDevice; // eax
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  struct CD3DDeviceLevel1 *v12; // [rsp+30h] [rbp-50h] BYREF
  CMILPoolResource *v13; // [rsp+38h] [rbp-48h] BYREF
  struct D3D11_TEXTURE2D_DESC v14; // [rsp+40h] [rbp-40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( *((_QWORD *)this + 50) )
    return v3;
  if ( *((_DWORD *)this + 74) )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x1AEu);
    goto LABEL_19;
  }
  v5 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(
         (__int64)this,
         *((_QWORD *)this + 36),
         *((_DWORD *)this + 102));
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x19Bu);
    return v3;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                *(struct _LUID *)((char *)this + 288),
                &v12);
  v3 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v1 = v12;
    v7 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v14, v12, *((struct D3D11_SUBRESOURCE_DATA **)this + 35), 1, 0, &v13);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1A5u);
      v2 = v13;
    }
    else
    {
      v2 = v13;
      v12 = (CDxHandleYUVBitmapRealization *)((char *)this + 24);
      v8 = *((_DWORD *)v13 + 24);
      v9 = v8 + 1;
      v3 = v8 + 1 < v8 ? 0x80070216 : 0;
      if ( v8 + 1 < v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)v13 + 23) )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v13 + 72, 8u, 1, &v12);
        v3 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v13 + 9) + 8LL * v8) = v12;
        *((_DWORD *)v2 + 24) = v9;
      }
      if ( (v3 & 0x80000000) == 0 )
      {
        *((_QWORD *)this + 50) = v2;
        goto LABEL_21;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1A7u);
    }
LABEL_19:
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DDevice, 0x19Eu);
  v1 = v12;
LABEL_21:
  if ( v1 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v1 + 472));
  return v3;
}
