/*
 * XREFs of ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00A9978 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C01A8D84 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C01AB040 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C0003A74 (-GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003B58 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C00399D8 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?FindModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@W4DISPLAYCONFIG_MODE_INFO_TYPE@@IU_LUID@@@Z @ 0x1C00AAEF8 (-FindModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@W4DISPLAYCONFIG_MODE_INFO_.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AAF40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?GetNextModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@@Z @ 0x1C00AB04C (-GetNextModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@@Z.c)
 *     _CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::__AUTO_USING_PM_PrimaryClonePathIndex4358 @ 0x1C00AB160 (_CCD_TOPOLOGY--ApplyTopology_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex4358--__AUTO_USING_PM_Pr.c)
 *     _ConvertPathModalityToDisplayConfig_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath1227::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath1227 @ 0x1C00AB19C (_ConvertPathModalityToDisplayConfig_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath12.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00AB1D8 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00AB1FC (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLAYCONFIG_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00F0BB0 (-DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLA.c)
 *     ?D3dPixelFormatToDisplayConfigPixelFormat@@YA?AW4DISPLAYCONFIG_PIXELFORMAT@@W4_D3DDDIFORMAT@@@Z @ 0x1C00F8730 (-D3dPixelFormatToDisplayConfigPixelFormat@@YA-AW4DISPLAYCONFIG_PIXELFORMAT@@W4_D3DDDIFORMAT@@@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C019578C (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0195960 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall ConvertPathModalityToDisplayConfig(
        struct _D3DKMT_GETPATHSMODALITY *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        struct _QDC_CONTEXT *a7)
{
  struct _QDC_CONTEXT *v7; // r13
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // r12
  char *v12; // rdi
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  char *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // r13
  int v21; // edx
  int PrimaryPathInCloneGroup; // eax
  struct _LUID v23; // rcx
  __int64 v24; // r10
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // ecx
  int v29; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  DXGADAPTERSOURCEHASH *v34; // rcx
  _DWORD *v35; // rbx
  int v36; // eax
  __int64 Denominator; // rcx
  int v38; // r10d
  int v39; // eax
  unsigned int v40; // r11d
  _QWORD *v41; // rbx
  __int64 ModeArrayEntry; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // ebx
  _QWORD *v46; // r11
  __int64 v47; // rax
  int v48; // ebx
  unsigned int v49; // eax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v51; // eax
  struct DISPLAYCONFIG_MODE_INFO *NextModeArrayEntry; // rax
  __int64 v53; // rcx
  int v54; // r11d
  __int64 v55; // r10
  struct DISPLAYCONFIG_MODE_INFO *v56; // rax
  _QWORD *v57; // r11
  struct DISPLAYCONFIG_MODE_INFO *v58; // r10
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rax
  struct DISPLAYCONFIG_MODE_INFO *v62; // rax
  int v63; // r11d
  __int128 v64; // xmm0
  __int64 v65; // rax
  unsigned int v66; // edx
  unsigned int v67; // ecx
  __int64 v68; // r9
  unsigned int v69; // r8d
  __int64 v70; // rdx
  _QWORD *v71; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  int HashForAdapterAndSource; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  char HashBitShift; // al
  unsigned int v90; // ebx
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdi
  unsigned int v97; // r13d
  unsigned int *v98; // rdi
  unsigned int v99; // ebx
  int AdapterAndSourceForHash; // eax
  __int64 v101; // rcx
  int v102; // eax
  unsigned int v103; // esi
  __int64 v104; // r13
  _DWORD *v105; // rbx
  unsigned int v106; // r15d
  int v107; // eax
  int HashBitMask; // eax
  char v109; // [rsp+38h] [rbp-51h]
  char v110; // [rsp+39h] [rbp-50h]
  int v111; // [rsp+3Ch] [rbp-4Dh]
  int v112; // [rsp+3Ch] [rbp-4Dh]
  DXGADAPTERSOURCEHASH *v113; // [rsp+40h] [rbp-49h]
  int v114; // [rsp+48h] [rbp-41h]
  int v115; // [rsp+4Ch] [rbp-3Dh]
  int v116; // [rsp+50h] [rbp-39h]
  int v117; // [rsp+54h] [rbp-35h]
  int v118; // [rsp+54h] [rbp-35h]
  unsigned int v119; // [rsp+58h] [rbp-31h] BYREF
  __int64 v120; // [rsp+60h] [rbp-29h]
  int v121; // [rsp+68h] [rbp-21h]
  struct _D3DDDI_RATIONAL v122; // [rsp+70h] [rbp-19h] BYREF
  char *v123; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v124; // [rsp+80h] [rbp-9h]
  char *v125; // [rsp+88h] [rbp-1h] BYREF
  unsigned int v126; // [rsp+90h] [rbp+7h]
  int v127; // [rsp+E0h] [rbp+57h]
  int v128; // [rsp+E8h] [rbp+5Fh]
  unsigned int v129; // [rsp+F0h] [rbp+67h]
  int v130; // [rsp+100h] [rbp+77h]

  v129 = a4;
  v128 = a3;
  v127 = a2;
  v7 = a7;
  LODWORD(v9) = 0;
  v10 = *((_QWORD *)a7 + 1);
  v11 = 1LL;
  if ( a6 )
  {
    if ( *((_DWORD *)a7 + 1) )
      goto LABEL_3;
LABEL_118:
    v65 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v65 + 24) = *((unsigned int *)a7 + 1);
    if ( !a6 )
      v11 = *((unsigned __int16 *)a1 + 10);
    *(_QWORD *)(v65 + 32) = v11;
    WdLogEvent5_WdWarning(v65);
    return 3221225507LL;
  }
  if ( *((_DWORD *)a7 + 1) < (unsigned int)*((unsigned __int16 *)a1 + 10) )
    goto LABEL_118;
LABEL_3:
  v12 = (char *)a1 + 48;
  v13 = *((unsigned __int16 *)a1 + 10);
  v125 = v12;
  v126 = v13;
  if ( v13 )
  {
    v14 = v12 + 192;
    v15 = v13;
    do
    {
      *v14 |= 4u;
      v14[3] = 0;
      v14 += 66;
      --v15;
    }
    while ( v15 );
  }
  v16 = *((unsigned __int16 *)a1 + 10);
  v123 = v12;
  v124 = v16;
  if ( v16 )
  {
    v17 = v12 + 192;
    v18 = v16;
    do
    {
      *(_DWORD *)v17 |= 0x80u;
      v17[32] = 0;
      v17 += 264;
      --v18;
    }
    while ( v18 );
  }
  v111 = 0;
  v19 = 0;
  v116 = 0;
  if ( *((_WORD *)a1 + 10) )
  {
    do
    {
      v20 = 264LL * v19;
      if ( IsInternalVideoOutput(*(_DWORD *)((char *)a1 + v20 + 136)) )
        v21 = 1;
      v116 = v21;
      PrimaryPathInCloneGroup = GetPrimaryPathInCloneGroup(a1, v19);
      v23 = *(struct _LUID *)((char *)a1 + v20 + 64);
      *(_DWORD *)((char *)a1 + v20 + 252) = PrimaryPathInCloneGroup;
      IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(v23, v24, v24);
      v9 = IsVirtualizationDisabledForTarget;
      if ( IsVirtualizationDisabledForTarget < 0 )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
        v71[3] = v9;
        goto LABEL_178;
      }
      if ( !v109 || v110 || v129 )
      {
        v28 = v111;
        *((_BYTE *)a1 + v20 + 272) = 0;
      }
      else
      {
        v28 = 1;
        *((_BYTE *)a1 + v20 + 272) = 1;
        v111 = 1;
      }
      ++v19;
    }
    while ( v19 < *((unsigned __int16 *)a1 + 10) );
    if ( v28 )
    {
      LOWORD(v66) = *((_WORD *)a1 + 10);
      v67 = 0;
      if ( (_WORD)v66 )
      {
        do
        {
          v68 = 264LL * v67;
          if ( *((_BYTE *)a1 + v68 + 272) )
          {
            if ( *(_DWORD *)((char *)a1 + v68 + 252) != v67 )
            {
              v69 = 0;
              if ( (_WORD)v66 )
              {
                do
                {
                  v70 = 264LL * v69;
                  if ( *(_DWORD *)((char *)a1 + v70 + 252) == *(_DWORD *)((char *)a1 + v68 + 252) )
                    *(_DWORD *)((char *)a1 + v70 + 252) = v67;
                  ++v69;
                }
                while ( v69 < *((unsigned __int16 *)a1 + 10) );
              }
            }
          }
          v66 = *((unsigned __int16 *)a1 + 10);
          ++v67;
        }
        while ( v67 < v66 );
      }
    }
    v7 = a7;
  }
  v29 = 0;
  v117 = 0;
  v112 = 0;
  Global = DXGGLOBAL::GetGlobal();
  v32 = 0LL;
  v33 = 0LL;
  v121 = 0;
  v34 = (struct DXGGLOBAL *)((char *)Global + 840);
  v113 = (struct DXGGLOBAL *)((char *)Global + 840);
  if ( *((_WORD *)a1 + 10) )
  {
    while ( a6 != (_DWORD)v32 )
    {
      if ( !v116 )
        break;
      if ( IsInternalVideoOutput(*((_DWORD *)v12 + 22)) )
        break;
LABEL_79:
      v49 = *((unsigned __int16 *)a1 + 10);
      v33 = (unsigned int)(v33 + 1);
      v12 += 264;
      v121 = v33;
      if ( (unsigned int)v33 >= v49 )
      {
LABEL_80:
        v29 = v112;
        v34 = v113;
        goto LABEL_81;
      }
    }
    v35 = (_DWORD *)((char *)a1 + 264 * *((unsigned int *)v12 + 51) + 48);
    v120 = (__int64)v35;
    if ( *((_DWORD *)v12 + 6) == v35[6] && *((_DWORD *)v12 + 4) == v35[4] )
    {
      if ( *((_DWORD *)v12 + 5) == v35[5] )
        v35 = (_DWORD *)v32;
      v120 = (__int64)v35;
    }
    v36 = v112;
    if ( v35 )
      v36 = 1;
    v112 = v36;
    if ( (*(_QWORD *)v12 & 0x100000000000LL) == 0 )
    {
      v73 = WdLogNewEntry5_WdAssertion(0x100000000000LL, v33, v32, v31);
      *(_QWORD *)(v73 + 24) = 1349LL;
      WdLogEvent5_WdAssertion(v73);
    }
    *(_QWORD *)v10 = *((_QWORD *)v12 + 2);
    if ( (*(_QWORD *)v12 & 0x200000000000LL) == 0 )
    {
      v74 = WdLogNewEntry5_WdAssertion(0x200000000000LL, v33, v32, v31);
      *(_QWORD *)(v74 + 24) = 1352LL;
      WdLogEvent5_WdAssertion(v74);
    }
    *(_DWORD *)(v10 + 8) = *((_DWORD *)v12 + 6);
    *(_DWORD *)(v10 + 16) = (*(_QWORD *)v12 & 0x4000000000000000LL) != 0;
    *(_QWORD *)(v10 + 20) = *((_QWORD *)v12 + 2);
    if ( (*(_QWORD *)v12 & 0x400000000000LL) == 0 )
    {
      v75 = WdLogNewEntry5_WdAssertion(0x400000000000LL, v33, v32, v31);
      *(_QWORD *)(v75 + 24) = 1358LL;
      WdLogEvent5_WdAssertion(v75);
    }
    Denominator = 0x800000000000LL;
    *(_DWORD *)(v10 + 28) = *((_DWORD *)v12 + 7);
    if ( (*(_QWORD *)v12 & 0x800000000000LL) == 0 )
    {
      v76 = WdLogNewEntry5_WdAssertion(0x800000000000LL, v33, v32, v31);
      *(_QWORD *)(v76 + 24) = 1361LL;
      WdLogEvent5_WdAssertion(v76);
    }
    *(_DWORD *)(v10 + 36) = *((_DWORD *)v12 + 22);
    if ( (*v12 & 2) != 0 )
    {
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v12 + 32), &v122);
      v38 = 0;
      Denominator = v122.Denominator;
      *(_DWORD *)(v10 + 48) = v122.Numerator;
      *(_DWORD *)(v10 + 52) = Denominator;
      *(_DWORD *)(v10 + 56) = 1;
    }
    else
    {
      v38 = 0;
      *(_QWORD *)(v10 + 48) = 0LL;
      *(_DWORD *)(v10 + 56) = 0;
    }
    if ( (*v12 & 4) != 0 )
      *(_DWORD *)(v10 + 56) = (int)(*((_DWORD *)v12 + 20) << 29) >> 29;
    if ( (*(_DWORD *)v12 & 0x200LL) != 0 )
    {
      v51 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v12 + 33));
      v33 = 1LL;
      Denominator = (unsigned int)(v51 - 1);
      if ( (unsigned int)Denominator <= 3 )
        v33 = (unsigned int)v51;
      *(_DWORD *)(v10 + 40) = v33;
    }
    else
    {
      *(_DWORD *)(v10 + 40) = 1;
    }
    if ( ((*(_DWORD *)(v10 + 40) - 2) & 0xFFFFFFFD) != 0 )
    {
      v114 = *((_DWORD *)v12 + 38);
      v39 = *((_DWORD *)v12 + 39);
    }
    else
    {
      v114 = *((_DWORD *)v12 + 39);
      v39 = *((_DWORD *)v12 + 38);
    }
    v115 = v39;
    if ( v127 == v38 )
    {
      if ( (*(_QWORD *)v12 & 0x40000000000LL) == 0 )
      {
        if ( *(__int64 *)v12 < 0 )
        {
          v78 = WdLogNewEntry5_WdAssertion(0x40000000000LL, v33, v32, v31);
          *(_QWORD *)(v78 + 24) = 1440LL;
          WdLogEvent5_WdAssertion(v78);
        }
        goto LABEL_47;
      }
      v60 = *((unsigned int *)v12 + 34);
    }
    else
    {
      if ( (*(_DWORD *)v12 & 0x10000LL) == 0 )
      {
LABEL_47:
        *(_DWORD *)(v10 + 44) = 128;
        goto LABEL_48;
      }
      if ( *((_DWORD *)v12 + 35) == 1 )
      {
        v77 = WdLogNewEntry5_WdAssertion(Denominator, v33, v32, v31);
        *(_QWORD *)(v77 + 24) = 1415LL;
        WdLogEvent5_WdAssertion(v77);
      }
      v60 = *((unsigned int *)v12 + 35);
    }
    *(_DWORD *)(v10 + 44) = ConvertDmmToDisplayConfigScaling(v60);
LABEL_48:
    *(_DWORD *)(v10 + 64) = 0;
    *(_DWORD *)(v10 + 64) = (*(_QWORD *)v12 & 0x2000000000000000LL) != 0;
    if ( (*(_QWORD *)v12 & 0x200000000000000LL) != 0 )
      *(_DWORD *)(v10 + 64) |= 2u;
    if ( (*(_QWORD *)v12 & 0x400000000000000LL) != 0 )
      *(_DWORD *)(v10 + 64) |= 4u;
    if ( (*(_QWORD *)v12 & 0x1000000000000000LL) != 0 )
      *(_DWORD *)(v10 + 64) |= 0x10u;
    if ( (*(_QWORD *)v12 & 0x800000000000000LL) != 0 )
      *(_DWORD *)(v10 + 64) |= 8u;
    if ( (*(_QWORD *)v12 & 0x1000000000LL) != 0 )
      *(_DWORD *)(v10 + 64) |= 0x20u;
    *(_DWORD *)(v10 + 60) = (*(_QWORD *)v12 & 0x1D00000000000000LL) != 0;
    if ( v128 || *(__int64 *)v12 < 0 )
    {
      *(_DWORD *)(v10 + 68) = 1;
    }
    else
    {
      *(_DWORD *)(v10 + 68) = 0;
      v117 = 1;
    }
    if ( !v35 || v129 )
    {
      v40 = *((_DWORD *)v12 + 7);
      v41 = v12 + 16;
    }
    else
    {
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v113, 0LL, v32, v31) & *((_DWORD *)v12 + 7)) != 0 )
      {
        v83 = WdLogNewEntry5_WdAssertion(v80, v79, v81, v82);
        *(_QWORD *)(v83 + 24) = 1506LL;
        WdLogEvent5_WdAssertion(v83);
      }
      HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                  v113,
                                  (const struct _LUID *)v12 + 2,
                                  *((_DWORD *)v12 + 6),
                                  &v119);
      v9 = HashForAdapterAndSource;
      if ( HashForAdapterAndSource < 0 )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdError(v86, v85);
        v71[3] = (unsigned int)v35[4];
        v71[4] = *((unsigned int *)v12 + 6);
        v71[5] = v9;
        goto LABEL_178;
      }
      HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v113, v85, v87, v88);
      v90 = v119 << HashBitShift;
      v40 = v90 + (~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v113, v91, v92, v93) & *((_DWORD *)v12 + 7));
      v41 = (_QWORD *)(v120 + 16);
      *(_DWORD *)(v10 + 28) = v40;
      *(_QWORD *)(v10 + 20) = *v41;
    }
    ModeArrayEntry = FindModeArrayEntry(v7, 2LL, v40, *v41);
    v32 = 0LL;
    if ( ModeArrayEntry )
    {
      v31 = (ModeArrayEntry - *((_QWORD *)v7 + 3)) >> 6;
    }
    else if ( (*v12 & 0x87) != 0 )
    {
      NextModeArrayEntry = GetNextModeArrayEntry(v7);
      if ( !NextModeArrayEntry )
        goto LABEL_150;
      *(_DWORD *)NextModeArrayEntry = 2;
      *((_QWORD *)NextModeArrayEntry + 1) = *v41;
      *((_DWORD *)NextModeArrayEntry + 1) = v54;
      DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(
        (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v12 + 32),
        (struct DISPLAYCONFIG_MODE_INFO *)((char *)NextModeArrayEntry + 16));
      v32 = 0LL;
      v31 = (v55 - *((_QWORD *)v7 + 3)) >> 6;
      if ( v127 )
        *(_QWORD *)(v55 + 48) = 0LL;
    }
    else
    {
      v31 = 0xFFFFFFFFLL;
    }
    v43 = v129;
    if ( v129 )
      *(_WORD *)(v10 + 34) = v31;
    else
      *(_DWORD *)(v10 + 32) = v31;
    v44 = v120;
    if ( !v120 || v129 )
    {
      v45 = *((_DWORD *)v12 + 6);
      v46 = v12 + 16;
      if ( v129 )
        goto LABEL_72;
    }
    else
    {
      v45 = *(_DWORD *)(v120 + 24);
      v46 = (_QWORD *)(v120 + 16);
      *(_DWORD *)(v10 + 8) = v45;
      *(_QWORD *)v10 = *(_QWORD *)(v44 + 16);
    }
    v47 = FindModeArrayEntry(v7, 1LL, v45, *v46);
    v32 = 0LL;
    if ( v47 )
    {
      *(_DWORD *)(v10 + 12) = (v47 - *((_QWORD *)v7 + 3)) >> 6;
LABEL_77:
      v10 += 72LL;
      if ( a6 != (_DWORD)v32 )
        goto LABEL_80;
      LODWORD(v33) = v121;
      goto LABEL_79;
    }
    v43 = v129;
LABEL_72:
    if ( (*(_DWORD *)v12 & 0x20000LL) != 0 )
    {
      v56 = GetNextModeArrayEntry(v7);
      v32 = 0LL;
      v58 = v56;
      if ( !v56 )
        goto LABEL_150;
      *((_DWORD *)v56 + 1) = v45;
      v48 = v115;
      *(_DWORD *)v56 = 1;
      *((_QWORD *)v56 + 1) = *v57;
      *((_DWORD *)v56 + 4) = v114;
      *((_DWORD *)v56 + 5) = v115;
      if ( (*(_DWORD *)v12 & 0x100LL) != 0 )
      {
        v59 = D3dPixelFormatToDisplayConfigPixelFormat(*((unsigned int *)v12 + 29), v33, 0LL);
        *((_DWORD *)v58 + 6) = v59;
      }
      else
      {
        *((_DWORD *)v56 + 6) = 4;
      }
      if ( (*(_DWORD *)v12 & 0x800LL) != 0 )
        *(_QWORD *)((char *)v58 + 28) = *((_QWORD *)v12 + 18);
      else
        *(_QWORD *)((char *)v58 + 28) = 0x7FFFFFFFLL;
      v43 = v129;
      if ( v129 && a5 == (_DWORD)v32 )
      {
        *(_WORD *)(v10 + 14) = (__int64)(unsigned int)((_DWORD)v58 - *((_DWORD *)v7 + 6)) >> 6;
        *(_DWORD *)(v10 + 12) |= 0xFFFFu;
      }
      else
      {
        *(_DWORD *)(v10 + 12) = ((__int64)v58 - *((_QWORD *)v7 + 3)) >> 6;
      }
    }
    else
    {
      if ( !v128 && (*(_DWORD *)(v10 + 68) & 1) != 0 )
      {
        v95 = WdLogNewEntry5_WdError(v43, v33);
        *(_QWORD *)(v95 + 24) = 1663LL;
        WdLogEvent5_WdError(v95);
        LODWORD(v9) = -1073741637;
        goto LABEL_82;
      }
      v48 = v115;
      *(_DWORD *)(v10 + 12) = -1;
    }
    if ( (_DWORD)v43 )
    {
      *(_DWORD *)(v10 + 32) |= 0xFFFFu;
      if ( v12[129] != (_BYTE)v32 )
      {
        *(_DWORD *)(v10 + 68) |= 8u;
        v61 = *(_QWORD *)v12;
        if ( *(__int64 *)v12 < 0 )
        {
          if ( (v61 & 0x800000) != 0 )
          {
            v62 = GetNextModeArrayEntry(v7);
            v32 = 0LL;
            if ( !v62 )
            {
LABEL_150:
              LODWORD(v9) = -1073741789;
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v53, v33, v32, v31) + 24) = *((unsigned int *)v7 + 4);
              goto LABEL_82;
            }
            *(_DWORD *)v62 = 3;
            *((_DWORD *)v62 + 1) = *((_DWORD *)v12 + 7);
            *((_QWORD *)v62 + 1) = *((_QWORD *)v12 + 2);
            *((_DWORD *)v62 + 4) = *((_DWORD *)v12 + 24);
            *((_DWORD *)v62 + 5) = *((_DWORD *)v12 + 25);
            v64 = *(_OWORD *)(v12 + 168);
            *((_QWORD *)v62 + 5) = 0LL;
            *((_DWORD *)v62 + 12) = v63;
            *(_OWORD *)((char *)v62 + 24) = v64;
            *((_DWORD *)v62 + 13) = v48;
            *(_WORD *)(v10 + 32) = (__int64)(unsigned int)((_DWORD)v62 - *((_DWORD *)v7 + 6)) >> 6;
          }
          else if ( (v61 & 0x100) != 0 )
          {
            v94 = WdLogNewEntry5_WdAssertion(v43, v33, v32, v31);
            *(_QWORD *)(v94 + 24) = 1729LL;
            WdLogEvent5_WdAssertion(v94);
            v32 = 0LL;
          }
        }
      }
    }
    goto LABEL_77;
  }
LABEL_81:
  *((_QWORD *)v7 + 4) = v10;
  if ( v29 )
  {
    if ( v117 != (_DWORD)v32 && v129 == (_DWORD)v32 )
    {
      v96 = *((_QWORD *)v7 + 1);
      v97 = v32;
      v130 = v32;
      if ( (unsigned __int16)v32 < *((_WORD *)a1 + 10) )
      {
        v98 = (unsigned int *)(v96 + 28);
        while ( 1 )
        {
          if ( (v98[10] & 1) != 0
            && ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v34, v33, v32, v31) & *v98) != 0 )
          {
            v99 = *v98 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v113, v33, v32, v31);
            AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                        v113,
                                        v99,
                                        (struct _LUID *)&v122,
                                        &v119);
            v32 = 0LL;
            v118 = AdapterAndSourceForHash;
            LODWORD(v9) = AdapterAndSourceForHash;
            if ( AdapterAndSourceForHash < 0 )
            {
              v71 = (_QWORD *)WdLogNewEntry5_WdError(v101, v33);
              v71[3] = v99;
LABEL_178:
              WdLogEvent5_WdError(v71);
              break;
            }
            if ( v122.Numerator != *(v98 - 2) || (v102 = *(v98 - 1), v120 = 0LL, v122.Denominator != v102) )
              v120 = 1LL;
            v103 = 0;
            if ( *((_WORD *)a1 + 10) )
            {
              v104 = v120;
              v105 = (_DWORD *)(*((_QWORD *)a7 + 1) + 28LL);
              v106 = v119;
              while ( 1 )
              {
                if ( (v105[10] & 1) == 0 )
                {
                  if ( v104 )
                  {
                    if ( *v105 == (*v98 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v113, v33, 0LL, v31)) )
                    {
                      v105[9] &= ~1u;
                      v32 = 0LL;
                      v105[8] = 0;
                      goto LABEL_169;
                    }
                  }
                  else
                  {
                    if ( *(v105 - 5) != *(v98 - 5)
                      || (v107 = DXGADAPTERSOURCEHASH::GetHashBitMask(v113, v33, 0LL, v31),
                          v33 = *v98,
                          *v105 != (~v107 & *v98)) )
                    {
                      HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v113, v33, v32, v31);
                      v32 = 0LL;
                      if ( *v105 == (*v98 & ~HashBitMask) )
                        *v105 = *v98;
                      goto LABEL_169;
                    }
                    *v105 = v33;
                    *(v105 - 5) = v106;
                  }
                  v32 = 0LL;
                }
LABEL_169:
                ++v103;
                v105 += 18;
                if ( v103 >= *((unsigned __int16 *)a1 + 10) )
                {
                  LODWORD(v9) = v118;
                  v97 = v130;
                  break;
                }
              }
            }
          }
          ++v97;
          v98 += 18;
          v130 = v97;
          if ( v97 >= *((unsigned __int16 *)a1 + 10) )
            break;
          v34 = v113;
        }
      }
    }
  }
LABEL_82:
  ConvertPathModalityToDisplayConfig_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath1227::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath1227(&v123);
  CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::__AUTO_USING_PM_PrimaryClonePathIndex4358(&v125);
  return (unsigned int)v9;
}
