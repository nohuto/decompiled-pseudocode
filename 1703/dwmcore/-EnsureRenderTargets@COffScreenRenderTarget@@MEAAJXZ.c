/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180147ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800432B0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800B7154 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B76D8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B8124 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C588C (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180148D20 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180185E74 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  int v1; // esi
  int CurrentDisplaySet; // eax
  struct _LUID v4; // rdi
  unsigned int *DisplayId; // rax
  unsigned int v6; // ebx
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-39h]
  unsigned int v14; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+6Fh] BYREF
  CDisplaySet *v16; // [rsp+D0h] [rbp+77h] BYREF
  struct CDisplay *v17; // [rsp+D8h] [rbp+7Fh] BYREF

  v1 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( *((_DWORD *)this + 58) )
    goto LABEL_22;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v16);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v13 = 139;
    goto LABEL_21;
  }
  CurrentDisplaySet = CDisplaySet::GetPrimaryDisplay(v16, &v17);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v13 = 140;
    goto LABEL_21;
  }
  v4 = (struct _LUID)*((_QWORD *)v17 + 28);
  DisplayId = CDisplay::GetDisplayId((__int64)v17, &v14);
  v6 = *DisplayId;
  DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat(v16, *DisplayId);
  CurrentDisplaySet = COffScreenRenderTarget::UpdatePixelFormatInfo(this, DisplayPixelFormat);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v13 = 149;
    goto LABEL_21;
  }
  CurrentDisplaySet = CD3DDeviceManager::CreateRenderTargetBitmap(
                        (__int64)&qword_18023E818,
                        (__int64)this + 328,
                        *((_DWORD *)this + 76),
                        *((_DWORD *)this + 77),
                        1LL,
                        0,
                        (COffScreenRenderTarget *)((char *)this + 312),
                        1,
                        (struct _GUID *)(*((_QWORD *)this + 2) + 324LL),
                        v4,
                        v6,
                        0,
                        0,
                        1,
                        (void **)&v15);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v13 = 165;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, v13);
    goto LABEL_22;
  }
  v8 = *((unsigned int *)this + 58);
  v9 = v14;
  v10 = v8 + 1;
  if ( (int)v8 + 1 >= (unsigned int)v8 )
    v9 = v8 + 1;
  v1 = v10 < (unsigned int)v8 ? 0x80070216 : 0;
  if ( v10 < (unsigned int)v8 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xB5u);
  }
  else if ( v9 > *((_DWORD *)this + 57) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 208, 8u, 1, &v15);
    v1 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 26) + 8 * v8) = v15;
    *((_DWORD *)this + 58) = v9;
  }
  if ( v1 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xA7u);
  else
    v15 = 0LL;
LABEL_22:
  ReleaseInterface<ID2D1Geometry>(&v15);
  ReleaseInterface<CDisplaySet const>(&v16);
  ReleaseInterface<CDisplay const>(&v17);
  ReleaseInterface<ID2D1Geometry>(&v15);
  return (unsigned int)v1;
}
