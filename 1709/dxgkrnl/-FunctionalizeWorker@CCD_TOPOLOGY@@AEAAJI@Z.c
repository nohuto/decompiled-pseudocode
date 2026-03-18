/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00DE7C8
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DBC2C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00D1518 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C00DC5B8 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DC8A0 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DCD78 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DD090 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DD4EC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DEAEC (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00DEB74 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1663::__AUTO_USING_PM_PathChangeReason1663 @ 0x1C00E1820 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1663--__AUTO.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C01F7B58 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C01F7BF4 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // r14d
  unsigned int i; // ecx
  unsigned __int16 v15; // ax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // esi
  unsigned int v20; // eax
  unsigned __int16 v21; // r8
  __int64 v22; // rcx
  int v23; // r10d
  int v24; // r9d
  __int64 v25; // rcx
  bool v26; // al
  int v27; // r12d
  __int64 v28; // r13
  int PathModalityForAdapter; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v34; // rax
  unsigned __int16 v35; // di
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  CCD_TOPOLOGY *v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rdi
  unsigned int v43; // esi
  __int64 v44; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r12
  bool v49; // di
  __int64 v50; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v51; // rdx
  __int64 v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // [rsp+30h] [rbp-49h] BYREF
  int v55; // [rsp+38h] [rbp-41h]
  struct D3DKMT_GETPATHSMODALITY *v56[18]; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int16 v57; // [rsp+E0h] [rbp+67h] BYREF
  int v58; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v59; // [rsp+F0h] [rbp+77h] BYREF

  v58 = a2;
  v3 = *((_QWORD *)this + 8);
  v4 = *(unsigned __int16 *)(v3 + 20);
  v54 = v3 + 48;
  v55 = v4;
  if ( (_DWORD)v4 )
  {
    v5 = (_DWORD *)(v3 + 272);
    v6 = (unsigned int)v4;
    do
    {
      *v5 |= 1u;
      v5[1] = 0;
      v5 += 66;
      --v6;
    }
    while ( v6 );
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    v8 = *(unsigned __int16 *)(v7 + 20);
  else
    v8 = 0LL;
  if ( !(_WORD)v8 )
  {
    v34 = WdLogNewEntry5_WdWarning(v8, a2, v4);
    *(_QWORD *)(v34 + 24) = this;
    *(_QWORD *)(v34 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v34);
    LODWORD(v11) = -1073741823;
    goto LABEL_30;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v9 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v11 = v9;
  if ( v9 < 0 )
  {
LABEL_66:
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v53[3] = *((_QWORD *)this + 8);
    v53[4] = v11;
LABEL_67:
    WdLogEvent5_WdError(v53);
    goto LABEL_30;
  }
  v12 = *((_QWORD *)this + 8);
  v13 = 0;
  for ( i = 0; ; ++i )
  {
    v15 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( i >= v15 )
      break;
    v16 = 264LL * i;
    if ( *(_BYTE *)(v16 + v12 + 177) )
    {
      v17 = *(_QWORD *)(v16 + v12 + 48);
      if ( (v17 & 0x101) == 0 && (v17 & 0x20000) != 0 )
        v13 = 1;
    }
  }
  if ( v13 )
  {
    v35 = 8;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v56, 8u, 0);
    v57 = 8;
    while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v56, v35) >= v35 )
    {
      v38 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v56, 1, 0, 1, &v57);
      if ( v38 != -1073741789 )
        goto LABEL_42;
      v35 = v57;
    }
    v41 = (_QWORD *)WdLogNewEntry5_WdTrace(v37, v36);
    v41[3] = v35;
    v41[4] = this;
    v40 = (CCD_TOPOLOGY *)*((_QWORD *)this + 8);
    v41[5] = v40;
    v38 = -1073741801;
LABEL_42:
    if ( v38 >= 0 )
    {
      v42 = *((_QWORD *)this + 8);
      v43 = 0;
      if ( !*(_WORD *)(v42 + 20) )
      {
LABEL_58:
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v56);
        goto LABEL_16;
      }
      while ( 1 )
      {
        v44 = 264LL * v43;
        Global = DXGGLOBAL::GetGlobal((__int64)v40);
        v46 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v44 + v42 + 64), &v59);
        if ( !v46 )
          break;
        v47 = *((_QWORD *)v46 + 288);
        v48 = *((_QWORD *)v46 + 289);
        v49 = *(_BYTE *)(v47 + 133) && !*(_BYTE *)(v47 + 132);
        DXGADAPTER::ReleaseReferenceNoTracking(v46);
        v50 = *((_QWORD *)this + 8);
        if ( *(_BYTE *)(v44 + v50 + 177) )
        {
          if ( v48 )
          {
            if ( !v49 )
            {
              v51 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v44 + v50 + 48);
              if ( (*(_DWORD *)v51 & 0x20101) == 0x20000LL )
                CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v40, v51, (const struct CCD_TOPOLOGY *)v56);
            }
          }
        }
        v42 = *((_QWORD *)this + 8);
        if ( ++v43 >= *(unsigned __int16 *)(v42 + 20) )
          goto LABEL_58;
      }
    }
    else
    {
      WdLogNewEntry5_WdTrace(v40, v39);
    }
    v13 = 0;
    goto LABEL_58;
  }
LABEL_16:
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
  v18 = *((_QWORD *)this + 8);
  v19 = 0;
  LOWORD(v20) = *(_WORD *)(v18 + 20);
  if ( (_WORD)v20 )
  {
    while ( 1 )
    {
      if ( v18 && (_WORD)v20 )
      {
        v21 = 0;
        v22 = 264LL * v19;
        v23 = *(_DWORD *)(v22 + v18 + 64);
        v24 = *(_DWORD *)(v22 + v18 + 68);
        while ( 1 )
        {
          v25 = 264LL * v21;
          if ( *(_DWORD *)(v25 + v18 + 64) == v23 && *(_DWORD *)(v25 + v18 + 68) == v24 )
            break;
          ++v21;
        }
        v26 = v21 == v19;
      }
      else
      {
        v26 = 0;
      }
      if ( v26 )
        break;
LABEL_27:
      v18 = *((_QWORD *)this + 8);
      ++v19;
      v20 = *(unsigned __int16 *)(v18 + 20);
      if ( v19 >= v20 )
        goto LABEL_28;
    }
    v27 = 0;
    v28 = 264LL * v19;
    while ( 1 )
    {
      PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                 *((_QWORD *)this + 8),
                                 *(struct _LUID *)(*((_QWORD *)this + 8) + v28 + 64),
                                 *((_BYTE *)this + 76) & 1,
                                 *((_DWORD *)this + 20),
                                 v58);
      v11 = PathModalityForAdapter;
      if ( PathModalityForAdapter != -1071774970 )
        break;
      if ( !v13
        || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                            this,
                            (const struct _LUID *)(v28 + *((_QWORD *)this + 8) + 64LL))
        || v27 )
      {
        goto LABEL_65;
      }
      v27 = 1;
      WdLogNewEntry5_WdTrace(v30, v52);
    }
    if ( PathModalityForAdapter >= 0 )
      goto LABEL_27;
LABEL_65:
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v30);
    v53[3] = v11;
    v53[4] = *((_QWORD *)this + 8);
    v53[5] = v19;
    v53[6] = *(int *)(264LL * v19 + *((_QWORD *)this + 8) + 68);
    v53[7] = *(unsigned int *)(264LL * v19 + *((_QWORD *)this + 8) + 64);
    goto LABEL_67;
  }
LABEL_28:
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000LL);
  v31 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
  v11 = v31;
  if ( v31 < 0 )
    goto LABEL_66;
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000LL);
  CCD_TOPOLOGY::AdjustDesktopLayout(this, v32);
  CCD_TOPOLOGY::FillScalingIntent(this);
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
  LODWORD(v11) = 0;
LABEL_30:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1663::__AUTO_USING_PM_PathChangeReason1663(&v54);
  return (unsigned int)v11;
}
