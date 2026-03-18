/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x1800671AC
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068020 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800BDAEC (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180141638 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z @ 0x1801435E0 (-IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z.c)
 */

char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // al
  bool v3; // r15
  int v4; // r8d
  unsigned int v5; // r14d
  char v6; // bl
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r8
  const struct FastRegion::Internal::CRgnData **v12; // rdx
  FastRegion::Internal::CRgnData *v13; // rcx
  bool IsEqualTo; // al
  const struct FastRegion::Internal::CRgnData *v15; // rdx

  v1 = *((_BYTE *)this + 1188);
  if ( v1 )
    *((_BYTE *)this + 1188) = 0;
  v3 = v1 != 0;
  if ( *((_DWORD *)this + 52) != *((_DWORD *)this + 60)
    || *((_BYTE *)this + 1185) != *((_BYTE *)this + 1186)
    || !CMILMatrix::IsEqualTo<0>((float *)this + 146, (float *)this + 180) )
  {
    return 1;
  }
  v5 = 0;
  v6 = v3;
  if ( v4 )
  {
    v8 = *((_QWORD *)this + 23);
    v6 = 1;
    while ( 1 )
    {
      v9 = 248LL * v5;
      COverlayContext::ComparePlaneAttributes(
        (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v9 + v8 + 40),
        (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v9 + *((_QWORD *)this + 27) + 40LL),
        (bool *)(v9 + v8 + 216),
        (bool *)(v9 + v8 + 217));
      v8 = *((_QWORD *)this + 23);
      if ( *(_BYTE *)(v9 + v8 + 216) )
        break;
      v10 = *((_QWORD *)this + 27);
      if ( *(_QWORD *)(v9 + v8 + 16) != *(_QWORD *)(v9 + v10 + 16)
        || *(_QWORD *)(v9 + v8 + 32) != *(_QWORD *)(v9 + v10 + 32)
        || *(_BYTE *)(v9 + v8 + 177) != *(_BYTE *)(v9 + v10 + 177)
        || *(_BYTE *)(v9 + v8 + 178) != *(_BYTE *)(v9 + v10 + 178)
        || *(_BYTE *)(v9 + v8 + 179) != *(_BYTE *)(v9 + v10 + 179)
        || *(_BYTE *)(v9 + v8 + 181) != *(_BYTE *)(v9 + v10 + 181)
        || (unsigned __int8)operator!=(v9 + v8 + 152) )
      {
        break;
      }
      v12 = (const struct FastRegion::Internal::CRgnData **)((*(_QWORD *)(v9 + v11 + 168) + 16LL) & -(__int64)(*(_QWORD *)(v9 + v11 + 168) != 0LL));
      v13 = *(FastRegion::Internal::CRgnData **)(*(_QWORD *)(v9 + v8 + 168) + 16LL);
      if ( *(_DWORD *)v13 )
      {
        v15 = *v12;
        if ( !*(_DWORD *)v15 )
          return v6;
        IsEqualTo = FastRegion::Internal::CRgnData::IsEqualTo(v13, v15);
      }
      else
      {
        IsEqualTo = *(_DWORD *)*v12 == 0;
      }
      if ( !IsEqualTo )
        break;
      if ( ++v5 >= *((_DWORD *)this + 52) )
        return v3;
    }
  }
  return v6;
}
