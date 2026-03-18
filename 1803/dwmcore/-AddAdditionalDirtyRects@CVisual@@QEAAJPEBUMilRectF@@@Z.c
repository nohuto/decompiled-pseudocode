/*
 * XREFs of ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180050210
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004F9E8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     _lambda_dba53bb25514b03878b3988ad487924e_::operator() @ 0x1800BF480 (_lambda_dba53bb25514b03878b3988ad487924e_--operator().c)
 *     ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014B8F0 (-SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A680 (-NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z @ 0x18004CED4 (-SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800512E0 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ @ 0x180092EB0 (-GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BD468 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::AddAdditionalDirtyRects(CVisual *this, const struct MilRectF *a2)
{
  __int64 v4; // rax
  int v5; // edx
  int *v6; // rcx
  char *v7; // rsi
  char v8; // al
  __int64 v9; // rax
  struct CProcessAttribution *(__fastcall *v10)(CResource *__hidden); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CProcessAttribution *v12; // rsi
  __int64 *v13; // rbx
  __int64 v14; // rax
  struct CProcessAttribution *(__fastcall *v15)(CWindowNode *__hidden); // rax
  struct CProcessAttribution *v16; // rdi
  __int64 v17; // rax
  struct CProcessAttribution *v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  CCompositionSpotLight *v25; // rcx
  void (__fastcall *v26)(CCompositionSpotLight *, unsigned int, CCompositionSpotLight *); // rax
  char *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rax

  if ( *((float *)a2 + 2) <= *(float *)a2 || *((float *)a2 + 3) <= *((float *)a2 + 1) )
    return 0LL;
  v4 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v4 + 4) & 0x20000) == 0 )
    goto LABEL_44;
  v5 = *(_DWORD *)(v4 + 12);
  v6 = (int *)(v4 + 12);
  if ( (v5 & 0x7F000000) != 0xF000000 )
  {
    do
    {
      v6 = (int *)((char *)v6 + (v5 & 0xFFFFFF) + 4);
      v5 = *v6;
    }
    while ( (*v6 & 0x7F000000) != 0xF000000 );
  }
  v7 = *(char **)(v6 + 1);
  if ( !v7 )
  {
LABEL_44:
    v27 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x4CuLL);
    v7 = v27;
    if ( !v27 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB0Fu);
      return 2147942414LL;
    }
    memset_0(v27, 0, 0x4CuLL);
    *((_DWORD *)v7 + 17) = 1;
    CVisual::SetAdditionalDirtyRects(this, (struct CMergedRect *)v7);
  }
  v8 = *((_BYTE *)this + 93);
  if ( (v8 & 0x10) != 0 )
  {
    *((_BYTE *)this + 93) = v8 & 0xEF;
    *((_DWORD *)v7 + 16) = 0;
    *(_QWORD *)(v7 + 68) = 1LL;
  }
  CMergedRectBase<4>::Add(v7, a2);
  v9 = *((_QWORD *)this + 3);
  if ( (v9 & 2) != 0 )
    v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v9) = v9 & 1;
  if ( (_DWORD)v9 )
  {
    v28 = 0LL;
    v29 = (unsigned int)v9;
    do
    {
      v30 = CPtrArrayBase::operator[]((char *)this + 24, v28);
      if ( v30 != *((_QWORD *)this + 10) )
        (*(void (__fastcall **)(__int64, __int64, CVisual *))(*(_QWORD *)v30 + 64LL))(v30, 1LL, this);
      ++v28;
      --v29;
    }
    while ( v29 );
  }
  v10 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)this + 120LL);
  if ( v10 == CResource::GetProcessAttributionNoRef )
    ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef(this);
  else
    ProcessAttributionNoRef = v10(this);
  *((_DWORD *)this + 22) |= 8u;
  v12 = ProcessAttributionNoRef;
  if ( ProcessAttributionNoRef )
    ++*((_DWORD *)ProcessAttributionNoRef + 7);
  v13 = (__int64 *)*((_QWORD *)this + 10);
  if ( !v13 )
    return 0LL;
  do
  {
    if ( (v13[11] & 0x40) != 0 )
      break;
    v14 = *v13;
    *((_DWORD *)v13 + 22) |= 0x40u;
    v15 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(v14 + 120);
    if ( v15 == CResource::GetProcessAttributionNoRef )
    {
      v16 = (struct CProcessAttribution *)v13[6];
      if ( v16 )
        v16 = (struct CProcessAttribution *)*((_QWORD *)v16 + 5);
    }
    else
    {
      v19 = v15 == CWindowNode::GetProcessAttributionNoRef
          ? CWindowNode::GetProcessAttributionNoRef((CWindowNode *)v13)
          : v15((CWindowNode *)v13);
      v16 = v19;
    }
    if ( v16 )
    {
      if ( v16 != v12 )
        ++*((_DWORD *)v16 + 6);
    }
    else
    {
      v16 = v12;
    }
    v17 = v13[3];
    if ( (v17 & 2) != 0 )
      v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v17) = v17 & 1;
    if ( (_DWORD)v17 )
    {
      v20 = 0LL;
      v21 = (unsigned int)v17;
      v22 = 16LL;
      do
      {
        v23 = v13[3];
        if ( (v23 & 2) != 0 )
          v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v24 = v13[3] & 1;
        if ( v20 >= v24 )
        {
          v25 = 0LL;
        }
        else if ( v24 == 1 )
        {
          v25 = (CCompositionSpotLight *)(v23 & 0xFFFFFFFFFFFFFFFCuLL);
        }
        else
        {
          _mm_lfence();
          v25 = *(CCompositionSpotLight **)((v13[3] & 0xFFFFFFFFFFFFFFFCuLL) + v22);
        }
        if ( v25 != (CCompositionSpotLight *)v13[10] )
        {
          v26 = *(void (__fastcall **)(CCompositionSpotLight *, unsigned int, CCompositionSpotLight *))(*(_QWORD *)v25 + 64LL);
          if ( v26 == CCompositionLight::NotifyOnChanged )
            CCompositionLight::NotifyOnChanged(v25, 1u, (CCompositionSpotLight *)v13);
          else
            v26(v25, 1u, (CCompositionSpotLight *)v13);
        }
        ++v20;
        v22 += 8LL;
        --v21;
      }
      while ( v21 );
    }
    v13 = (__int64 *)v13[10];
    v12 = v16;
  }
  while ( v13 );
  return 0LL;
}
