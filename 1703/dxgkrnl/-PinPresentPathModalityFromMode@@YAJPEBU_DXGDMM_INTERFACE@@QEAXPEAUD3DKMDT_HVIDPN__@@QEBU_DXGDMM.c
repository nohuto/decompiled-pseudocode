/*
 * XREFs of ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C018E094
 * Callers:
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C018EF8C (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0003A50 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C00A4ED8 (ConvertGdiScalingToDMMScaling.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00AB1FC (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00AE210 (DxgkGetGlobalRawmodeFlag.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00F1AB4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1C018DCE8 (-ConvertD3DddiRotationToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTAT.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C018DD48 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C018EA0C (-RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMD.c)
 *     DmmGetDefaultScaling @ 0x1C01D5298 (DmmGetDefaultScaling.c)
 *     DmmGetMostImportantVidPnPathTargetsFromSource @ 0x1C01D56C0 (DmmGetMostImportantVidPnPathTargetsFromSource.c)
 */

__int64 __fastcall PinPresentPathModalityFromMode(
        void (__fastcall **a1)(char *, struct D3DKMDT_HVIDPN__ *),
        char *a2,
        struct D3DKMDT_HVIDPN__ *a3,
        struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct _D3DKMT_DISPLAYMODE *a9,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a10,
        unsigned int a11,
        unsigned int a12,
        struct D3DKMDT_HVIDPN__ **a13)
{
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v19; // r14
  __int64 v20; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v21; // rbx
  __int64 v22; // rax
  const struct _D3DDDI_RATIONAL *v23; // r12
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v34; // rcx
  unsigned __int16 v35; // ax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rsi
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v51; // r9
  struct _DXGDMM_VIDPN_INTERFACE *v52; // r8
  struct D3DKMDT_HVIDPN__ *v53; // rdx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct _D3DDDI_RATIONAL v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  int v60; // eax
  __int64 Numerator; // rcx
  __int64 v62; // rcx
  unsigned int i; // edi
  unsigned __int16 v64; // ax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v65; // r14
  unsigned int j; // esi
  unsigned __int16 v67; // dx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v68; // rax
  __int64 v69; // r8
  __int64 v70; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v71; // rax
  bool GlobalRawmodeFlag; // al
  struct D3DKMDT_HVIDPN__ **v73; // r14
  int v74; // edi
  int v75; // edi
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned int k; // ebx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v79; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // r9
  __int64 v88; // rax
  struct _D3DKMT_GETPATHSMODALITY *v89[8]; // [rsp+48h] [rbp-B1h] BYREF
  __int64 v90; // [rsp+88h] [rbp-71h]
  _D3DKMDT_VIDPN_TARGET_MODE v91; // [rsp+A8h] [rbp-51h] BYREF
  unsigned __int64 v93; // [rsp+150h] [rbp+57h] BYREF
  struct D3DKMDT_HVIDPN__ *v94; // [rsp+158h] [rbp+5Fh]
  struct _DXGDMM_VIDPN_INTERFACE *v95; // [rsp+160h] [rbp+67h]

  v95 = a4;
  v94 = a3;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    *(_QWORD *)(v16 + 24) = 3612LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 3613LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 3614LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = a5;
  if ( !a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 3615LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = a6;
  if ( !a6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 3616LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = (const struct _D3DDDI_RATIONAL *)a9;
  if ( !a9 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v24 + 24) = 3617LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = a7;
  if ( a7 == -1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v26 + 24) = 3618LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !a13 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v27 + 24) = 3619LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v28 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))v21 + 15))(v19, &v93);
  v31 = v28;
  if ( v28 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    v32[3] = v25;
    v32[4] = v19;
    v32[5] = v31;
    WdLogEvent5_WdError(v32);
    return (unsigned int)v31;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v89, v93, v93);
  v35 = v90;
  if ( v90 )
    v35 = *(_WORD *)(v90 + 22);
  if ( v35 >= (unsigned __int16)v93 )
  {
    v38 = *(_QWORD *)(a2 + 268);
    MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource((DXGADAPTER *)a2);
    v37 = MostImportantVidPnPathTargetsFromSource;
    if ( MostImportantVidPnPathTargetsFromSource >= 0 )
    {
      v45 = 0;
      a7 = 0;
      if ( v93 )
      {
        v46 = 0LL;
        while ( 1 )
        {
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, v45, v42, v43);
          v48 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, unsigned int *, unsigned int *))a6
                 + 16))(
                  v19,
                  v46,
                  &a12,
                  &a11);
          v37 = v48;
          if ( v48 < 0 )
            break;
          v51 = a6;
          v52 = v95;
          v53 = v94;
          *((_DWORD *)PathDescriptor + 6) = a12;
          *((_DWORD *)PathDescriptor + 7) = a11;
          *(_QWORD *)PathDescriptor |= 0x8700000000000uLL;
          *((_QWORD *)PathDescriptor + 2) = v38;
          v54 = ConvertVidPnPathToPathDescription((DXGADAPTER *)a2, v53, v52, v51, v19, a12, a11, PathDescriptor);
          v37 = v54;
          if ( v54 < 0 )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
            v44[3] = a12;
            v44[4] = a11;
            v44[5] = v19;
            v44[6] = v37;
            goto LABEL_47;
          }
          if ( a12 == (_DWORD)v25 )
          {
            *((_DWORD *)PathDescriptor + 24) = v23->Numerator;
            *((_DWORD *)PathDescriptor + 25) = v23->Denominator;
            *((_QWORD *)PathDescriptor + 13) = *((_QWORD *)PathDescriptor + 12);
            *((_DWORD *)PathDescriptor + 29) = v23[1].Numerator;
            *((_BYTE *)PathDescriptor + 128) = (v23[5].Numerator & 0x10) != 0;
            *(_QWORD *)PathDescriptor |= 0x100uLL;
            *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
            v57 = v23[2];
            v58 = *(_QWORD *)PathDescriptor;
            *((_QWORD *)PathDescriptor + 1) |= 2uLL;
            v59 = v58 | 2;
            *(_QWORD *)PathDescriptor = v59;
            *(struct _D3DDDI_RATIONAL *)((char *)PathDescriptor + 52) = v57;
            if ( a11 == a10 )
            {
              v60 = ConvertD3DddiRotationToDmmRotation(v23[3].Denominator);
              *(_QWORD *)PathDescriptor |= 0x200uLL;
              *((_DWORD *)PathDescriptor + 33) = v60;
            }
            else
            {
              *((_DWORD *)PathDescriptor + 33) = 0;
              *(_QWORD *)PathDescriptor = v59 & 0xFFFFFFFFFFFFFDFFuLL;
            }
            if ( a11 == a10 )
              *((_DWORD *)PathDescriptor + 20) ^= (*((_DWORD *)PathDescriptor + 20) ^ v23[3].Numerator) & 7;
            *(_QWORD *)PathDescriptor |= 4uLL;
            Numerator = v23[4].Numerator;
            if ( (unsigned int)(Numerator - 1) > 1 )
            {
              if ( (*(_QWORD *)PathDescriptor & 0x40000000000LL) == 0 )
                DmmGetDefaultScaling(a2, (char *)PathDescriptor + 136);
            }
            else
            {
              ConvertGdiScalingToDMMScaling(Numerator, (_DWORD *)PathDescriptor + 34, v42, v43);
            }
            *(_QWORD *)PathDescriptor |= 0x40000000000uLL;
          }
          else
          {
            *((_QWORD *)PathDescriptor + 1) |= 0x187uLL;
          }
          v45 = a7 + 1;
          v46 = v45;
          ++a7;
          if ( v45 >= v93 )
            goto LABEL_42;
        }
        v44 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
        v44[3] = v19;
        v44[4] = v37;
      }
      else
      {
LABEL_42:
        v62 = v90;
        for ( i = 0; ; ++i )
        {
          v64 = v62 ? *(_WORD *)(v62 + 20) : 0;
          if ( i >= v64 )
            break;
          v65 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, i, v42, v43);
          if ( (*(_QWORD *)v65 & 0x4000000000000LL) != 0 )
          {
            v62 = v90;
          }
          else
          {
            for ( j = i; ; ++j )
            {
              v62 = v90;
              v67 = v90 ? *(_WORD *)(v90 + 20) : 0;
              if ( j >= v67 )
                break;
              v68 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, j, v42, v43);
              if ( CCD_TOPOLOGY::IsMatchingSource(v68, (const struct _LUID *)v65 + 2, *((_DWORD *)v65 + 6)) )
              {
                *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, j, v42, v43) + 58) = i | 0xFE548000;
                v71 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, j, v69, v70);
                *(_QWORD *)v71 |= 0x4000000000000uLL;
              }
            }
          }
        }
        GlobalRawmodeFlag = DxgkGetGlobalRawmodeFlag();
        v73 = a13;
        v74 = 0;
        if ( GlobalRawmodeFlag )
          v74 = 0x20000;
        v75 = v74 | 0x40000;
        if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v90, (__int64)a2, 1, 2, v75, (__int64)a13) >= 0 )
          goto LABEL_70;
        for ( k = 0; k < v93; ++k )
        {
          v79 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v89, k, v76, v77);
          if ( *((_DWORD *)v79 + 6) == (_DWORD)v25 )
            *((_QWORD *)v79 + 1) &= ~2uLL;
        }
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v90,
                                                     (__int64)a2,
                                                     1,
                                                     2,
                                                     v75,
                                                     (__int64)v73);
        v37 = PathModalityForAdapterWithCoreAccessHeld;
        DxgkLogCodePointPacket(
          0x1Eu,
          PathModalityForAdapterWithCoreAccessHeld,
          a8 + (v25 & 0xFFFF0000),
          0,
          *(_QWORD *)(a2 + 268));
        if ( (int)v37 >= 0 )
        {
LABEL_70:
          LODWORD(v37) = RetrievePinnedModeForTarget(v95, *v73, a10, &v91);
          if ( (int)v37 < 0 )
          {
            v88 = WdLogNewEntry5_WdAssertion(v84, v83, v85, v86);
            *(_QWORD *)(v88 + 24) = 3892LL;
            WdLogEvent5_WdAssertion(v88);
            a1[8](a2, *v73);
            *v73 = 0LL;
          }
          else
          {
            DmmCalculatePresentationVSync(&v91.VideoSignalInfo, (struct _D3DDDI_RATIONAL *)&v23[2]);
            v23[1].Denominator = DmmMapVSyncFromRationalToInteger(
                                   v23 + 2,
                                   (unsigned int)((int)(*(_DWORD *)&v91.VideoSignalInfo.AdditionalSignalInfo << 29) >> 29),
                                   0LL,
                                   v87);
          }
          goto LABEL_73;
        }
        v44 = (_QWORD *)WdLogNewEntry5_WdError(v82, v81);
        v44[3] = v37;
      }
    }
    else
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v44[3] = v25;
      v44[4] = v19;
      v44[5] = v37;
    }
LABEL_47:
    WdLogEvent5_WdError(v44);
  }
  else
  {
    v36 = WdLogNewEntry5_WdLowResource(v34);
    *(_QWORD *)(v36 + 24) = v93;
    WdLogEvent5_WdLowResource(v36);
    LODWORD(v37) = -1073741801;
  }
LABEL_73:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v89);
  return (unsigned int)v37;
}
