/*
 * XREFs of ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x18014EAC8
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180150374 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180075160 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800751C4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ??0?$CMergedRectBase@$01@@QEAA@XZ @ 0x18014E61C (--0-$CMergedRectBase@$01@@QEAA@XZ.c)
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014E69C (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?GetRects@?$CMergedRectBase@$01@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180150DE4 (-GetRects@-$CMergedRectBase@$01@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 */

void __fastcall COverlayContext::CheckAndComputeDesktopPlaneSplit(
        COverlayContext *this,
        FastRegion::Internal::CRgnData **a2,
        unsigned int *a3,
        struct tagRECT *a4)
{
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v8; // rcx
  unsigned int v9; // ecx
  LONG *p_top; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // [rsp+20h] [rbp-49h] BYREF
  __int64 v17; // [rsp+28h] [rbp-41h] BYREF
  int v18; // [rsp+30h] [rbp-39h]
  int v19; // [rsp+34h] [rbp-35h]
  _BYTE v20[8]; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-29h]
  _DWORD *v22; // [rsp+48h] [rbp-21h]
  __int64 v23; // [rsp+50h] [rbp-19h]
  int v24; // [rsp+58h] [rbp-11h]
  float v25[4]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v26[48]; // [rsp+78h] [rbp+Fh] BYREF

  v16 = 0.0;
  CMergedRectBase<2>::CMergedRectBase<2>((CInputSinkStruct::InputQueueInfo *)v26);
  FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v20);
  while ( (unsigned __int64)v22 < v21 )
  {
    HIDWORD(v17) = *v22;
    v19 = v22[2];
    LODWORD(v17) = *(_DWORD *)(v23 + 8LL * v24);
    v18 = *(_DWORD *)(v23 + 4LL * (2 * v24 + 1));
    for ( i = 0LL; i < 4; ++i )
      v25[i] = (float)*(int *)((char *)&v17 + i * 4);
    CMergedRectBase<2>::Add((__int64)v26, v25);
    FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v20);
  }
  CMergedRectBase<2>::GetRects(v26, &v16, &v17);
  v9 = LODWORD(v16);
  if ( v16 != 0.0 )
  {
    p_top = &a4->top;
    v11 = v17 - (_QWORD)a4;
    v12 = LODWORD(v16);
    do
    {
      v13 = *(float *)((char *)p_top + v11 - 4) + 6291456.25;
      v16 = v13;
      *(p_top - 1) = (int)(LODWORD(v13) << 10) >> 11;
      v14 = *(float *)((char *)p_top + v11) + 6291456.25;
      v16 = v14;
      *p_top = (int)(LODWORD(v14) << 10) >> 11;
      v15 = *(float *)((char *)p_top + v11 + 4) + 6291456.25;
      v16 = v15;
      p_top[1] = (int)(LODWORD(v15) << 10) >> 11;
      v16 = *(float *)((char *)p_top + v11 + 8) + 6291456.25;
      p_top[2] = (int)(LODWORD(v16) << 10) >> 11;
      p_top += 4;
      --v12;
    }
    while ( v12 );
  }
  *a3 = v9;
}
