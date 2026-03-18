/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5514
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3A8C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000BC94 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C000BCD0 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00B36B8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00B3948 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B49CC (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B4A0C (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5E6C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00B63F8 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00C3DF8 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C00D7140 (DxgkStatusChangeNotify.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00DE334 (DxgkCreateSessionViewForCurrentSession.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2665::__AUTO_USING_PM_PrimaryClonePathIndex2665 @ 0x1C00DE480 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex2665--__AUTO_USING.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2667::__AUTO_USING_PM_PathChanged2667 @ 0x1C00DE4BC (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PathChanged2667--__AUTO_USING_PM_PathCh.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00DE82C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00F9DEC (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02251D0 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C0225328 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        DWORD a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  DWORD LowPart; // r12d
  CCD_TOPOLOGY *v4; // rdi
  unsigned __int16 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v11; // esi
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rcx
  struct DXGPROCESS *v14; // r13
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rcx
  int Active; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned int v26; // edx
  _DWORD *v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // ecx
  __int64 v30; // r15
  _DWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // edx
  _DWORD *v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // ecx
  _DWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  DXGGLOBAL *Global; // rax
  SIZE_T v42; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  PVOID v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int i; // r14d
  DXGGLOBAL *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rcx
  unsigned __int16 v51; // ax
  unsigned int v52; // ebx
  unsigned __int16 v53; // r10
  unsigned __int16 v54; // r9
  __int64 v55; // r8
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int16 v58; // r9
  unsigned __int16 v59; // r11
  bool IsMatchingSource; // al
  __int64 v61; // r11
  __int64 v62; // r8
  unsigned __int16 v63; // r10
  __int64 v64; // rdx
  __int64 v65; // r9
  unsigned __int16 v66; // r8
  __int64 v67; // rdx
  unsigned __int16 v68; // r11
  __int64 v69; // rcx
  unsigned __int16 v70; // r11
  unsigned __int16 v71; // ax
  unsigned int v72; // r8d
  unsigned int v73; // r9d
  __int64 v74; // r8
  __int64 v75; // r10
  int v76; // edx
  __int64 v77; // rax
  unsigned __int16 v78; // r15
  unsigned __int16 v79; // ax
  __int64 v80; // rdx
  __int64 v81; // rax
  unsigned int v82; // r14d
  __int64 v83; // rcx
  unsigned int v84; // r10d
  __int64 v85; // r9
  __int64 v86; // r8
  __int64 v87; // rbx
  __int64 v88; // rsi
  __int64 v89; // r8
  int v90; // edx
  __int64 v91; // rax
  unsigned int v92; // edx
  __int64 v93; // rax
  int v94; // eax
  char v95; // r14
  int v96; // eax
  __int64 v97; // rsi
  __int64 v98; // r15
  int v99; // eax
  __int64 v100; // r15
  struct DXGGLOBAL *v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  unsigned __int16 v104; // si
  __int64 v105; // rdx
  __int64 v106; // rbx
  unsigned int v107; // r12d
  __int64 v108; // rax
  LONG v109; // ecx
  __int64 v110; // rbx
  int v111; // eax
  __int64 v112; // r13
  __int64 v113; // rdx
  int v114; // r10d
  __int64 v115; // r8
  unsigned int v116; // r9d
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // rcx
  __int64 v122; // rbx
  __int64 v123; // rcx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rbx
  __int64 v129; // r11
  __int64 v130; // r10
  __int64 v131; // rbx
  __int64 v132; // rcx
  _QWORD *v133; // rax
  _QWORD *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rax
  _QWORD *v138; // rax
  int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // rbx
  __int64 v142; // rax
  __int64 v143; // rax
  unsigned __int16 v144[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v145[4]; // [rsp+34h] [rbp-CCh] BYREF
  struct _LUID Luid; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v147; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGPROCESS *v148; // [rsp+50h] [rbp-B0h]
  CCD_TOPOLOGY *v149; // [rsp+58h] [rbp-A8h]
  __int64 v150; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v151; // [rsp+68h] [rbp-98h]
  __int64 v152; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v153; // [rsp+78h] [rbp-88h]
  __int64 v154; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v155; // [rsp+88h] [rbp-78h]
  __int64 v156; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v157; // [rsp+98h] [rbp-68h]
  _BYTE v158[64]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v159; // [rsp+E0h] [rbp-20h]
  int v160; // [rsp+F4h] [rbp-Ch]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  char v162; // [rsp+130h] [rbp+30h]

  *(_QWORD *)&v147.left = a3;
  LowPart = a2;
  Luid.LowPart = a2;
  v4 = this;
  v149 = this;
  v162 = 0;
  v5 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v158, 8u, 0);
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 74);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v11 = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v122 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v122 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v123);
    v124 = v122;
    *(_QWORD *)(v122 + 32) = -1073741811LL;
LABEL_120:
    WdLogEvent5_WdError(v124);
    goto LABEL_114;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2324));
  Current = DXGPROCESS::GetCurrent();
  v148 = Current;
  v14 = Current;
  if ( !Current )
  {
    v124 = WdLogNewEntry5_WdError(v13);
    goto LABEL_120;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL) )
  {
    v125 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v125 + 24) = v14;
    WdLogEvent5_WdError(v125);
    v11 = -1073741790;
  }
  else
  {
    v145[0] = 0;
    v16 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v145, 1);
    v20 = v16;
    if ( v16 < 0 )
    {
      v126 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v126 + 24) = v20;
LABEL_125:
      WdLogEvent5_WdError(v126);
LABEL_162:
      v11 = v20;
    }
    else
    {
      for ( v144[0] = 8; ; v5 = v144[0] )
      {
        if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v158, v5, v18, v19) < v5 )
        {
          v143 = WdLogNewEntry5_WdLowResource(v21);
          *(_QWORD *)(v143 + 24) = *((_QWORD *)v4 + 8);
          *(_QWORD *)(v143 + 32) = v5;
          WdLogEvent5_WdLowResource(v143);
          LODWORD(v20) = -1073741801;
          goto LABEL_162;
        }
        v160 |= 3u;
        Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v158, 0, 1, 1, v144);
        v20 = Active;
        if ( Active != -1073741789 )
          break;
      }
      if ( Active < 0 )
      {
        v126 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v126 + 24) = *((_QWORD *)v4 + 8);
        *(_QWORD *)(v126 + 32) = v20;
        goto LABEL_125;
      }
      v24 = *((_QWORD *)v4 + 8);
      v25 = v159;
      v26 = *(unsigned __int16 *)(v24 + 20);
      v156 = v24 + 48;
      v157 = v26;
      if ( v26 )
      {
        v27 = (_DWORD *)(v24 + 280);
        v28 = v26;
        do
        {
          *v27 |= 4u;
          v27[3] = 0;
          v27 += 68;
          --v28;
        }
        while ( v28 );
      }
      v29 = *(unsigned __int16 *)(v25 + 20);
      v30 = v25 + 48;
      v154 = v25 + 48;
      v155 = v29;
      if ( v29 )
      {
        v31 = (_DWORD *)(v25 + 280);
        v32 = v29;
        do
        {
          *v31 |= 4u;
          v31[3] = 0;
          v31 += 68;
          --v32;
        }
        while ( v32 );
      }
      v33 = *((_QWORD *)v4 + 8);
      v34 = *(unsigned __int16 *)(v33 + 20);
      v152 = v33 + 48;
      v153 = v34;
      if ( v34 )
      {
        v35 = (_DWORD *)(v33 + 280);
        v36 = v34;
        do
        {
          *v35 |= 0x10u;
          v35[4] = 0;
          v35 += 68;
          --v36;
        }
        while ( v36 );
      }
      v37 = *(unsigned __int16 *)(v25 + 20);
      v150 = v25 + 48;
      v151 = v37;
      if ( v37 )
      {
        v38 = (_DWORD *)(v25 + 280);
        v39 = v37;
        do
        {
          *v38 |= 0x10u;
          v38[4] = 0;
          v38 += 68;
          --v39;
        }
        while ( v39 );
      }
      CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(v4);
      CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v158);
      Global = DXGGLOBAL::GetGlobal(v40);
      MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
      v42 = 316 * MaximumAdapterCount;
      if ( !is_mul_ok(MaximumAdapterCount, 0x13CuLL) )
        v42 = -1LL;
      v44 = operator new[](v42, 0x63644356u, PagedPool);
      v45 = *((_QWORD *)v4 + 8);
      *(_QWORD *)(v45 + 40) = v44;
      v46 = *((_QWORD *)v4 + 8);
      if ( *(_QWORD *)(v46 + 40) )
      {
        *(_WORD *)(v46 + 28) = 0;
        for ( i = 0; ; ++i )
        {
          v48 = DXGGLOBAL::GetGlobal(v45);
          if ( i >= DXGGLOBAL::GetMaximumAdapterCount(v48) )
            break;
          v49 = 316LL * i;
          memset((void *)(v49 + *(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL)), 0, 0x13CuLL);
          memset((void *)(v49 + *(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL) + 8LL), 255, 0x40uLL);
        }
        DxgkRemoveAllSessionViewForCurrentSession();
        v51 = *(_WORD *)(v25 + 20);
        v52 = 0;
        v53 = 0;
        if ( v51 )
        {
          LOWORD(v50) = 0;
          do
          {
            v54 = 0;
            v55 = 272LL * (unsigned __int16)v50 + v25;
            *(_DWORD *)(v55 + 296) = 0;
            v56 = *((_QWORD *)v4 + 8);
            if ( *(_WORD *)(v56 + 20) )
            {
              while ( !CCD_TOPOLOGY::IsMatchingSource(
                         (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v55 + 48),
                         (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v54 + v56 + 48))
                   || *(_DWORD *)(v55 + 76) != *(_DWORD *)(v57 + 28) )
              {
                v54 = v58 + 1;
                if ( v54 >= v59 )
                  goto LABEL_128;
              }
              IsMatchingSource = CCD_TOPOLOGY::IsMatchingSource(
                                   (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v55 + 292)
                                                                           + v25
                                                                           + 48),
                                   (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v57 + 244)
                                                                           + v56
                                                                           + 48));
              v52 = 0;
              if ( !IsMatchingSource )
              {
                *(_DWORD *)(v61 + v25 + 296) = 1;
                *(_QWORD *)(272LL * *(unsigned int *)(v55 + 292) + v25 + 244) = 0LL;
              }
            }
            else
            {
LABEL_128:
              v52 = 0;
            }
            if ( v54 >= *(_WORD *)(*((_QWORD *)v4 + 8) + 20LL) )
            {
              *(_DWORD *)(272LL * *(unsigned int *)(v55 + 292) + v25 + 296) = 1;
              *(_QWORD *)(272LL * *(unsigned int *)(v55 + 292) + v25 + 244) = 0LL;
            }
            v51 = *(_WORD *)(v25 + 20);
            v50 = ++v53;
          }
          while ( v53 < v51 );
        }
        v62 = *((_QWORD *)v4 + 8);
        v63 = 0;
        v64 = v62;
        if ( *(_WORD *)(v62 + 20) )
        {
          LOWORD(v50) = 0;
          do
          {
            v65 = 272LL * (unsigned __int16)v50 + v62;
            v66 = 0;
            *(_DWORD *)(v65 + 296) = 0;
            if ( *(_WORD *)(v25 + 20) )
            {
              while ( !CCD_TOPOLOGY::IsMatchingSource(
                         (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v65 + 48),
                         (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v66 + v25 + 48))
                   || *(_DWORD *)(v67 + 28) != *(_DWORD *)(v65 + 76) )
              {
                if ( ++v66 >= v68 )
                  goto LABEL_47;
              }
              v69 = *(unsigned int *)(v67 + 244);
              if ( (_DWORD)v69 == v66 && *(_DWORD *)(v65 + 292) == v63 )
              {
                *(_QWORD *)(v65 + 244) = *(_QWORD *)(v67 + 196);
              }
              else
              {
                v128 = *((_QWORD *)v4 + 8);
                if ( !CCD_TOPOLOGY::IsMatchingSource(
                        (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * *(unsigned int *)(v65 + 292) + v128 + 48),
                        (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272 * v69 + v25 + 48)) )
                {
                  *(_DWORD *)(v129 + v128 + 296) = 1;
                  *(_QWORD *)(272LL * *(unsigned int *)(v65 + 292) + *((_QWORD *)v4 + 8) + 244) = 0LL;
                }
                v52 = 0;
              }
            }
LABEL_47:
            v51 = *(_WORD *)(v25 + 20);
            if ( v66 >= v51 )
            {
              *(_DWORD *)(272LL * *(unsigned int *)(v65 + 292) + *((_QWORD *)v4 + 8) + 296) = 1;
              *(_QWORD *)(272LL * *(unsigned int *)(v65 + 292) + *((_QWORD *)v4 + 8) + 244) = 0LL;
              v51 = *(_WORD *)(v25 + 20);
            }
            v62 = *((_QWORD *)v4 + 8);
            v50 = ++v63;
            v64 = v62;
          }
          while ( v63 < *(_WORD *)(v62 + 20) );
        }
        v70 = 0;
        if ( v51 )
        {
          v71 = 0;
          do
          {
            v72 = *(_DWORD *)(v64 + 36);
            v73 = 0;
            if ( v72 )
            {
              v130 = *(_QWORD *)(v64 + 40);
              v131 = 272LL * v71;
              do
              {
                v132 = 316LL * v73;
                if ( *(_DWORD *)(v131 + v30 + 16) == *(_DWORD *)(v132 + v130)
                  && *(_DWORD *)(v131 + v30 + 20) == *(_DWORD *)(v132 + v130 + 4) )
                {
                  break;
                }
                ++v73;
              }
              while ( v73 < v72 );
              v52 = 0;
            }
            v74 = 316LL * v73;
            v75 = 272LL * v70;
            *(_DWORD *)(*(_QWORD *)(v64 + 40) + v74 + 76) |= 1 << *(_DWORD *)(v75 + v25 + 72);
            if ( (*(_QWORD *)(v75 + v25 + 48) & 0x1000000000LL) != 0 )
              v76 = 1 << *(_DWORD *)(v75 + v25 + 72);
            else
              v76 = 0;
            v50 = *(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL);
            *(_DWORD *)(v50 + v74 + 220) |= v76;
            if ( *(_DWORD *)(v75 + v25 + 296) == 1 )
            {
              v50 = *(unsigned int *)(v75 + v25 + 72);
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL) + v74 + 132) |= 1 << v50;
            }
            v62 = *((_QWORD *)v4 + 8);
            v64 = v62;
            v77 = *(unsigned int *)(v62 + 36);
            if ( v73 >= (unsigned int)v77 )
            {
              v50 = *(_QWORD *)(v62 + 40);
              *(_QWORD *)(316 * v77 + v50) = *(_QWORD *)(v75 + v25 + 64);
              ++*(_DWORD *)(*((_QWORD *)v4 + 8) + 36LL);
              v62 = *((_QWORD *)v4 + 8);
              v64 = v62;
            }
            v71 = ++v70;
          }
          while ( v70 < *(_WORD *)(v25 + 20) );
          v14 = v148;
          LowPart = Luid.LowPart;
        }
        v78 = 0;
        if ( *(_WORD *)(v62 + 20) )
        {
          v79 = 0;
          while ( 1 )
          {
            v80 = 272LL * v79;
            v81 = *(_QWORD *)(v62 + v80 + 48);
            if ( (v81 & 0x187) != 0 )
            {
              *(_QWORD *)(v62 + v80 + 48) = v81 | 0x40000000000000LL;
              *(_QWORD *)(v80 + *((_QWORD *)v4 + 8) + 56) |= *(_DWORD *)(v80 + *((_QWORD *)v4 + 8) + 48) & 0x187;
              v62 = *((_QWORD *)v4 + 8);
            }
            *(_DWORD *)(v80 + v62 + 240) = 0;
            v82 = 0;
            v83 = *((_QWORD *)v4 + 8);
            v84 = *(_DWORD *)(v83 + 36);
            if ( v84 )
            {
              v85 = *(_QWORD *)(v83 + 40);
              do
              {
                v86 = 316LL * v82;
                if ( *(_DWORD *)(v80 + v83 + 64) == *(_DWORD *)(v86 + v85)
                  && *(_DWORD *)(v80 + v83 + 68) == *(_DWORD *)(v86 + v85 + 4) )
                {
                  break;
                }
                ++v82;
              }
              while ( v82 < v84 );
              v4 = v149;
            }
            v87 = 272LL * v78;
            v88 = 316LL * v82;
            *(_DWORD *)(*(_QWORD *)(v83 + 40) + v88 + 80) |= 1 << *(_DWORD *)(v87 + v83 + 72);
            v89 = *((_QWORD *)v4 + 8);
            if ( (*(_QWORD *)(v89 + v87 + 48) & 0x1000000000LL) != 0 )
              v90 = 1 << *(_DWORD *)(v89 + v87 + 72);
            else
              v90 = 0;
            *(_DWORD *)(*(_QWORD *)(v89 + 40) + v88 + 220) |= v90;
            v91 = *((_QWORD *)v4 + 8);
            v92 = *(_DWORD *)(v91 + v87 + 292);
            if ( v92 == v78 )
            {
              *(_DWORD *)(*(_QWORD *)(v91 + 40) + v88 + 72) |= 1 << *(_DWORD *)(v91 + v87 + 72);
            }
            else if ( CCD_TOPOLOGY::IsSameCloneGroup(v4, v92, v78, 1) )
            {
              goto LABEL_75;
            }
            v50 = *((_QWORD *)v4 + 8);
            *(_DWORD *)(*(_QWORD *)(v50 + 40) + 4 * (79LL * v82 + *(unsigned int *)(v87 + v50 + 72)) + 8) = v78;
LABEL_75:
            v62 = *((_QWORD *)v4 + 8);
            if ( *(_DWORD *)(v87 + v62 + 296) == 1 )
            {
              v50 = *(unsigned int *)(v87 + v62 + 72);
              *(_DWORD *)(*(_QWORD *)(v62 + 40) + v88 + 132) |= 1 << v50;
              v62 = *((_QWORD *)v4 + 8);
            }
            v93 = *(unsigned int *)(v62 + 36);
            if ( v82 >= (unsigned int)v93 )
            {
              v50 = *(_QWORD *)(v62 + 40);
              *(_QWORD *)(316 * v93 + v50) = *(_QWORD *)(v87 + v62 + 64);
              ++*(_DWORD *)(*((_QWORD *)v4 + 8) + 36LL);
              v62 = *((_QWORD *)v4 + 8);
            }
            ++v78;
            v52 = 0;
            v79 = v78;
            if ( v78 >= *(_WORD *)(v62 + 20) )
            {
              v14 = v148;
              LowPart = Luid.LowPart;
              break;
            }
          }
        }
        v94 = *(_DWORD *)(v62 + 36);
        v95 = v94 != 0;
        LOBYTE(v144[0]) = v94 != 0;
        if ( v94 )
        {
          do
          {
            v96 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(v4, v52);
            v50 = v52;
            v97 = 316LL * v52;
            v98 = v96;
            if ( v96 < 0 )
            {
              v133 = (_QWORD *)WdLogNewEntry5_WdError(v52);
              v133[3] = *(int *)(*(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL) + v97 + 4);
              v133[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL) + 316LL * v52);
              v133[5] = *((_QWORD *)v4 + 8);
              v133[6] = v98;
              WdLogEvent5_WdError(v133);
              CCD_TOPOLOGY::MarkPathsApplyFailure(
                v4,
                (const struct _LUID *)(v97 + *(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL)),
                0xFFFFFFFF,
                v98);
            }
            else if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL) + v97 + 76) )
            {
              v99 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
                      v4,
                      v14,
                      LowPart,
                      v52,
                      *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v147.left);
              v100 = v99;
              if ( v99 < 0 )
              {
                v134 = (_QWORD *)WdLogNewEntry5_WdError(v50);
                v134[3] = *(int *)(*(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL) + v97 + 4);
                v134[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v4 + 8) + 40LL) + 316LL * v52);
                v134[5] = *((_QWORD *)v4 + 8);
                v134[6] = v100;
                WdLogEvent5_WdError(v134);
              }
              else
              {
                v95 = 0;
              }
            }
            ++v52;
          }
          while ( v52 < *(_DWORD *)(*((_QWORD *)v4 + 8) + 36LL) );
          LOBYTE(v144[0]) = v95;
        }
        v101 = DXGGLOBAL::GetGlobal(v50);
        QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v101 + 127));
        v103 = *((_QWORD *)v4 + 8);
        if ( *(_WORD *)(v103 + 20) )
        {
          v104 = 0;
          v105 = *((_QWORD *)v4 + 8);
          while ( 1 )
          {
            v106 = 272LL * v104;
            v107 = *(_DWORD *)(v106 + v103 + 292);
            if ( *(int *)(v106 + v103 + 240) >= 0 )
            {
              if ( v107 == v104 )
                goto LABEL_92;
              if ( !CCD_TOPOLOGY::IsSameCloneGroup(v4, v107, v104, 1) )
                break;
            }
LABEL_99:
            v103 = *((_QWORD *)v4 + 8);
            ++v104;
            v105 = v103;
            if ( v104 >= *(_WORD *)(v103 + 20) )
            {
              v95 = v144[0];
              goto LABEL_101;
            }
          }
          v105 = *((_QWORD *)v4 + 8);
LABEL_92:
          v108 = *(_QWORD *)(v105 + v106 + 48);
          if ( (v108 & 0x800) == 0 || (v108 & 0x20000) == 0 )
          {
            v135 = WdLogNewEntry5_WdAssertion(v102);
            WdLogEvent5_WdAssertion(v135);
            v105 = *((_QWORD *)v4 + 8);
          }
          v147.left = *(_DWORD *)(v106 + v105 + 192);
          v147.right = *(_DWORD *)(v106 + v105 + 200) + v147.left;
          v147.top = *(_DWORD *)(v106 + v105 + 196);
          v109 = *(_DWORD *)(v106 + v105 + 204) + v147.top;
          Luid = 0LL;
          v147.bottom = v109;
          if ( *(_DWORD *)(v106 + v105 + 244) || *(_DWORD *)(v106 + v105 + 248) )
          {
            Luid = *(struct _LUID *)(v106 + v105 + 244);
          }
          else
          {
            if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
            {
              v137 = WdLogNewEntry5_WdAssertion(v136);
              WdLogEvent5_WdAssertion(v137);
            }
            v105 = *((_QWORD *)v4 + 8);
          }
          v110 = 272LL * v104;
          v111 = DxgkCreateSessionViewForCurrentSession(
                   (struct _LUID *)(v110 + v105 + 64),
                   *(_DWORD *)(v110 + v105 + 72),
                   &v147,
                   v107 == v104,
                   &Luid);
          v112 = v111;
          if ( v111 < 0 )
          {
            v138 = (_QWORD *)WdLogNewEntry5_WdError(v102);
            v138[3] = *(int *)(*((_QWORD *)v4 + 8) + v110 + 68);
            v138[4] = *(unsigned int *)(*((_QWORD *)v4 + 8) + v110 + 64);
            v138[5] = *(unsigned int *)(*((_QWORD *)v4 + 8) + v110 + 72);
            v138[6] = v112;
            WdLogEvent5_WdError(v138);
            *(_DWORD *)(*((_QWORD *)v4 + 8) + v110 + 240) = v112;
          }
          else if ( v107 == v104 )
          {
            ++*(_WORD *)(*((_QWORD *)v4 + 8) + 28LL);
          }
          goto LABEL_99;
        }
LABEL_101:
        CCD_TOPOLOGY::CleanupPrimaryPathIndex(v4);
        CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v158);
        v113 = *((_QWORD *)v4 + 8);
        v114 = 0;
        v115 = 0LL;
        v116 = *(_DWORD *)(v113 + 36);
        if ( v116 )
        {
          v113 = *(_QWORD *)(v113 + 40);
          while ( 1 )
          {
            v117 = 316LL * (unsigned int)v115;
            if ( *(_DWORD *)(v117 + v113 + 92) || *(_DWORD *)(v117 + v113 + 84) )
              break;
            if ( *(_DWORD *)(v117 + v113 + 88) || *(_DWORD *)(v117 + v113 + 120) || *(_DWORD *)(v117 + v113 + 116) )
              v114 = 1;
            v115 = (unsigned int)(v115 + 1);
            if ( (unsigned int)v115 >= v116 )
              goto LABEL_109;
          }
          v114 = 0;
LABEL_109:
          if ( v114 )
          {
            v147.top = 0;
            v147.left = 11;
            *(_QWORD *)&v147.right = 0LL;
            v139 = DxgkStatusChangeNotify(&v147);
            v141 = v139;
            if ( v139 < 0 )
            {
              v142 = WdLogNewEntry5_WdError(v140);
              *(_QWORD *)(v142 + 24) = v141;
              WdLogEvent5_WdError(v142);
            }
          }
        }
        v11 = v95 != 0 ? 0xC0000001 : 0;
      }
      else
      {
        v127 = WdLogNewEntry5_WdLowResource(v45);
        *(_QWORD *)(v127 + 24) = v4;
        *(_QWORD *)(v127 + 32) = *((_QWORD *)v4 + 8);
        WdLogEvent5_WdLowResource(v127);
        v11 = -1073741801;
      }
      CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2667::__AUTO_USING_PM_PathChanged2667(
        &v150,
        v113,
        v115);
      CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2667::__AUTO_USING_PM_PathChanged2667(
        &v152,
        v118,
        v119);
      CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2665::__AUTO_USING_PM_PrimaryClonePathIndex2665(&v154);
      CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2665::__AUTO_USING_PM_PrimaryClonePathIndex2665(&v156);
    }
    if ( v145[0] )
      DxgkReleaseSessionModeChangeLock(v120);
  }
LABEL_114:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v158);
  if ( v162 )
    KeUnstackDetachProcess(&ApcState);
  return v11;
}
