/*
 * XREFs of ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800C6EC0
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18001EDEC (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 * Callees:
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18001BC20 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x18001BC64 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_ @ 0x18001CF18 (SAFE_DELETE_ARRAY__CDisplaySet--LogTelemetry_--_5_--DisplayData_.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B7590 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ @ 0x1800B75A8 (-IsDesktopPlaneSplitEnabled@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800B75C8 (-IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800B75FC (-IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7868 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B7888 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x1800B7C58 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BDD8C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1800C7630 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CDisplaySet::LogTelemetry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  char *v5; // r15
  int *v6; // r14
  __int64 v7; // r13
  unsigned __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // r12
  int *v11; // rbx
  __int64 v12; // rdi
  __m128i v13; // xmm0
  __int64 v14; // xmm1_8
  int v15; // eax
  CDisplay *v16; // rcx
  int v17; // r10d
  CDisplay *v18; // rcx
  int v19; // r10d
  _DWORD *v20; // r9
  int v21; // r10d
  _DWORD *v22; // r11
  int v23; // r10d
  unsigned __int64 v24; // rbx
  int v25; // ecx
  __int64 v26; // rsi
  int *v27; // rax
  __int64 v28; // r15
  int *v29; // rbx
  __int64 v30; // r12
  __int64 v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // xmm1_8
  CDisplay *v34; // rcx
  int v35; // r10d
  CDisplay *v36; // rcx
  int v37; // r10d
  _DWORD *v38; // r9
  int v39; // r10d
  _DWORD *v40; // r11
  int v41; // r10d
  int AdapterPopulationUniqueness; // [rsp+30h] [rbp-D0h] BYREF
  int v43; // [rsp+34h] [rbp-CCh] BYREF
  int v44; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v45; // [rsp+3Ch] [rbp-C4h] BYREF
  int v46; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+44h] [rbp-BCh] BYREF
  int v48; // [rsp+48h] [rbp-B8h] BYREF
  int v49; // [rsp+4Ch] [rbp-B4h] BYREF
  char *v50; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h]
  int *v52; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+78h] [rbp-88h]
  int v54; // [rsp+80h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  GUID *v59; // [rsp+C0h] [rbp-40h]
  int v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+CCh] [rbp-34h]
  int *v62; // [rsp+D0h] [rbp-30h]
  int v63; // [rsp+D8h] [rbp-28h]
  int v64; // [rsp+DCh] [rbp-24h]
  _DWORD *v65; // [rsp+E0h] [rbp-20h]
  int v66; // [rsp+E8h] [rbp-18h]
  int v67; // [rsp+ECh] [rbp-14h]
  char *v68; // [rsp+F0h] [rbp-10h]
  _DWORD v69[2]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v70; // [rsp+100h] [rbp+0h]
  int v71; // [rsp+108h] [rbp+8h]
  int v72; // [rsp+10Ch] [rbp+Ch]
  int *v73; // [rsp+110h] [rbp+10h]
  _DWORD v74[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v75; // [rsp+120h] [rbp+20h]
  int v76; // [rsp+128h] [rbp+28h]
  int v77; // [rsp+12Ch] [rbp+2Ch]
  int *v78; // [rsp+130h] [rbp+30h]
  int v79; // [rsp+138h] [rbp+38h]
  int v80; // [rsp+13Ch] [rbp+3Ch]
  int *p_AdapterPopulationUniqueness; // [rsp+140h] [rbp+40h]
  __int64 v82; // [rsp+148h] [rbp+48h]
  int *v83; // [rsp+150h] [rbp+50h]
  __int64 v84; // [rsp+158h] [rbp+58h]
  int *v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  ULONG *v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]

  v44 = a3;
  v3 = a2;
  v51 = a2;
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1802D3FA0, 4u, 0x400000000000uLL) )
  {
    v5 = 0LL;
    AdapterPopulationUniqueness = 0;
    v6 = 0LL;
    v7 = 0LL;
    v50 = 0LL;
    v46 = -1;
    v48 = -1;
    v52 = 0LL;
    v47 = -1;
    v49 = -1;
    if ( a1 )
    {
      v8 = *(unsigned int *)(a1 + 72);
      v9 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
      v48 = *(_DWORD *)(a1 + 4);
      v46 = v9;
      if ( (_DWORD)v8 )
      {
        v10 = (unsigned int)v8;
        v50 = (char *)operator new(saturated_mul(v8, 0x5CuLL));
        v5 = v50;
        if ( v50 )
        {
          AdapterPopulationUniqueness = 92 * v8;
          v11 = (int *)(v50 + 88);
          do
          {
            v12 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + v7);
            *((_QWORD *)v11 - 11) = (unsigned int)*(_QWORD *)(v12 + 248) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v12 + 248)) << 32);
            *(v11 - 20) = *(_DWORD *)(v12 + 256);
            *(v11 - 19) = *CDisplay::GetDisplayId(v12, &v45);
            *(v11 - 18) = *(_DWORD *)(v12 + 260);
            v13 = *(__m128i *)(v12 + 280);
            v14 = *(_QWORD *)(v12 + 296);
            v54 = *(_DWORD *)(v12 + 304);
            *(v11 - 17) = _mm_cvtsi128_si32(v13);
            *(v11 - 16) = v13.m128i_i32[1];
            v53 = v14;
            *(v11 - 14) = _mm_srli_si128(v13, 8).m128i_i32[1];
            *((_BYTE *)v11 - 52) = v53;
            *((_BYTE *)v11 - 51) = v54;
            *((_BYTE *)v11 - 50) = BYTE4(v53);
            *(v11 - 15) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
            *((_BYTE *)v11 - 49) = *(_BYTE *)(v12 + 312);
            *(v11 - 12) = *(_DWORD *)(v12 + 120);
            *(v11 - 11) = *(_DWORD *)(v12 + 124);
            *(v11 - 10) = *(_DWORD *)(v12 + 128) - *(_DWORD *)(v12 + 120);
            *(v11 - 9) = *(_DWORD *)(v12 + 132) - *(_DWORD *)(v12 + 124);
            *(v11 - 8) = *(_DWORD *)(v12 + 88);
            *(v11 - 7) = *(_DWORD *)(v12 + 92);
            *(v11 - 6) = *(_DWORD *)(v12 + 96) - *(_DWORD *)(v12 + 88);
            *(v11 - 5) = *(_DWORD *)(v12 + 100) - *(_DWORD *)(v12 + 92);
            *(v11 - 4) = *(_DWORD *)(v12 + 104);
            *(v11 - 3) = *(_DWORD *)(v12 + 108);
            *(v11 - 2) = *(_DWORD *)(v12 + 112) - *(_DWORD *)(v12 + 104);
            v15 = *(_DWORD *)(v12 + 116) - *(_DWORD *)(v12 + 108);
            *v11 = 0;
            *(v11 - 1) = v15;
            if ( CDisplay::NeedsDesktopMoves((CDisplay *)v12) == 1 )
            {
              *v11 = 1;
              v17 = 1;
            }
            if ( *(_BYTE *)(v12 + 232) == 1 )
              *v11 = v17 | 2;
            if ( CDisplay::IsPrimary(v16) )
            {
              v19 |= 4u;
              *v11 = v19;
            }
            if ( *(_QWORD *)(v12 + 152) != v12 )
            {
              v19 |= 8u;
              *v11 = v19;
            }
            if ( *(_BYTE *)(v12 + 326) == 1 )
            {
              v19 |= 0x10u;
              *v11 = v19;
            }
            if ( *(_BYTE *)(v12 + 325) == 1 )
              *v11 = v19 | 0x20;
            if ( CDisplay::HasVirtualModeScale(v18) == 1 )
              *v11 = v21 | 0x40;
            if ( ((unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(v22, v20) ^ 1) == 1 )
              *v11 = v23 | 0x80;
            if ( CDisplay::ShouldTripleBuffer((CDisplay *)v12) == 1 )
              *v11 |= 0x100u;
            if ( *(_BYTE *)(v12 + 316) == 1 )
              *v11 |= 0x200u;
            if ( CDisplay::HasDDAChanged((CDisplay *)v12) )
              *v11 |= 0x400u;
            if ( *(_BYTE *)(v12 + 328) && *(_BYTE *)(v12 + 325) )
              *v11 |= 0x800u;
            if ( *(_BYTE *)(v12 + 317) == 1 )
              *v11 |= 0x1000u;
            if ( CDisplay::IsDesktopPlaneSplitEnabled((CDisplay *)v12) )
              *v11 |= 0x2000u;
            if ( *(int *)(v12 + 268) < 2000 )
              *v11 |= 0x4000u;
            if ( CDisplay::IsOldIntelOverlayDriver((CDisplay *)v12) )
              *v11 |= 0x8000u;
            if ( CDisplay::IsOldQualcommOverlayDriver((CDisplay *)v12) )
              *v11 |= 0x10000u;
            v7 += 8LL;
            v11 += 23;
            --v10;
          }
          while ( v10 );
          v3 = v51;
          LODWORD(v7) = 0;
        }
      }
    }
    if ( v3 )
    {
      v24 = *(unsigned int *)(v3 + 72);
      v25 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 56LL);
      v49 = *(_DWORD *)(v3 + 4);
      v47 = v25;
      if ( (_DWORD)v24 )
      {
        v26 = (unsigned int)v24;
        v27 = (int *)operator new(saturated_mul(v24, 0x5CuLL));
        v52 = v27;
        v6 = v27;
        if ( v27 )
        {
          LODWORD(v7) = 92 * v24;
          v28 = v51;
          v29 = v27 + 22;
          v30 = 0LL;
          do
          {
            v31 = *(_QWORD *)(v30 + *(_QWORD *)(v28 + 48));
            *((_QWORD *)v29 - 11) = (unsigned int)*(_QWORD *)(v31 + 248) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v31 + 248)) << 32);
            *(v29 - 20) = *(_DWORD *)(v31 + 256);
            *(v29 - 19) = *CDisplay::GetDisplayId(v31, &v45);
            *(v29 - 18) = *(_DWORD *)(v31 + 260);
            v32 = *(__m128i *)(v31 + 280);
            v33 = *(_QWORD *)(v31 + 296);
            v54 = *(_DWORD *)(v31 + 304);
            *(v29 - 17) = _mm_cvtsi128_si32(v32);
            *(v29 - 16) = v32.m128i_i32[1];
            v53 = v33;
            *(v29 - 14) = _mm_srli_si128(v32, 8).m128i_i32[1];
            *((_BYTE *)v29 - 52) = v53;
            *((_BYTE *)v29 - 51) = v54;
            *((_BYTE *)v29 - 50) = BYTE4(v53);
            *(v29 - 15) = _mm_cvtsi128_si32(_mm_srli_si128(v32, 8));
            *((_BYTE *)v29 - 49) = *(_BYTE *)(v31 + 312);
            *(v29 - 12) = *(_DWORD *)(v31 + 120);
            *(v29 - 11) = *(_DWORD *)(v31 + 124);
            *(v29 - 10) = *(_DWORD *)(v31 + 128) - *(_DWORD *)(v31 + 120);
            *(v29 - 9) = *(_DWORD *)(v31 + 132) - *(_DWORD *)(v31 + 124);
            *(v29 - 8) = *(_DWORD *)(v31 + 88);
            *(v29 - 7) = *(_DWORD *)(v31 + 92);
            *(v29 - 6) = *(_DWORD *)(v31 + 96) - *(_DWORD *)(v31 + 88);
            *(v29 - 5) = *(_DWORD *)(v31 + 100) - *(_DWORD *)(v31 + 92);
            *(v29 - 4) = *(_DWORD *)(v31 + 104);
            *(v29 - 3) = *(_DWORD *)(v31 + 108);
            *(v29 - 2) = *(_DWORD *)(v31 + 112) - *(_DWORD *)(v31 + 104);
            *(_QWORD *)(v29 - 1) = (unsigned int)(*(_DWORD *)(v31 + 116) - *(_DWORD *)(v31 + 108));
            if ( CDisplay::NeedsDesktopMoves((CDisplay *)v31) == 1 )
            {
              *v29 = 1;
              v35 = 1;
            }
            if ( *(_BYTE *)(v31 + 232) == 1 )
              *v29 = v35 | 2;
            if ( CDisplay::IsPrimary(v34) )
            {
              v37 |= 4u;
              *v29 = v37;
            }
            if ( *(_QWORD *)(v31 + 152) != v31 )
            {
              v37 |= 8u;
              *v29 = v37;
            }
            if ( *(_BYTE *)(v31 + 326) == 1 )
            {
              v37 |= 0x10u;
              *v29 = v37;
            }
            if ( *(_BYTE *)(v31 + 325) == 1 )
              *v29 = v37 | 0x20;
            if ( CDisplay::HasVirtualModeScale(v36) == 1 )
              *v29 = v39 | 0x40;
            if ( ((unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(v40, v38) ^ 1) == 1 )
              *v29 = v41 | 0x80;
            if ( CDisplay::ShouldTripleBuffer((CDisplay *)v31) == 1 )
              *v29 |= 0x100u;
            if ( *(_BYTE *)(v31 + 316) == 1 )
              *v29 |= 0x200u;
            if ( CDisplay::HasDDAChanged((CDisplay *)v31) )
              *v29 |= 0x400u;
            if ( *(_BYTE *)(v31 + 328) && *(_BYTE *)(v31 + 325) )
              *v29 |= 0x800u;
            if ( *(_BYTE *)(v31 + 317) == 1 )
              *v29 |= 0x1000u;
            if ( CDisplay::IsDesktopPlaneSplitEnabled((CDisplay *)v31) )
              *v29 |= 0x2000u;
            if ( *(int *)(v31 + 268) < 2000 )
              *v29 |= 0x4000u;
            if ( CDisplay::IsOldIntelOverlayDriver((CDisplay *)v31) )
              *v29 |= 0x8000u;
            if ( CDisplay::IsOldQualcommOverlayDriver((CDisplay *)v31) )
              *v29 |= 0x10000u;
            v30 += 8LL;
            v29 += 23;
            --v26;
          }
          while ( v26 );
          v5 = v50;
        }
      }
    }
    if ( dword_1802D3FA0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FA0, 0x400000000000uLL) )
      {
        v58 = 0;
        v61 = 0;
        v64 = 0;
        v67 = 0;
        v69[1] = 0;
        v72 = 0;
        v74[1] = 0;
        v77 = 0;
        v80 = 0;
        v56 = &v43;
        v59 = &gDwmCoreTelemetryActivityId;
        v62 = &v44;
        v65 = v69;
        v69[0] = AdapterPopulationUniqueness;
        v70 = v74;
        v75 = &v46;
        v78 = &v47;
        v43 = 1;
        v57 = 4;
        v60 = 16;
        v63 = 4;
        v66 = 2;
        v68 = v5;
        v71 = 2;
        v73 = v6;
        v74[0] = v7;
        v76 = 4;
        v79 = 4;
        AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness();
        p_AdapterPopulationUniqueness = &AdapterPopulationUniqueness;
        v83 = &v48;
        v85 = &v49;
        v82 = 4LL;
        v84 = 4LL;
        v86 = 4LL;
        v45 = GdiEntry13();
        v87 = &v45;
        v88 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FA0, &unk_1802A9AD2, 0LL, 0LL, 0xFu, &pData);
      }
    }
    SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_((void **)&v50);
    SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_((void **)&v52);
  }
}
