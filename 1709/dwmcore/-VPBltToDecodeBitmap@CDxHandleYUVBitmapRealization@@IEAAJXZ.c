/*
 * XREFs of ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801D4154
 * Callers:
 *     ?GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801D3890 (-GetD2DBitmap@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRect.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801D39E0 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18001B0E8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089F54 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801D3678 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1801D4320 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap(CDxHandleYUVBitmapRealization *this)
{
  struct _LUID v1; // rdx
  unsigned int v3; // ebp
  signed int D3DDevice; // eax
  struct CD3DDeviceLevel1 *v5; // r15
  signed int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdi
  signed int v9; // eax
  char v11; // [rsp+20h] [rbp-38h]
  unsigned int v12; // [rsp+20h] [rbp-38h]
  struct CD3DDeviceLevel1 *v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = (struct _LUID)*((_QWORD *)this + 36);
  v13 = 0LL;
  v3 = 87;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v1, &v13);
  v5 = v13;
  v6 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v12 = 213;
    goto LABEL_16;
  }
  if ( *((int *)v13 + 189) >= 40960 && IsDXGIColorSpaceRec2020(*((_DWORD *)this + 49)) )
    v3 = 10;
  D3DDevice = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(this);
  v6 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v12 = 221;
    goto LABEL_16;
  }
  v7 = *((_QWORD *)this + 18);
  (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 48LL))(
    this,
    &v13);
  (*(void (__fastcall **)(char *))(v7 + 104))((char *)this + 144);
  D3DDevice = CDecodeBitmap::EnsureTargetBitmap(
                *((_QWORD *)this + 48),
                *((unsigned int *)this + 61),
                *((unsigned int *)this + 62),
                v3);
  v6 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v12 = 228;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DDevice, v12);
    goto LABEL_17;
  }
  v8 = *((_QWORD *)this + 48);
  v6 = 0;
  if ( !*(_BYTE *)(v8 + 205) )
  {
    v11 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, char, char *, char *))(**(_QWORD **)(v8 + 160)
                                                                                         + 216LL))(
           *(_QWORD *)(v8 + 160),
           *(_QWORD *)(*((_QWORD *)this + 50) + 120LL),
           *((unsigned int *)this + 74),
           *((unsigned int *)this + 49),
           v11,
           (char *)this + 200,
           (char *)this + 252);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x30u);
    else
      *(_BYTE *)(v8 + 205) = 1;
  }
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xEAu);
LABEL_17:
  if ( v5 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 472));
  return (unsigned int)v6;
}
