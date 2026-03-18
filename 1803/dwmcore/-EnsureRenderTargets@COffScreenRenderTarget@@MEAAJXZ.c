/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x18016F9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180089BC0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B69A4 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B6AB0 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B7888 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C2FFC (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18016FEBC (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x1801C67C8 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  int v1; // esi
  int CurrentDisplaySet; // eax
  struct _LUID v4; // rdi
  int *DisplayId; // rax
  int v6; // ebx
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-60h]
  int v13; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v14; // [rsp+B8h] [rbp+38h] BYREF
  CDisplaySet *v15; // [rsp+C0h] [rbp+40h] BYREF
  struct CDisplay *v16; // [rsp+C8h] [rbp+48h] BYREF

  v1 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( *((_DWORD *)this + 74) )
    goto LABEL_20;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v15);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v12 = 134;
    goto LABEL_19;
  }
  CurrentDisplaySet = CDisplaySet::GetPrimaryDisplay(v15, &v16);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v12 = 135;
    goto LABEL_19;
  }
  v4 = *(struct _LUID *)(*(__int64 (__fastcall **)(COffScreenRenderTarget *, int *, struct CDisplay *))(*(_QWORD *)this + 224LL))(
                          this,
                          &v13,
                          v16);
  DisplayId = CDisplay::GetDisplayId((__int64)v16, &v13);
  v6 = *DisplayId;
  DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat(v15, (unsigned int)*DisplayId);
  CurrentDisplaySet = COffScreenRenderTarget::UpdatePixelFormatInfo(this, DisplayPixelFormat);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v12 = 144;
    goto LABEL_19;
  }
  CurrentDisplaySet = CD3DDeviceManager::CreateRenderTargetBitmap(
                        (__int64)&qword_1802D6728,
                        (__int64)this + 384,
                        *((_DWORD *)this + 90),
                        *((_DWORD *)this + 91),
                        1LL,
                        0,
                        (__int64)this + 368,
                        1,
                        v4,
                        v6,
                        0,
                        0,
                        1,
                        &v14);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v12 = 159;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentDisplaySet, v12);
    goto LABEL_20;
  }
  v8 = *((_DWORD *)this + 74);
  v9 = v8 + 1;
  v1 = v8 + 1 < v8 ? 0x80070216 : 0;
  if ( v8 + 1 < v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xB5u);
  }
  else if ( v9 > *((_DWORD *)this + 73) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8u, 1, &v14);
    v1 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 34) + 8LL * v8) = v14;
    *((_DWORD *)this + 74) = v9;
  }
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xA1u);
  else
    v14 = 0LL;
LABEL_20:
  ReleaseInterface<IRenderTargetBitmap>(&v14);
  ReleaseInterface<CDisplaySet const>(&v15);
  ReleaseInterface<CDisplay const>(&v16);
  ReleaseInterface<IRenderTargetBitmap>(&v14);
  return (unsigned int)v1;
}
