/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18007181C
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800712CC (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18002A3E0 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18009A190 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z @ 0x1800CBF38 (-ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z.c)
 *     ?IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z @ 0x180151444 (-IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z.c)
 */

char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // si
  int v3; // r8d
  unsigned int v4; // r14d
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r8
  const struct FastRegion::Internal::CRgnData **v10; // rdx
  FastRegion::Internal::CRgnData *v11; // rcx
  bool IsEqualTo; // al
  const struct FastRegion::Internal::CRgnData *v13; // rdx

  v1 = 0;
  if ( *((_BYTE *)this + 1102) )
  {
    v1 = 1;
    *((_BYTE *)this + 1102) = 0;
  }
  if ( *((_DWORD *)this + 50) != *((_DWORD *)this + 58)
    || *((_BYTE *)this + 1099) != *((_BYTE *)this + 1100)
    || !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 528, (char *)this + 664) )
  {
    return 1;
  }
  v4 = 0;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 22);
    while ( 1 )
    {
      v7 = 240LL * v4;
      COverlayContext::ComparePlaneAttributes(
        (struct COverlayContext::OverlayPlaneInfo *)(v7 + v6),
        (struct COverlayContext::OverlayPlaneInfo *)(v7 + *((_QWORD *)this + 26)),
        (bool *)(v7 + v6 + 208),
        (bool *)(v7 + v6 + 209));
      v6 = *((_QWORD *)this + 22);
      if ( *(_BYTE *)(v7 + v6 + 208) )
        break;
      v8 = *((_QWORD *)this + 26);
      if ( *(_QWORD *)(v7 + v6 + 16) != *(_QWORD *)(v7 + v8 + 16)
        || *(_QWORD *)(v7 + v6 + 32) != *(_QWORD *)(v7 + v8 + 32)
        || *(_BYTE *)(v7 + v6 + 169) != *(_BYTE *)(v7 + v8 + 169)
        || *(_BYTE *)(v7 + v6 + 170) != *(_BYTE *)(v7 + v8 + 170)
        || *(_BYTE *)(v7 + v6 + 171) != *(_BYTE *)(v7 + v8 + 171)
        || *(_BYTE *)(v7 + v6 + 173) != *(_BYTE *)(v7 + v8 + 173)
        || operator!=((float *)(v7 + v6 + 144), (float *)(v7 + v8 + 144)) )
      {
        break;
      }
      v10 = (const struct FastRegion::Internal::CRgnData **)((*(_QWORD *)(v7 + v9 + 160) + 16LL) & -(__int64)(*(_QWORD *)(v7 + v9 + 160) != 0LL));
      v11 = *(FastRegion::Internal::CRgnData **)(*(_QWORD *)(v7 + v6 + 160) + 16LL);
      if ( *(_DWORD *)v11 )
      {
        v13 = *v10;
        if ( !*(_DWORD *)v13 )
          return 1;
        IsEqualTo = FastRegion::Internal::CRgnData::IsEqualTo(v11, v13);
      }
      else
      {
        IsEqualTo = *(_DWORD *)*v10 == 0;
      }
      if ( !IsEqualTo )
        break;
      if ( ++v4 >= *((_DWORD *)this + 50) )
        return v1;
    }
    return 1;
  }
  return v1;
}
