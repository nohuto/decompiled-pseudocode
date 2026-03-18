/*
 * XREFs of ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01E0D9C
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01DFAE4 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C000BAC0 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     _lambda_1c542006f153cc5b9688cafc2a2d400a_::operator() @ 0x1C00897BC (_lambda_1c542006f153cc5b9688cafc2a2d400a_--operator().c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AAF40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EA544 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00EB9B0 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C017C350 (DxgkIsMonitorConnected.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DE30C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01DECB8 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01E070C (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01E0CB0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01E13A8 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01E13E4 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01E1480 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01E1518 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C01E155C (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(BTL_TOPOLOGY_CONSTRUCTOR *this, unsigned int *a2)
{
  int v2; // eax
  __int128 v3; // xmm1
  BTL_TOPOLOGY_CONSTRUCTOR *v5; // rbx
  __int128 v6; // xmm0
  unsigned __int16 v7; // r12
  unsigned __int16 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct CCD_BTL *v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // r8
  __int64 v16; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rcx
  __int64 v22; // rdx
  __int128 v23; // xmm0
  unsigned int v24; // r15d
  unsigned int j; // r15d
  unsigned int v26; // edi
  unsigned int v27; // r12d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // r15
  __int64 v29; // rcx
  unsigned int v30; // r14d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v31; // rax
  CCD_TOPOLOGY *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // rax
  struct _LUID *v40; // rax
  bool *v41; // r12
  const struct _LUID *v42; // r15
  struct _LUID *v43; // r14
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  bool v48; // zf
  bool v49; // al
  char v50; // dl
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  CCD_TOPOLOGY *v55; // rcx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  CCD_TOPOLOGY *v61; // rcx
  __int128 v62; // xmm0
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  int v67; // eax
  __int64 v68; // rax
  CCD_TOPOLOGY *v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // eax
  _QWORD *v75; // rax
  CCD_TOPOLOGY *v76; // rcx
  int v78; // [rsp+30h] [rbp-89h]
  struct _D3DKMT_GETPATHSMODALITY *v79[12]; // [rsp+40h] [rbp-79h] BYREF
  __int128 v80; // [rsp+A0h] [rbp-19h]
  __int128 v81; // [rsp+B0h] [rbp-9h]
  __int128 v82; // [rsp+C0h] [rbp+7h]
  unsigned __int64 i; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int16 v85; // [rsp+130h] [rbp+77h]
  int v86; // [rsp+138h] [rbp+7Fh]

  v2 = *((_DWORD *)this + 15);
  v3 = *(_OWORD *)((char *)this + 28);
  v5 = this;
  v80 = *(_OWORD *)((char *)this + 12);
  *a2 = 0;
  v6 = *(_OWORD *)((char *)this + 44);
  v78 = v2;
  v81 = v3;
  v82 = v6;
  v7 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology();
  v85 = v7;
  v86 = v7;
  v8 = v7;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v79, 8u, 0);
  v13 = CCD_BTL::Global(v10, v9, v11, v12);
  if ( (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v79, v13) < 0 )
    goto LABEL_55;
  *a2 = 0;
  v14 = 0;
  if ( (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v79) )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v79, v14, v15, v16);
      LOBYTE(i) = 0;
      if ( (int)DxgkIsMonitorConnected(
                  *(struct _LUID *)((char *)PathDescriptor + 16),
                  *((unsigned int *)PathDescriptor + 7),
                  0LL,
                  0LL,
                  (bool *)&i) >= 0
        && (_BYTE)i )
      {
        v20 = *a2;
        *((_QWORD *)PathDescriptor + 1) = 0LL;
        if ( v14 != (_DWORD)v20 )
        {
          v21 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v79, v20, v18, v19);
          v22 = 2LL;
          do
          {
            v23 = *(_OWORD *)PathDescriptor;
            PathDescriptor = (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)PathDescriptor + 128);
            *(_OWORD *)v21 = v23;
            v21 = (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v21 + 128);
            *((_OWORD *)v21 - 7) = *((_OWORD *)PathDescriptor - 7);
            *((_OWORD *)v21 - 6) = *((_OWORD *)PathDescriptor - 6);
            *((_OWORD *)v21 - 5) = *((_OWORD *)PathDescriptor - 5);
            *((_OWORD *)v21 - 4) = *((_OWORD *)PathDescriptor - 4);
            *((_OWORD *)v21 - 3) = *((_OWORD *)PathDescriptor - 3);
            *((_OWORD *)v21 - 2) = *((_OWORD *)PathDescriptor - 2);
            *((_OWORD *)v21 - 1) = *((_OWORD *)PathDescriptor - 1);
            --v22;
          }
          while ( v22 );
          *(_QWORD *)v21 = *(_QWORD *)PathDescriptor;
        }
        ++*a2;
      }
      else
      {
        v24 = 0;
        for ( i = (unsigned __int64)v79; v24 < *a2; ++v24 )
          lambda_1c542006f153cc5b9688cafc2a2d400a_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, v24);
        for ( j = v14 + 1; j < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v79); ++j )
          lambda_1c542006f153cc5b9688cafc2a2d400a_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, j);
      }
      ++v14;
    }
    while ( v14 < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v79) );
    v5 = this;
    v7 = v86;
    v8 = v85;
  }
  v26 = *a2;
  *((_WORD *)v79[8] + 10) = *(_WORD *)a2;
  if ( v26 )
  {
    v27 = v26 - 1;
    do
    {
      v28 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v79, v27, v15, v16);
      v29 = *(_QWORD *)v28;
      if ( (*(_QWORD *)v28 & 0x4000000000000LL) != 0 )
      {
        v30 = 0;
        while ( 1 )
        {
          v31 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v79, v30, v15, v16);
          if ( (*(_QWORD *)v31 & 0x4000000000000LL) != 0 && *((_DWORD *)v28 + 58) == *((_DWORD *)v31 + 58) )
            break;
          if ( ++v30 >= v26 )
            goto LABEL_28;
        }
        *((_DWORD *)v28 + 58) = v30 | 0xFE530000;
      }
      else
      {
        *((_DWORD *)v28 + 58) = v27 | 0xFE530000;
        *(_QWORD *)v28 = v29 | 0x4000000000000LL;
      }
LABEL_28:
      --v27;
      --v26;
    }
    while ( v26 );
    v7 = v86;
    v8 = v85;
  }
  if ( *a2 && (unsigned __int16)(v7 - 1) > 1u )
  {
    v32 = *(CCD_TOPOLOGY **)v5;
    *((_WORD *)v5 + 4) = *(_WORD *)a2;
    v33 = CCD_TOPOLOGY::CopyInheritScope(v32, (const struct CCD_TOPOLOGY *)v79);
    v38 = v33;
    if ( v33 < 0 )
    {
      v39 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v39 + 24) = v38;
      WdLogEvent5_WdError(v39);
      goto LABEL_39;
    }
    if ( *a2 != 1 )
      v86 = 4;
    v40 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)v5, 0LL, v36, v37);
    v41 = (bool *)v5 + 60;
    v42 = v40 + 2;
    v43 = v40;
    *(struct _LUID *)((char *)v5 + 12) = v40[2];
    *((_DWORD *)v5 + 5) = v40[3].LowPart;
    *((_DWORD *)v5 + 6) = v40[3].HighPart;
    *((_DWORD *)v5 + 7) = v40[11].LowPart;
    *((_DWORD *)v5 + 8) = v40[11].HighPart;
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          v40[2],
                                          v40[3].HighPart,
                                          (__int64)v5 + 53,
                                          (__int64)v5 + 60,
                                          0LL,
                                          0LL);
    v38 = IsVirtualizationDisabledForTarget;
    if ( IsVirtualizationDisabledForTarget >= 0 )
    {
      v48 = !*v41;
      *((_BYTE *)v5 + 53) = *((_BYTE *)v5 + 53) == 0;
      *v41 = v48;
      v49 = (_WORD)v86 == 3;
      *((_BYTE *)v5 + 11) = (_WORD)v86 == 3;
      if ( !v49 || (v50 = 1, !v48) )
        v50 = 0;
      *((_BYTE *)v5 + 10) = v50;
      if ( v48 || !v49 )
      {
        v56 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(v5, 0);
        v38 = v56;
        if ( v56 >= 0 )
          goto LABEL_72;
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
        v54[3] = (unsigned int)v43[3].HighPart;
        v54[4] = v43[2].HighPart;
        v54[5] = v42->LowPart;
        v54[6] = v38;
      }
      else
      {
        *((_BYTE *)v5 + 10) = 0;
        v51 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology((CCD_TOPOLOGY **)v5, 0LL, v42, v43[3].LowPart);
        v38 = v51;
        if ( v51 >= 0 )
        {
          if ( IsInternalVideoOutput(v43[11].LowPart)
            && (unsigned __int16)CCD_TOPOLOGY::GetPathsCount(*(CCD_TOPOLOGY **)v5) >= 2u )
          {
            CCD_TOPOLOGY::SwapPathsDescriptors(v55, 0, 1u);
          }
          goto LABEL_38;
        }
        v54 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
        v54[3] = v38;
        v54[4] = v43[2].HighPart;
        v54[5] = v42->LowPart;
        v54[6] = v43[3].LowPart;
        v54[7] = *(_QWORD *)(*(_QWORD *)v5 + 64LL);
      }
      WdLogEvent5_WdError(v54);
    }
    else
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
      v47[3] = (unsigned int)v43[3].HighPart;
      v47[4] = v43[2].HighPart;
      v47[5] = v42->LowPart;
      v47[6] = v38;
      WdLogEvent5_WdError(v47);
    }
LABEL_38:
    v8 = v85;
    goto LABEL_39;
  }
  LODWORD(v38) = -1073741637;
LABEL_39:
  if ( (int)v38 >= 0 )
    goto LABEL_72;
LABEL_55:
  v59 = v80;
  v60 = v81;
  v61 = *(CCD_TOPOLOGY **)v5;
  *((_DWORD *)v5 + 2) = 0;
  *(_OWORD *)((char *)v5 + 12) = v59;
  *a2 = 0;
  v62 = v82;
  *(_OWORD *)((char *)v5 + 28) = v60;
  *(_OWORD *)((char *)v5 + 44) = v62;
  *((_DWORD *)v5 + 15) = v78;
  CCD_TOPOLOGY::Clear(v61);
  switch ( v8 )
  {
    case 1u:
      v67 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(v5);
      break;
    case 2u:
      v67 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(v5);
      break;
    case 3u:
      v67 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(v5, 0);
      break;
    default:
      if ( (unsigned int)v8 - 4 > 1 )
      {
        v68 = WdLogNewEntry5_WdAssertion(v64, v63, v65, v66);
        *(_QWORD *)(v68 + 24) = v8;
        WdLogEvent5_WdAssertion(v68);
        LODWORD(v38) = -1073741823;
        goto LABEL_65;
      }
      v67 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(v5, 0);
      break;
  }
  LODWORD(v38) = v67;
  if ( v67 >= 0 )
    goto LABEL_72;
LABEL_65:
  v69 = *(CCD_TOPOLOGY **)v5;
  *((_DWORD *)v5 + 2) = 0;
  CCD_TOPOLOGY::Clear(v69);
  if ( v8 == 3 )
  {
    v74 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(v5, 0);
  }
  else
  {
    if ( (unsigned int)v8 - 4 > 1 )
      goto LABEL_70;
    v74 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(v5, 0);
  }
  LODWORD(v38) = v74;
LABEL_70:
  if ( (int)v38 < 0 )
  {
    v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v71, v70, v72, v73);
    v75[3] = (int)v38;
    v75[4] = *(_QWORD *)v5;
    v75[5] = v8;
    WdLogEvent5_WdWarning(v75);
    v76 = *(CCD_TOPOLOGY **)v5;
    *((_DWORD *)v5 + 2) = 0;
    CCD_TOPOLOGY::Clear(v76);
    LODWORD(v38) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(v5);
  }
LABEL_72:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v79);
  return (unsigned int)v38;
}
