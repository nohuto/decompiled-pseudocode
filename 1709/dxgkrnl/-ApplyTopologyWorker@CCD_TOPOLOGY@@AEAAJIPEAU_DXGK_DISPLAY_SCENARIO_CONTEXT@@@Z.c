/*
 * XREFs of ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DBCCC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00086F0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C000BDF8 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C008B85C (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DCC58 (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DCC98 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE190 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00DE704 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00E85B0 (DxgkStatusChangeNotify.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x1C00F84DC (DxgkCreateSessionViewForCurrentSession.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2642::__AUTO_USING_PM_PrimaryClonePathIndex2642 @ 0x1C00F87C0 (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PrimaryClonePathIndex2642--__AUTO_USING.c)
 *     _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2644::__AUTO_USING_PM_PathChanged2644 @ 0x1C00F87FC (_CCD_TOPOLOGY--ApplyTopologyWorker_--_2_--_AUTO_USING_PM_PathChanged2644--__AUTO_USING_PM_PathCh.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00F8ABC (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C01F760C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C01F7774 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker(
        CCD_TOPOLOGY *this,
        DWORD a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  unsigned __int16 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v9; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v15; // rcx
  struct DXGPROCESS *v16; // r12
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  int Active; // eax
  __int64 v23; // rcx
  unsigned int v24; // r14d
  __int64 v25; // rcx
  struct D3DKMT_GETPATHSMODALITY *v26; // rsi
  unsigned int v27; // edx
  _DWORD *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // ecx
  char *v31; // r15
  _DWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // edx
  _DWORD *v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // ecx
  _DWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  DXGGLOBAL *Global; // rax
  SIZE_T v43; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  PVOID v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  DXGGLOBAL *v48; // rax
  __int64 v49; // rbx
  unsigned int v50; // r14d
  unsigned __int16 i; // r10
  unsigned __int16 v52; // r9
  char *v53; // r8
  __int64 v54; // r11
  unsigned __int16 v55; // bx
  __int64 v56; // rdx
  __int16 v57; // r9
  __int64 v58; // rbx
  __int64 v59; // rdx
  unsigned __int16 j; // r10
  unsigned __int16 v61; // r9
  __int64 v62; // r8
  __int64 v63; // rdx
  unsigned __int16 v64; // r11
  __int64 v65; // rcx
  unsigned __int16 v66; // r9
  __int64 v67; // rdx
  unsigned int v68; // r8d
  unsigned int v69; // ecx
  __int64 v70; // r11
  __int64 v71; // r10
  int v72; // edx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned __int16 v76; // r15
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rcx
  unsigned int v80; // r8d
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // r8
  int v85; // edx
  __int64 v86; // rax
  unsigned int v87; // edx
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rax
  unsigned int v91; // esi
  __int64 v92; // rcx
  char v93; // r13
  DWORD LowPart; // r15d
  int v95; // eax
  __int64 v96; // r14
  __int64 v97; // rbx
  int v98; // eax
  __int64 v99; // r14
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rbx
  __int64 v103; // rcx
  _BYTE *v104; // rax
  unsigned __int16 v105; // si
  __int64 v106; // rbx
  __int64 v107; // rax
  unsigned int v108; // r15d
  __int64 v109; // rcx
  __int64 v110; // rdx
  LONG v111; // ecx
  int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // r12
  __int64 v115; // rdx
  int v116; // r10d
  __int64 v117; // r8
  unsigned int v118; // r9d
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // rcx
  __int64 v124; // rcx
  __int64 v125; // rbx
  __int64 v126; // rcx
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rbx
  __int64 v133; // r11
  __int64 v134; // r11
  __int64 v135; // rbx
  __int64 v136; // r10
  _QWORD *v137; // rax
  __int64 v138; // rbx
  _QWORD *v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  _QWORD *v142; // rax
  int v143; // eax
  __int64 v144; // rcx
  __int64 v145; // rbx
  __int64 v146; // rax
  __int64 v147; // rax
  unsigned __int16 v148[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v149[4]; // [rsp+34h] [rbp-CCh] BYREF
  struct tagRECT v150; // [rsp+38h] [rbp-C8h] BYREF
  struct _LUID Luid; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGPROCESS *v152; // [rsp+50h] [rbp-B0h]
  char *v153; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v154; // [rsp+60h] [rbp-A0h]
  __int64 v155; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v156; // [rsp+70h] [rbp-90h]
  char *v157; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v158; // [rsp+80h] [rbp-80h]
  __int64 v159; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v160; // [rsp+90h] [rbp-70h]
  struct D3DKMT_GETPATHSMODALITY *v161[10]; // [rsp+A0h] [rbp-60h] BYREF
  int v162; // [rsp+F4h] [rbp-Ch]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp+0h] BYREF
  char v164; // [rsp+130h] [rbp+30h]

  *(_QWORD *)&v150.left = a3;
  Luid.LowPart = a2;
  v164 = 0;
  v4 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v161, 8u, 0);
  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v5) + 73);
  if ( v7 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId, v9);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v11 = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v125 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v125 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v126);
    v127 = v125;
    *(_QWORD *)(v125 + 32) = -1073741811LL;
LABEL_124:
    WdLogEvent5_WdError(v127);
    goto LABEL_114;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2324));
  Current = DXGPROCESS::GetCurrent(v13, v12);
  v152 = Current;
  v16 = Current;
  if ( !Current )
  {
    v127 = WdLogNewEntry5_WdError(v15);
    goto LABEL_124;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 12) + 224LL))(0LL) )
  {
    v128 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v128 + 24) = v16;
    WdLogEvent5_WdError(v128);
    v11 = -1073741790;
  }
  else
  {
    v149[0] = 0;
    v18 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v149, 1);
    v20 = v18;
    if ( v18 < 0 )
    {
      v129 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v129 + 24) = v20;
      WdLogEvent5_WdError(v129);
LABEL_159:
      v11 = v20;
    }
    else
    {
      for ( v148[0] = 8; ; v4 = v148[0] )
      {
        if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v161, v4) < v4 )
        {
          v147 = WdLogNewEntry5_WdLowResource(v21);
          *(_QWORD *)(v147 + 24) = *((_QWORD *)this + 8);
          *(_QWORD *)(v147 + 32) = v4;
          WdLogEvent5_WdLowResource(v147);
          LODWORD(v20) = -1073741801;
          goto LABEL_159;
        }
        v162 |= 3u;
        Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v161, 0, 1, 1, v148);
        v20 = Active;
        if ( Active != -1073741789 )
          break;
      }
      v24 = 0;
      if ( Active < 0 )
      {
        v130 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v130 + 24) = *((_QWORD *)this + 8);
        *(_QWORD *)(v130 + 32) = v20;
        WdLogEvent5_WdError(v130);
        goto LABEL_159;
      }
      v25 = *((_QWORD *)this + 8);
      v26 = v161[8];
      v27 = *(unsigned __int16 *)(v25 + 20);
      v159 = v25 + 48;
      v160 = v27;
      if ( v27 )
      {
        v28 = (_DWORD *)(v25 + 272);
        v29 = v27;
        do
        {
          *v28 |= 4u;
          v28[3] = 0;
          v28 += 66;
          --v29;
        }
        while ( v29 );
      }
      v30 = *((unsigned __int16 *)v26 + 10);
      v31 = (char *)v26 + 48;
      v157 = (char *)v26 + 48;
      v158 = v30;
      if ( v30 )
      {
        v32 = (_DWORD *)((char *)v26 + 272);
        v33 = v30;
        do
        {
          *v32 |= 4u;
          v32[3] = 0;
          v32 += 66;
          --v33;
        }
        while ( v33 );
      }
      v34 = *((_QWORD *)this + 8);
      v35 = *(unsigned __int16 *)(v34 + 20);
      v155 = v34 + 48;
      v156 = v35;
      if ( v35 )
      {
        v36 = (_DWORD *)(v34 + 272);
        v37 = v35;
        do
        {
          *v36 |= 0x10u;
          v36[4] = 0;
          v36 += 66;
          --v37;
        }
        while ( v37 );
      }
      v38 = *((unsigned __int16 *)v26 + 10);
      v153 = (char *)v26 + 48;
      v154 = v38;
      if ( v38 )
      {
        v39 = (_DWORD *)((char *)v26 + 272);
        v40 = v38;
        do
        {
          *v39 |= 0x10u;
          v39[4] = 0;
          v39 += 66;
          --v40;
        }
        while ( v40 );
      }
      CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
      CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v161);
      Global = DXGGLOBAL::GetGlobal(v41);
      MaximumAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global);
      v43 = 224 * MaximumAdapterCount;
      if ( !is_mul_ok(MaximumAdapterCount, 0xE0uLL) )
        v43 = -1LL;
      v45 = operator new[](v43, 0x63644356u, PagedPool);
      v46 = *((_QWORD *)this + 8);
      *(_QWORD *)(v46 + 40) = v45;
      v47 = *((_QWORD *)this + 8);
      if ( *(_QWORD *)(v47 + 40) )
      {
        *(_WORD *)(v47 + 28) = 0;
        while ( 1 )
        {
          v48 = DXGGLOBAL::GetGlobal(v46);
          if ( v24 >= (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v48) )
            break;
          v49 = 224LL * v24;
          memset((void *)(v49 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)), 0, 0xE0uLL);
          memset((void *)(v49 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL), 255, 0x40uLL);
          ++v24;
        }
        DxgkRemoveAllSessionViewForCurrentSession();
        v50 = 0;
        for ( i = 0; i < *((_WORD *)v26 + 10); ++i )
        {
          v52 = 0;
          v53 = (char *)v26 + 264 * i;
          *((_DWORD *)v53 + 72) = 0;
          v54 = *((_QWORD *)this + 8);
          v55 = *(_WORD *)(v54 + 20);
          if ( v55 )
          {
            while ( !CCD_TOPOLOGY::IsMatchingSource(
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v53 + 48),
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(264LL * v52 + v54 + 48))
                 || *((_DWORD *)v53 + 19) != *(_DWORD *)(v56 + 28) )
            {
              v52 = v57 + 1;
              if ( v52 >= v55 )
                goto LABEL_35;
            }
            v58 = 264LL * *((unsigned int *)v53 + 71);
            if ( !CCD_TOPOLOGY::IsMatchingSource(
                    (struct D3DKMT_GETPATHSMODALITY *)((char *)v26 + v58 + 48),
                    (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(264LL * *(unsigned int *)(v56 + 236) + v54 + 48)) )
            {
              *(_DWORD *)((char *)v26 + v58 + 288) = 1;
              *(_QWORD *)((char *)v26 + 264 * *((unsigned int *)v53 + 71) + 244) = 0LL;
            }
          }
LABEL_35:
          if ( v52 >= *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
          {
            *((_DWORD *)v26 + 66 * *((unsigned int *)v53 + 71) + 72) = 1;
            *(_QWORD *)((char *)v26 + 264 * *((unsigned int *)v53 + 71) + 244) = 0LL;
          }
        }
        v59 = *((_QWORD *)this + 8);
        for ( j = 0; j < *(_WORD *)(v59 + 20); ++j )
        {
          v61 = 0;
          v62 = v59 + 264LL * j;
          *(_DWORD *)(v62 + 288) = 0;
          if ( *((_WORD *)v26 + 10) )
          {
            while ( !CCD_TOPOLOGY::IsMatchingSource(
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v62 + 48),
                       (struct D3DKMT_GETPATHSMODALITY *)((char *)v26 + 264 * v61 + 48))
                 || *(_DWORD *)(v63 + 28) != *(_DWORD *)(v62 + 76) )
            {
              if ( ++v61 >= v64 )
                goto LABEL_45;
            }
            v65 = *(unsigned int *)(v63 + 236);
            if ( (_DWORD)v65 == v61 && *(_DWORD *)(v62 + 284) == j )
            {
              *(_QWORD *)(v62 + 244) = *(_QWORD *)(v63 + 196);
            }
            else
            {
              v132 = *((_QWORD *)this + 8);
              if ( !CCD_TOPOLOGY::IsMatchingSource(
                      (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(264LL * *(unsigned int *)(v62 + 284) + v132 + 48),
                      (struct D3DKMT_GETPATHSMODALITY *)((char *)v26 + 264 * v65 + 48)) )
              {
                *(_DWORD *)(v133 + v132 + 288) = 1;
                *(_QWORD *)(264LL * *(unsigned int *)(v62 + 284) + *((_QWORD *)this + 8) + 244) = 0LL;
              }
            }
          }
LABEL_45:
          if ( v61 >= *((_WORD *)v26 + 10) )
          {
            *(_DWORD *)(264LL * *(unsigned int *)(v62 + 284) + *((_QWORD *)this + 8) + 288) = 1;
            *(_QWORD *)(264LL * *(unsigned int *)(v62 + 284) + *((_QWORD *)this + 8) + 244) = 0LL;
          }
          v59 = *((_QWORD *)this + 8);
        }
        v66 = 0;
        if ( *((_WORD *)v26 + 10) )
        {
          do
          {
            v67 = *((_QWORD *)this + 8);
            v68 = 0;
            v69 = *(_DWORD *)(v67 + 36);
            if ( v69 )
            {
              v134 = *(_QWORD *)(v67 + 40);
              v135 = 264LL * v66;
              do
              {
                v136 = 224LL * v68;
                if ( *(_DWORD *)&v31[v135 + 16] == *(_DWORD *)(v136 + v134)
                  && *(_DWORD *)&v31[v135 + 20] == *(_DWORD *)(v136 + v134 + 4) )
                {
                  break;
                }
                ++v68;
              }
              while ( v68 < v69 );
              v50 = 0;
            }
            v70 = 224LL * v68;
            v71 = 264LL * v66;
            *(_DWORD *)(*(_QWORD *)(v67 + 40) + v70 + 76) |= 1 << *(_DWORD *)((char *)v26 + v71 + 72);
            if ( (*(_QWORD *)((_BYTE *)v26 + v71 + 48) & 0x1000000000LL) != 0 )
              v72 = 1 << *(_DWORD *)((char *)v26 + v71 + 72);
            else
              v72 = 0;
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v70 + 220) |= v72;
            if ( *(_DWORD *)((char *)v26 + v71 + 288) == 1 )
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v70 + 132) |= 1 << *(_DWORD *)((char *)v26 + v71 + 72);
            v73 = *((_QWORD *)this + 8);
            v74 = *(unsigned int *)(v73 + 36);
            if ( v68 >= (unsigned int)v74 )
            {
              *(_QWORD *)(224 * v74 + *(_QWORD *)(v73 + 40)) = *(_QWORD *)((char *)v26 + v71 + 64);
              ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
            }
            ++v66;
          }
          while ( v66 < *((_WORD *)v26 + 10) );
          v16 = v152;
        }
        v75 = *((_QWORD *)this + 8);
        v76 = 0;
        if ( *(_WORD *)(v75 + 20) )
        {
          while ( 2 )
          {
            v77 = 264LL * v76;
            v78 = *(_QWORD *)(v77 + v75 + 48);
            if ( (v78 & 0x187) != 0 )
            {
              *(_QWORD *)(v77 + v75 + 48) = v78 | 0x40000000000000LL;
              *(_QWORD *)(v77 + *((_QWORD *)this + 8) + 56) |= *(_DWORD *)(v77 + *((_QWORD *)this + 8) + 48) & 0x187;
            }
            *(_DWORD *)(v77 + *((_QWORD *)this + 8) + 240) = 0;
            v79 = *((_QWORD *)this + 8);
            v80 = *(_DWORD *)(v79 + 36);
            if ( v80 )
            {
              v81 = *(_QWORD *)(v79 + 40);
              do
              {
                v82 = 224LL * v50;
                if ( *(_DWORD *)(v77 + v79 + 64) == *(_DWORD *)(v82 + v81)
                  && *(_DWORD *)(v77 + v79 + 68) == *(_DWORD *)(v82 + v81 + 4) )
                {
                  break;
                }
                ++v50;
              }
              while ( v50 < v80 );
            }
            v83 = 224LL * v50;
            *(_DWORD *)(*(_QWORD *)(v79 + 40) + v83 + 80) |= 1 << *(_DWORD *)(v77 + v79 + 72);
            v84 = *((_QWORD *)this + 8);
            if ( (*(_QWORD *)(v84 + v77 + 48) & 0x1000000000LL) != 0 )
              v85 = 1 << *(_DWORD *)(v84 + v77 + 72);
            else
              v85 = 0;
            *(_DWORD *)(*(_QWORD *)(v84 + 40) + v83 + 220) |= v85;
            v86 = *((_QWORD *)this + 8);
            v87 = *(_DWORD *)(v86 + v77 + 284);
            if ( v87 == v76 )
            {
              *(_DWORD *)(*(_QWORD *)(v86 + 40) + v83 + 72) |= 1 << *(_DWORD *)(v86 + v77 + 72);
              goto LABEL_69;
            }
            if ( !CCD_TOPOLOGY::IsSameCloneGroup(this, v87, v76, 1) )
LABEL_69:
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                        + 4 * (56LL * v50 + *(unsigned int *)(v77 + *((_QWORD *)this + 8) + 72))
                        + 8) = v76;
            v88 = *((_QWORD *)this + 8);
            if ( *(_DWORD *)(v77 + v88 + 288) == 1 )
              *(_DWORD *)(*(_QWORD *)(v88 + 40) + v83 + 132) |= 1 << *(_DWORD *)(v77 + v88 + 72);
            v89 = *((_QWORD *)this + 8);
            v90 = *(unsigned int *)(v89 + 36);
            if ( v50 >= (unsigned int)v90 )
            {
              *(_QWORD *)(224 * v90 + *(_QWORD *)(v89 + 40)) = *(_QWORD *)(v77 + v89 + 64);
              ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
            }
            v75 = *((_QWORD *)this + 8);
            ++v76;
            v50 = 0;
            if ( v76 >= *(_WORD *)(v75 + 20) )
            {
              v16 = v152;
              break;
            }
            continue;
          }
        }
        v91 = 0;
        v92 = *(unsigned int *)(*((_QWORD *)this + 8) + 36LL);
        v93 = (_DWORD)v92 != 0;
        LOBYTE(v148[0]) = (_DWORD)v92 != 0;
        if ( (_DWORD)v92 )
        {
          LowPart = Luid.LowPart;
          do
          {
            v95 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v91);
            v96 = v95;
            if ( v95 < 0 )
            {
              v137 = (_QWORD *)WdLogNewEntry5_WdError(v92);
              v138 = 224LL * v91;
              v137[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v138 + 4);
              v137[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v138);
              v137[5] = *((_QWORD *)this + 8);
              v137[6] = v96;
              WdLogEvent5_WdError(v137);
              CCD_TOPOLOGY::MarkPathsApplyFailure(
                this,
                (const struct _LUID *)(v138 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                0xFFFFFFFF,
                v96);
            }
            else
            {
              v97 = 224LL * v91;
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v97 + 76) )
              {
                v98 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(
                        this,
                        v16,
                        LowPart,
                        v91,
                        *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)&v150.left);
                v99 = v98;
                if ( v98 < 0 )
                {
                  v139 = (_QWORD *)WdLogNewEntry5_WdError(v92);
                  v139[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v97 + 4);
                  v139[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 224LL * v91);
                  v139[5] = *((_QWORD *)this + 8);
                  v139[6] = v99;
                  WdLogEvent5_WdError(v139);
                }
                else
                {
                  v93 = 0;
                }
              }
            }
            ++v91;
          }
          while ( v91 < *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) );
          LOBYTE(v148[0]) = v93;
        }
        v102 = *((_QWORD *)DXGGLOBAL::GetGlobal(v92) + 117);
        if ( *(_BYTE *)v102 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v101, v100) + 24) = 201LL;
        }
        else
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v150, *(struct DXGFASTMUTEX *const *)(v102 + 8));
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v150);
          v103 = 18LL;
          v104 = (_BYTE *)(v102 + 16);
          do
          {
            *v104 = 0;
            v104 += 32;
            --v103;
          }
          while ( v103 );
          ++*(_DWORD *)(v102 + 592);
          *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, 1LL) + 24) = 223LL;
          if ( LOBYTE(v150.right) )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v150);
        }
        v105 = 0;
        if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
        {
          do
          {
            v106 = 264LL * v105;
            v107 = *((_QWORD *)this + 8);
            v108 = *(_DWORD *)(v106 + v107 + 284);
            if ( *(int *)(v106 + v107 + 240) >= 0
              && (v108 == v105 || !CCD_TOPOLOGY::IsSameCloneGroup(this, v108, v105, 1)) )
            {
              v109 = *(_QWORD *)(v106 + *((_QWORD *)this + 8) + 48);
              if ( (v109 & 0x800) == 0 || (v109 & 0x20000) == 0 )
              {
                v140 = WdLogNewEntry5_WdAssertion(v109);
                WdLogEvent5_WdAssertion(v140);
              }
              v110 = *((_QWORD *)this + 8);
              v150.left = *(_DWORD *)(v106 + v110 + 192);
              v150.right = *(_DWORD *)(v106 + v110 + 200) + v150.left;
              v150.top = *(_DWORD *)(v106 + v110 + 196);
              v111 = *(_DWORD *)(v106 + v110 + 204) + v150.top;
              Luid = 0LL;
              v150.bottom = v111;
              if ( *(_DWORD *)(v106 + v110 + 244) || *(_DWORD *)(v106 + v110 + 248) )
              {
                Luid = *(struct _LUID *)(v106 + v110 + 244);
              }
              else if ( ZwAllocateLocallyUniqueId(&Luid) < 0 )
              {
                v141 = WdLogNewEntry5_WdAssertion(v124);
                WdLogEvent5_WdAssertion(v141);
              }
              v112 = DxgkCreateSessionViewForCurrentSession(
                       (struct _LUID *)(v106 + *((_QWORD *)this + 8) + 64LL),
                       *(_DWORD *)(v106 + *((_QWORD *)this + 8) + 72),
                       &v150,
                       v108 == v105,
                       &Luid);
              v114 = v112;
              if ( v112 < 0 )
              {
                v142 = (_QWORD *)WdLogNewEntry5_WdError(v113);
                v142[3] = *(int *)(v106 + *((_QWORD *)this + 8) + 68);
                v142[4] = *(unsigned int *)(v106 + *((_QWORD *)this + 8) + 64);
                v142[5] = *(unsigned int *)(v106 + *((_QWORD *)this + 8) + 72);
                v142[6] = v114;
                WdLogEvent5_WdError(v142);
                *(_DWORD *)(v106 + *((_QWORD *)this + 8) + 240) = v114;
              }
              else if ( v108 == v105 )
              {
                ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
              }
            }
            ++v105;
          }
          while ( v105 < *(_WORD *)(*((_QWORD *)this + 8) + 20LL) );
          v93 = v148[0];
        }
        CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
        CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v161);
        v115 = *((_QWORD *)this + 8);
        v116 = 0;
        v117 = 0LL;
        v118 = *(_DWORD *)(v115 + 36);
        if ( v118 )
        {
          v115 = *(_QWORD *)(v115 + 40);
          while ( 1 )
          {
            v119 = 224LL * (unsigned int)v117;
            if ( *(_DWORD *)(v119 + v115 + 92) || *(_DWORD *)(v119 + v115 + 84) )
              break;
            if ( *(_DWORD *)(v119 + v115 + 88) || *(_DWORD *)(v119 + v115 + 120) || *(_DWORD *)(v119 + v115 + 116) )
              v116 = 1;
            v117 = (unsigned int)(v117 + 1);
            if ( (unsigned int)v117 >= v118 )
              goto LABEL_109;
          }
          v116 = 0;
LABEL_109:
          if ( v116 )
          {
            v150.top = 0;
            v150.left = 11;
            *(_QWORD *)&v150.right = 0LL;
            v143 = DxgkStatusChangeNotify(&v150);
            v145 = v143;
            if ( v143 < 0 )
            {
              v146 = WdLogNewEntry5_WdError(v144);
              *(_QWORD *)(v146 + 24) = v145;
              WdLogEvent5_WdError(v146);
            }
          }
        }
        v11 = v93 != 0 ? 0xC0000001 : 0;
      }
      else
      {
        v131 = WdLogNewEntry5_WdLowResource(v46);
        *(_QWORD *)(v131 + 24) = this;
        *(_QWORD *)(v131 + 32) = *((_QWORD *)this + 8);
        WdLogEvent5_WdLowResource(v131);
        v11 = -1073741801;
      }
      CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2644::__AUTO_USING_PM_PathChanged2644(
        &v153,
        v115,
        v117);
      CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged2644::__AUTO_USING_PM_PathChanged2644(
        &v155,
        v120,
        v121);
      CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2642::__AUTO_USING_PM_PrimaryClonePathIndex2642(&v157);
      CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex2642::__AUTO_USING_PM_PrimaryClonePathIndex2642(&v159);
    }
    if ( v149[0] )
      DxgkReleaseSessionModeChangeLock(v122);
  }
LABEL_114:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v161);
  if ( v164 )
    KeUnstackDetachProcess(&ApcState);
  return v11;
}
