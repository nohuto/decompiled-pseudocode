/*
 * XREFs of ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B73E8
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801B6B50 (-GetBitmapShaderResourceViewNoRef@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAP.c)
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B6BE0 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRect.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800431FC (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801B6934 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1801B75D8 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(CDxHandleYUVBitmapRealization *this)
{
  struct _LUID v1; // r8
  int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v4; // rbp
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rdi
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-38h]
  struct CD3DDeviceLevel1 *v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct _LUID)*((_QWORD *)this + 32);
  v15 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                (struct _GUID *)this + 2,
                v1,
                &v15);
  v4 = v15;
  v5 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v14 = 223;
    goto LABEL_18;
  }
  if ( *((int *)v15 + 185) >= 45056
    && ((v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 13) + 56LL))((char *)this + 104), v6 == 3)
     || (unsigned int)(v6 - 10) <= 7) )
  {
    v7 = 10;
  }
  else
  {
    v7 = 87;
  }
  D3DDevice = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(this);
  v5 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v14 = 234;
    goto LABEL_18;
  }
  v8 = *((_QWORD *)this + 13);
  (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 88LL))(
    this,
    &v15);
  (*(void (__fastcall **)(char *))(v8 + 128))((char *)this + 104);
  D3DDevice = CDecodeBitmap::EnsureTargetBitmap(
                *((_QWORD *)this + 44),
                *((unsigned int *)this + 53),
                *((unsigned int *)this + 54),
                v7);
  v5 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v14 = 241;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, v14);
    goto LABEL_19;
  }
  v9 = *(_QWORD *)(*((_QWORD *)this + 52) + 128LL);
  v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 13) + 56LL))((char *)this + 104);
  v11 = *((_QWORD *)this + 44);
  v5 = 0;
  if ( !*(_BYTE *)(v11 + 229) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, char *, char *))(**(_QWORD **)(v11 + 128) + 208LL))(
            *(_QWORD *)(v11 + 128),
            v9,
            *((unsigned int *)this + 66),
            v10,
            (char *)this + 168,
            (char *)this + 220);
    v5 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x30u);
    else
      *(_BYTE *)(v11 + 229) = 1;
  }
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xF7u);
LABEL_19:
  if ( v4 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v4 + 488));
  return (unsigned int)v5;
}
