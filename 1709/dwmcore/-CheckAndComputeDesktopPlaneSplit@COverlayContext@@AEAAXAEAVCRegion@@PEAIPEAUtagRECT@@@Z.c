/*
 * XREFs of ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180140054
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180142220 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??0?$CMergedRectBase@$01@@QEAA@XZ @ 0x18013F7CC (--0-$CMergedRectBase@$01@@QEAA@XZ.c)
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013FB40 (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x180143D60 (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
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
  signed __int64 v11; // r8
  LONG *p_right; // rdx
  __int64 v13; // r11
  float v14; // xmm0_4
  float v15; // eax
  double v16; // xmm0_8
  int v17; // eax
  double v18; // xmm0_8
  int v19; // [rsp+20h] [rbp-49h]
  float v20; // [rsp+20h] [rbp-49h]
  _DWORD v21[4]; // [rsp+28h] [rbp-41h]
  _BYTE v22[8]; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-29h]
  _DWORD *v24; // [rsp+48h] [rbp-21h]
  __int64 v25; // [rsp+50h] [rbp-19h]
  int v26; // [rsp+58h] [rbp-11h]
  _BYTE v27[4]; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v28[36]; // [rsp+6Ch] [rbp+3h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+27h]
  float v30[4]; // [rsp+98h] [rbp+2Fh] BYREF

  CMergedRectBase<2>::CMergedRectBase<2>((CInputSinkStruct::InputQueueInfo *)v27);
  FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v22);
  while ( (unsigned __int64)v24 < v23 )
  {
    v21[1] = *v24;
    v21[3] = v24[2];
    v21[0] = *(_DWORD *)(v25 + 8LL * v26);
    v21[2] = *(_DWORD *)(v25 + 4LL * (2 * v26 + 1));
    for ( i = 0LL; i < 4; ++i )
      v30[i] = (float)(int)v21[i];
    CMergedRectBase<2>::Add((__int64)v27, v30);
    FastRegion::Internal::CRgnData::StepIterator(v9, (struct FastRegion::CRegion::Iterator *)v22);
  }
  LOBYTE(v7) = 1;
  CMergedRectBase<2>::Optimize(v27, v7);
  v10 = v29;
  if ( v29 )
  {
    v11 = v27 - (_BYTE *)a4;
    p_right = &a4->right;
    v13 = v29;
    do
    {
      v14 = *(float *)((char *)p_right + v11 - 8) + 6291456.25;
      v15 = v14;
      v16 = *(float *)((char *)p_right + v28 - (_BYTE *)a4 - 8);
      *(p_right - 2) = (int)(LODWORD(v15) << 10) >> 11;
      *(float *)&v16 = v16 + 6291456.25;
      v17 = LODWORD(v16);
      v18 = *(float *)((char *)p_right + v11);
      *(p_right - 1) = v17 << 10 >> 11;
      *(float *)&v18 = v18 + 6291456.25;
      v19 = LODWORD(v18);
      LODWORD(v18) = *(LONG *)((char *)p_right + v28 - (_BYTE *)a4);
      *p_right = v19 << 10 >> 11;
      v20 = *(float *)&v18 + 6291456.25;
      p_right[1] = (int)(LODWORD(v20) << 10) >> 11;
      p_right += 4;
      --v13;
    }
    while ( v13 );
  }
  *a3 = v10;
}
