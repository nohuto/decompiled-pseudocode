/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0227C18
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0227BDC (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000452C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004564 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B9938 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA2C4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1E@Z @ 0x1C022831C (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C022939C (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0229440 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(CCD_TOPOLOGY **this, struct DXGADAPTER *a2)
{
  const struct DMMVIDPN **v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  struct DMMVIDPNTOPOLOGY *v14; // r15
  _QWORD *v15; // rax
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  const struct DMMVIDPN *v22; // rax
  int v23; // r15d
  const struct DMMVIDPN *v24; // rbx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  unsigned int v26; // edx
  __int64 v27; // rcx
  unsigned int PathSourceFromTarget; // eax
  __int64 v29; // r15
  struct DMMVIDPNTOPOLOGY *v30; // r11
  int v31; // eax
  __int64 v32; // rcx
  char v33; // r8
  int v34; // eax
  const struct DMMVIDEOPRESENTTARGET *v35; // r14
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // rax
  _QWORD *v37; // rax
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // r15d
  struct DMMVIDPNTOPOLOGY *v41; // r11
  int v42; // eax
  __int64 v43; // rcx
  char v45; // r8
  int v46; // eax
  __int64 v47; // rcx
  DMMVIDPNTOPOLOGY *v48; // [rsp+40h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v49; // [rsp+48h] [rbp-28h]
  __int64 v50; // [rsp+50h] [rbp-20h] BYREF
  __int64 v51; // [rsp+58h] [rbp-18h] BYREF
  __int64 v52; // [rsp+60h] [rbp-10h] BYREF
  bool v53; // [rsp+B8h] [rbp+48h] BYREF
  bool v54; // [rsp+C0h] [rbp+50h] BYREF
  int v55; // [rsp+C8h] [rbp+58h]

  v4 = *(const struct DMMVIDPN ***)(*((_QWORD *)a2 + 307) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v52, (__int64)v4);
  v5 = *((_QWORD *)a2 + 307);
  v6 = 0;
  v51 = 0LL;
  v49 = 0LL;
  if ( *(_BYTE *)(v5 + 133) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v4, &v51) >= 0 )
  {
    v8 = v51;
    if ( !v51 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v9);
    }
    v49 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
  }
  v50 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPn((struct VIDPN_MGR *)v4, &v50);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v12;
    v13[4] = a2;
    v13[5] = *((int *)a2 + 68);
    v13[6] = *((unsigned int *)a2 + 67);
LABEL_19:
    WdLogEvent5_WdError(v13);
    goto LABEL_70;
  }
  v14 = (struct DMMVIDPNTOPOLOGY *)(v50 + 96);
  v48 = (DMMVIDPNTOPOLOGY *)(v50 + 96);
  if ( v50 == -96 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v15[3] = -96LL;
    v15[4] = a2;
    v15[5] = *((int *)a2 + 68);
    v15[6] = *((unsigned int *)a2 + 67);
    WdLogEvent5_WdError(v15);
    LODWORD(v12) = -1073741823;
    goto LABEL_70;
  }
  while ( 1 )
  {
    v16 = *((_QWORD *)*this + 8);
    v17 = v16 ? *(_WORD *)(v16 + 20) : 0;
    if ( v6 >= v17 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, v6);
    v19 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 67)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 68) )
    {
      v20 = VIDPN_MGR::AddPathToVidPnTopology(
              (VIDPN_MGR *)v4,
              v14,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v6,
              0,
              D3DKMDT_MCC_IGNORE);
      v12 = v20;
      if ( v20 < 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v13[3] = v12;
        v13[4] = *((int *)v19 + 5);
        v13[5] = *((unsigned int *)v19 + 4);
        v13[6] = *((unsigned int *)v19 + 6);
        v13[7] = *((unsigned int *)v19 + 7);
        goto LABEL_19;
      }
    }
    ++v6;
  }
  v22 = v4[10];
  v23 = -1071774975;
  v55 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)v22 + 18);
  v24 = v4[10];
  if ( v49 )
  {
    for ( i = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v4[10]);
          ;
          i = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v35, v24) )
    {
      v35 = i;
      if ( !i )
        break;
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v48, *((_DWORD *)i + 6))
        && (v26 != *((_DWORD *)this + 6)
         || *((_DWORD *)a2 + 67) != *((_DWORD *)this + 3)
         || *((_DWORD *)a2 + 68) != *((_DWORD *)this + 4))
        && *((_QWORD *)v35 + 13)
        && !*((_DWORD *)v35 + 22) )
      {
        LODWORD(v12) = IsVirtualizationDisabledForTarget(a2, v26, &v54, &v53);
        if ( (int)v12 < 0 )
        {
LABEL_80:
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v27);
          v47 = *((unsigned int *)v35 + 6);
          v37[4] = a2;
          v37[3] = v47;
LABEL_81:
          WdLogEvent5_WdError(v37);
          goto LABEL_68;
        }
        if ( !*((_BYTE *)this + 10) || !v53 )
        {
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v49, *((_DWORD *)v35 + 6));
          v29 = PathSourceFromTarget;
          if ( PathSourceFromTarget == -1
            || DMMVIDPNTOPOLOGY::IsSourceInTopology(v48, PathSourceFromTarget)
            || (v31 = VIDPN_MGR::AddPathToVidPnTopology(
                        (VIDPN_MGR *)v4,
                        v30,
                        v29,
                        *((_DWORD *)v35 + 6),
                        (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                        0xFFFFu,
                        0,
                        D3DKMDT_MCC_IGNORE),
                v12 = v31,
                v31 == -1071774975) )
          {
            v23 = v55;
          }
          else
          {
            if ( v31 < 0 )
            {
              v37 = (_QWORD *)WdLogNewEntry5_WdError(v32);
              v37[3] = v12;
              v37[4] = *((int *)a2 + 68);
              v37[5] = *((unsigned int *)a2 + 67);
              v37[6] = v29;
LABEL_47:
              v37[7] = *((unsigned int *)v35 + 6);
              goto LABEL_81;
            }
            v33 = !v54 || !v53;
            v34 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                    (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                    (const struct _LUID *)((char *)a2 + 268),
                    v29,
                    *((_DWORD *)v35 + 6),
                    (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v35 + 20),
                    (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v35 + 21),
                    v33);
            v23 = v55;
            LODWORD(v12) = v34;
            if ( v34 >= 0 )
              v23 = v34;
            v55 = v23;
          }
        }
      }
    }
  }
  FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget(v24);
LABEL_64:
  v35 = FirstBestSecondaryTarget;
  if ( FirstBestSecondaryTarget )
  {
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v48, *((_DWORD *)FirstBestSecondaryTarget + 6))
      || v38 == *((_DWORD *)this + 6)
      && *((_DWORD *)a2 + 67) == *((_DWORD *)this + 3)
      && *((_DWORD *)a2 + 68) == *((_DWORD *)this + 4)
      || !*((_QWORD *)v35 + 13) )
    {
      goto LABEL_63;
    }
    v39 = IsVirtualizationDisabledForTarget(a2, v38, &v54, &v53);
    v27 = 0LL;
    LODWORD(v12) = v39;
    if ( v39 < 0 )
      goto LABEL_80;
    if ( *((_BYTE *)this + 10) && v53 )
      goto LABEL_63;
    v40 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)a2 + 307) + 80LL) )
    {
LABEL_62:
      v23 = v55;
      goto LABEL_63;
    }
    v41 = v48;
    while ( 1 )
    {
      if ( !DMMVIDPNTOPOLOGY::IsSourceInTopology(v41, v40) )
      {
        v42 = VIDPN_MGR::AddPathToVidPnTopology(
                (VIDPN_MGR *)v4,
                v41,
                v40,
                *((_DWORD *)v35 + 6),
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                0xFFFFu,
                0,
                D3DKMDT_MCC_IGNORE);
        v12 = v42;
        if ( v42 != -1071774975 )
        {
          if ( v42 < 0 )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v43);
            v37[3] = v12;
            v37[4] = *((int *)a2 + 68);
            v37[5] = *((unsigned int *)a2 + 67);
            v37[6] = v40;
            goto LABEL_47;
          }
          v45 = !v54 || !v53;
          v46 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                  (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                  (const struct _LUID *)((char *)a2 + 268),
                  v40,
                  *((_DWORD *)v35 + 6),
                  (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v35 + 20),
                  (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v35 + 21),
                  v45);
          v23 = v55;
          LODWORD(v12) = v46;
          if ( v46 >= 0 )
            v23 = v46;
          v55 = v23;
LABEL_63:
          FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(v35, v24);
          goto LABEL_64;
        }
        v41 = v48;
      }
      if ( ++v40 >= *(_DWORD *)(*((_QWORD *)a2 + 307) + 80LL) )
        goto LABEL_62;
    }
  }
  if ( (_DWORD)v12 != -1071774975 )
    v23 = v12;
  LODWORD(v12) = v23;
LABEL_68:
  if ( v24 )
    ReferenceCounted::Release((const struct DMMVIDPN *)((char *)v24 + 64));
LABEL_70:
  auto_rc<DMMVIDPN>::reset(&v50, 0LL);
  auto_rc<DMMVIDPN>::reset(&v51, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v52 + 40));
  return (unsigned int)v12;
}
