/*
 * XREFs of ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00F17B8
 * Callers:
 *     FillDevmodeFromVidPn @ 0x1C00F1728 (FillDevmodeFromVidPn.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007400 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C0007434 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000C388 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00AB1FC (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00F1960 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall VIDPN_MGR::PopulateGdiDisplayModeFromPath(
        const struct DMMVIDPNPRESENTPATH *a1,
        struct _CDD_DEVMODE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DMMVIDPNSOURCEMODE *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v26; // r14d
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // r15d
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v28; // ebp
  const struct _D3DDDI_RATIONAL *v29; // r9
  unsigned int v30; // eax
  UINT cy; // edi
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int BitsPerPixel; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // edi
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rbx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v59; // [rsp+80h] [rbp+8h] BYREF
  __int64 v60; // [rsp+88h] [rbp+10h] BYREF
  __int64 v61; // [rsp+90h] [rbp+18h]

  if ( !a1 )
  {
    v43 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !a2 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v44);
  }
  v6 = *((_QWORD *)a1 + 11);
  if ( !v6 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v45);
  }
  v59 = 0LL;
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
    v8 = *(_QWORD *)(v6 + 104);
    if ( v8 )
      goto LABEL_9;
  }
  else
  {
    v8 = 0LL;
  }
  v46 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
  WdLogEvent5_WdAssertion(v46);
LABEL_9:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v59, v8);
  v13 = *(DMMVIDPNSOURCEMODE **)&v59[4].Stride;
  if ( !v13 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v47);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v59, 0LL);
  v18 = *((_QWORD *)a1 + 12);
  v19 = *(_QWORD *)(v18 + 104);
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
    v20 = *(_QWORD *)(v18 + 104);
    if ( v20 )
      goto LABEL_13;
  }
  else
  {
    v20 = 0LL;
  }
  v48 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
  WdLogEvent5_WdAssertion(v48);
LABEL_13:
  v60 = v20;
  v21 = *(_QWORD *)(v20 + 144);
  v61 = v21;
  if ( !v21 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    WdLogEvent5_WdAssertion(v49);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v60, 0LL);
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v13, v22, v23, v24);
  v59 = GraphicsInfo;
  *(_QWORD *)((char *)a2 + 220) = *(_QWORD *)(v21 + 92);
  v60 = v21 + 72;
  DmmCalculatePresentationVSync(
    (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v21 + 72),
    (struct _D3DDDI_RATIONAL *)((char *)a2 + 220));
  v26 = *((_DWORD *)a1 + 28);
  Rotation = *((_DWORD *)a1 + 29);
  v28 = (int)(*(_DWORD *)(v21 + 120) << 29) >> 29;
  v30 = DmmMapVSyncFromRationalToInteger(v29, v28, 0LL);
  cy = GraphicsInfo->PrimSurfSize.cy;
  LODWORD(GraphicsInfo) = GraphicsInfo->PrimSurfSize.cx;
  v32 = v30;
  BitsPerPixel = DMMVIDPNSOURCEMODE::GetBitsPerPixel(v13, v33, v34, v35);
  v39 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
          BitsPerPixel,
          (unsigned int)GraphicsInfo,
          cy,
          v32,
          v28,
          Rotation,
          v26,
          (struct _devicemodeW *const)a2);
  if ( v39 < 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v40, v41);
    v51 = v59;
    v50[3] = v59->PrimSurfSize.cx;
    v52 = v51->PrimSurfSize.cy;
    v50[4] = v52;
    v55 = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel(v13, v52, v53, v54);
    v56 = v60;
    v50[5] = v55;
    v57 = (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v56 + 20), *(unsigned int *)(v56 + 24));
    v58 = v61;
    v50[6] = v57;
    v50[7] = (int)(*(_DWORD *)(v58 + 120) << 29) >> 29;
    WdLogEvent5_WdWarning(v50);
    return (unsigned int)v39;
  }
  else
  {
    *((_DWORD *)a2 + 57) = *((_DWORD *)v13 + 24);
    return 0LL;
  }
}
