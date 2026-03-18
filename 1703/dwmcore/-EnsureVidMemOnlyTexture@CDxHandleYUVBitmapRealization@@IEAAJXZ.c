/*
 * XREFs of ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B6934
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x1801B6C90 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?GetTextureFormat@CDxHandleYUVBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x1801B6D60 (-GetTextureFormat@CDxHandleYUVBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801B70A4 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B73E8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800423E4 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800C4FBC (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(CDxHandleYUVBitmapRealization *this)
{
  struct CD3DDeviceLevel1 *v1; // r14
  CMILPoolResource *v2; // rsi
  unsigned int v3; // ebx
  int v5; // eax
  int D3DDevice; // eax
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // eax
  struct CD3DDeviceLevel1 *v14; // [rsp+40h] [rbp-9h] BYREF
  CMILPoolResource *v15; // [rsp+48h] [rbp-1h] BYREF
  struct D3D11_TEXTURE2D_DESC v16; // [rsp+50h] [rbp+7h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( *((_QWORD *)this + 52) )
    return v3;
  if ( *((_DWORD *)this + 66) )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1CCu);
    goto LABEL_21;
  }
  v5 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(
         (__int64)this,
         *((_QWORD *)this + 32),
         *((_DWORD *)this + 106));
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1B7u);
    return v3;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (struct _GUID *)this + 2,
                *(struct _LUID *)((char *)this + 256),
                &v14);
  v3 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v1 = v14;
    v8 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v16, v7, (__int64 **)v14, *((void **)this + 31), 1, 0, &v15);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1C3u);
      v2 = v15;
    }
    else
    {
      v2 = v15;
      v9 = (unsigned int)v15;
      v14 = (CDxHandleYUVBitmapRealization *)((char *)this + 24);
      v10 = *((unsigned int *)v15 + 26);
      v11 = v10 + 1;
      if ( (int)v10 + 1 >= (unsigned int)v10 )
        v9 = v10 + 1;
      v3 = v11 < (unsigned int)v10 ? 0x80070216 : 0;
      if ( v11 < (unsigned int)v10 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)v15 + 25) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15 + 80, 8u, 1, &v14);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)v15 + 10) + 8 * v10) = v14;
        *((_DWORD *)v2 + 26) = v9;
      }
      if ( (v3 & 0x80000000) == 0 )
      {
        *((_QWORD *)this + 52) = v2;
        goto LABEL_23;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1C5u);
    }
LABEL_21:
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_23;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x1BBu);
  v1 = v14;
LABEL_23:
  if ( v1 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v1 + 488));
  return v3;
}
