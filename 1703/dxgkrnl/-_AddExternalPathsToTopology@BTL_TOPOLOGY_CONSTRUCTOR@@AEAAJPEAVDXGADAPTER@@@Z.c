/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E0148
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01E0114 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A87C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A8B8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E0D48 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4DBC (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1E@Z @ 0x1C01E06B8 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01E164C (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01E16E8 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(
        CCD_TOPOLOGY **this,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4)
{
  const struct DMMVIDPN **v6; // r13
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  _QWORD *v21; // rax
  struct DMMVIDPNTOPOLOGY *v22; // r15
  _QWORD *v23; // rax
  __int64 v24; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  const struct DMMVIDPN *v30; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int PathSourceFromTarget; // eax
  __int64 v38; // r15
  struct DMMVIDPNTOPOLOGY *v39; // r11
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  char v43; // r8
  int v44; // eax
  const struct DMMVIDEOPRESENTTARGET *v45; // r14
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // rax
  __int64 v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  int v50; // eax
  unsigned int v51; // r15d
  struct DMMVIDPNTOPOLOGY *v52; // r11
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  char v56; // r8
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v62; // rcx
  DMMVIDPNTOPOLOGY *v63; // [rsp+40h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v64; // [rsp+48h] [rbp-28h]
  __int64 v65; // [rsp+50h] [rbp-20h] BYREF
  __int64 v66; // [rsp+58h] [rbp-18h] BYREF
  __int64 v67; // [rsp+60h] [rbp-10h] BYREF
  bool v68; // [rsp+B8h] [rbp+48h] BYREF
  bool v69; // [rsp+C0h] [rbp+50h] BYREF
  int v70; // [rsp+C8h] [rbp+58h]

  v6 = *(const struct DMMVIDPN ***)(*((_QWORD *)a2 + 285) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v67, (__int64)v6, a3, a4);
  v9 = *((_QWORD *)a2 + 285);
  v10 = 0;
  v66 = 0LL;
  v64 = 0LL;
  if ( *(_BYTE *)(v9 + 134) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6, &v66, v7, v8) >= 0 )
  {
    v13 = v66;
    if ( !v66 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12, v11, v7, v8);
      WdLogEvent5_WdAssertion(v14);
    }
    v64 = (DMMVIDPNTOPOLOGY *)(v13 + 96);
  }
  v65 = 0LL;
  v15 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v6, &v65, v7, v8);
  v20 = v15;
  if ( v15 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v21[3] = v20;
    v21[4] = a2;
    v21[5] = *((int *)a2 + 68);
    v21[6] = *((unsigned int *)a2 + 67);
LABEL_18:
    WdLogEvent5_WdError(v21);
    goto LABEL_78;
  }
  v22 = (struct DMMVIDPNTOPOLOGY *)(v65 + 96);
  v63 = (DMMVIDPNTOPOLOGY *)(v65 + 96);
  if ( v65 == -96 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v23[3] = -96LL;
    v23[4] = a2;
    v23[5] = *((int *)a2 + 68);
    v23[6] = *((unsigned int *)a2 + 67);
    WdLogEvent5_WdError(v23);
    LODWORD(v20) = -1073741823;
    goto LABEL_78;
  }
  while ( 1 )
  {
    v24 = *((_QWORD *)*this + 8);
    if ( v24 )
      LOWORD(v24) = *(_WORD *)(v24 + 20);
    if ( v10 >= (unsigned __int16)v24 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, v10, v18, v19);
    v26 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 67)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 68) )
    {
      v27 = VIDPN_MGR::AddPathToVidPnTopology(
              (VIDPN_MGR *)v6,
              v22,
              *((unsigned int *)PathDescriptor + 6),
              *((unsigned int *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v10,
              0,
              D3DKMDT_MCC_IGNORE);
      v20 = v27;
      if ( v27 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
        v21[3] = v20;
        v21[4] = *((int *)v26 + 5);
        v21[5] = *((unsigned int *)v26 + 4);
        v21[6] = *((unsigned int *)v26 + 6);
        v21[7] = *((unsigned int *)v26 + 7);
        goto LABEL_18;
      }
    }
    ++v10;
  }
  v70 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)v6[10] + 18);
  v30 = v6[10];
  if ( v64 )
  {
    for ( i = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v6[10]);
          ;
          i = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v45, v30) )
    {
      v45 = i;
      if ( !i )
        break;
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v22, *((_DWORD *)i + 6))
        && ((_DWORD)v32 != *((_DWORD *)this + 6)
         || *((_DWORD *)a2 + 67) != *((_DWORD *)this + 3)
         || *((_DWORD *)a2 + 68) != *((_DWORD *)this + 4))
        && *((_QWORD *)v45 + 13)
        && !*((_BYTE *)v45 + 404) )
      {
        LODWORD(v20) = IsVirtualizationDisabledForTarget((__int64)a2, v32, &v69, &v68);
        if ( (int)v20 < 0 )
        {
LABEL_80:
          v48 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
          v62 = *((unsigned int *)v45 + 6);
          v48[4] = a2;
          v48[3] = v62;
LABEL_81:
          WdLogEvent5_WdError(v48);
          goto LABEL_76;
        }
        if ( !*((_BYTE *)this + 10) || !v68 )
        {
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v64, *((_DWORD *)v45 + 6), v35, v36);
          v38 = PathSourceFromTarget;
          if ( PathSourceFromTarget == -1 )
            goto LABEL_41;
          if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v63, PathSourceFromTarget) )
          {
            v40 = VIDPN_MGR::AddPathToVidPnTopology(
                    (VIDPN_MGR *)v6,
                    v39,
                    (unsigned int)v38,
                    *((unsigned int *)v45 + 6),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE);
            v20 = v40;
            if ( v40 != -1071774975 )
            {
              if ( v40 < 0 )
              {
                v48 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
                v48[3] = v20;
                v48[4] = *((int *)a2 + 68);
                v48[5] = *((unsigned int *)a2 + 67);
                v48[6] = v38;
LABEL_47:
                v48[7] = *((unsigned int *)v45 + 6);
                goto LABEL_81;
              }
              v43 = !v69 || !v68;
              LODWORD(v20) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                               (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                               (const struct _LUID *)((char *)a2 + 268),
                               v38,
                               *((_DWORD *)v45 + 6),
                               (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v45 + 20),
                               (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v45 + 21),
                               v43);
              v44 = v70;
              if ( (int)v20 >= 0 )
                v44 = v20;
              v70 = v44;
            }
LABEL_41:
            v22 = v63;
            continue;
          }
          v22 = v39;
        }
      }
    }
  }
  FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v30);
LABEL_73:
  v45 = FirstBestSecondaryTarget;
  if ( FirstBestSecondaryTarget )
  {
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v22, *((_DWORD *)FirstBestSecondaryTarget + 6))
      || (_DWORD)v49 == *((_DWORD *)this + 6)
      && *((_DWORD *)a2 + 67) == *((_DWORD *)this + 3)
      && *((_DWORD *)a2 + 68) == *((_DWORD *)this + 4)
      || !*((_QWORD *)v45 + 13) )
    {
      goto LABEL_72;
    }
    v50 = IsVirtualizationDisabledForTarget((__int64)a2, v49, &v69, &v68);
    v34 = 0LL;
    LODWORD(v20) = v50;
    if ( v50 < 0 )
      goto LABEL_80;
    if ( *((_BYTE *)this + 10) && v68 )
      goto LABEL_72;
    v51 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)a2 + 285) + 80LL) )
      goto LABEL_71;
    v52 = v63;
    while ( 1 )
    {
      if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v52, v51) )
      {
        v53 = VIDPN_MGR::AddPathToVidPnTopology(
                (VIDPN_MGR *)v6,
                v52,
                v51,
                *((unsigned int *)v45 + 6),
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                0xFFFFu,
                0,
                D3DKMDT_MCC_IGNORE);
        v20 = v53;
        if ( v53 != -1071774975 )
        {
          if ( v53 < 0 )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
            v48[3] = v20;
            v48[4] = *((int *)a2 + 68);
            v48[5] = *((unsigned int *)a2 + 67);
            v48[6] = v51;
            goto LABEL_47;
          }
          v56 = !v69 || !v68;
          LODWORD(v20) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                           (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                           (const struct _LUID *)((char *)a2 + 268),
                           v51,
                           *((_DWORD *)v45 + 6),
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v45 + 20),
                           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v45 + 21),
                           v56);
          v57 = v70;
          if ( (int)v20 >= 0 )
            v57 = v20;
          v70 = v57;
LABEL_71:
          v22 = v63;
LABEL_72:
          FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v45, v30);
          goto LABEL_73;
        }
        v52 = v63;
      }
      if ( ++v51 >= *(_DWORD *)(*((_QWORD *)a2 + 285) + 80LL) )
        goto LABEL_71;
    }
  }
  if ( (_DWORD)v20 == -1071774975 )
    LODWORD(v20) = v70;
LABEL_76:
  if ( v30 )
    ReferenceCounted::Release((const struct DMMVIDPN *)((char *)v30 + 64), v47);
LABEL_78:
  auto_rc<DMMVIDPN>::reset(&v65, 0LL);
  auto_rc<DMMVIDPN>::reset(&v66, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v67 + 40), v58, v59, v60);
  return (unsigned int)v20;
}
