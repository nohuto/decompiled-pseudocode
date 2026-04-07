/*
 * XREFs of ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18008B310
 * Callers:
 *     <none>
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001B52C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180040D60 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180040D90 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180040DDC (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateTransition(CDirectTouchVisual *this)
{
  float v2; // xmm7_4
  __int64 v3; // rax
  float v4; // xmm6_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  bool v12; // al
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // r8

  v2 = FLOAT_1_0;
  if ( *((_QWORD *)this + 49) )
  {
LABEL_15:
    v4 = 0.0;
    goto LABEL_16;
  }
  v3 = *((_QWORD *)this + 47);
  if ( !v3 )
  {
    if ( (*((_BYTE *)this + 368) & 8) != 0 )
    {
      v4 = FLOAT_1_0;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(v3 + 72) )
  {
    if ( (*((_BYTE *)this + 368) & 1) != 0 )
    {
      v4 = (float)((float)*(double *)(v3 + 48) * (float)(1.0 - *((float *)this + 86))) + *((float *)this + 86);
      goto LABEL_9;
    }
LABEL_8:
    v4 = 0.0;
    goto LABEL_9;
  }
  if ( (*((_BYTE *)this + 368) & 8) == 0 )
    goto LABEL_8;
  v4 = FLOAT_1_0;
LABEL_9:
  v5 = *((float *)this + 83);
  v6 = *(double *)(v3 + 48);
  if ( v5 < v6 )
    v7 = (float)((float)((float)(v6 - v5) / *((float *)this + 84))
               * (float)(*((float *)this + 90) - *((float *)this + 89)))
       + *((float *)this + 89);
  else
    v7 = (float)((float)(*((float *)this + 89) - *((float *)this + 88)) * (float)(v6 / v5)) + *((float *)this + 88);
  CDirectTouchVisual::UpdateLocationWithScalar(
    this,
    (const struct tagPOINT *)this + 37,
    (const struct tagRECT *)this + 19,
    v7);
LABEL_16:
  v8 = *((_QWORD *)this + 48);
  if ( v8 )
  {
    v2 = *(double *)(v8 + 48);
  }
  else if ( *((_BYTE *)this + 400) )
  {
    v2 = 0.0;
  }
  CVisual::SetOpacity(this, (float)(v2 * v4));
  v9 = *((_QWORD *)this + 47);
  if ( v9 && *(_BYTE *)(v9 + 72) )
    CDirectTouchVisual::StopDownTimeline(this);
  v10 = *((_QWORD *)this + 48);
  if ( v10 && *(_BYTE *)(v10 + 72) )
  {
    *((_BYTE *)this + 400) = 1;
    v11 = (*(_DWORD *)(v10 + 8))-- == 1;
    v12 = CDesktopManager::s_fTimelineDirty;
    if ( v11 )
      v12 = 1;
    *((_QWORD *)this + 48) = 0LL;
    CDesktopManager::s_fTimelineDirty = v12;
  }
  else
  {
    v12 = CDesktopManager::s_fTimelineDirty;
  }
  v13 = *((_QWORD *)this + 49);
  if ( v13 && *(_BYTE *)(v13 + 72) )
  {
    v11 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v11 )
      v12 = 1;
    *((_QWORD *)this + 49) = 0LL;
    CDesktopManager::s_fTimelineDirty = v12;
    v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    if ( v14 )
    {
      CTimelineBase::CTimelineBase(v14, *((float *)this + 82), 0.0, 1.0, 0);
      *v15 = &CTimeline<float>::`vftable';
    }
    else
    {
      v15 = 0LL;
    }
    *((_QWORD *)this + 47) = v15;
  }
  if ( !*((_QWORD *)this + 47) && !*((_QWORD *)this + 48) && !*((_QWORD *)this + 49) )
    CDirectTouchVisual::StopTimer(this);
  return 0LL;
}
