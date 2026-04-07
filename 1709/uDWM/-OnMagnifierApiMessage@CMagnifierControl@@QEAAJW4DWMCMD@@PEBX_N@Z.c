/*
 * XREFs of ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180073338
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002ADB0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18006F3D0 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x18006F440 (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x18006F484 (-OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@.c)
 *     ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18006F4F8 (-OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800728BC (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180072BB4 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x180072D88 (-OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x180072DEC (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?OnSetSlicer@CMagnifier@@QEAAJPEBUMAGN_SLICER_PARAM@@@Z @ 0x1800730B4 (-OnSetSlicer@CMagnifier@@QEAAJPEBUMAGN_SLICER_PARAM@@@Z.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x180073274 (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800736CC (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x1800738E8 (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 *     ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x180073B50 (-RenderAndCommit@CMagnifierControl@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierApiMessage(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  int v7; // ebx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  CMagnifier *v39; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+38h] [rbp-8h] BYREF

  v3 = 0;
  v7 = 0;
  if ( dword_1800C2780 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C2780);
    if ( dword_1800C2780 == -1 )
    {
      dword_1800C26D0 = -2147023728;
      Init_thread_footer(&dword_1800C2780);
    }
  }
  v40 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 <= 1073741927 )
  {
    if ( a2 != 1073741927 )
    {
      v8 = a2 - 1073741920;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              if ( v11 == 1 )
              {
                v12 = *(_QWORD *)(a3 + 8);
                v39 = 0LL;
                v13 = CMagnifierControl::LookupAndValidateMagnifier((struct _RTL_GENERIC_TABLE *)a1, v12, &v39);
                v7 = v13;
                if ( v13 >= 0 )
                {
                  v14 = CMagnifier::OnSetRenderTargetTextures(v39, (const struct MAGN_ADAPTERTEXTURES *)(a3 + 16));
                  v7 = v14;
                  if ( v14 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v14, 0xF9u);
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v13, 0xF5u);
                }
              }
            }
            else
            {
              v15 = *(_QWORD *)(a3 + 8);
              v39 = 0LL;
              v16 = CMagnifierControl::LookupAndValidateMagnifier((struct _RTL_GENERIC_TABLE *)a1, v15, &v39);
              v7 = v16;
              if ( v16 >= 0 )
              {
                v17 = CMagnifier::OnModifyWindowFilterList(v39, (const struct MAGN_FILTERLIST *)(a3 + 16));
                v7 = v17;
                if ( v17 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v17, 0xEBu);
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v16, 0xE7u);
              }
            }
          }
          else
          {
            v18 = *(_QWORD *)(a3 + 4);
            v39 = 0LL;
            v19 = CMagnifierControl::LookupAndValidateMagnifier((struct _RTL_GENERIC_TABLE *)a1, v18, &v39);
            v7 = v19;
            if ( v19 >= 0 )
            {
              v20 = CMagnifier::OnSetColorEffect(v39, (const struct MilColorTransform *)(a3 + 20));
              v7 = v20;
              if ( v20 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v20, 0xDDu);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v19, 0xDBu);
            }
          }
        }
        else
        {
          v21 = CMagnifierControl::OnMagnifierDestroy((CMagnifierControl *)a1, *(HWND *)(a3 + 4));
          v7 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v21, 0xD1u);
        }
      }
      else
      {
        v22 = CMagnifierControl::OnMagnifierCreate((CMagnifierControl *)a1, *(HWND *)(a3 + 4), *(_DWORD *)(a3 + 20));
        v7 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v22, 0xC9u);
      }
      goto LABEL_50;
    }
    v23 = CFullScreenMagnifier::OnSetDesktopColorEffect(
            *(CFullScreenMagnifier **)(a1 + 64),
            (const struct MilColorTransform *)(a3 + 12));
    v7 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v23, 0x10Fu);
      goto LABEL_50;
    }
    goto LABEL_48;
  }
  v24 = a2 - 1073741928;
  if ( !v24 )
  {
    v36 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
            *(CFullScreenMagnifier **)(a1 + 64),
            *(double *)(a3 + 12),
            *(_DWORD *)(a3 + 20),
            *(_DWORD *)(a3 + 24));
    v7 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v36, 0x11Bu);
      goto LABEL_50;
    }
    goto LABEL_48;
  }
  v25 = v24 - 2;
  if ( v25 )
  {
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 != 1 )
          goto LABEL_50;
        v28 = CFullScreenMagnifier::OnSetPersistentDesktopColorEffect(
                *(CFullScreenMagnifier **)(a1 + 64),
                (const struct MilColorTransform *)(a3 + 12));
        v7 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v28, 0x13Au);
          goto LABEL_50;
        }
      }
      else
      {
        v29 = CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(*(_QWORD *)(a1 + 64), *(_DWORD *)(a3 + 12));
        v7 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v29, 0x130u);
          goto LABEL_50;
        }
      }
LABEL_48:
      v37 = CMagnifierControl::RenderAndCommit((CMagnifierControl *)a1);
      v7 = v37;
      if ( v37 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v37, 0x142u);
      goto LABEL_50;
    }
    v30 = *(_QWORD *)(a3 + 4);
    v39 = 0LL;
    v31 = CMagnifierControl::LookupAndValidateMagnifier((struct _RTL_GENERIC_TABLE *)a1, v30, &v39);
    v7 = v31;
    if ( v31 >= 0 )
    {
      v32 = CMagnifier::OnSetMagnifierSamplingMode((__int64)v39, *(_DWORD *)(a3 + 20));
      v7 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v32, 0x128u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v31, 0x126u);
    }
  }
  else
  {
    v33 = *(_QWORD *)(a3 + 4);
    v39 = 0LL;
    v34 = CMagnifierControl::LookupAndValidateMagnifier((struct _RTL_GENERIC_TABLE *)a1, v33, &v39);
    v7 = v34;
    if ( v34 >= 0 )
    {
      v35 = CMagnifier::OnSetSlicer(v39, (const struct MAGN_SLICER_PARAM *)(a3 + 20));
      v7 = v35;
      if ( v35 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v35, 0x107u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C26D0, 1u, v34, 0x103u);
    }
  }
LABEL_50:
  if ( v7 != -2147023728 )
    v3 = v7;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v40);
  return v3;
}
