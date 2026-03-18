/*
 * XREFs of ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C0228A04
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C0227444 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C00032D4 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AB090 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B09A4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B358C (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00B41DC (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C0167570 (DxgkIsMonitorConnected.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C0225B2C (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     _lambda_15a4b78383c0e39845702b65e420a14d_::operator() @ 0x1C0227384 (_lambda_15a4b78383c0e39845702b65e420a14d_--operator().c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0228370 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0228918 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0229028 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0229064 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0229100 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0229198 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0229270 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C02292B4 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02296CC (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(BTL_TOPOLOGY_CONSTRUCTOR *this, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int16 v9; // r13
  __int64 v10; // rcx
  struct CCD_BTL *v11; // rax
  unsigned int v12; // r15d
  unsigned int v13; // edi
  unsigned __int16 v14; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  unsigned int v16; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rax
  __int64 v18; // rcx
  __int128 v19; // xmm1
  unsigned int v20; // esi
  unsigned int j; // esi
  unsigned int v22; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // r15
  __int64 v24; // rcx
  unsigned int v25; // esi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  CCD_TOPOLOGY *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v31; // rsi
  bool *v32; // r12
  const struct _LUID *v33; // r15
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  CCD_TOPOLOGY *v37; // rcx
  __int64 v38; // rcx
  unsigned int v39; // r14d
  int v40; // eax
  bool v41; // cl
  __int16 v42; // dx
  bool v43; // zf
  bool v44; // al
  int v45; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rax
  unsigned __int16 v49; // cx
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  CCD_TOPOLOGY *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // eax
  _QWORD *v58; // rax
  CCD_TOPOLOGY *v59; // rcx
  int v61; // [rsp+40h] [rbp-79h]
  __int128 v62; // [rsp+48h] [rbp-71h]
  __int128 v63; // [rsp+58h] [rbp-61h]
  __int128 v64; // [rsp+68h] [rbp-51h]
  _BYTE v65[64]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v66; // [rsp+C0h] [rbp+7h]
  unsigned __int64 i; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int16 v68; // [rsp+130h] [rbp+77h]
  int v69; // [rsp+138h] [rbp+7Fh]

  *a2 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this) + 1746)
    || (LODWORD(v6) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(this), (int)v6 < 0) )
  {
    v61 = *((_DWORD *)this + 15);
    v62 = *(_OWORD *)((char *)this + 12);
    v63 = *(_OWORD *)((char *)this + 28);
    v64 = *(_OWORD *)((char *)this + 44);
    v68 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
    v69 = v68;
    v9 = v68;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v65, 8u, 0);
    v11 = CCD_BTL::Global(v10);
    if ( (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v65, v11) < 0 )
    {
LABEL_45:
      v37 = *(CCD_TOPOLOGY **)this;
      *((_DWORD *)this + 2) = 0;
      *(_OWORD *)((char *)this + 12) = v62;
      *a2 = 0;
      *(_OWORD *)((char *)this + 28) = v63;
      *(_OWORD *)((char *)this + 44) = v64;
      *((_DWORD *)this + 15) = v61;
      CCD_TOPOLOGY::Clear(v37);
      switch ( v9 )
      {
        case 1u:
          v40 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
          break;
        case 2u:
          v40 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
          break;
        case 3u:
          v40 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
          break;
        default:
          v39 = v9 - 4;
          if ( v39 > 1 )
          {
            v52 = WdLogNewEntry5_WdAssertion(v38);
            *(_QWORD *)(v52 + 24) = v9;
            WdLogEvent5_WdAssertion(v52);
            LODWORD(v6) = -1073741823;
            goto LABEL_74;
          }
          v40 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
          break;
      }
      LODWORD(v6) = v40;
      if ( v40 < 0 )
      {
        v39 = v9 - 4;
LABEL_74:
        v53 = *(CCD_TOPOLOGY **)this;
        *((_DWORD *)this + 2) = 0;
        CCD_TOPOLOGY::Clear(v53);
        if ( v9 == 3 )
        {
          v57 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
        }
        else
        {
          if ( v39 > 1 )
            goto LABEL_79;
          v57 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
        }
        LODWORD(v6) = v57;
LABEL_79:
        if ( (int)v6 < 0 )
        {
          v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56);
          v58[3] = (int)v6;
          v58[4] = *(_QWORD *)this;
          v58[5] = v9;
          WdLogEvent5_WdWarning(v58);
          v59 = *(CCD_TOPOLOGY **)this;
          *((_DWORD *)this + 2) = 0;
          CCD_TOPOLOGY::Clear(v59);
          LODWORD(v6) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
        }
      }
LABEL_81:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v65);
      return (unsigned int)v6;
    }
    v12 = 0;
    *a2 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = v66 ? *(_WORD *)(v66 + 20) : 0;
      if ( v12 >= v14 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v65, v12);
      LOBYTE(i) = 0;
      if ( (int)DxgkIsMonitorConnected(
                  *(struct _LUID *)((char *)PathDescriptor + 16),
                  *((_DWORD *)PathDescriptor + 7),
                  0,
                  0,
                  (bool *)&i) >= 0
        && (_BYTE)i )
      {
        v16 = *a2;
        *((_QWORD *)PathDescriptor + 1) = 0LL;
        if ( v12 != v16 )
        {
          v17 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v65, v16);
          v18 = 2LL;
          do
          {
            *(_OWORD *)v17 = *(_OWORD *)PathDescriptor;
            *((_OWORD *)v17 + 1) = *((_OWORD *)PathDescriptor + 1);
            *((_OWORD *)v17 + 2) = *((_OWORD *)PathDescriptor + 2);
            *((_OWORD *)v17 + 3) = *((_OWORD *)PathDescriptor + 3);
            *((_OWORD *)v17 + 4) = *((_OWORD *)PathDescriptor + 4);
            *((_OWORD *)v17 + 5) = *((_OWORD *)PathDescriptor + 5);
            *((_OWORD *)v17 + 6) = *((_OWORD *)PathDescriptor + 6);
            v17 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v17 + 128);
            v19 = *((_OWORD *)PathDescriptor + 7);
            PathDescriptor = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)PathDescriptor + 128);
            *((_OWORD *)v17 - 1) = v19;
            --v18;
          }
          while ( v18 );
          *(_OWORD *)v17 = *(_OWORD *)PathDescriptor;
          v16 = *a2;
        }
        v13 = v16 + 1;
        *a2 = v16 + 1;
      }
      else
      {
        v20 = 0;
        for ( i = (unsigned __int64)v65; v20 < *a2; ++v20 )
          lambda_15a4b78383c0e39845702b65e420a14d_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, v20);
        for ( j = v12 + 1; j < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v65); ++j )
          lambda_15a4b78383c0e39845702b65e420a14d_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, j);
        v13 = *a2;
      }
      ++v12;
    }
    *(_WORD *)(v66 + 20) = v13;
    if ( !v13 )
      goto LABEL_67;
    v22 = v13 - 1;
    do
    {
      v23 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v65, v22);
      v24 = *(_QWORD *)v23;
      if ( (*(_QWORD *)v23 & 0x4000000000000LL) != 0 )
      {
        v25 = 0;
        while ( 1 )
        {
          v26 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v65, v25);
          if ( (*(_QWORD *)v26 & 0x4000000000000LL) != 0 && *((_DWORD *)v23 + 46) == *((_DWORD *)v26 + 46) )
            break;
          if ( ++v25 >= v13 )
            goto LABEL_34;
        }
        *((_DWORD *)v23 + 46) = v25 | 0xFE530000;
      }
      else
      {
        *((_DWORD *)v23 + 46) = v22 | 0xFE530000;
        *(_QWORD *)v23 = v24 | 0x4000000000000LL;
      }
LABEL_34:
      --v22;
      --v13;
    }
    while ( v13 );
    if ( !*a2 || (unsigned __int16)(v69 - 1) <= 1u )
    {
LABEL_67:
      LODWORD(v6) = -1073741637;
LABEL_44:
      if ( (int)v6 >= 0 )
        goto LABEL_81;
      goto LABEL_45;
    }
    v27 = *(CCD_TOPOLOGY **)this;
    *((_WORD *)this + 4) = *a2;
    v28 = CCD_TOPOLOGY::CopyInheritScope(v27, (const struct CCD_TOPOLOGY *)v65);
    v6 = v28;
    if ( v28 < 0 )
    {
      v30 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v30 + 24) = v6;
      WdLogEvent5_WdError(v30);
      goto LABEL_44;
    }
    if ( *a2 != 1 )
      v69 = 4;
    v31 = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, 0);
    v32 = (bool *)this + 60;
    v33 = (const struct _LUID *)((char *)v31 + 16);
    *(_QWORD *)((char *)this + 12) = *((_QWORD *)v31 + 2);
    *((_DWORD *)this + 5) = *((_DWORD *)v31 + 6);
    *((_DWORD *)this + 6) = *((_DWORD *)v31 + 7);
    *((_DWORD *)this + 7) = *((_DWORD *)v31 + 22);
    *((_DWORD *)this + 8) = *((_DWORD *)v31 + 23);
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)v31 + 16),
                                          *((_DWORD *)v31 + 7),
                                          (__int64)this + 53,
                                          (__int64)this + 60,
                                          0LL,
                                          0LL,
                                          0LL);
    v6 = IsVirtualizationDisabledForTarget;
    if ( IsVirtualizationDisabledForTarget >= 0 )
    {
      v41 = *v32;
      v42 = v69;
      v43 = !*v32;
      *((_BYTE *)this + 53) = *((_BYTE *)this + 53) == 0;
      *v32 = v43;
      *((_BYTE *)this + 11) = v42 == 3;
      v44 = v42 == 3 && !v41;
      *((_BYTE *)this + 10) = v44;
      if ( v41 && v42 == 3 )
      {
        *((_BYTE *)this + 10) = 0;
        v45 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology((CCD_TOPOLOGY **)this, 0, v33, *((_DWORD *)v31 + 6));
        v6 = v45;
        if ( v45 >= 0 )
        {
          if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v31 + 22)) )
          {
            v48 = *(_QWORD *)(*(_QWORD *)this + 64LL);
            v49 = v48 ? *(_WORD *)(v48 + 20) : 0;
            if ( v49 >= 2u )
              CCD_TOPOLOGY::SwapPathsDescriptors(*(void ***)this, 0, 1u);
          }
          goto LABEL_43;
        }
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v46);
        v47[3] = v6;
        v47[4] = *((int *)v31 + 5);
        v47[5] = v33->LowPart;
        v47[6] = *((unsigned int *)v31 + 6);
        v47[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      }
      else
      {
        v50 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, 0);
        v6 = v50;
        if ( v50 >= 0 )
          goto LABEL_81;
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v51);
        v47[3] = *((unsigned int *)v31 + 7);
        v47[4] = *((int *)v31 + 5);
        v47[5] = v33->LowPart;
        v47[6] = v6;
      }
      WdLogEvent5_WdError(v47);
    }
    else
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v36[3] = *((unsigned int *)v31 + 7);
      v36[4] = *((int *)v31 + 5);
      v36[5] = v33->LowPart;
      v36[6] = v6;
      WdLogEvent5_WdError(v36);
    }
LABEL_43:
    v9 = v68;
    goto LABEL_44;
  }
  WdLogNewEntry5_WdTrace(v5, v4, v7, v8);
  return (unsigned int)v6;
}
