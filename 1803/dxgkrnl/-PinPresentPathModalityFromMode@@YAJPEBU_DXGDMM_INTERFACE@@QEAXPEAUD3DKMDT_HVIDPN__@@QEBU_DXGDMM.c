/*
 * XREFs of ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C019200C
 * Callers:
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0194220 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00AE6F0 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00C3E6C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00C42A8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C00D857C (ConvertGdiScalingToDMMScaling.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x1C00DEF60 (DxgkGetGlobalRawmodeFlag.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1C0191214 (-ConvertD3DddiRotationToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTAT.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0191274 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0192F5C (-RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMD.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C0212860 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0212B5C (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z @ 0x1C0212E3C (-DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z.c)
 */

__int64 __fastcall PinPresentPathModalityFromMode(
        void (__fastcall **a1)(char *, unsigned __int64),
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
  __int64 v29; // rcx
  __int64 v30; // rbx
  _QWORD *v31; // rax
  __int64 v33; // rcx
  unsigned __int16 v34; // ax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  unsigned int v41; // eax
  __int64 v42; // rsi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  bool v47; // al
  int v48; // eax
  __int64 v49; // rcx
  struct _D3DDDI_RATIONAL v50; // rax
  __int64 v51; // r8
  int v52; // eax
  __int64 v53; // rdx
  __int64 Numerator; // rcx
  __int64 v55; // rcx
  unsigned int i; // edi
  unsigned __int16 v57; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v58; // r14
  unsigned int j; // esi
  unsigned __int16 v60; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v61; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v62; // rax
  __int64 v63; // rdx
  int v64; // ebx
  struct DXGPROCESS *Current; // rax
  unsigned __int64 *v66; // r14
  int v67; // edi
  unsigned int v68; // edi
  unsigned int k; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v70; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rax
  _BYTE v75[64]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+98h] [rbp-70h]
  _D3DKMDT_VIDPN_TARGET_MODE v77; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v79; // [rsp+160h] [rbp+58h] BYREF
  struct D3DKMDT_HVIDPN__ *v80; // [rsp+168h] [rbp+60h]
  struct _DXGDMM_VIDPN_INTERFACE *v81; // [rsp+170h] [rbp+68h]

  v81 = a4;
  v80 = a3;
  if ( !a2 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 3586LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 3587LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 3588LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = a5;
  if ( !a5 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v20 + 24) = 3589LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = a6;
  if ( !a6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v22 + 24) = 3590LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = (const struct _D3DDDI_RATIONAL *)a9;
  if ( !a9 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v24 + 24) = 3591LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = a7;
  if ( a7 == -1 )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v26 + 24) = 3592LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !a13 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v27 + 24) = 3593LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v28 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))v21 + 15))(v19, &v79);
  v30 = v28;
  if ( v28 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v29);
    v31[3] = v25;
    v31[4] = v19;
    v31[5] = v30;
    WdLogEvent5_WdError(v31);
    return (unsigned int)v30;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v75, v79, v79);
  v34 = v76;
  if ( v76 )
    v34 = *(_WORD *)(v76 + 22);
  if ( v34 >= (unsigned __int16)v79 )
  {
    v37 = *(_QWORD *)(a2 + 268);
    MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource(
                                                (DXGADAPTER *)a2,
                                                a3,
                                                v25,
                                                (unsigned int *const)&a10);
    v36 = MostImportantVidPnPathTargetsFromSource;
    if ( MostImportantVidPnPathTargetsFromSource >= 0 )
    {
      v41 = 0;
      a7 = 0;
      if ( v79 )
      {
        v42 = 0LL;
        while ( 1 )
        {
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v75, v41);
          v44 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, unsigned int *, unsigned int *))a6
                 + 16))(
                  v19,
                  v42,
                  &a12,
                  &a11);
          v36 = v44;
          if ( v44 < 0 )
            break;
          v46 = a12;
          *((_DWORD *)PathDescriptor + 6) = a12;
          *((_DWORD *)PathDescriptor + 7) = a11;
          *(_QWORD *)PathDescriptor |= 0x8700000000000uLL;
          *((_QWORD *)PathDescriptor + 2) = v37;
          v47 = a12 != (_DWORD)v25 || *((_BYTE *)DXGGLOBAL::GetGlobal(v46) + 1747);
          v48 = ConvertVidPnPathToPathDescription((DXGADAPTER *)a2, v80, v81, a6, v19, a12, a11, v47, PathDescriptor);
          v36 = v48;
          if ( v48 < 0 )
          {
            v40 = (_QWORD *)WdLogNewEntry5_WdError(v49);
            v40[3] = a12;
            v40[4] = a11;
            v40[5] = v19;
            v40[6] = v36;
            goto LABEL_54;
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
            v50 = v23[2];
            *(_QWORD *)PathDescriptor |= 2uLL;
            *((_QWORD *)PathDescriptor + 1) |= 2uLL;
            *(struct _D3DDDI_RATIONAL *)((char *)PathDescriptor + 52) = v50;
            if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v49) + 1696)
              && (int)DmmGetClientVidPnTargetModeInfo(
                        a2,
                        a11,
                        0LL,
                        0LL,
                        0LL,
                        0LL,
                        (struct _D3DKMDT_2DREGION *)((char *)PathDescriptor + 44),
                        0LL) >= 0 )
            {
              *(_QWORD *)PathDescriptor |= 1uLL;
              *((_QWORD *)PathDescriptor + 1) |= 1uLL;
            }
            if ( a11 == a10 )
            {
              v52 = ConvertD3DddiRotationToDmmRotation(v23[3].Denominator);
              *(_QWORD *)PathDescriptor |= 0x200uLL;
            }
            else
            {
              *(_QWORD *)PathDescriptor &= ~0x200uLL;
              v52 = 0;
            }
            *((_DWORD *)PathDescriptor + 33) = v52;
            if ( a11 == a10 )
              *((_DWORD *)PathDescriptor + 20) ^= (*((_DWORD *)PathDescriptor + 20) ^ v23[3].Numerator) & 7;
            v53 = *(_QWORD *)PathDescriptor | 4LL;
            *(_QWORD *)PathDescriptor = v53;
            Numerator = v23[4].Numerator;
            if ( (unsigned int)(Numerator - 1) > 1 )
            {
              if ( (v53 & 0x40000000000LL) == 0 )
                DmmGetDefaultScaling(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 34);
            }
            else
            {
              ConvertGdiScalingToDMMScaling(Numerator, (_DWORD *)PathDescriptor + 34, v51);
            }
            *(_QWORD *)PathDescriptor |= 0x40000000000uLL;
          }
          else
          {
            *((_QWORD *)PathDescriptor + 1) |= *(_DWORD *)PathDescriptor & 0x820B8F;
          }
          v41 = a7 + 1;
          v42 = v41;
          ++a7;
          if ( v41 >= v79 )
            goto LABEL_49;
        }
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v45);
        v40[3] = v19;
        v40[4] = v36;
      }
      else
      {
LABEL_49:
        v55 = v76;
        for ( i = 0; ; ++i )
        {
          v57 = v55 ? *(_WORD *)(v55 + 20) : 0;
          if ( i >= v57 )
            break;
          v58 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v75, i);
          if ( (*(_QWORD *)v58 & 0x4000000000000LL) != 0 )
          {
            v55 = v76;
          }
          else
          {
            for ( j = i; ; ++j )
            {
              v55 = v76;
              v60 = v76 ? *(_WORD *)(v76 + 20) : 0;
              if ( j >= v60 )
                break;
              v61 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v75, j);
              if ( *((_DWORD *)v61 + 6) == *((_DWORD *)v58 + 6)
                && *((_DWORD *)v61 + 4) == *((_DWORD *)v58 + 4)
                && *((_DWORD *)v61 + 5) == *((_DWORD *)v58 + 5) )
              {
                *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v75, j) + 46) = i | 0xFE548000;
                v62 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v75, j);
                *(_QWORD *)v62 |= 0x4000000000000uLL;
              }
            }
          }
        }
        v64 = 0;
        if ( DxgkGetGlobalRawmodeFlag(v55) )
          v64 = 0x20000;
        Current = DXGPROCESS::GetCurrent(0x20000LL, v63);
        v66 = (unsigned __int64 *)a13;
        v67 = v64 | 0x8000000;
        if ( !*((_BYTE *)Current + 322) )
          v67 = v64;
        v68 = v67 | 0x40000;
        if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v76, (__int64)a2, 1, 2u, v68, (unsigned __int64 *)a13) >= 0 )
          goto LABEL_81;
        for ( k = 0; k < v79; ++k )
        {
          v70 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v75, k);
          if ( *((_DWORD *)v70 + 6) == (_DWORD)v25 )
            *((_QWORD *)v70 + 1) &= ~2uLL;
        }
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v76,
                                                     (__int64)a2,
                                                     1,
                                                     2u,
                                                     v68,
                                                     v66);
        v36 = PathModalityForAdapterWithCoreAccessHeld;
        DxgkLogCodePointPacket(
          0x1Eu,
          PathModalityForAdapterWithCoreAccessHeld,
          a8 + (v25 & 0xFFFF0000),
          0,
          *(_QWORD *)(a2 + 268));
        if ( (int)v36 >= 0 )
        {
LABEL_81:
          LODWORD(v36) = RetrievePinnedModeForTarget(v81, (struct D3DKMDT_HVIDPN__ *)*v66, a10, &v77);
          if ( (int)v36 < 0 )
          {
            v74 = WdLogNewEntry5_WdAssertion(v73);
            *(_QWORD *)(v74 + 24) = 3888LL;
            WdLogEvent5_WdAssertion(v74);
            a1[8](a2, *v66);
            *v66 = 0LL;
          }
          else
          {
            DmmCalculatePresentationVSync(&v77.VideoSignalInfo, (struct _D3DDDI_RATIONAL *)&v23[2]);
            v23[1].Denominator = DmmMapVSyncFromRationalToInteger(
                                   v23 + 2,
                                   (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v77.VideoSignalInfo.AdditionalSignalInfo << 29) >> 29),
                                   0LL);
          }
          goto LABEL_84;
        }
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v72);
        v40[3] = v36;
      }
    }
    else
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
      v40[3] = v25;
      v40[4] = v19;
      v40[5] = v36;
    }
LABEL_54:
    WdLogEvent5_WdError(v40);
  }
  else
  {
    v35 = WdLogNewEntry5_WdLowResource(v33);
    *(_QWORD *)(v35 + 24) = v79;
    WdLogEvent5_WdLowResource(v35);
    LODWORD(v36) = -1073741801;
  }
LABEL_84:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v75);
  return (unsigned int)v36;
}
