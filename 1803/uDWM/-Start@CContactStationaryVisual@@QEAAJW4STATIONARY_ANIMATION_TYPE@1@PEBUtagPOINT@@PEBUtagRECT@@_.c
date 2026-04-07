/*
 * XREFs of ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18008D9B8
 * Callers:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x18008D068 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18000D72C (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000F5B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180013AB0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002592C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180025960 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003BF48 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x18003DC10 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180073CC4 (McTemplateU0d.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x18008DE70 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180093118 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::Start(__int64 a1, int a2, struct tagPOINT *a3, _DWORD *a4, char a5)
{
  __int64 v6; // r10
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v11; // eax
  int v12; // ecx
  struct CBitmapSource ***v13; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  int v16; // esi
  float v17; // xmm0_4
  __int64 v18; // rax
  bool v19; // zf
  bool v20; // al
  __int64 v21; // rcx
  __int64 v22; // rax
  double v23; // xmm6_8
  _QWORD *v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // r8
  int v27; // eax
  int v28; // ecx
  struct tagPOINT v29; // r8
  struct tagSIZE *v30; // rbx
  float v31; // xmm1_4
  __int64 v32; // rax
  int v33; // ecx
  float v34; // xmm0_4
  float v35; // xmm0_4
  CContactManager *v36; // rcx
  int v37; // edx
  int BoundedContactWidth; // eax
  int v39; // eax
  __int64 cx; // kr00_8
  int v41; // ebx
  struct CBitmapSource **v42; // rdx
  struct CBitmapSource *v43; // rdx
  double v44; // xmm1_8
  unsigned int v46; // [rsp+20h] [rbp-38h]

  v6 = 44LL * a2;
  *(_DWORD *)(a1 + 416) = a2;
  v9 = *(_OWORD *)((char *)&csadAnimData + v6 + 16);
  *(_OWORD *)(a1 + 308) = *(_OWORD *)((char *)&csadAnimData + v6);
  v10 = *(_QWORD *)((char *)&csadAnimData + v6 + 32);
  v11 = *(_DWORD *)((char *)&csadAnimData + v6 + 40);
  *(_OWORD *)(a1 + 324) = v9;
  *(_QWORD *)(a1 + 340) = v10;
  *(_DWORD *)(a1 + 348) = v11;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d(a1, &UdwmContactStationaryVisual_Start, a2);
  v12 = *(_DWORD *)(a1 + 308);
  if ( v12 == 1
    && *(_DWORD *)(a1 + 312) == 2
    && *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 324LL) )
  {
    *(_DWORD *)(a1 + 312) = 7;
    *(_DWORD *)(a1 + 320) = 1;
  }
  v13 = (struct CBitmapSource ***)(a1 + 384);
  Theme = (void *)CDesktopManager::GetTheme(v12);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 *(_DWORD *)(a1 + 312),
                                 *(_DWORD *)(a1 + 320),
                                 0LL,
                                 (struct CBitmapSource ***)(a1 + 384));
  v16 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x63u);
    goto LABEL_60;
  }
  if ( a5 )
    v17 = FLOAT_0_050000001;
  else
    v17 = 0.0;
  v18 = *(_QWORD *)(a1 + 352);
  *(float *)(a1 + 420) = v17;
  if ( v18 )
  {
    v19 = (*(_DWORD *)(v18 + 8))-- == 1;
    v20 = CDesktopManager::s_fTimelineDirty;
    if ( v19 )
      v20 = 1;
    *(_QWORD *)(a1 + 352) = 0LL;
    CDesktopManager::s_fTimelineDirty = v20;
  }
  else
  {
    v20 = CDesktopManager::s_fTimelineDirty;
  }
  v21 = *(_QWORD *)(a1 + 360);
  if ( v21 )
  {
    v19 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v19 )
      v20 = 1;
    *(_QWORD *)(a1 + 360) = 0LL;
    CDesktopManager::s_fTimelineDirty = v20;
  }
  if ( a5 )
  {
    v22 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    v23 = DOUBLE_1_0;
    if ( v22 )
    {
      CTimelineBase::CTimelineBase(v22, *(float *)(a1 + 420), 0.0, 1.0, 0);
      *v24 = &CTimeline<float>::`vftable';
    }
    else
    {
      v24 = 0LL;
    }
    *(_QWORD *)(a1 + 360) = v24;
    if ( !v24 )
    {
      v46 = 117;
LABEL_28:
      v16 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v46);
      goto LABEL_61;
    }
  }
  else
  {
    v25 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    v23 = DOUBLE_1_0;
    if ( v25 )
    {
      CTimelineBase::CTimelineBase(v25, *(float *)(a1 + 316), 0.0, 1.0, *(_DWORD *)(a1 + 344));
      *v26 = &CTimeline<float>::`vftable';
    }
    else
    {
      v26 = 0LL;
    }
    *(_QWORD *)(a1 + 352) = v26;
    if ( !v26 )
    {
      v46 = 122;
      goto LABEL_28;
    }
  }
  v27 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v16 = v27;
  if ( v27 >= 0 )
  {
    v28 = *(_DWORD *)(a1 + 348);
    v29 = *a3;
    *(struct tagPOINT *)(a1 + 296) = *a3;
    if ( (v28 & 8) != 0 )
    {
      v30 = (struct tagSIZE *)(a1 + 376);
      v31 = *(float *)(a1 + 336);
      v32 = *((_QWORD *)**v13 + 3);
      *(_QWORD *)(a1 + 376) = v32;
      v33 = (int)(float)((float)(int)v32 * v31);
      v34 = (float)*(int *)(a1 + 380);
      if ( v33 < 1 )
        v33 = 1;
      v30->cx = v33;
      v35 = v34 * v31;
      *(_DWORD *)(a1 + 380) = (int)v35;
      if ( (int)v35 < 1 )
        *(_DWORD *)(a1 + 380) = 1;
    }
    else
    {
      v36 = (CContactManager *)(v28 & 4);
      if ( (_BYTE)v36 )
      {
        if ( !a4 )
        {
          v16 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x95u);
LABEL_61:
          CContactStationaryVisual::StopTimer((CContactStationaryVisual *)a1);
          CVisual::SetOpacity((CVisual *)a1, 0.0);
          return (unsigned int)v16;
        }
        v37 = a4[3] - a4[1];
        if ( a4[2] - *a4 <= v37 )
          v37 = a4[2] - *a4;
        BoundedContactWidth = CContactManager::GetBoundedContactWidth(v36, v37, v29);
        *(_DWORD *)(a1 + 304) = BoundedContactWidth;
        v30 = (struct tagSIZE *)(a1 + 376);
        v39 = (int)(float)((float)BoundedContactWidth * *(float *)(a1 + 336));
        *(_DWORD *)(a1 + 376) = v39;
        if ( v39 < 1 )
        {
          v30->cx = 1;
          v39 = 1;
        }
        *(_DWORD *)(a1 + 380) = v39;
      }
      else
      {
        v30 = (struct tagSIZE *)(a1 + 376);
        *(_QWORD *)(a1 + 376) = *((_QWORD *)**v13 + 3);
      }
    }
    CVisual::SetSize(*(struct tagSIZE **)(a1 + 368), v30);
    cx = v30->cx;
    v41 = a3->y - *(_DWORD *)(a1 + 380) / 2;
    CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 368), a3->x - cx / 2);
    CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 368), v41);
    v42 = *v13;
    if ( (*(_BYTE *)(a1 + 348) & 1) != 0 )
      v43 = *v42;
    else
      v43 = v42[*(unsigned int *)(a1 + 324)];
    CImage::SetBitmapSource(*(CImage **)(a1 + 368), v43);
    if ( a5 )
    {
      v44 = 0.0;
    }
    else if ( (*(_BYTE *)(a1 + 348) & 2) != 0 )
    {
      v44 = *(float *)(a1 + 328);
    }
    else
    {
      v44 = v23;
    }
    CVisual::SetOpacity((CVisual *)a1, v44);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x7Du);
  }
LABEL_60:
  if ( v16 < 0 )
    goto LABEL_61;
  return (unsigned int)v16;
}
