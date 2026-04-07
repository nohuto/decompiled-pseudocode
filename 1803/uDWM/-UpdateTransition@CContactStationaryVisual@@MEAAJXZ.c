/*
 * XREFs of ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18008DEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18000D72C (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180013AB0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002592C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180025960 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180073CC4 (McTemplateU0d.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x18008DE70 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::UpdateTransition(CContactStationaryVisual *this)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // eax
  float v5; // xmm0_4
  struct tagSIZE *v6; // rbx
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  __int64 v10; // rax
  float v11; // xmm2_4
  int v12; // ecx
  float v13; // xmm0_4
  int v14; // edx
  float v15; // xmm0_4
  int v16; // eax
  __int64 cx; // kr00_8
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  bool v22; // zf
  char v23; // al
  __int64 v24; // rax
  _QWORD *v25; // r8
  int v26; // eax
  double v27; // xmm1_8

  if ( !*((_QWORD *)this + 45) )
  {
    v2 = *((_DWORD *)this + 87);
    if ( (v2 & 1) != 0 )
    {
      v3 = *((_DWORD *)this + 102);
      v4 = (int)(float)((float)*(double *)(*((_QWORD *)this + 44) + 48LL) * (float)v3);
      if ( v4 >= v3 )
        v4 = v3 - 1;
      CImage::SetBitmapSource(*((CImage **)this + 46), *(struct CBitmapSource **)(*((_QWORD *)this + 48) + 8LL * v4));
      v2 = *((_DWORD *)this + 87);
    }
    if ( (v2 & 2) != 0 )
    {
      v5 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      CVisual::SetOpacity(
        this,
        fmaxf(0.0, (float)((float)(*((float *)this + 83) - *((float *)this + 82)) * v5) + *((float *)this + 82)));
      v2 = *((_DWORD *)this + 87);
    }
    if ( (v2 & 8) != 0 )
    {
      v6 = (struct tagSIZE *)((char *)this + 376);
      v7 = *((float *)this + 84);
      v8 = *((float *)this + 85);
      v9 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      v10 = *(_QWORD *)(**((_QWORD **)this + 48) + 24LL);
      *((_QWORD *)this + 47) = v10;
      v11 = (float)((float)(v8 - v7) * v9) + v7;
      v12 = (int)(float)((float)(int)v10 * v11);
      v13 = (float)*((int *)this + 95);
      if ( v12 < 1 )
        v12 = 1;
      v6->cx = v12;
      v14 = (int)(float)(v13 * v11);
      if ( v14 < 1 )
        v14 = 1;
      *((_DWORD *)this + 95) = v14;
    }
    else
    {
      if ( (v2 & 4) == 0 )
        goto LABEL_20;
      v6 = (struct tagSIZE *)((char *)this + 376);
      v15 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      v16 = (int)(float)((float)((float)((float)(*((float *)this + 85) - *((float *)this + 84)) * v15)
                               + *((float *)this + 84))
                       * (float)*((int *)this + 76));
      *((_DWORD *)this + 94) = v16;
      if ( v16 < 1 )
      {
        v6->cx = 1;
        v16 = 1;
      }
      *((_DWORD *)this + 95) = v16;
    }
    CVisual::SetSize(*((struct tagSIZE **)this + 46), v6);
    cx = v6->cx;
    v18 = *((_DWORD *)this + 75) - *((_DWORD *)this + 95) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 46), *((_DWORD *)this + 74) - cx / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 46), v18);
    goto LABEL_20;
  }
  CVisual::SetOpacity(this, 0.0);
LABEL_20:
  v19 = *((_QWORD *)this + 44);
  if ( v19 )
  {
    if ( *(_BYTE *)(v19 + 72) )
    {
      CContactStationaryVisual::StopTimer(this);
      CVisual::SetOpacity(this, 0.0);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0d(v20, &UdwmContactStationaryVisual_End, *((_DWORD *)this + 104));
    }
  }
  v21 = *((_QWORD *)this + 45);
  if ( v21 && (*(_BYTE *)(v21 + 72) || (float)*(double *)(v21 + 48) == 1.0) )
  {
    v22 = (*(_DWORD *)(v21 + 8))-- == 1;
    v23 = CDesktopManager::s_fTimelineDirty;
    if ( v22 )
      v23 = 1;
    *((_QWORD *)this + 45) = 0LL;
    CDesktopManager::s_fTimelineDirty = v23;
    v24 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    if ( v24 )
    {
      CTimelineBase::CTimelineBase(v24, *((float *)this + 79), 0.0, 1.0, *((_DWORD *)this + 86));
      *v25 = &CTimeline<float>::`vftable';
    }
    else
    {
      v25 = 0LL;
    }
    v26 = *((_DWORD *)this + 87) & 2;
    *((_QWORD *)this + 44) = v25;
    if ( (_BYTE)v26 )
      v27 = *((float *)this + 82);
    else
      v27 = DOUBLE_1_0;
    CVisual::SetOpacity(this, v27);
  }
  return 0LL;
}
