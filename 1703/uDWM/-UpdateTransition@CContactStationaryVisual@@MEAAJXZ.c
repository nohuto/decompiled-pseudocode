/*
 * XREFs of ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18004C330
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800195DC (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001B52C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180023260 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023840 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023874 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18007FA50 (Template_q.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x18008BBC0 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::UpdateTransition(CContactStationaryVisual *this)
{
  int v2; // ecx
  unsigned int v3; // eax
  float v4; // xmm0_4
  struct tagSIZE *v5; // rbx
  float v6; // xmm0_4
  int v7; // ecx
  __int64 cx; // kr00_8
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  char v13; // al
  __int64 v14; // rax
  _QWORD *v15; // r8
  int v16; // eax
  double v17; // xmm1_8
  __int64 v19; // rcx
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  int v24; // edx

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
      v20 = *((float *)this + 84);
      v21 = *((float *)this + 85);
      v22 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      *((_QWORD *)this + 47) = *(_QWORD *)(**((_QWORD **)this + 48) + 24LL);
      v23 = (float)((float)(v21 - v20) * v22) + v20;
      v7 = (int)(float)((float)*((int *)this + 94) * v23);
      if ( v7 < 1 )
        v7 = 1;
      v24 = (int)(float)((float)*((int *)this + 95) * v23);
      if ( v24 < 1 )
        v24 = 1;
      *((_DWORD *)this + 95) = v24;
    }
    else
    {
      if ( (*((_DWORD *)this + 87) & 4) == 0 )
        goto LABEL_15;
      v5 = (struct tagSIZE *)((char *)this + 376);
      v6 = *(double *)(*((_QWORD *)this + 44) + 48LL);
      v7 = (int)(float)((float)((float)((float)(*((float *)this + 85) - *((float *)this + 84)) * v6)
                              + *((float *)this + 84))
                      * (float)*((int *)this + 76));
      if ( v7 < 1 )
        v7 = 1;
      *((_DWORD *)this + 95) = v7;
    }
    v5->cx = v7;
    CVisual::SetSize(*((struct tagSIZE **)this + 46), v5);
    cx = v5->cx;
    v9 = *((_DWORD *)this + 75) - *((_DWORD *)this + 95) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 46), *((_DWORD *)this + 74) - cx / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 46), v9);
    goto LABEL_15;
  }
  CVisual::SetOpacity(this, 0.0);
LABEL_15:
  v10 = *((_QWORD *)this + 44);
  if ( v10 )
  {
    if ( *(_BYTE *)(v10 + 72) )
    {
      CContactStationaryVisual::StopTimer(this);
      CVisual::SetOpacity(this, 0.0);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v19, &UdwmContactStationaryVisual_End, *((unsigned int *)this + 104));
    }
  }
  v11 = *((_QWORD *)this + 45);
  if ( v11 && (*(_BYTE *)(v11 + 72) || (float)*(double *)(v11 + 48) == 1.0) )
  {
    v12 = (*(_DWORD *)(v11 + 8))-- == 1;
    v13 = CDesktopManager::s_fTimelineDirty;
    if ( v12 )
      v13 = 1;
    *((_QWORD *)this + 45) = 0LL;
    CDesktopManager::s_fTimelineDirty = v13;
    v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    if ( v14 )
    {
      CTimelineBase::CTimelineBase(v14, *((float *)this + 79), 0.0, 1.0, *((_DWORD *)this + 86));
      *v15 = &CTimeline<float>::`vftable';
    }
    else
    {
      v15 = 0LL;
    }
    v16 = *((_DWORD *)this + 87) & 2;
    *((_QWORD *)this + 44) = v15;
    if ( (_BYTE)v16 )
      v17 = *((float *)this + 82);
    else
      v17 = DOUBLE_1_0;
    CVisual::SetOpacity(this, v17);
  }
  return 0LL;
}
