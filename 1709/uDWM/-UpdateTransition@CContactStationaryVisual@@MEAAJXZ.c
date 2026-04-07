/*
 * XREFs of ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x180084DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18001373C (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018E30 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800193BC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x1800193F0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180030FF0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18006CF14 (McTemplateU0d.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x180084D80 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::UpdateTransition(CContactStationaryVisual *this)
{
  int v2; // ecx
  unsigned int v3; // eax
  float v4; // xmm0_4
  struct tagSIZE *v5; // rbx
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  int v10; // ecx
  int v11; // edx
  float v12; // xmm0_4
  __int64 cx; // kr00_8
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  char v19; // al
  __int64 v20; // rax
  _QWORD *v21; // r8
  int v22; // eax
  double v23; // xmm1_8

  if ( !*((_QWORD *)this + 45) )
  {
    if ( (*((_BYTE *)this + 348) & 1) != 0 )
    {
      v2 = *((_DWORD *)this + 102);
      v3 = (int)(float)((float)*(double *)(*((_QWORD *)this + 44) + 48LL) * (float)v2);
      if ( v3 >= v2 )
        v3 = v2 - 1;
      CImage::SetBitmapSource(*((CImage **)this + 46), *(struct CBitmapSource **)(*((_QWORD *)this + 48) + 8LL * v3));
    }
    if ( (*((_BYTE *)this + 348) & 2) != 0 )
    {
      v4 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      CVisual::SetOpacity(
        this,
        fmaxf(0.0, (float)((float)(*((float *)this + 83) - *((float *)this + 82)) * v4) + *((float *)this + 82)));
    }
    if ( (*((_BYTE *)this + 348) & 8) != 0 )
    {
      v5 = (struct tagSIZE *)((char *)this + 376);
      v6 = *((float *)this + 84);
      v7 = *((float *)this + 85);
      v8 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      *((_QWORD *)this + 47) = *(_QWORD *)(**((_QWORD **)this + 48) + 24LL);
      v9 = (float)((float)(v7 - v6) * v8) + v6;
      v10 = (int)(float)((float)*((int *)this + 94) * v9);
      if ( v10 < 1 )
        v10 = 1;
      v11 = (int)(float)((float)*((int *)this + 95) * v9);
      if ( v11 < 1 )
        v11 = 1;
      *((_DWORD *)this + 95) = v11;
    }
    else
    {
      if ( (*((_DWORD *)this + 87) & 4) == 0 )
        goto LABEL_20;
      v5 = (struct tagSIZE *)((char *)this + 376);
      v12 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      v10 = (int)(float)((float)((float)((float)(*((float *)this + 85) - *((float *)this + 84)) * v12)
                               + *((float *)this + 84))
                       * (float)*((int *)this + 76));
      if ( v10 < 1 )
        v10 = 1;
      *((_DWORD *)this + 95) = v10;
    }
    v5->cx = v10;
    CVisual::SetSize(*((struct tagSIZE **)this + 46), v5);
    cx = v5->cx;
    v14 = *((_DWORD *)this + 75) - *((_DWORD *)this + 95) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 46), *((_DWORD *)this + 74) - cx / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 46), v14);
    goto LABEL_20;
  }
  CVisual::SetOpacity(this, 0.0);
LABEL_20:
  v15 = *((_QWORD *)this + 44);
  if ( v15 )
  {
    if ( *(_BYTE *)(v15 + 72) )
    {
      CContactStationaryVisual::StopTimer(this);
      CVisual::SetOpacity(this, 0.0);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0d(v16, &UdwmContactStationaryVisual_End, *((_DWORD *)this + 104));
    }
  }
  v17 = *((_QWORD *)this + 45);
  if ( v17 && (*(_BYTE *)(v17 + 72) || (float)*(double *)(v17 + 48) == 1.0) )
  {
    v18 = (*(_DWORD *)(v17 + 8))-- == 1;
    v19 = CDesktopManager::s_fTimelineDirty;
    if ( v18 )
      v19 = 1;
    *((_QWORD *)this + 45) = 0LL;
    CDesktopManager::s_fTimelineDirty = v19;
    v20 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    if ( v20 )
    {
      CTimelineBase::CTimelineBase(v20, *((float *)this + 79), 0.0, 1.0, *((_DWORD *)this + 86));
      *v21 = &CTimeline<float>::`vftable';
    }
    else
    {
      v21 = 0LL;
    }
    v22 = *((_DWORD *)this + 87) & 2;
    *((_QWORD *)this + 44) = v21;
    if ( (_BYTE)v22 )
      v23 = *((float *)this + 82);
    else
      v23 = DOUBLE_1_0;
    CVisual::SetOpacity(this, v23);
  }
  return 0LL;
}
