/*
 * XREFs of ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x180076FCC
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x180010AF4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800016A0 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_ @ 0x180077700 (SAFE_DELETE_ARRAY__CDisplaySet--LogTelemetry_--_5_--DisplayData_.c)
 *     ?IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ @ 0x180077948 (-IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x180077968 (-IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x180077980 (-IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180077994 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x180077D44 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180077F1C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180077F40 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180077F58 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x1800780E4 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180078128 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CDisplaySet::LogTelemetry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  BOOLEAN result; // al
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r8
  char *v9; // r15
  char *v10; // r14
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  int v13; // ecx
  __int64 v14; // r12
  _DWORD *v15; // rbx
  __int64 v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // xmm1_8
  int v19; // eax
  CDisplay *v20; // rcx
  CDisplay *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r10
  unsigned __int64 v24; // rbx
  int v25; // ecx
  __int64 v26; // rsi
  char *v27; // rax
  __int64 v28; // r15
  _DWORD *v29; // rbx
  __int64 v30; // rdi
  __m128i v31; // xmm0
  __int64 v32; // xmm1_8
  CDisplay *v33; // rcx
  CDisplay *v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r10
  LPCGUID v37; // r8
  LPCGUID v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  int AdapterPopulationUniqueness; // [rsp+30h] [rbp-D0h] BYREF
  int v42; // [rsp+34h] [rbp-CCh] BYREF
  int v43; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v44; // [rsp+3Ch] [rbp-C4h] BYREF
  int v45; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+44h] [rbp-BCh] BYREF
  int v47; // [rsp+48h] [rbp-B8h] BYREF
  int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  char *v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+58h] [rbp-A8h]
  char *v51; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  int v53; // [rsp+80h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  GUID *v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  int *v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  _DWORD *v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  char *v63; // [rsp+F0h] [rbp-10h]
  _DWORD v64[2]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  char *v67; // [rsp+110h] [rbp+10h]
  _DWORD v68[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  int *v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  int *p_AdapterPopulationUniqueness; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  int *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  int *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  ULONG *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]

  v43 = a3;
  v3 = a2;
  v50 = a2;
  result = TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000000000uLL);
  v7 = 0LL;
  if ( result )
  {
    v49 = 0LL;
    v8 = -1LL;
    AdapterPopulationUniqueness = 0;
    v45 = -1;
    v9 = 0LL;
    v47 = -1;
    v10 = 0LL;
    v51 = 0LL;
    v11 = 0LL;
    v46 = -1;
    v48 = -1;
    if ( a1 )
    {
      v12 = *(unsigned int *)(a1 + 72);
      v13 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
      v47 = *(_DWORD *)(a1 + 4);
      v45 = v13;
      if ( (_DWORD)v12 )
      {
        v14 = (unsigned int)v12;
        v49 = (char *)operator new(saturated_mul(v12, 0x5CuLL));
        v9 = v49;
        if ( v49 )
        {
          AdapterPopulationUniqueness = 92 * v12;
          v15 = v49 + 88;
          do
          {
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + v11);
            *((_QWORD *)v15 - 11) = (unsigned int)*(_QWORD *)(v16 + 224) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v16 + 224)) << 32);
            *(v15 - 20) = *(_DWORD *)(v16 + 232);
            *(v15 - 19) = *(_DWORD *)CDisplay::GetDisplayId(v16, &v44);
            *(v15 - 18) = *(_DWORD *)(v16 + 240);
            v17 = *(__m128i *)(v16 + 260);
            v18 = *(_QWORD *)(v16 + 276);
            v53 = *(_DWORD *)(v16 + 284);
            *(v15 - 17) = _mm_cvtsi128_si32(v17);
            *(v15 - 16) = v17.m128i_i32[1];
            v52 = v18;
            *(v15 - 14) = _mm_srli_si128(v17, 8).m128i_i32[1];
            *((_BYTE *)v15 - 52) = v52;
            *((_BYTE *)v15 - 51) = v53;
            *((_BYTE *)v15 - 50) = BYTE4(v52);
            *(v15 - 15) = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8));
            *((_BYTE *)v15 - 49) = *(_BYTE *)(v16 + 292);
            *(v15 - 12) = *(_DWORD *)(v16 + 96);
            *(v15 - 11) = *(_DWORD *)(v16 + 100);
            *(v15 - 10) = *(_DWORD *)(v16 + 104) - *(_DWORD *)(v16 + 96);
            *(v15 - 9) = *(_DWORD *)(v16 + 108) - *(_DWORD *)(v16 + 100);
            *(v15 - 8) = *(_DWORD *)(v16 + 64);
            *(v15 - 7) = *(_DWORD *)(v16 + 68);
            *(v15 - 6) = *(_DWORD *)(v16 + 72) - *(_DWORD *)(v16 + 64);
            *(v15 - 5) = *(_DWORD *)(v16 + 76) - *(_DWORD *)(v16 + 68);
            *(v15 - 4) = *(_DWORD *)(v16 + 80);
            *(v15 - 3) = *(_DWORD *)(v16 + 84);
            *(v15 - 2) = *(_DWORD *)(v16 + 88) - *(_DWORD *)(v16 + 80);
            v19 = *(_DWORD *)(v16 + 92) - *(_DWORD *)(v16 + 84);
            *v15 = 0;
            *(v15 - 1) = v19;
            if ( CDisplay::NeedsDesktopMoves((CDisplay *)v16) )
              *v15 = 1;
            if ( *(_BYTE *)(v16 + 208) == 1 )
              *v15 |= 2u;
            if ( CDisplay::IsPrimary(v20) )
              *v15 |= 4u;
            if ( *(_QWORD *)(v16 + 128) != v16 )
              *v15 |= 8u;
            if ( *(_BYTE *)(v16 + 306) == 1 )
              *v15 |= 0x10u;
            if ( *(_BYTE *)(v16 + 305) == 1 )
              *v15 |= 0x20u;
            if ( CDisplay::HasVirtualModeScale(v21) )
              *v15 |= 0x40u;
            if ( ((unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(v23, v22) ^ 1) == 1 )
              *v15 |= 0x80u;
            if ( CDisplay::ShouldTripleBuffer((CDisplay *)v16) )
              *v15 |= 0x100u;
            if ( *(_BYTE *)(v16 + 296) == 1 )
              *v15 |= 0x200u;
            if ( CDisplay::HasDDAChanged((CDisplay *)v16) )
              *v15 |= 0x400u;
            if ( *(_BYTE *)(v16 + 308) && *(_BYTE *)(v16 + 305) )
              *v15 |= 0x800u;
            if ( *(_BYTE *)(v16 + 297) == 1 )
              *v15 |= 0x1000u;
            if ( CDisplay::IsDesktopPlaneSplitEnabled((CDisplay *)v16) )
              *v15 |= 0x2000u;
            if ( *(int *)(v16 + 248) < 2000 )
              *v15 |= 0x4000u;
            if ( CDisplay::IsOldIntelOverlayDriver((CDisplay *)v16) )
              *v15 |= 0x8000u;
            if ( CDisplay::IsOldQualcommOverlayDriver((CDisplay *)v16) )
              *v15 |= 0x10000u;
            v11 += 8LL;
            v15 += 23;
            --v14;
          }
          while ( v14 );
          v3 = v50;
          LODWORD(v11) = 0;
        }
        v7 = 0LL;
        v8 = -1LL;
      }
    }
    if ( v3 )
    {
      v24 = *(unsigned int *)(v3 + 72);
      v25 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 56LL);
      v48 = *(_DWORD *)(v3 + 4);
      v46 = v25;
      if ( (_DWORD)v24 )
      {
        v26 = (unsigned int)v24;
        v27 = (char *)operator new(saturated_mul(v24, 0x5CuLL));
        v51 = v27;
        v10 = v27;
        if ( v27 )
        {
          LODWORD(v11) = 92 * v24;
          v28 = v50;
          v29 = v27 + 88;
          do
          {
            v30 = *(_QWORD *)(v7 + *(_QWORD *)(v28 + 48));
            *((_QWORD *)v29 - 11) = (unsigned int)*(_QWORD *)(v30 + 224) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v30 + 224)) << 32);
            *(v29 - 20) = *(_DWORD *)(v30 + 232);
            *(v29 - 19) = *(_DWORD *)CDisplay::GetDisplayId(v30, &v44);
            *(v29 - 18) = *(_DWORD *)(v30 + 240);
            v31 = *(__m128i *)(v30 + 260);
            v32 = *(_QWORD *)(v30 + 276);
            v53 = *(_DWORD *)(v30 + 284);
            *(v29 - 17) = _mm_cvtsi128_si32(v31);
            *(v29 - 16) = v31.m128i_i32[1];
            v52 = v32;
            *(v29 - 14) = _mm_srli_si128(v31, 8).m128i_i32[1];
            *((_BYTE *)v29 - 52) = v52;
            *((_BYTE *)v29 - 51) = v53;
            *((_BYTE *)v29 - 50) = BYTE4(v52);
            *(v29 - 15) = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
            *((_BYTE *)v29 - 49) = *(_BYTE *)(v30 + 292);
            *(v29 - 12) = *(_DWORD *)(v30 + 96);
            *(v29 - 11) = *(_DWORD *)(v30 + 100);
            *(v29 - 10) = *(_DWORD *)(v30 + 104) - *(_DWORD *)(v30 + 96);
            *(v29 - 9) = *(_DWORD *)(v30 + 108) - *(_DWORD *)(v30 + 100);
            *(v29 - 8) = *(_DWORD *)(v30 + 64);
            *(v29 - 7) = *(_DWORD *)(v30 + 68);
            *(v29 - 6) = *(_DWORD *)(v30 + 72) - *(_DWORD *)(v30 + 64);
            *(v29 - 5) = *(_DWORD *)(v30 + 76) - *(_DWORD *)(v30 + 68);
            *(v29 - 4) = *(_DWORD *)(v30 + 80);
            *(v29 - 3) = *(_DWORD *)(v30 + 84);
            *(v29 - 2) = *(_DWORD *)(v30 + 88) - *(_DWORD *)(v30 + 80);
            *(_QWORD *)(v29 - 1) = (unsigned int)(*(_DWORD *)(v30 + 92) - *(_DWORD *)(v30 + 84));
            if ( CDisplay::NeedsDesktopMoves((CDisplay *)v30) )
              *v29 = 1;
            if ( *(_BYTE *)(v30 + 208) == 1 )
              *v29 |= 2u;
            if ( CDisplay::IsPrimary(v33) )
              *v29 |= 4u;
            if ( *(_QWORD *)(v30 + 128) != v30 )
              *v29 |= 8u;
            if ( *(_BYTE *)(v30 + 306) == 1 )
              *v29 |= 0x10u;
            if ( *(_BYTE *)(v30 + 305) == 1 )
              *v29 |= 0x20u;
            if ( CDisplay::HasVirtualModeScale(v34) )
              *v29 |= 0x40u;
            if ( ((unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(v36, v35) ^ 1) == 1 )
              *v29 |= 0x80u;
            if ( CDisplay::ShouldTripleBuffer((CDisplay *)v30) )
              *v29 |= 0x100u;
            if ( *(_BYTE *)(v30 + 296) == 1 )
              *v29 |= 0x200u;
            if ( CDisplay::HasDDAChanged((CDisplay *)v30) )
              *v29 |= 0x400u;
            if ( *(_BYTE *)(v30 + 308) && *(_BYTE *)(v30 + 305) )
              *v29 |= 0x800u;
            if ( *(_BYTE *)(v30 + 297) == 1 )
              *v29 |= 0x1000u;
            if ( CDisplay::IsDesktopPlaneSplitEnabled((CDisplay *)v30) )
              *v29 |= 0x2000u;
            if ( *(int *)(v30 + 248) < 2000 )
              *v29 |= 0x4000u;
            if ( CDisplay::IsOldIntelOverlayDriver((CDisplay *)v30) )
              *v29 |= 0x8000u;
            if ( CDisplay::IsOldQualcommOverlayDriver((CDisplay *)v30) )
              *v29 |= 0x10000u;
            v7 += 8LL;
            v29 += 23;
            --v26;
          }
          while ( v26 );
          v9 = v49;
        }
      }
    }
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v42 = 1;
        v55 = &v42;
        v57 = &gDwmCoreTelemetryActivityId;
        v59 = &v43;
        v61 = v64;
        v64[0] = AdapterPopulationUniqueness;
        v65 = v68;
        v69 = &v45;
        v71 = &v46;
        v56 = 4LL;
        v58 = 16LL;
        v60 = 4LL;
        v62 = 2LL;
        v63 = v9;
        v64[1] = 0;
        v66 = 2LL;
        v67 = v10;
        v68[0] = v11;
        v68[1] = 0;
        v70 = 4LL;
        v72 = 4LL;
        AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness();
        p_AdapterPopulationUniqueness = &AdapterPopulationUniqueness;
        v75 = &v47;
        v77 = &v48;
        v74 = 4LL;
        v76 = 4LL;
        v78 = 4LL;
        v44 = GdiEntry13();
        v79 = &v44;
        v80 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180214B37, v37, v38, 0xFu, &pData);
      }
    }
    SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_(&v49, v6, v8);
    return SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_(&v51, v39, v40);
  }
  return result;
}
