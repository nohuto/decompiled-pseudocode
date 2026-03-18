/*
 * XREFs of ?ContributeRegionToDirty@CHwFullScreenRenderTarget@@CAJAEBVCRegion@@AEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x1801F1DD4
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x18007C100 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009DEA8 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ContributeRegionToDirty(
        FastRegion::Internal::CRgnData **a1,
        const struct CMILMatrix *a2,
        struct CDirtyRegion *a3)
{
  FastRegion::Internal::CRgnData *v3; // rcx
  __int64 i; // rax
  int v7; // eax
  FastRegion::Internal::CRgnData *v8; // rcx
  unsigned int v9; // ebx
  _DWORD v11[4]; // [rsp+20h] [rbp-29h]
  _BYTE v12[8]; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-11h]
  _DWORD *v14; // [rsp+40h] [rbp-9h]
  __int64 v15; // [rsp+48h] [rbp-1h]
  int v16; // [rsp+50h] [rbp+7h]
  _DWORD v17[4]; // [rsp+60h] [rbp+17h] BYREF
  float v18[4]; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v3 = *a1;
  if ( *(_DWORD *)v3 )
  {
    FastRegion::Internal::CRgnData::BeginIterator(v3, (struct FastRegion::CRegion::Iterator *)v12);
    while ( (unsigned __int64)v14 < v13 )
    {
      v11[1] = *v14;
      v11[3] = v14[2];
      v11[0] = *(_DWORD *)(v15 + 8LL * v16);
      v11[2] = *(_DWORD *)(v15 + 4LL * (2 * v16 + 1));
      for ( i = 0LL; i < 4; ++i )
        *(float *)&v17[i] = (float)(int)v11[i];
      CMILMatrix::Transform2DBoundsHelper<0>(a2, (__int64)v17, v18);
      v7 = CDirtyRegion::Add(a3, 0LL, 0LL, v18);
      v9 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x370,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
          (const char *)(unsigned int)v7);
        return v9;
      }
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v12);
    }
  }
  return 0LL;
}
