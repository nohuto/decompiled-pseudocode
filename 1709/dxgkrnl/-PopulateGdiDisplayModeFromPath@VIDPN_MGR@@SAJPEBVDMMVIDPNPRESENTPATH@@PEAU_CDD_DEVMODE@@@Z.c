/*
 * XREFs of ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1C00D1A20
 * Callers:
 *     FillDevmodeFromVidPn @ 0x1C00D1990 (FillDevmodeFromVidPn.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00041C4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000A214 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C001DA28 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1C00D1BC4 (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00D5698 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00F73E0 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PopulateGdiDisplayModeFromPath(
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *a1,
        struct _CDD_DEVMODE *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v15; // r15
  int v16; // eax
  __int64 v17; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edi
  int v19; // ebx
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // [rsp+80h] [rbp+8h] BYREF
  __int64 v37; // [rsp+88h] [rbp+10h] BYREF

  if ( !a1 )
  {
    v27 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !a2 )
  {
    v28 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v28);
  }
  v4 = *((_QWORD *)a1 + 11);
  if ( !v4 )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v29);
  }
  v36 = 0LL;
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v6 = *(_QWORD *)(v4 + 104);
    if ( v6 )
      goto LABEL_9;
  }
  else
  {
    v6 = 0LL;
  }
  v30 = WdLogNewEntry5_WdAssertion(a1);
  WdLogEvent5_WdAssertion(v30);
LABEL_9:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v36, v6);
  v8 = *(unsigned int **)(v36 + 144);
  if ( !v8 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v31);
  }
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v36, 0LL);
  v10 = *((_QWORD *)a1 + 12);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(_QWORD *)(v10 + 104);
    if ( v12 )
      goto LABEL_13;
  }
  else
  {
    v12 = 0LL;
  }
  v32 = WdLogNewEntry5_WdAssertion(v9);
  WdLogEvent5_WdAssertion(v32);
LABEL_13:
  v13 = *(_QWORD *)(v12 + 144);
  v37 = v12;
  if ( !v13 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v33);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v37, 0LL);
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v8);
  *(_QWORD *)((char *)a2 + 220) = *(_QWORD *)(v13 + 92);
  v15 = GraphicsInfo;
  DmmCalculatePresentationVSync(
    (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v13 + 72),
    (struct _D3DDDI_RATIONAL *)((char *)a2 + 220));
  v16 = *((_DWORD *)a1 + 28);
  v17 = v8[18];
  Rotation = *((_DWORD *)a1 + 29);
  v19 = *(_DWORD *)(v13 + 120) << 29;
  LODWORD(v36) = v16;
  v20 = v19 >> 29;
  if ( (((_DWORD)v17 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v17 == 2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v34);
  }
  v21 = DmmMapVSyncFromRationalToInteger((const struct _D3DDDI_RATIONAL *)((char *)a2 + 220), v20, 0LL);
  v24 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
          0x20uLL,
          v15->PrimSurfSize.cx,
          v15->PrimSurfSize.cy,
          v21,
          v20,
          Rotation,
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v36,
          (struct _devicemodeW *const)a2);
  if ( v24 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v25);
    v35[3] = v15->PrimSurfSize.cx;
    v35[4] = v15->PrimSurfSize.cy;
    v35[5] = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel((DMMVIDPNSOURCEMODE *)v8);
    v35[6] = (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(*(unsigned int *)(v13 + 92), *(unsigned int *)(v13 + 96));
    v35[7] = (int)(*(_DWORD *)(v13 + 120) << 29) >> 29;
    WdLogEvent5_WdWarning(v35);
    return (unsigned int)v24;
  }
  else
  {
    *((_DWORD *)a2 + 57) = 21;
    return 0LL;
  }
}
