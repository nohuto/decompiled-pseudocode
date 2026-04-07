/*
 * XREFs of ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007DBEC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180079410 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x18007946C (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x18007D28C (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18007D52C (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x18007D700 (-OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z.c)
 *     ?OnSetSlicer@CMagnifier@@QEAAJPEBUMAGN_SLICER_PARAM@@@Z @ 0x18007D9C8 (-OnSetSlicer@CMagnifier@@QEAAJPEBUMAGN_SLICER_PARAM@@@Z.c)
 *     ?LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z @ 0x18007DB78 (-LookupAndValidateMagnifier@CMagnifierControl@@AEAAJ_KPEAPEAVCMagnifier@@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18007DE9C (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x18007E090 (-OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z.c)
 *     ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x18007E290 (-RenderAndCommit@CMagnifierControl@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierApiMessage(CFullScreenMagnifier **a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  int v7; // ebx
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  CMagnifier *v33; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+38h] [rbp-8h] BYREF

  v3 = 0;
  v7 = 0;
  if ( (dword_1800C46FC & 1) == 0 )
  {
    dword_1800C4610 = -2147023728;
    dword_1800C46FC |= 1u;
  }
  v34 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = a2 - 1073741919;
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
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 3;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 == 2 )
                {
                  v15 = *(_QWORD *)(a3 + 4);
                  v33 = 0LL;
                  v16 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v15, &v33);
                  v7 = v16;
                  if ( v16 >= 0 )
                  {
                    v17 = CMagnifier::OnSetSlicer(v33, (const struct MAGN_SLICER_PARAM *)(a3 + 20));
                    v7 = v17;
                    if ( v17 < 0 )
                      MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v17, 0xFFu);
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v16, 0xFBu);
                  }
                }
                goto LABEL_37;
              }
              v18 = CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
                      a1[7],
                      *(double *)(a3 + 12),
                      *(_DWORD *)(a3 + 20),
                      *(_DWORD *)(a3 + 24));
              v7 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v18, 0x113u);
                goto LABEL_37;
              }
            }
            else
            {
              v19 = CFullScreenMagnifier::OnSetDesktopColorEffect(
                      (CVisual **)a1[7],
                      (const struct MilColorTransform *)(a3 + 12));
              v7 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v19, 0x107u);
                goto LABEL_37;
              }
            }
            v20 = CMagnifierControl::RenderAndCommit((CMagnifierControl *)a1);
            v7 = v20;
            if ( v20 < 0 )
              MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v20, 0x11Cu);
          }
          else
          {
            v21 = *(_QWORD *)(a3 + 8);
            v33 = 0LL;
            v22 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v21, &v33);
            v7 = v22;
            if ( v22 >= 0 )
            {
              v23 = CMagnifier::OnSetRenderTargetTextures(v33, (const struct MAGN_ADAPTERTEXTURES *)(a3 + 16));
              v7 = v23;
              if ( v23 < 0 )
                MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v23, 0xF1u);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v22, 0xEDu);
            }
          }
        }
        else
        {
          v24 = *(_QWORD *)(a3 + 8);
          v33 = 0LL;
          v25 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v24, &v33);
          v7 = v25;
          if ( v25 >= 0 )
          {
            v26 = CMagnifier::OnModifyWindowFilterList(v33, (const struct MAGN_FILTERLIST *)(a3 + 16));
            v7 = v26;
            if ( v26 < 0 )
              MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v26, 0xE3u);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v25, 0xDFu);
          }
        }
      }
      else
      {
        v27 = *(_QWORD *)(a3 + 4);
        v33 = 0LL;
        v28 = CMagnifierControl::LookupAndValidateMagnifier((CMagnifierControl *)a1, v27, &v33);
        v7 = v28;
        if ( v28 >= 0 )
        {
          v29 = CMagnifier::OnSetColorEffect(v33, (const struct MilColorTransform *)(a3 + 20));
          v7 = v29;
          if ( v29 < 0 )
            MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v29, 0xD5u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v28, 0xD3u);
        }
      }
    }
    else
    {
      v30 = CMagnifierControl::OnMagnifierDestroy((CMagnifierControl *)a1, *(HWND *)(a3 + 4));
      v7 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v30, 0xC9u);
    }
  }
  else
  {
    v31 = CMagnifierControl::OnMagnifierCreate((CMagnifierControl *)a1, *(HWND *)(a3 + 4), *(_DWORD *)(a3 + 20));
    v7 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1800C4610, 1LL, v31, 0xC1u);
  }
LABEL_37:
  if ( v7 != -2147023728 )
    v3 = v7;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v34);
  return v3;
}
