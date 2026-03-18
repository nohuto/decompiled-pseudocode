/*
 * XREFs of ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00B64BC
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B39EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AEB98 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00B36B8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00B3948 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1C00B42E8 (-ClearGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B45D0 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B4AFC (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B4E1C (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B5274 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B67D4 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00B685C (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1668::__AUTO_USING_PM_PathChangeReason1668 @ 0x1C00DE024 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1668--__AUTO.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C0225854 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C0225904 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FunctionalizeWorker(CCD_TOPOLOGY *this, __int64 a2, __int64 a3)
{
  int v4; // r15d
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD *v7; // rcx
  __int16 v8; // ax
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
  unsigned __int16 v20; // r8
  __int64 v21; // rcx
  int v22; // r10d
  int v23; // r9d
  __int64 v24; // rcx
  bool v25; // al
  __int64 v26; // r13
  int PathModalityForAdapter; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v31; // rax
  unsigned __int16 v32; // di
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rdi
  unsigned int v44; // esi
  __int64 v45; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r13
  __int64 v50; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rax
  __int64 v56; // [rsp+30h] [rbp-49h] BYREF
  int v57; // [rsp+38h] [rbp-41h]
  _BYTE v58[144]; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int16 v59; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v60; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v61; // [rsp+F0h] [rbp+77h] BYREF

  v60 = a2;
  v4 = 0;
  v5 = *((_QWORD *)this + 8);
  v56 = v5 + 48;
  v6 = *(unsigned __int16 *)(v5 + 20);
  v57 = v6;
  if ( (_DWORD)v6 )
  {
    v7 = (_DWORD *)(v5 + 280);
    do
    {
      *v7 |= 1u;
      v7[1] = 0;
      v7 += 68;
      --v6;
    }
    while ( v6 );
    v5 = *((_QWORD *)this + 8);
  }
  if ( v5 )
    v8 = *(_WORD *)(v5 + 20);
  else
    v8 = 0;
  if ( !v8 )
  {
    v31 = WdLogNewEntry5_WdWarning(v5, a2, a3);
    *(_QWORD *)(v31 + 24) = this;
    *(_QWORD *)(v31 + 32) = *((_QWORD *)this + 8);
    WdLogEvent5_WdWarning(v31);
    LODWORD(v11) = -1073741823;
    goto LABEL_31;
  }
  CCD_TOPOLOGY::ValidateIncomingPathModalityFlags(this);
  v9 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(this);
  v11 = v9;
  if ( v9 < 0 )
  {
LABEL_66:
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v55[3] = *((_QWORD *)this + 8);
    v55[4] = v11;
LABEL_67:
    WdLogEvent5_WdError(v55);
    goto LABEL_31;
  }
  v12 = *((_QWORD *)this + 8);
  v13 = 0;
  for ( i = 0; ; ++i )
  {
    v15 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( i >= v15 )
      break;
    v16 = 272LL * i;
    if ( *(_BYTE *)(v16 + v12 + 177) )
    {
      v17 = *(_QWORD *)(v16 + v12 + 48);
      if ( (v17 & 0x101) == 0 && (v17 & 0x20000) != 0 )
        v13 = 1;
    }
  }
  if ( v13 )
  {
    v32 = 8;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v58, 8u, 0);
    v59 = 8;
    while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v58, v32, v33, v34) >= v32 )
    {
      v39 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v58, 1, 0, 1, &v59);
      if ( v39 != -1073741789 )
        goto LABEL_43;
      v32 = v59;
    }
    v42 = (_QWORD *)WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
    v42[3] = v32;
    v42[4] = this;
    v41 = *((_QWORD *)this + 8);
    v42[5] = v41;
    v39 = -1073741801;
LABEL_43:
    if ( v39 >= 0 )
    {
      v43 = *((_QWORD *)this + 8);
      v44 = 0;
      if ( !*(_WORD *)(v43 + 20) )
      {
LABEL_58:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v58);
        goto LABEL_17;
      }
      while ( 1 )
      {
        v45 = 272LL * v44;
        Global = DXGGLOBAL::GetGlobal(v41);
        v47 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(v45 + v43 + 64), &v61);
        if ( !v47 )
          break;
        v48 = *((_QWORD *)v47 + 307);
        v49 = *((_QWORD *)v47 + 308);
        if ( *(_BYTE *)(v48 + 133) && !*(_BYTE *)(v48 + 132) )
          LOBYTE(v4) = 1;
        DXGADAPTER::ReleaseReferenceNoTracking(v47);
        v50 = *((_QWORD *)this + 8);
        v41 = 0LL;
        v43 = v50;
        if ( *(_BYTE *)(v45 + v50 + 177) )
        {
          if ( v49 )
          {
            if ( !(_BYTE)v4 )
            {
              v51 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v45 + v50 + 48);
              if ( (*(_DWORD *)v51 & 0x20101) == 0x20000LL )
              {
                CCD_TOPOLOGY::SetGivenPathDataFromActivePath(0LL, v51, (const struct CCD_TOPOLOGY *)v58);
                v43 = *((_QWORD *)this + 8);
              }
            }
          }
        }
        ++v44;
        v4 = 0;
        if ( v44 >= *(unsigned __int16 *)(v43 + 20) )
          goto LABEL_58;
      }
    }
    else
    {
      WdLogNewEntry5_WdTrace(v41, v40, v33, v34);
    }
    v13 = 0;
    goto LABEL_58;
  }
LABEL_17:
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 1);
  v18 = *((_QWORD *)this + 8);
  v19 = 0;
  if ( *(_WORD *)(v18 + 20) )
  {
    while ( 1 )
    {
      if ( v18 && *(_WORD *)(v18 + 20) )
      {
        v20 = 0;
        v21 = 272LL * v19;
        v22 = *(_DWORD *)(v21 + v18 + 64);
        v23 = *(_DWORD *)(v21 + v18 + 68);
        while ( 1 )
        {
          v24 = 272LL * v20;
          if ( *(_DWORD *)(v24 + v18 + 64) == v22 && *(_DWORD *)(v24 + v18 + 68) == v23 )
            break;
          ++v20;
        }
        v25 = v20 == v19;
      }
      else
      {
        v25 = 0;
      }
      if ( v25 )
        break;
LABEL_28:
      v18 = *((_QWORD *)this + 8);
      if ( ++v19 >= *(unsigned __int16 *)(v18 + 20) )
        goto LABEL_29;
    }
    v26 = 272LL * v19;
    while ( 1 )
    {
      PathModalityForAdapter = BmlGetPathModalityForAdapter(
                                 *((_QWORD *)this + 8),
                                 *(struct _LUID *)(*((_QWORD *)this + 8) + v26 + 64),
                                 *((_BYTE *)this + 76) & 1,
                                 *((_DWORD *)this + 20),
                                 v60);
      v11 = PathModalityForAdapter;
      if ( PathModalityForAdapter != -1071774970 )
        break;
      if ( !v13
        || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                            this,
                            (const struct _LUID *)(v26 + *((_QWORD *)this + 8) + 64LL))
        || v4 )
      {
        goto LABEL_65;
      }
      v4 = 1;
      WdLogNewEntry5_WdTrace(v28, v52, v53, v54);
    }
    v4 = 0;
    if ( PathModalityForAdapter >= 0 )
      goto LABEL_28;
LABEL_65:
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v55[3] = v11;
    v55[4] = *((_QWORD *)this + 8);
    v55[5] = v19;
    v55[6] = *(int *)(272LL * v19 + *((_QWORD *)this + 8) + 68);
    v55[7] = *(unsigned int *)(272LL * v19 + *((_QWORD *)this + 8) + 64);
    goto LABEL_67;
  }
LABEL_29:
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x10000000000000LL);
  v29 = CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(this);
  v11 = v29;
  if ( v29 < 0 )
    goto LABEL_66;
  CCD_TOPOLOGY::ClearGivenDescriptionFlagOnAllPaths(this, 0x20000000000000LL);
  CCD_TOPOLOGY::AdjustDesktopLayout(this);
  CCD_TOPOLOGY::FillScalingIntent(this);
  CCD_TOPOLOGY::LogFunctionalizePacket(this, 0);
  LODWORD(v11) = 0;
LABEL_31:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1668::__AUTO_USING_PM_PathChangeReason1668(&v56);
  return (unsigned int)v11;
}
