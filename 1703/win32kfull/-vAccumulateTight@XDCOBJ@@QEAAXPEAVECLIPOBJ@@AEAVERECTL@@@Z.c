/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     NtGdiSetPixel @ 0x1C0073590 (NtGdiSetPixel.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00848B0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0092670 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009324C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0095864 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0095D34 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A6188 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGradientFill @ 0x1C00A9038 (GreGradientFill.c)
 *     NtGdiFrameRgn @ 0x1C011E410 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0120E28 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFastPolyPolyline @ 0x1C0121530 (NtGdiFastPolyPolyline.c)
 *     NtGdiFillRgn @ 0x1C0122720 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0126860 (NtGdiTransparentBlt.c)
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026BB04 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     NtGdiUpdateColors @ 0x1C02965B0 (NtGdiUpdateColors.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  __int64 v3; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rcx
  LONG v7; // r10d
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-28h] BYREF
  __m128i v13; // [rsp+48h] [rbp-18h] BYREF

  v3 = *(_QWORD *)this;
  v5 = *a3;
  v13 = v5;
  v6 = (*(_BYTE *)(v3 + 40) & 1) != 0 ? 8 : 0;
  v7 = _mm_cvtsi128_si32(v5) - *(_DWORD *)(v6 + v3 + 1432);
  v13.m128i_i32[0] = v7;
  v8 = v5.m128i_i32[2] - *(_DWORD *)(v6 + v3 + 1432);
  v13.m128i_i32[2] = v8;
  v9 = v5.m128i_i32[1] - *(_DWORD *)(v6 + v3 + 1436);
  v13.m128i_i32[1] = v9;
  v13.m128i_i32[3] = v5.m128i_i32[3] - *(_DWORD *)(v6 + v3 + 1436);
  if ( (*(_DWORD *)(v3 + 36) & 0x40) != 0 )
  {
    if ( *(_DWORD *)(v3 + 1496) == *(_DWORD *)(v3 + 1504) || *(_DWORD *)(v3 + 1500) == *(_DWORD *)(v3 + 1508) )
    {
      *(__m128i *)(v3 + 1496) = v13;
    }
    else
    {
      if ( v7 < *(_DWORD *)(v3 + 1496) )
      {
        *(_DWORD *)(v3 + 1496) = v7;
        v8 = v13.m128i_i32[2];
        v9 = v13.m128i_i32[1];
      }
      if ( v9 < *(_DWORD *)(v3 + 1500) )
      {
        *(_DWORD *)(v3 + 1500) = v9;
        v8 = v13.m128i_i32[2];
      }
      if ( v8 > *(_DWORD *)(v3 + 1504) )
        *(_DWORD *)(v3 + 1504) = v8;
      if ( v13.m128i_i32[3] > *(_DWORD *)(v3 + 1508) )
        *(_DWORD *)(v3 + 1508) = v13.m128i_i32[3];
    }
    v10 = *(_QWORD *)(*(_QWORD *)this + 1584LL);
    if ( v10 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v11);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v11);
      if ( v12[0] && v11[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v11, (struct _RECTL *)&v13);
        if ( RGNOBJ::bMerge((RGNOBJ *)v12, (struct RGNOBJ *)&v10, (struct RGNOBJ *)v11, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v10, (struct RGNOBJ *)v12);
          *(_QWORD *)(*(_QWORD *)this + 1584LL) = v10;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
    }
  }
}
