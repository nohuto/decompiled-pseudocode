/*
 * XREFs of ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180141A60
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068020 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?DesktopPlaneSplitEnabled@COverlayContext@@AEBA_NXZ @ 0x18011BBF8 (-DesktopPlaneSplitEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180134600 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDesktopPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUDesktopPlaneInfo@COverlayContext@@I@Z @ 0x18013FC6C (-AddMultipleAndSet@-$DynArray@UDesktopPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUDesktopPlaneInf.c)
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEBVOverlayPlaneInfo@1@@Z @ 0x180141588 (-CheckPaddingCorrectness@COverlayContext@@CA_NAEBV-$DynArray@PEAVOverlayPlaneInfo@COverlayContex.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180142220 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlay.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180142B38 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$DynArray@PEAVOverlayPlaneInfo.c)
 *     ?GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@1@Z @ 0x180142C1C (-GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?InsertAt@?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180142F70 (-InsertAt@-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAVOverlayPlaneInfo@CO.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180143720 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z @ 0x1801442A8 (-RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z.c)
 *     ?RemoveUnbackedSurfaces@COverlayContext@@CAXAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180144674 (-RemoveUnbackedSurfaces@COverlayContext@@CAXAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180144750 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::DeriveCheckCandidatesList(__int64 *a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v5; // r12
  __int64 v6; // r15
  signed int ContextCandidates; // edi
  char v8; // r10
  unsigned int v9; // esi
  unsigned int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int i; // r15d
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // eax
  signed int v18; // eax
  unsigned int v19; // r13d
  unsigned int j; // esi
  char v21; // si
  COverlayContext::OverlayPlaneInfo *v22; // r8
  __int64 v23; // r15
  _DWORD *v24; // r15
  __int64 v25; // r8
  bool v26; // al
  __int64 v27; // r8
  _QWORD *v28; // r9
  __int64 v29; // r11
  char v30; // cl
  bool v31; // r12
  char v32; // r10
  char v33; // al
  unsigned int v34; // edx
  __int64 v35; // r8
  __int64 *v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // r10
  signed int v42; // eax
  unsigned int k; // edx
  __int64 v44; // rcx
  int v45; // edx
  _BYTE *v46; // rcx
  _DWORD *v47; // r8
  char v48; // r9
  __int64 v49; // r8
  unsigned int v50; // eax
  unsigned int LowestPriorityOverlayCandidateIndex; // eax
  unsigned int v52; // r8d
  unsigned int v53; // edx
  char v54; // r12
  unsigned int v55; // esi
  __int64 v56; // rcx
  __int64 v57; // rcx
  char *v58; // rcx
  unsigned int v59; // r8d
  unsigned int v60; // r15d
  __int64 v61; // rdx
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  char v69; // [rsp+40h] [rbp-C0h]
  unsigned int v70; // [rsp+44h] [rbp-BCh] BYREF
  bool v71; // [rsp+48h] [rbp-B8h]
  __int64 v72; // [rsp+50h] [rbp-B0h]
  __int64 v73; // [rsp+58h] [rbp-A8h]
  _QWORD *v74; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v75; // [rsp+68h] [rbp-98h]
  int v76; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+74h] [rbp-8Ch]
  _BYTE v78[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v79[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v81; // [rsp+B8h] [rbp-48h]
  char *v82; // [rsp+E8h] [rbp-18h]
  _OWORD v83[7]; // [rsp+F0h] [rbp-10h] BYREF
  char v84; // [rsp+160h] [rbp+60h]
  __int64 v85[2]; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v86[13]; // [rsp+180h] [rbp+80h]

  v82 = a4;
  v5 = a3;
  v72 = a3;
  v71 = CCommonRegistryData::m_dwOverlayTestMode < 2;
  v73 = a2;
  v6 = a2;
  ContextCandidates = 0;
  v8 = 0;
  if ( !*a4 )
  {
    v76 = 4;
    v9 = 0;
    v74 = v78;
    v77 = 4LL;
    v75 = v78;
    LOBYTE(v70) = 0;
    v79[0] = 0LL;
    v79[1] = 0LL;
    if ( *((_DWORD *)a1 + 6) )
    {
      v10 = v70;
      do
      {
        v11 = *(_QWORD *)(*a1 + 8LL * v9);
        *(_QWORD *)(v11 + 1208) = 0LL;
        *(_QWORD *)(v11 + 1216) = 0LL;
        v12 = *(_QWORD *)(*a1 + 8LL * v9);
        *(_BYTE *)(v12 + 1223) = *(_BYTE *)(v12 + 1185);
        v13 = *(_QWORD *)(*a1 + 8LL * v9) + 280LL;
        *(_DWORD *)(v13 + 24) = 0;
        DynArrayImpl<0>::ShrinkToSize(v13, 0x78u);
        for ( i = 0; ; ++i )
        {
          v15 = *(_QWORD *)(*a1 + 8LL * v9);
          if ( i >= *(_DWORD *)(v15 + 208) )
            break;
          v16 = 248LL * i;
          *(_DWORD *)(*(_QWORD *)(v15 + 184) + v16 + 224) = i;
          v80 = v16 + *(_QWORD *)(*(_QWORD *)(*a1 + 8LL * v9) + 184LL);
          v17 = HIDWORD(v77) + 1;
          if ( (unsigned int)(HIDWORD(v77) + 1) >= HIDWORD(v77) )
            v10 = HIDWORD(v77) + 1;
          ContextCandidates = v17 < HIDWORD(v77) ? 0x80070216 : 0;
          if ( v17 < HIDWORD(v77) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ContextCandidates, 0xB5u);
          }
          else if ( v10 > (unsigned int)v77 )
          {
            v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v74, 8u, 1, &v80);
            ContextCandidates = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0xC0u);
          }
          else
          {
            v74[HIDWORD(v77)] = v80;
            HIDWORD(v77) = v10;
          }
          if ( ContextCandidates < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ContextCandidates, 0x872u);
            goto LABEL_25;
          }
        }
        ++v9;
      }
      while ( v9 < *((_DWORD *)a1 + 6) );
      if ( HIDWORD(v77) )
      {
        do
        {
          v19 = 0;
          for ( j = 1; j < HIDWORD(v77); ++j )
          {
            if ( COverlayContext::IsHigherProprity(
                   (const struct COverlayContext::OverlayPlaneInfo *)v74[j],
                   (const struct COverlayContext::OverlayPlaneInfo *)v74[v19]) )
            {
              v19 = j;
            }
          }
          v21 = 0;
          v22 = (COverlayContext::OverlayPlaneInfo *)v74[v19];
          v23 = *(_QWORD *)v22;
          v81 = *(__m128i *)(*(_QWORD *)v22 + 140LL);
          if ( (_mm_srli_si128(v81, 8).m128i_i32[1] & 0x2000) != 0 )
            v24 = v79;
          else
            v24 = (_DWORD *)(v23 + 1208);
          if ( *v24 < (unsigned int)(v81.m128i_i32[0] - *(_DWORD *)(v73 + 24) - 1) )
          {
            if ( *((_BYTE *)v22 + 176) )
            {
              if ( v24[2] < v81.m128i_i32[2] )
                v21 = 1;
            }
            else
            {
              v21 = v24[1] < (unsigned int)(v81.m128i_i32[1] - 1);
            }
          }
          if ( !v21 )
            goto LABEL_65;
          v69 = COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(v22);
          v26 = COverlayContext::RectContainsRect(
                  (const struct tagRECT *)(v25 + 60),
                  (const struct tagRECT *)(v25 + 76));
          v30 = 0;
          v31 = !v26;
          if ( v32 )
          {
            if ( !v31 )
              v30 = v21;
            v21 = v30;
          }
          else if ( v31 || (_BYTE)v70 )
          {
            v33 = COverlayContext::CheckPaddingCorrectness(v72, v27);
            v28 = v74;
            v29 = v19;
            v21 = v33 != 0 ? v21 : 0;
          }
          if ( *((_DWORD *)a1 + 6) > 1u && (v34 = 0, *(_DWORD *)(v72 + 24)) )
          {
            while ( *(_QWORD *)(v28[v29] + 16LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v72 + 8LL * v34) + 16LL) )
            {
              if ( ++v34 >= *(_DWORD *)(v72 + 24) )
                goto LABEL_44;
            }
            v35 = 0LL;
            v21 = 0;
          }
          else
          {
LABEL_44:
            v35 = 0LL;
          }
          if ( !v21 )
            goto LABEL_65;
          v36 = (__int64 *)v28[v29];
          v37 = *v36;
          if ( *(_BYTE *)(*v36 + 1221) )
          {
            if ( v69 != *(_BYTE *)(v37 + 1220) )
              v21 = 0;
          }
          else
          {
            *(_BYTE *)(v37 + 1220) = v69;
            v28 = v74;
          }
          if ( v21 )
          {
            v39 = !v31;
            v5 = v72;
            v38 = (unsigned __int8)v70;
            if ( !v39 )
              v38 = 1;
            v70 = v38;
            v39 = *(_DWORD *)(v72 + 24) == 0;
            while ( !v39 )
            {
              v40 = v28[v29];
              v41 = *(_QWORD *)(*(_QWORD *)v72 + 8 * v35);
              if ( *(_QWORD *)v40 == *(_QWORD *)v41 && *(_DWORD *)(v40 + 224) < *(_DWORD *)(v41 + 224) )
                break;
              v35 = (unsigned int)(v35 + 1);
              v39 = (_DWORD)v35 == *(_DWORD *)(v72 + 24);
              if ( (unsigned int)v35 > *(_DWORD *)(v72 + 24) )
                goto LABEL_62;
            }
            v42 = DynArray<COverlayContext::OverlayPlaneInfo *,0>::InsertAt(v72, &v28[v29], v35);
            ContextCandidates = v42;
            if ( v42 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v42, 0x8F4u);
              goto LABEL_25;
            }
            v28 = v74;
            v29 = v19;
LABEL_62:
            *(_BYTE *)(*(_QWORD *)v28[v29] + 1221LL) = 1;
            ++*v24;
            if ( *(_BYTE *)(v74[v29] + 176LL) )
              ++v24[2];
            else
              ++v24[1];
          }
          else
          {
LABEL_65:
            v5 = v72;
          }
          DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt((__int64 *)&v74, v19);
        }
        while ( HIDWORD(v77) );
      }
      else
      {
        v5 = v72;
      }
      v6 = v73;
    }
    COverlayContext::RemoveUnbackedSurfaces(v5);
    for ( k = 0; k < *((_DWORD *)a1 + 6); k = v45 + 1 )
    {
      v44 = *(_QWORD *)(*a1 + 8LL * k);
      v81 = *(__m128i *)(v44 + 140);
      if ( COverlayContext::DesktopPlaneSplitEnabled((COverlayContext *)v44)
        && v46[1189] != v48
        && v46[1221] != v48
        && *v47 < (unsigned int)(v81.m128i_i32[0] - 1)
        && v47[1] < (unsigned int)(v81.m128i_i32[1] - 1) )
      {
        v46[1222] = 1;
      }
    }
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v74);
    v8 = 0;
    goto LABEL_91;
  }
  LOBYTE(a4) = 1;
  v49 = 0LL;
  if ( !*((_DWORD *)a1 + 6) )
  {
LABEL_89:
    if ( *(_DWORD *)(v5 + 24) )
    {
      LowestPriorityOverlayCandidateIndex = COverlayContext::FindLowestPriorityOverlayCandidateIndex(v5, a2, v49, a4);
      DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(
        (__int64 *)v5,
        LowestPriorityOverlayCandidateIndex);
      COverlayContext::RemoveUnbackedSurfaces(v5);
      v8 = 0;
    }
    goto LABEL_91;
  }
  do
  {
    a2 = *(_QWORD *)(*a1 + 8LL * (unsigned int)v49);
    v50 = *(_DWORD *)(a2 + 304);
    if ( v50 > 1 )
    {
      *(_BYTE *)(a2 + 1222) = 0;
LABEL_86:
      LOBYTE(a4) = 0;
      goto LABEL_87;
    }
    if ( v50 && *(_BYTE *)(*(_QWORD *)(a2 + 280) + 112LL) )
    {
      *(_BYTE *)(a2 + 1223) = 0;
      goto LABEL_86;
    }
LABEL_87:
    v49 = (unsigned int)(v49 + 1);
  }
  while ( (unsigned int)v49 < *((_DWORD *)a1 + 6) );
  if ( (_BYTE)a4 )
    goto LABEL_89;
LABEL_91:
  v52 = *((_DWORD *)a1 + 6);
  v53 = 0;
  if ( v52 )
  {
    while ( !*(_BYTE *)(*(_QWORD *)(*a1 + 8LL * v53) + 1223LL) )
    {
      if ( ++v53 >= v52 )
        goto LABEL_96;
    }
    v8 = 1;
  }
LABEL_96:
  if ( *(_DWORD *)(v5 + 24) || *(_DWORD *)(v6 + 24) || (v54 = 0, v8) )
    v54 = 1;
  v55 = 0;
  if ( !v52 )
  {
LABEL_113:
    *v82 = v54;
    return (unsigned int)ContextCandidates;
  }
  while ( 2 )
  {
    v56 = *(_QWORD *)(*a1 + 8LL * v55) + 280LL;
    *(_DWORD *)(v56 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v56, 0x78u);
    if ( !v54 )
    {
LABEL_108:
      if ( ++v55 >= *((_DWORD *)a1 + 6) )
        goto LABEL_113;
      continue;
    }
    break;
  }
  v70 = 0;
  memset_0(v85, 0, 0xE0uLL);
  v57 = *a1;
  v74 = v78;
  v75 = v78;
  v76 = 4;
  v77 = 4LL;
  ContextCandidates = COverlayContext::GetContextCandidates(*(_QWORD *)(v57 + 8LL * v55), v72, &v74);
  if ( ContextCandidates < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ContextCandidates, 0x976u);
    goto LABEL_25;
  }
  v58 = *(char **)(*a1 + 8LL * v55);
  ContextCandidates = COverlayContext::DeriveDesktopPlaneAttributes(
                        (COverlayContext *)v58,
                        v58[1223],
                        v58[1222],
                        (__int64)&v70,
                        (__int64)v85);
  if ( ContextCandidates < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ContextCandidates, 0x97Eu);
    goto LABEL_25;
  }
  v60 = 0;
  if ( !v70 )
  {
LABEL_107:
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v74);
    goto LABEL_108;
  }
  while ( 1 )
  {
    v61 = *a1;
    v84 = *(_BYTE *)(*(_QWORD *)(*a1 + 8LL * v55) + 1223LL);
    v62 = v86[7 * v60];
    v83[0] = *(_OWORD *)&v85[14 * v60];
    v63 = v86[7 * v60 + 1];
    v83[1] = v62;
    v64 = v86[7 * v60 + 2];
    v83[2] = v63;
    v65 = v86[7 * v60 + 3];
    v83[3] = v64;
    v66 = v86[7 * v60 + 4];
    v83[4] = v65;
    v67 = v86[7 * v60 + 5];
    v83[5] = v66;
    v83[6] = v67;
    ContextCandidates = DynArray<COverlayContext::DesktopPlaneInfo,0>::AddMultipleAndSet(
                          *(_QWORD *)(v61 + 8LL * v55) + 280LL,
                          (__int64)v83,
                          v59);
    if ( ContextCandidates < 0 )
      break;
    if ( ++v60 >= v70 )
      goto LABEL_107;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ContextCandidates, 0x989u);
LABEL_25:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v74);
  return (unsigned int)ContextCandidates;
}
