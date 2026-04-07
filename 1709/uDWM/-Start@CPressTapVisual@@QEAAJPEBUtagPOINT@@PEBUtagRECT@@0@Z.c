/*
 * XREFs of ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x180089990
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800816A4 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18001373C (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018E30 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800193BC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x1800193F0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180030FF0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180039CC0 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     sqrtf_0 @ 0x180046766 (sqrtf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x180089D00 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18008A048 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPressTapVisual::Start(
        CPressTapVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4)
{
  struct tagPOINT v8; // r8
  int v9; // edx
  int BoundedContactWidth; // eax
  struct tagPOINT v11; // r8
  int v12; // edx
  CContactManager *v13; // rcx
  int v14; // eax
  float v15; // xmm2_4
  struct tagSIZE *v16; // rcx
  float v17; // xmm0_4
  LONG v18; // edi
  LONG v19; // ebp
  float v20; // xmm2_4
  struct tagSIZE *v21; // rcx
  LONG v22; // ebx
  LONG v23; // esi
  int v24; // esi
  int v25; // ebx
  int v26; // ebp
  int v27; // edi
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  __int64 v31; // rax
  bool v32; // zf
  char v33; // al
  __int64 v34; // rax
  _QWORD *v35; // r8
  int v36; // ebx
  int v37; // eax
  struct tagSIZE v39; // [rsp+50h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmPressTapVisual_Start);
  v8 = *a2;
  *((struct tagPOINT *)this + 38) = *a2;
  *((struct tagPOINT *)this + 39) = *a4;
  v9 = a3->right - a3->left;
  *((_DWORD *)this + 82) = v9;
  *((_DWORD *)this + 83) = a3->bottom - a3->top;
  BoundedContactWidth = CContactManager::GetBoundedContactWidth(this, v9, v8);
  v11 = (struct tagPOINT)*((_QWORD *)this + 38);
  v12 = *((_DWORD *)this + 83);
  *((_DWORD *)this + 82) = BoundedContactWidth;
  v14 = CContactManager::GetBoundedContactWidth(v13, v12, v11);
  v15 = *((float *)this + 93);
  v16 = (struct tagSIZE *)*((_QWORD *)this + 43);
  v17 = (float)*((int *)this + 82);
  *((_DWORD *)this + 83) = v14;
  v18 = (int)(float)(v17 * v15);
  v19 = (int)(float)((float)v14 * v15);
  if ( v18 < 1 )
    v18 = 1;
  v39.cx = v18;
  if ( v19 < 1 )
    v19 = 1;
  v39.cy = v19;
  CVisual::SetSize(v16, &v39);
  v20 = *((float *)this + 95);
  v21 = (struct tagSIZE *)*((_QWORD *)this + 44);
  v22 = (int)(float)((float)*((int *)this + 84) * v20);
  v23 = (int)(float)((float)*((int *)this + 85) * v20);
  if ( v22 < 1 )
    v22 = 1;
  v39.cx = v22;
  if ( v23 < 1 )
    v23 = 1;
  v39.cy = v23;
  CVisual::SetSize(v21, &v39);
  CImage::SetBitmapSource(*((CImage **)this + 43), *((struct CBitmapSource **)this + 37));
  CImage::SetBitmapSource(*((CImage **)this + 44), *((struct CBitmapSource **)this + 37));
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 43), *((_DWORD *)this + 76) - v18 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 43), *((_DWORD *)this + 77) - v19 / 2);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 44), *((_DWORD *)this + 78) - v22 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 44), *((_DWORD *)this + 79) - v23 / 2);
  v24 = *((_DWORD *)this + 78);
  v25 = *((_DWORD *)this + 76) - v24;
  v26 = *((_DWORD *)this + 79);
  v27 = *((_DWORD *)this + 77) - v26;
  v28 = sqrtf_0((float)(v25 * v25 + v27 * v27));
  *((_QWORD *)this + 40) = *((_QWORD *)this + 38);
  v29 = (float)*((int *)this + 99);
  if ( v28 > v29 )
  {
    v30 = v29 / v28;
    *((_DWORD *)this + 80) = v24 + (int)(float)((float)v25 * v30);
    *((_DWORD *)this + 81) = v26 + (int)(float)((float)v27 * v30);
  }
  v31 = *((_QWORD *)this + 50);
  if ( v31 )
  {
    v32 = (*(_DWORD *)(v31 + 8))-- == 1;
    v33 = CDesktopManager::s_fTimelineDirty;
    if ( v32 )
      v33 = 1;
    *((_QWORD *)this + 50) = 0LL;
    CDesktopManager::s_fTimelineDirty = v33;
  }
  v34 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v34 )
  {
    CTimelineBase::CTimelineBase(v34, *((float *)this + 90), 0.0, 1.0, 0);
    *v35 = &CTimeline<float>::`vftable';
  }
  else
  {
    v35 = 0LL;
  }
  *((_QWORD *)this + 50) = v35;
  if ( !v35 )
  {
    v36 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x93u);
LABEL_26:
    CPressTapVisual::Stop(this);
    return (unsigned int)v36;
  }
  v37 = CTouchVisual::RegisterGlobalTimer(this);
  v36 = v37;
  if ( v37 >= 0 )
    CVisual::SetOpacity(this, 1.0);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x94u);
  if ( v36 < 0 )
    goto LABEL_26;
  return (unsigned int)v36;
}
