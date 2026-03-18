/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180149C10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF40 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180077F1C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x180083920 (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18008395C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180098A60 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18014A10C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18018EBF8 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  signed int v1; // esi
  signed int CurrentDisplaySet; // eax
  struct _LUID v4; // rdi
  unsigned int *DisplayId; // rax
  unsigned int v6; // ebx
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  signed int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-60h]
  unsigned int v14; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+38h] BYREF
  CDisplaySet *v16; // [rsp+C0h] [rbp+40h] BYREF
  struct CDisplay *v17; // [rsp+C8h] [rbp+48h] BYREF

  v1 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( *((_DWORD *)this + 60) )
    goto LABEL_22;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v16);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v13 = 134;
    goto LABEL_21;
  }
  CurrentDisplaySet = CDisplaySet::GetPrimaryDisplay(v16, &v17);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v13 = 135;
    goto LABEL_21;
  }
  v4 = *(struct _LUID *)(*(__int64 (__fastcall **)(COffScreenRenderTarget *, unsigned int *, struct CDisplay *))(*(_QWORD *)this + 272LL))(
                          this,
                          &v14,
                          v17);
  DisplayId = CDisplay::GetDisplayId((__int64)v17, &v14);
  v6 = *DisplayId;
  DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat(v16, *DisplayId);
  CurrentDisplaySet = COffScreenRenderTarget::UpdatePixelFormatInfo(this, DisplayPixelFormat);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v13 = 144;
    goto LABEL_21;
  }
  CurrentDisplaySet = CD3DDeviceManager::CreateRenderTargetBitmap(
                        (__int64)&qword_18026EEE8,
                        (__int64)this + 328,
                        *((_DWORD *)this + 76),
                        *((_DWORD *)this + 77),
                        1LL,
                        0,
                        (__int64)this + 312,
                        1,
                        v4,
                        v6,
                        0,
                        0,
                        1,
                        &v15);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v13 = 159;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentDisplaySet, v13);
    goto LABEL_22;
  }
  v8 = *((unsigned int *)this + 60);
  v9 = v14;
  v10 = v8 + 1;
  if ( (int)v8 + 1 >= (unsigned int)v8 )
    v9 = v8 + 1;
  v1 = v10 < (unsigned int)v8 ? 0x80070216 : 0;
  if ( v10 < (unsigned int)v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0xB5u);
  }
  else if ( v9 > *((_DWORD *)this + 59) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 216, 8u, 1, &v15);
    v1 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v8) = v15;
    *((_DWORD *)this + 60) = v9;
  }
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0xA1u);
  else
    v15 = 0LL;
LABEL_22:
  ReleaseInterface<ID2D1Geometry>(&v15);
  ReleaseInterface<CDisplaySet const>(&v16);
  ReleaseInterface<CDisplay const>(&v17);
  ReleaseInterface<ID2D1Geometry>(&v15);
  return (unsigned int)v1;
}
