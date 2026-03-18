/*
 * XREFs of ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801D3678
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801D3940 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801D3DF4 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801D4154 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x18001ACC8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x1801B7AA0 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(CDxHandleYUVBitmapRealization *this)
{
  struct CD3DDeviceLevel1 *v1; // r14
  CMILPoolResource *v2; // rsi
  DWORD v3; // ebx
  signed int v5; // eax
  signed int D3DDevice; // eax
  signed int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // eax
  signed int v11; // eax
  struct CD3DDeviceLevel1 *v13; // [rsp+30h] [rbp-50h] BYREF
  CMILPoolResource *v14; // [rsp+38h] [rbp-48h] BYREF
  struct D3D11_TEXTURE2D_DESC v15; // [rsp+40h] [rbp-40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( *((_QWORD *)this + 50) )
    return v3;
  if ( *((_DWORD *)this + 74) )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x1AEu);
    goto LABEL_21;
  }
  v5 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(
         (__int64)this,
         *((_QWORD *)this + 36),
         *((_DWORD *)this + 102));
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x19Bu);
    return v3;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                *(struct _LUID *)((char *)this + 288),
                &v13);
  v3 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v1 = v13;
    v7 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v15, v13, *((struct D3D11_SUBRESOURCE_DATA **)this + 35), 1, 0, &v14);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x1A5u);
      v2 = v14;
    }
    else
    {
      v2 = v14;
      v8 = (unsigned int)v14;
      v13 = (CDxHandleYUVBitmapRealization *)((char *)this + 24);
      v9 = *((unsigned int *)v14 + 24);
      v10 = v9 + 1;
      if ( (int)v9 + 1 >= (unsigned int)v9 )
        v8 = v9 + 1;
      v3 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
      if ( v10 < (unsigned int)v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
      }
      else if ( v8 > *((_DWORD *)v14 + 23) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v14 + 72, 8u, 1, &v13);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v14 + 9) + 8 * v9) = v13;
        *((_DWORD *)v2 + 24) = v8;
      }
      if ( (v3 & 0x80000000) == 0 )
      {
        *((_QWORD *)this + 50) = v2;
        goto LABEL_23;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x1A7u);
    }
LABEL_21:
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DDevice, 0x19Eu);
  v1 = v13;
LABEL_23:
  if ( v1 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v1 + 472));
  return v3;
}
