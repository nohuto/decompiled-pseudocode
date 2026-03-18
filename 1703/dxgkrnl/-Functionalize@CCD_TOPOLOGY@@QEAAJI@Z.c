/*
 * XREFs of ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC
 * Callers:
 *     DxgkFunctionalizePathsModality @ 0x1C00A4C80 (DxgkFunctionalizePathsModality.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00A68C0 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AA74C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     _CCD_TOPOLOGY::Functionalize_::_2_::_AUTO_USING_PM_PathChangeReason3416::__AUTO_USING_PM_PathChangeReason3416 @ 0x1C00A4A70 (_CCD_TOPOLOGY--Functionalize_--_2_--_AUTO_USING_PM_PathChangeReason3416--__AUTO_USING_PM_PathCha.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00EA684 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00EA924 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C00EC1D8 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EC608 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00ECAB4 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00ECDC8 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C00ED224 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EDF04 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00EDF8C (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00F12A0 (-BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_OR.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C01DEA10 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C01DEAAC (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Functionalize(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int v6; // r13d
  unsigned int v7; // ecx
  __int64 v8; // r8
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  int v17; // r14d
  unsigned int i; // ecx
  unsigned __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // esi
  unsigned int v23; // ecx
  __int64 v24; // r12
  __int64 v25; // r8
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  int v28; // r10d
  int v29; // r9d
  __int64 v30; // rcx
  bool v31; // al
  int v32; // r14d
  __int64 v33; // r15
  int PathModalityForAdapter; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  bool v38; // dl
  __int64 v40; // rax
  unsigned __int16 v41; // di
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rdi
  unsigned int v53; // esi
  __int64 v54; // r15
  DXGGLOBAL *Global; // rax
  __int64 v56; // r9
  struct DXGADAPTER *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r12
  bool v60; // di
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD *v64; // rax
  __int64 v65; // r8
  __int64 v66; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v67; // [rsp+38h] [rbp-41h]
  struct _D3DKMT_GETPATHSMODALITY *v68[18]; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int16 v69; // [rsp+E0h] [rbp+67h] BYREF
  int v70; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v71; // [rsp+F0h] [rbp+77h] BYREF

  v70 = a2;
  v4 = *((_QWORD *)this + 8);
  v6 = a2;
  v7 = *(unsigned __int16 *)(v4 + 20);
  v8 = v4 + 48;
  v66 = v4 + 48;
  v67 = v7;
  if ( v7 )
  {
    v9 = (_DWORD *)(v4 + 240);
    a2 = v7;
    do
    {
      *v9 |= 1u;
      v9[1] = 0;
      v9 += 66;
      --a2;
    }
    while ( a2 );
  }
  v10 = *((_QWORD *)this + 8);
  if ( v10 )
    v11 = *(unsigned __int16 *)(v10 + 20);
  else
    v11 = 0LL;
  if ( (_WORD)v11 )
  {
    CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
    v12 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
    v15 = v12;
    if ( v12 < 0 )
      goto LABEL_65;
    v16 = *((_QWORD *)this + 8);
    v17 = 0;
    for ( i = 0; ; ++i )
    {
      v19 = v16 ? *(_WORD *)(v16 + 20) : 0;
      if ( i >= v19 )
        break;
      v20 = 264LL * i;
      if ( *(_BYTE *)(v20 + v16 + 177) )
      {
        if ( (*(_DWORD *)(v20 + v16 + 48) & 0x20101) == 0x20000LL )
          v17 = 1;
      }
    }
    if ( v17 )
    {
      v41 = 8;
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v68, 8u, 0);
      v69 = 8;
      while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v68, v41, v42, v43) >= v41 )
      {
        LOBYTE(v47) = 1;
        LOBYTE(v44) = 1;
        v48 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v68, v44, 0LL, v47, &v69);
        if ( v48 != -1073741789 )
          goto LABEL_41;
        v41 = v69;
      }
      v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v45, v44, v46, v47);
      v51[3] = v41;
      v51[4] = this;
      v50 = *((_QWORD *)this + 8);
      v51[5] = v50;
      v48 = -1073741801;
LABEL_41:
      if ( v48 >= 0 )
      {
        v52 = *((_QWORD *)this + 8);
        v53 = 0;
        if ( *(_WORD *)(v52 + 20) )
        {
          while ( 1 )
          {
            v54 = 264LL * v53;
            Global = DXGGLOBAL::GetGlobal(v50, (__int64)v49, v42, v43);
            v57 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v54 + v52 + 64), &v71, v56);
            if ( !v57 )
              break;
            v58 = *((_QWORD *)v57 + 285);
            v59 = *((_QWORD *)v57 + 286);
            v60 = *(_BYTE *)(v58 + 134) && !*(_BYTE *)(v58 + 133);
            DXGADAPTER::ReleaseReference(v57);
            v61 = *((_QWORD *)this + 8);
            v50 = 0LL;
            if ( *(_BYTE *)(v54 + v61 + 177) )
            {
              if ( v59 )
              {
                if ( !v60 )
                {
                  v49 = (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v54 + v61 + 48);
                  if ( (*(_DWORD *)v49 & 0x20101) == 0x20000LL )
                    CCD_TOPOLOGY::SetGivenPathDataFromActivePath(0LL, v49, (const struct CCD_TOPOLOGY *)v68);
                }
              }
            }
            v52 = *((_QWORD *)this + 8);
            if ( ++v53 >= *(unsigned __int16 *)(v52 + 20) )
              goto LABEL_57;
          }
          v17 = 0;
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v50, v49, v42, v43);
        v17 = 0;
      }
LABEL_57:
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v68);
    }
    CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
    v21 = *((_QWORD *)this + 8);
    v22 = 0;
    LOWORD(v23) = *(_WORD *)(v21 + 20);
    if ( (_WORD)v23 )
    {
      v24 = v17;
      while ( 1 )
      {
        if ( v21 && (_WORD)v23 )
        {
          v25 = *((_QWORD *)this + 8);
          v26 = 0;
          v27 = 264LL * v22;
          v28 = *(_DWORD *)(v27 + v25 + 64);
          v29 = *(_DWORD *)(v27 + v25 + 68);
          while ( 1 )
          {
            v30 = 264LL * v26;
            if ( *(_DWORD *)(v30 + v25 + 64) == v28 && *(_DWORD *)(v30 + v25 + 68) == v29 )
              break;
            ++v26;
          }
          v6 = v70;
          v31 = v26 == v22;
        }
        else
        {
          v31 = 0;
        }
        if ( v31 )
          break;
LABEL_29:
        v21 = *((_QWORD *)this + 8);
        ++v22;
        v23 = *(unsigned __int16 *)(v21 + 20);
        if ( v22 >= v23 )
          goto LABEL_30;
      }
      v32 = 0;
      v33 = 264LL * v22;
      while ( 1 )
      {
        PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                   *((_QWORD *)this + 8),
                                   *(_QWORD *)(v33 + *((_QWORD *)this + 8) + 64),
                                   *((_DWORD *)this + 19) & 1,
                                   *((unsigned int *)this + 20),
                                   v6);
        v15 = PathModalityForAdapter;
        if ( PathModalityForAdapter != -1071774970 )
          break;
        if ( !v24
          || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                              this,
                              (const struct _LUID *)(v33 + *((_QWORD *)this + 8) + 64LL))
          || v32 )
        {
          goto LABEL_64;
        }
        v32 = 1;
        WdLogNewEntry5_WdTrace(v36, v35, v62, v63);
      }
      if ( PathModalityForAdapter >= 0 )
        goto LABEL_29;
LABEL_64:
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
      v64[3] = v15;
      v64[4] = *((_QWORD *)this + 8);
      v65 = 264LL * v22;
      v64[5] = v22;
      v64[6] = *(int *)(v65 + *((_QWORD *)this + 8) + 68);
      v64[7] = *(unsigned int *)(v65 + *((_QWORD *)this + 8) + 64);
      goto LABEL_66;
    }
LABEL_30:
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000uLL);
    v37 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
    v15 = v37;
    if ( v37 < 0 )
    {
LABEL_65:
      v64 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v64[3] = *((_QWORD *)this + 8);
      v64[4] = v15;
LABEL_66:
      WdLogEvent5_WdError(v64);
      goto LABEL_32;
    }
    CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000uLL);
    CCD_TOPOLOGY::AdjustDesktopLayout(this);
    CCD_TOPOLOGY::FillScalingIntent(this, v38);
    CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
    LODWORD(v15) = 0;
  }
  else
  {
    v40 = WdLogNewEntry5_WdWarning(v11, a2, v8, a4);
    *(_QWORD *)(v40 + 24) = this;
    *(_QWORD *)(v40 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v40);
    LODWORD(v15) = -1073741823;
  }
LABEL_32:
  CCD_TOPOLOGY::Functionalize_::_2_::_AUTO_USING_PM_PathChangeReason3416::__AUTO_USING_PM_PathChangeReason3416(&v66);
  return (unsigned int)v15;
}
