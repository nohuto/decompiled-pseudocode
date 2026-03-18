/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x18007B4CC
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18008112C (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800A6200 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180165298 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z @ 0x180166A18 (-IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z.c)
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
  const struct FastRegion::Internal::CRgnData *v10; // rdx
  bool IsEqualTo; // al

  v1 = 0;
  if ( *((_BYTE *)this + 1200) )
  {
    v1 = 1;
    *((_BYTE *)this + 1200) = 0;
  }
  if ( *((_DWORD *)this + 54) != *((_DWORD *)this + 62)
    || *((_BYTE *)this + 1197) != *((_BYTE *)this + 1198)
    || !(unsigned __int8)CMILMatrix::IsEqualTo<0>((char *)this + 592, (char *)this + 728) )
  {
    return 1;
  }
  v4 = 0;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 24);
    while ( 1 )
    {
      v7 = 248LL * v4;
      COverlayContext::ComparePlaneAttributes(
        (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v7 + v6 + 40),
        (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v7 + *((_QWORD *)this + 28) + 40LL),
        (bool *)(v7 + v6 + 216),
        (bool *)(v7 + v6 + 217));
      v6 = *((_QWORD *)this + 24);
      if ( *(_BYTE *)(v7 + v6 + 216) )
        break;
      v8 = *((_QWORD *)this + 28);
      if ( *(_QWORD *)(v7 + v6 + 16) != *(_QWORD *)(v7 + v8 + 16)
        || *(_QWORD *)(v7 + v6 + 32) != *(_QWORD *)(v7 + v8 + 32)
        || *(_BYTE *)(v7 + v6 + 177) != *(_BYTE *)(v7 + v8 + 177)
        || *(_BYTE *)(v7 + v6 + 178) != *(_BYTE *)(v7 + v8 + 178)
        || *(_BYTE *)(v7 + v6 + 179) != *(_BYTE *)(v7 + v8 + 179)
        || *(_BYTE *)(v7 + v6 + 181) != *(_BYTE *)(v7 + v8 + 181)
        || (unsigned __int8)operator!=(v7 + v6 + 152, v7 + v8 + 152) )
      {
        break;
      }
      v10 = *(const struct FastRegion::Internal::CRgnData **)((*(_QWORD *)(v7 + v9 + 168) + 16LL) & -(__int64)(*(_QWORD *)(v7 + v9 + 168) != 0LL));
      if ( **(_DWORD **)(*(_QWORD *)(v7 + v6 + 168) + 16LL) )
      {
        if ( !*(_DWORD *)v10 )
          return 1;
        IsEqualTo = FastRegion::Internal::CRgnData::IsEqualTo(
                      *(FastRegion::Internal::CRgnData **)(*(_QWORD *)(v7 + v6 + 168) + 16LL),
                      v10);
      }
      else
      {
        IsEqualTo = *(_DWORD *)v10 == 0;
      }
      if ( !IsEqualTo )
        break;
      if ( ++v4 >= *((_DWORD *)this + 54) )
        return v1;
    }
    return 1;
  }
  return v1;
}
