/*
 * XREFs of ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800C83C0
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800712CC (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveUnbackedSurfaces@COverlayContext@@CAXAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800C8610 (-RemoveUnbackedSurfaces@COverlayContext@@CAXAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@.c)
 *     ?RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z @ 0x1800CC1A8 (-RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?RemoveAt@?$DynArray@PEAUMoveOptimizationInfo@@$0A@@@QEAAJI@Z @ 0x18014E124 (-RemoveAt@-$DynArray@PEAUMoveOptimizationInfo@@$0A@@@QEAAJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDesktopPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUDesktopPlaneInfo@COverlayContext@@I@Z @ 0x18014E7C8 (-AddMultipleAndSet@-$DynArray@UDesktopPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUDesktopPlaneInf.c)
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEAUOverlayPlaneInfo@1@@Z @ 0x18015003C (-CheckPaddingCorrectness@COverlayContext@@CA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContex.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180150374 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 *     ?GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@1@Z @ 0x180150CF4 (-GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCont.c)
 *     ?InsertAt@?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180151090 (-InsertAt@-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@CO.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x180151648 (-IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151FA8 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::DeriveCheckCandidatesList(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  int v6; // edi
  char v7; // r10
  unsigned int v8; // esi
  unsigned int v9; // r12d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int i; // r15d
  __int64 v14; // rcx
  unsigned int j; // r8d
  __m128i *v16; // rdx
  __m128i *v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  char v20; // r13
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v24; // rdx
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // r15d
  unsigned int v28; // esi
  __int64 v29; // r9
  __m128i **v30; // r8
  __m128i *v31; // r15
  __m128i *v32; // r15
  bool v34; // si
  __int64 v35; // r8
  bool v36; // al
  _QWORD *v37; // r10
  char v38; // r11
  bool v39; // r13
  char v40; // al
  int v41; // edx
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  int v45; // eax
  bool v46; // zf
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  unsigned int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // r12d
  unsigned int k; // esi
  __int64 v54; // rcx
  int ContextCandidates; // eax
  char *v56; // rcx
  int v57; // eax
  unsigned int v58; // r15d
  __int64 v59; // rdx
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  int v65; // eax
  unsigned int v66; // [rsp+44h] [rbp-BCh] BYREF
  bool v67; // [rsp+48h] [rbp-B8h]
  __int64 v68; // [rsp+50h] [rbp-B0h]
  int v69; // [rsp+58h] [rbp-A8h]
  __int64 v70; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v71; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v72; // [rsp+78h] [rbp-88h]
  int v73; // [rsp+80h] [rbp-80h]
  __int64 v74; // [rsp+84h] [rbp-7Ch]
  _BYTE v75[32]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v76[2]; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v77; // [rsp+C0h] [rbp-40h]
  char *v78; // [rsp+F0h] [rbp-10h]
  _OWORD v79[6]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v80; // [rsp+160h] [rbp+60h]
  char v81; // [rsp+168h] [rbp+68h]
  __int64 v82[2]; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v83[12]; // [rsp+180h] [rbp+80h]

  v78 = (char *)a3;
  v5 = a2;
  v68 = a2;
  v6 = 0;
  v7 = 0;
  if ( !*(_BYTE *)a3 )
  {
    v73 = 4;
    v8 = 0;
    v71 = v75;
    v74 = 4LL;
    v72 = v75;
    LOBYTE(v69) = 0;
    v76[0] = 0LL;
    v76[1] = 0LL;
    if ( *((_DWORD *)a1 + 6) )
    {
      v9 = v66;
      do
      {
        v10 = *(_QWORD *)(*a1 + 8LL * v8);
        *(_QWORD *)(v10 + 1120) = 0LL;
        *(_QWORD *)(v10 + 1128) = 0LL;
        v11 = *(_QWORD *)(*a1 + 8LL * v8);
        *(_BYTE *)(v11 + 1135) = *(_BYTE *)(v11 + 1099);
        v12 = *(_QWORD *)(*a1 + 8LL * v8) + 272LL;
        *(_DWORD *)(v12 + 24) = 0;
        DynArrayImpl<0>::ShrinkToSize(v12, 0x70u);
        for ( i = 0; ; ++i )
        {
          v14 = *(_QWORD *)(*a1 + 8LL * v8);
          if ( i >= *(_DWORD *)(v14 + 200) )
            break;
          v24 = 240LL * i;
          *(_DWORD *)(*(_QWORD *)(v14 + 176) + v24 + 216) = i;
          v70 = v24 + *(_QWORD *)(*(_QWORD *)(*a1 + 8LL * v8) + 176LL);
          v25 = HIDWORD(v74) + 1;
          if ( (unsigned int)(HIDWORD(v74) + 1) >= HIDWORD(v74) )
            v9 = HIDWORD(v74) + 1;
          v6 = v25 < HIDWORD(v74) ? 0x80070216 : 0;
          if ( v25 < HIDWORD(v74) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
          }
          else if ( v9 > (unsigned int)v74 )
          {
            v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v71, 8u, 1, &v70);
            v6 = v26;
            if ( v26 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
          }
          else
          {
            v71[HIDWORD(v74)] = v70;
            HIDWORD(v74) = v9;
          }
          if ( v6 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x7C5u);
            goto LABEL_40;
          }
        }
        ++v8;
      }
      while ( v8 < *((_DWORD *)a1 + 6) );
      if ( HIDWORD(v74) )
      {
        do
        {
          v66 = 0;
          v27 = 0;
          v28 = 1;
          if ( HIDWORD(v74) > 1 )
          {
            do
            {
              if ( COverlayContext::IsHigherProprity(
                     (struct COverlayContext::OverlayPlaneInfo *)v71[v28],
                     (struct COverlayContext::OverlayPlaneInfo *)v71[v27]) )
              {
                v27 = v28;
              }
              ++v28;
            }
            while ( v28 < HIDWORD(v74) );
            v66 = v27;
          }
          v29 = v27;
          v70 = v27;
          v30 = (__m128i **)v71[v27];
          v31 = *v30;
          v77 = (*v30)[8];
          if ( (_mm_srli_si128(v77, 8).m128i_i32[1] & 0x2000) != 0 )
            v32 = (__m128i *)v76;
          else
            v32 = v31 + 70;
          if ( v32->m128i_i32[0] >= (unsigned int)(v77.m128i_i32[0] - 1) )
            goto LABEL_84;
          if ( !(*((_BYTE *)v30 + 168)
               ? v32->m128i_i32[2] < (unsigned __int32)v77.m128i_i32[2]
               : v32->m128i_i32[1] < (unsigned int)(v77.m128i_i32[1] - 1)) )
            goto LABEL_84;
          v34 = 1;
          v67 = COverlayContext::RequiresFrontPlane((struct COverlayContext::OverlayPlaneInfo *)v30);
          v36 = COverlayContext::RectContainsRect((struct tagRECT *)(v35 + 60), (struct tagRECT *)(v35 + 76));
          v39 = v36;
          if ( v38 )
          {
            v34 = v36;
          }
          else if ( !v36 || (_BYTE)v69 )
          {
            v40 = COverlayContext::CheckPaddingCorrectness(v68, v30);
            v37 = v71;
            v38 = v67;
            v29 = v70;
            v34 = v40 != 0;
          }
          if ( *((_DWORD *)a1 + 6) > 1u )
          {
            v41 = 0;
            if ( *(_DWORD *)(v68 + 24) )
            {
              v30 = *(__m128i ***)v68;
              v29 = *(_QWORD *)(v37[v29] + 16LL);
              while ( v29 != v30[v41][1].m128i_i64[0] )
              {
                if ( (unsigned int)++v41 >= *(_DWORD *)(v68 + 24) )
                  goto LABEL_64;
              }
              v34 = 0;
            }
          }
LABEL_64:
          if ( !v34 )
            goto LABEL_84;
          v42 = (__int64 *)v37[v70];
          v43 = *v42;
          if ( *(_BYTE *)(*v42 + 1133) )
          {
            if ( v38 != *(_BYTE *)(v43 + 1132) )
              v34 = 0;
          }
          else
          {
            *(_BYTE *)(v43 + 1132) = v38;
            v37 = v71;
          }
          if ( v34 )
          {
            v46 = !v39;
            v5 = v68;
            v30 = 0LL;
            v44 = v70;
            v45 = (unsigned __int8)v69;
            if ( v46 )
              v45 = 1;
            v46 = *(_DWORD *)(v68 + 24) == 0;
            v69 = v45;
            while ( !v46 )
            {
              v47 = v37[v70];
              v29 = *(_QWORD *)(*(_QWORD *)v68 + 8LL * (unsigned int)v30);
              if ( *(_QWORD *)v47 == *(_QWORD *)v29 && *(_DWORD *)(v47 + 216) < *(_DWORD *)(v29 + 216) )
                break;
              v30 = (__m128i **)(unsigned int)((_DWORD)v30 + 1);
              v46 = (_DWORD)v30 == *(_DWORD *)(v68 + 24);
              if ( (unsigned int)v30 > *(_DWORD *)(v68 + 24) )
                goto LABEL_81;
            }
            v48 = DynArray<COverlayContext::OverlayPlaneInfo *,0>::InsertAt(v68, &v37[v70], v30, v29);
            v6 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x844u);
              goto LABEL_40;
            }
            v37 = v71;
LABEL_81:
            *(_BYTE *)(*(_QWORD *)v37[v44] + 1133LL) = 1;
            ++v32->m128i_i32[0];
            if ( *(_BYTE *)(v71[v44] + 168LL) )
              ++v32->m128i_i32[2];
            else
              ++v32->m128i_i32[1];
          }
          else
          {
LABEL_84:
            v5 = v68;
          }
          DynArray<MoveOptimizationInfo *,0>::RemoveAt(&v71, v66, v30, v29);
        }
        while ( HIDWORD(v74) );
      }
      else
      {
        v5 = v68;
      }
    }
    COverlayContext::RemoveUnbackedSurfaces(v5);
    for ( j = 0; j < *((_DWORD *)a1 + 6); ++j )
    {
      v16 = *(__m128i **)(*a1 + 8LL * j);
      v17 = (__m128i *)v76;
      v77 = v16[8];
      if ( (_mm_srli_si128(v77, 8).m128i_i32[1] & 0x2000) == 0 )
        v17 = v16 + 70;
      if ( CCommonRegistryData::m_fEnableDesktopPlaneSplit )
      {
        if ( v16[8].m128i_i32[0] > 2u && v16[8].m128i_i32[1] > 2u )
        {
          v49 = v16[4].m128i_i64[1];
          if ( *(_DWORD *)(v49 + 248) == 1297040209
            && *(int *)(v49 + 244) >= 2000
            && v16[68].m128i_i8[15]
            && v16[70].m128i_i8[13]
            && v17->m128i_i32[0] < (unsigned int)(v77.m128i_i32[0] - 1)
            && v17->m128i_i32[1] < (unsigned int)(v77.m128i_i32[1] - 1) )
          {
            v16[70].m128i_i8[14] = 1;
          }
        }
      }
    }
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v71);
    v7 = 0;
    goto LABEL_16;
  }
  LOBYTE(a4) = 1;
  v50 = 0;
  if ( !*((_DWORD *)a1 + 6) )
  {
LABEL_104:
    v52 = -1;
    if ( *(_DWORD *)(v5 + 24) )
    {
      v52 = 0;
      for ( k = 1; k < *(_DWORD *)(v5 + 24); ++k )
      {
        if ( !COverlayContext::IsHigherProprity(
                *(struct COverlayContext::OverlayPlaneInfo **)(*(_QWORD *)v5 + 8LL * k),
                *(struct COverlayContext::OverlayPlaneInfo **)(*(_QWORD *)v5 + 8LL * v52)) )
          v52 = k;
      }
    }
    DynArray<MoveOptimizationInfo *,0>::RemoveAt(v5, v52, a3, a4);
    COverlayContext::RemoveUnbackedSurfaces(v5);
    v7 = 0;
    goto LABEL_16;
  }
  do
  {
    a3 = *(_QWORD *)(*a1 + 8LL * v50);
    v51 = *(_DWORD *)(a3 + 296);
    if ( v51 > 1 )
    {
      *(_BYTE *)(a3 + 1134) = 0;
LABEL_101:
      LOBYTE(a4) = 0;
      goto LABEL_102;
    }
    if ( v51 && *(_BYTE *)(*(_QWORD *)(a3 + 272) + 104LL) )
    {
      *(_BYTE *)(a3 + 1135) = 0;
      goto LABEL_101;
    }
LABEL_102:
    ++v50;
  }
  while ( v50 < *((_DWORD *)a1 + 6) );
  if ( (_BYTE)a4 )
    goto LABEL_104;
LABEL_16:
  v18 = *((_DWORD *)a1 + 6);
  v19 = 0;
  if ( v18 )
  {
    while ( !*(_BYTE *)(*(_QWORD *)(*a1 + 8LL * v19) + 1135LL) )
    {
      if ( ++v19 >= v18 )
        goto LABEL_19;
    }
    v7 = 1;
  }
LABEL_19:
  if ( *(_DWORD *)(v5 + 24) || (v20 = 0, v7) )
    v20 = 1;
  v21 = 0;
  if ( !v18 )
  {
LABEL_24:
    *v78 = v20;
    return (unsigned int)v6;
  }
  while ( 2 )
  {
    v22 = *(_QWORD *)(*a1 + 8LL * v21) + 272LL;
    *(_DWORD *)(v22 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v22, 0x70u);
    if ( !v20 )
    {
LABEL_23:
      if ( ++v21 >= *((_DWORD *)a1 + 6) )
        goto LABEL_24;
      continue;
    }
    break;
  }
  v66 = 0;
  memset_0(v82, 0, 0xD0uLL);
  v54 = *a1;
  v71 = v75;
  v72 = v75;
  v73 = 4;
  v74 = 4LL;
  ContextCandidates = COverlayContext::GetContextCandidates(*(_QWORD *)(v54 + 8LL * v21), v68, &v71);
  v6 = ContextCandidates;
  if ( ContextCandidates < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ContextCandidates, 0x8C4u);
    goto LABEL_40;
  }
  v56 = *(char **)(*a1 + 8LL * v21);
  v57 = COverlayContext::DeriveDesktopPlaneAttributes((COverlayContext *)v56, v56[1134], (__int64)&v66, (__int64)v82);
  v6 = v57;
  if ( v57 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x8CBu);
    goto LABEL_40;
  }
  v58 = 0;
  if ( !v66 )
  {
LABEL_116:
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v71);
    goto LABEL_23;
  }
  while ( 1 )
  {
    v59 = *a1;
    v81 = *(_BYTE *)(*(_QWORD *)(*a1 + 8LL * v21) + 1135LL);
    v60 = *(_OWORD *)((char *)v83 + 104 * v58);
    v79[0] = *(_OWORD *)&v82[13 * v58];
    v61 = *(_OWORD *)((char *)&v83[1] + 104 * v58);
    v79[1] = v60;
    v62 = *(_OWORD *)((char *)&v83[2] + 104 * v58);
    v79[2] = v61;
    v63 = *(_OWORD *)((char *)&v83[3] + 104 * v58);
    v79[3] = v62;
    v64 = *(_OWORD *)((char *)&v83[4] + 104 * v58);
    v79[4] = v63;
    v80 = *((_QWORD *)&v83[5] + 13 * v58);
    v79[5] = v64;
    v65 = DynArray<COverlayContext::DesktopPlaneInfo,0>::AddMultipleAndSet(*(_QWORD *)(v59 + 8LL * v21) + 272LL, v79);
    v6 = v65;
    if ( v65 < 0 )
      break;
    if ( ++v58 >= v66 )
      goto LABEL_116;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x8D6u);
LABEL_40:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v71);
  return (unsigned int)v6;
}
