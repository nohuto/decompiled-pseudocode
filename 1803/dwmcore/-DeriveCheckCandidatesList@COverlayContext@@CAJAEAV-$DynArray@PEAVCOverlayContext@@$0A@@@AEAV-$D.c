/*
 * XREFs of ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C8CB8
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveUnbackedSurfaces@COverlayContext@@CAXAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800C8F00 (-RemoveUnbackedSurfaces@COverlayContext@@CAXAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180158240 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDesktopPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUDesktopPlaneInfo@COverlayContext@@I@Z @ 0x18016389C (-AddMultipleAndSet@-$DynArray@UDesktopPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUDesktopPlaneInf.c)
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEBVOverlayPlaneInfo@1@@Z @ 0x1801651E8 (-CheckPaddingCorrectness@COverlayContext@@CA_NAEBV-$DynArray@PEAVOverlayPlaneInfo@COverlayContex.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801655F0 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlay.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180165F40 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$DynArray@PEAVOverlayPlaneInfo.c)
 *     ?GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@1@Z @ 0x180166058 (-GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?InsertAt@?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x1801663A4 (-InsertAt@-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAVOverlayPlaneInfo@CO.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180166CA8 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z @ 0x1801674FC (-RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180167810 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::DeriveCheckCandidatesList(__int64 *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v4; // r15
  unsigned int v6; // ecx
  __int64 v7; // rsi
  int v8; // edi
  char v9; // r10
  unsigned int v10; // r15d
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int i; // esi
  __int64 v17; // rcx
  unsigned int j; // r8d
  __m128i *v19; // rdx
  __m128i *v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // edx
  char v23; // r12
  unsigned int v24; // esi
  __int64 v25; // rcx
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v29; // eax
  unsigned int v30; // r15d
  unsigned int v31; // esi
  char v32; // si
  __int64 v33; // r12
  __m128i *v34; // r15
  __m128i *v35; // r15
  __int64 v36; // r8
  __int64 v37; // r8
  _BYTE *v38; // r9
  char v39; // r11
  bool v40; // r13
  char v41; // cl
  char v42; // al
  unsigned int v43; // edx
  __int64 *v44; // rax
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // r8
  bool v48; // zf
  __int64 v49; // rdx
  __int64 v50; // r10
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  unsigned int LowestPriorityOverlayCandidateIndex; // eax
  unsigned int v55; // edx
  __int64 v56; // r8
  __int64 v57; // rcx
  int ContextCandidates; // eax
  char *v59; // rcx
  int v60; // eax
  unsigned int v61; // r15d
  __int64 v62; // rdx
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  int v69; // eax
  bool v70; // [rsp+41h] [rbp-BFh]
  __int64 v71; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+50h] [rbp-B0h]
  int v73; // [rsp+58h] [rbp-A8h]
  _BYTE *v74; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v75; // [rsp+68h] [rbp-98h]
  int v76; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+74h] [rbp-8Ch]
  _BYTE v78[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v79[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-50h]
  __m128i v81; // [rsp+B8h] [rbp-48h]
  char *v82; // [rsp+E8h] [rbp-18h]
  _OWORD v83[7]; // [rsp+F0h] [rbp-10h] BYREF
  char v84; // [rsp+160h] [rbp+60h]
  __int64 v85[2]; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v86[13]; // [rsp+180h] [rbp+80h]

  v80 = a2;
  v4 = a2;
  v82 = a4;
  v6 = *((_DWORD *)a1 + 6);
  v7 = a3;
  v72 = a3;
  v8 = 0;
  v9 = 0;
  if ( *a4 )
  {
    v52 = 0LL;
    if ( v6 )
    {
      while ( 1 )
      {
        v53 = *(_QWORD *)(*a1 + 8LL * (unsigned int)v52);
        if ( *(_DWORD *)(v53 + 312) > 1u )
          break;
        v52 = (unsigned int)(v52 + 1);
        if ( (unsigned int)v52 >= v6 )
          goto LABEL_99;
      }
      *(_BYTE *)(v53 + 1230) = 0;
    }
    else
    {
LABEL_99:
      if ( *(_DWORD *)(v7 + 24) )
      {
        LowestPriorityOverlayCandidateIndex = COverlayContext::FindLowestPriorityOverlayCandidateIndex(v7, v52);
        DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(v7, LowestPriorityOverlayCandidateIndex);
        COverlayContext::RemoveUnbackedSurfaces(v7);
        v9 = 0;
      }
      else
      {
        v55 = 0;
        if ( v6 )
        {
          while ( 1 )
          {
            v56 = *(_QWORD *)(*a1 + 8LL * v55);
            if ( *(_DWORD *)(v56 + 312) )
            {
              if ( *(_BYTE *)(*(_QWORD *)(v56 + 288) + 112LL) )
                break;
            }
            if ( ++v55 >= v6 )
              goto LABEL_15;
          }
          *(_BYTE *)(v56 + 1231) = 0;
        }
      }
    }
  }
  else
  {
    v76 = 4;
    v74 = v78;
    v75 = v78;
    v10 = 0;
    v77 = 4LL;
    LOBYTE(v73) = 0;
    v79[0] = 0LL;
    v79[1] = 0LL;
    if ( v6 )
    {
      v11 = *a1;
      v12 = v71;
      do
      {
        v13 = *(_QWORD *)(v11 + 8LL * v10);
        *(_QWORD *)(v13 + 1216) = 0LL;
        *(_QWORD *)(v13 + 1224) = 0LL;
        v14 = *(_QWORD *)(*a1 + 8LL * v10);
        *(_BYTE *)(v14 + 1231) = *(_BYTE *)(v14 + 1197);
        v15 = *(_QWORD *)(*a1 + 8LL * v10) + 288LL;
        *(_DWORD *)(v15 + 24) = 0;
        DynArrayImpl<0>::ShrinkToSize(v15, 0x78u);
        for ( i = 0; ; ++i )
        {
          v11 = *a1;
          v17 = *(_QWORD *)(*a1 + 8LL * v10);
          if ( i >= *(_DWORD *)(v17 + 216) )
            break;
          v27 = 248LL * i;
          *(_DWORD *)(*(_QWORD *)(v17 + 192) + v27 + 224) = i;
          v71 = v27 + *(_QWORD *)(*(_QWORD *)(*a1 + 8LL * v10) + 192LL);
          v28 = HIDWORD(v77) + 1;
          if ( (unsigned int)(HIDWORD(v77) + 1) >= HIDWORD(v77) )
            v12 = HIDWORD(v77) + 1;
          v8 = v28 < HIDWORD(v77) ? 0x80070216 : 0;
          if ( v28 < HIDWORD(v77) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
          }
          else if ( v12 > (unsigned int)v77 )
          {
            v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v74, 8u, 1, &v71);
            v8 = v29;
            if ( v29 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC0u);
          }
          else
          {
            *(_QWORD *)&v74[8 * HIDWORD(v77)] = v71;
            HIDWORD(v77) = v12;
          }
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x891u);
            goto LABEL_40;
          }
        }
        ++v10;
      }
      while ( v10 < *((_DWORD *)a1 + 6) );
      if ( HIDWORD(v77) )
      {
        do
        {
          LODWORD(v71) = 0;
          v30 = 0;
          v31 = 1;
          if ( HIDWORD(v77) > 1 )
          {
            do
            {
              if ( COverlayContext::IsHigherProprity(
                     *(const struct COverlayContext::OverlayPlaneInfo **)&v74[8 * v31],
                     *(const struct COverlayContext::OverlayPlaneInfo **)&v74[8 * v30]) )
              {
                v30 = v31;
              }
              ++v31;
            }
            while ( v31 < HIDWORD(v77) );
            LODWORD(v71) = v30;
          }
          v32 = 0;
          v33 = v30;
          v34 = **(__m128i ***)&v74[8 * v30];
          v81 = v34[9];
          if ( (_mm_srli_si128(v81, 8).m128i_i32[1] & 0x2000) != 0 )
            v35 = (__m128i *)v79;
          else
            v35 = v34 + 76;
          if ( v35->m128i_i32[0] < (unsigned int)(v81.m128i_i32[0] - *(_DWORD *)(v80 + 24) - 1) )
          {
            if ( *(_BYTE *)(*(_QWORD *)&v74[8 * v33] + 176LL) )
            {
              if ( v35->m128i_i32[2] < (unsigned __int32)v81.m128i_i32[2] )
                v32 = 1;
            }
            else
            {
              v32 = v35->m128i_i32[1] < (unsigned int)(v81.m128i_i32[1] - 1);
            }
          }
          if ( !v32 )
            goto LABEL_86;
          v70 = COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*(COverlayContext::OverlayPlaneInfo **)&v74[8 * v33]);
          v40 = !COverlayContext::RectContainsRect(
                   (const struct tagRECT *)(v36 + 60),
                   (const struct tagRECT *)(v36 + 76));
          if ( v39 )
          {
            v41 = 0;
            if ( !v40 )
              v41 = v32;
            v32 = v41;
          }
          else if ( v40 || (_BYTE)v73 )
          {
            v42 = COverlayContext::CheckPaddingCorrectness(v72, v37);
            v38 = v74;
            v39 = v70;
            v32 = v42 != 0 ? v32 : 0;
          }
          if ( *((_DWORD *)a1 + 6) > 1u )
          {
            v43 = 0;
            if ( *(_DWORD *)(v72 + 24) )
            {
              while ( *(_QWORD *)(*(_QWORD *)&v38[8 * v33] + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v72 + 8LL * v43)
                                                                                + 16LL) )
              {
                if ( ++v43 >= *(_DWORD *)(v72 + 24) )
                  goto LABEL_66;
              }
              v32 = 0;
            }
          }
LABEL_66:
          if ( v32 )
          {
            v44 = *(__int64 **)&v38[8 * v33];
            v45 = *v44;
            if ( *(_BYTE *)(*v44 + 1229) )
            {
              if ( v39 != *(_BYTE *)(v45 + 1228) )
                v32 = 0;
            }
            else
            {
              *(_BYTE *)(v45 + 1228) = v39;
              v38 = v74;
            }
            v48 = v32 == 0;
            v7 = v72;
            if ( !v48 )
            {
              v46 = (unsigned __int8)v73;
              v47 = 0LL;
              if ( v40 )
                v46 = 1;
              v48 = *(_DWORD *)(v72 + 24) == 0;
              v73 = v46;
              while ( !v48 )
              {
                v49 = *(_QWORD *)&v38[8 * v33];
                v50 = *(_QWORD *)(*(_QWORD *)v72 + 8LL * (unsigned int)v47);
                if ( *(_QWORD *)v49 == *(_QWORD *)v50 && *(_DWORD *)(v49 + 224) < *(_DWORD *)(v50 + 224) )
                  break;
                v47 = (unsigned int)(v47 + 1);
                v48 = (_DWORD)v47 == *(_DWORD *)(v72 + 24);
                if ( (unsigned int)v47 > *(_DWORD *)(v72 + 24) )
                  goto LABEL_83;
              }
              v51 = DynArray<COverlayContext::OverlayPlaneInfo *,0>::InsertAt(v72, &v38[8 * v33], v47);
              v8 = v51;
              if ( v51 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x913u);
                goto LABEL_40;
              }
              v38 = v74;
LABEL_83:
              *(_BYTE *)(**(_QWORD **)&v38[8 * v33] + 1229LL) = 1;
              ++v35->m128i_i32[0];
              if ( *(_BYTE *)(*(_QWORD *)&v74[8 * v33] + 176LL) )
                ++v35->m128i_i32[2];
              else
                ++v35->m128i_i32[1];
            }
          }
          else
          {
LABEL_86:
            v7 = v72;
          }
          DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(&v74, (unsigned int)v71);
        }
        while ( HIDWORD(v77) );
      }
      else
      {
        v7 = v72;
      }
    }
    COverlayContext::RemoveUnbackedSurfaces(v7);
    for ( j = 0; j < *((_DWORD *)a1 + 6); ++j )
    {
      v19 = *(__m128i **)(*a1 + 8LL * j);
      v20 = (__m128i *)v79;
      v81 = v19[9];
      if ( (_mm_srli_si128(v81, 8).m128i_i32[1] & 0x2000) == 0 )
        v20 = v19 + 76;
      if ( v19[74].m128i_i8[0]
        && v19[9].m128i_i32[0] > 2u
        && v19[9].m128i_i32[1] > 2u
        && v19[75].m128i_i8[1]
        && v19[76].m128i_i8[13]
        && v20->m128i_i32[0] < (unsigned int)(v81.m128i_i32[0] - 1)
        && v20->m128i_i32[1] < (unsigned int)(v81.m128i_i32[1] - 1) )
      {
        v19[76].m128i_i8[14] = 1;
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v74);
    v9 = 0;
    v4 = v80;
  }
LABEL_15:
  v21 = *((_DWORD *)a1 + 6);
  v22 = 0;
  if ( v21 )
  {
    while ( !*(_BYTE *)(*(_QWORD *)(*a1 + 8LL * v22) + 1231LL) )
    {
      if ( ++v22 >= v21 )
        goto LABEL_18;
    }
    v9 = 1;
  }
LABEL_18:
  if ( *(_DWORD *)(v7 + 24) || *(_DWORD *)(v4 + 24) || (v23 = 0, v9) )
    v23 = 1;
  v24 = 0;
  if ( !v21 )
  {
LABEL_24:
    *v82 = v23;
    return (unsigned int)v8;
  }
  while ( 1 )
  {
    v25 = *(_QWORD *)(*a1 + 8LL * v24) + 288LL;
    *(_DWORD *)(v25 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v25, 0x78u);
    if ( v23 )
      break;
LABEL_23:
    if ( ++v24 >= *((_DWORD *)a1 + 6) )
      goto LABEL_24;
  }
  LODWORD(v71) = 0;
  memset_0(v85, 0, 0xE0uLL);
  v57 = *a1;
  v74 = v78;
  v75 = v78;
  v76 = 4;
  v77 = 4LL;
  ContextCandidates = COverlayContext::GetContextCandidates(*(_QWORD *)(v57 + 8LL * v24), v72, &v74);
  v8 = ContextCandidates;
  if ( ContextCandidates < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ContextCandidates, 0x9A3u);
    goto LABEL_40;
  }
  v59 = *(char **)(*a1 + 8LL * v24);
  v60 = COverlayContext::DeriveDesktopPlaneAttributes(
          (COverlayContext *)v59,
          v59[1231],
          v59[1230],
          (__int64)&v71,
          (__int64)v85);
  v8 = v60;
  if ( v60 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x9ABu);
    goto LABEL_40;
  }
  v61 = 0;
  if ( !(_DWORD)v71 )
  {
LABEL_114:
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v74);
    goto LABEL_23;
  }
  while ( 1 )
  {
    v62 = *a1;
    v84 = *(_BYTE *)(*(_QWORD *)(*a1 + 8LL * v24) + 1231LL);
    v63 = v86[7 * v61];
    v83[0] = *(_OWORD *)&v85[14 * v61];
    v64 = v86[7 * v61 + 1];
    v83[1] = v63;
    v65 = v86[7 * v61 + 2];
    v83[2] = v64;
    v66 = v86[7 * v61 + 3];
    v83[3] = v65;
    v67 = v86[7 * v61 + 4];
    v83[4] = v66;
    v68 = v86[7 * v61 + 5];
    v83[5] = v67;
    v83[6] = v68;
    v69 = DynArray<COverlayContext::DesktopPlaneInfo,0>::AddMultipleAndSet(*(_QWORD *)(v62 + 8LL * v24) + 288LL, v83);
    v8 = v69;
    if ( v69 < 0 )
      break;
    if ( ++v61 >= (unsigned int)v71 )
      goto LABEL_114;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x9B6u);
LABEL_40:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v74);
  return (unsigned int)v8;
}
