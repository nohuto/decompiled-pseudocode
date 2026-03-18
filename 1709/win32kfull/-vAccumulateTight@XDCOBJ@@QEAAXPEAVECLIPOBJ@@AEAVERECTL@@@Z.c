/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0002190 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C000EEB0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0016100 (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C001BC9C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001C124 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C001C99C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C001E104 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     NtGdiSetPixel @ 0x1C002AA00 (NtGdiSetPixel.c)
 *     GreGradientFill @ 0x1C00B54F8 (GreGradientFill.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E7D30 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 *     NtGdiFrameRgn @ 0x1C012A6A0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C012B6D0 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C012C5F0 (NtGdiFillRgn.c)
 *     NtGdiTransparentBlt @ 0x1C012CEF0 (NtGdiTransparentBlt.c)
 *     NtGdiFastPolyPolyline @ 0x1C0135E10 (NtGdiFastPolyPolyline.c)
 *     NtGdiUpdateColors @ 0x1C0292C60 (NtGdiUpdateColors.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  _DWORD *v3; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rax
  LONG v7; // r9d
  int v8; // ecx
  int v9; // r8d
  LONG v10; // r10d
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-28h] BYREF
  __m128i v14; // [rsp+48h] [rbp-18h] BYREF

  v3 = *(_DWORD **)this;
  v5 = *a3;
  v14 = v5;
  v6 = v3[10] & 1;
  v7 = _mm_cvtsi128_si32(v5) - v3[2 * v6 + 358];
  v14.m128i_i32[0] = v7;
  v8 = v5.m128i_i32[2] - v3[2 * v6 + 358];
  v14.m128i_i32[2] = v8;
  v9 = v5.m128i_i32[1] - v3[2 * v6 + 359];
  v14.m128i_i32[1] = v9;
  v14.m128i_i32[3] = v5.m128i_i32[3] - v3[2 * v6 + 359];
  if ( (v3[9] & 0x40) != 0 )
  {
    v10 = v3[374];
    if ( v10 == v3[376] || v3[375] == v3[377] )
    {
      *(__m128i *)(v3 + 374) = v14;
    }
    else
    {
      if ( v7 < v10 )
      {
        v3[374] = v7;
        v8 = v14.m128i_i32[2];
        v9 = v14.m128i_i32[1];
      }
      if ( v9 < v3[375] )
      {
        v3[375] = v9;
        v8 = v14.m128i_i32[2];
      }
      if ( v8 > v3[376] )
        v3[376] = v8;
      if ( v14.m128i_i32[3] > v3[377] )
        v3[377] = v14.m128i_i32[3];
    }
    v11 = *(_QWORD *)(*(_QWORD *)this + 1584LL);
    if ( v11 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
      if ( v13[0] && v12[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v12, (struct _RECTL *)&v14);
        if ( RGNOBJ::bMerge((RGNOBJ *)v13, (struct RGNOBJ *)&v11, (struct RGNOBJ *)v12, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v11, (struct RGNOBJ *)v13);
          *(_QWORD *)(*(_QWORD *)this + 1584LL) = v11;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
    }
  }
}
