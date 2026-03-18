/*
 * XREFs of ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180163C70
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801655F0 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??0?$CMergedRectBase@$01@@QEAA@XZ @ 0x1801636F4 (--0-$CMergedRectBase@$01@@QEAA@XZ.c)
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180163770 (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x1801672F4 (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 */

void __fastcall COverlayContext::CheckAndComputeDesktopPlaneSplit(
        COverlayContext *this,
        FastRegion::Internal::CRgnData **a2,
        unsigned int *a3,
        struct tagRECT *a4)
{
  __int64 v7; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v9; // rcx
  unsigned int v10; // ecx
  signed __int64 v11; // rdx
  signed __int64 v12; // r8
  LONG *p_right; // r9
  __int64 v14; // r10
  float v15; // xmm0_4
  float v16; // eax
  double v17; // xmm0_8
  int v18; // eax
  double v19; // xmm0_8
  int v20; // [rsp+20h] [rbp-49h]
  float v21; // [rsp+20h] [rbp-49h]
  _DWORD v22[4]; // [rsp+28h] [rbp-41h]
  _BYTE v23[8]; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-29h]
  _DWORD *v25; // [rsp+48h] [rbp-21h]
  __int64 v26; // [rsp+50h] [rbp-19h]
  int v27; // [rsp+58h] [rbp-11h]
  _BYTE v28[4]; // [rsp+68h] [rbp-1h] BYREF
  char v29; // [rsp+6Ch] [rbp+3h] BYREF
  unsigned int v30; // [rsp+90h] [rbp+27h]
  struct D2D_RECT_F v31; // [rsp+98h] [rbp+2Fh] BYREF

  CMergedRectBase<2>::CMergedRectBase<2>((CInputSinkStruct::InputQueueInfo *)v28);
  FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v23);
  while ( (unsigned __int64)v25 < v24 )
  {
    v22[1] = *v25;
    v22[3] = v25[2];
    v22[0] = *(_DWORD *)(v26 + 8LL * v27);
    v22[2] = *(_DWORD *)(v26 + 4LL * (2 * v27 + 1));
    for ( i = 0LL; i < 4; ++i )
      *(float *)((char *)&v31.left + i * 4) = (float)(int)v22[i];
    CMergedRectBase<2>::Add((__int64)v28, &v31);
    FastRegion::Internal::CRgnData::StepIterator(v9, (struct FastRegion::CRegion::Iterator *)v23);
  }
  LOBYTE(v7) = 1;
  CMergedRectBase<2>::Optimize(v28, v7);
  v10 = v30;
  if ( v30 )
  {
    v11 = v28 - (_BYTE *)a4;
    v12 = &v29 - (char *)a4;
    p_right = &a4->right;
    v14 = v30;
    do
    {
      v15 = *(float *)((char *)p_right + v11 - 8) + 6291456.25;
      v16 = v15;
      v17 = *(float *)((char *)p_right + v12 - 8);
      *(p_right - 2) = (int)(LODWORD(v16) << 10) >> 11;
      *(float *)&v17 = v17 + 6291456.25;
      v18 = LODWORD(v17);
      v19 = *(float *)((char *)p_right + v11);
      *(p_right - 1) = v18 << 10 >> 11;
      *(float *)&v19 = v19 + 6291456.25;
      v20 = LODWORD(v19);
      LODWORD(v19) = *(LONG *)((char *)p_right + v12);
      *p_right = v20 << 10 >> 11;
      v21 = *(float *)&v19 + 6291456.25;
      p_right[1] = (int)(LODWORD(v21) << 10) >> 11;
      p_right += 4;
      --v14;
    }
    while ( v14 );
  }
  *a3 = v10;
}
