/*
 * XREFs of ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01FB08C
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01F95F4 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1C000BDE0 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00B3A10 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00DBE70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DF6CC (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C010392C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C017FD10 (DxgkIsMonitorConnected.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01F7E08 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     _lambda_15a4b78383c0e39845702b65e420a14d_::operator() @ 0x1C01F9534 (_lambda_15a4b78383c0e39845702b65e420a14d_--operator().c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01FA7C4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01FAFA0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01FB6B8 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01FB6F4 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01FB790 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01FB828 (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01FB900 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C01FB944 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(BTL_TOPOLOGY_CONSTRUCTOR *this, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int16 v7; // r13
  __int64 v8; // rcx
  struct CCD_BTL *v9; // rax
  unsigned int v10; // r14d
  unsigned __int16 v11; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  unsigned int v13; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm1
  unsigned int v17; // r15d
  unsigned int j; // r15d
  unsigned int v19; // edi
  unsigned int v20; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // r15
  __int64 v22; // rcx
  unsigned int v23; // r14d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rax
  CCD_TOPOLOGY *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  struct _LUID *v29; // rax
  bool *v30; // r12
  const struct _LUID *v31; // r15
  struct _LUID *v32; // r14
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  CCD_TOPOLOGY *v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  bool v39; // cl
  __int16 v40; // dx
  bool v41; // zf
  bool v42; // al
  int v43; // eax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rax
  unsigned __int16 v47; // ax
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  CCD_TOPOLOGY *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // eax
  _QWORD *v56; // rax
  CCD_TOPOLOGY *v57; // rcx
  int v59; // [rsp+30h] [rbp-79h]
  __int128 v60; // [rsp+38h] [rbp-71h]
  __int128 v61; // [rsp+48h] [rbp-61h]
  __int128 v62; // [rsp+58h] [rbp-51h]
  struct D3DKMT_GETPATHSMODALITY *v63[8]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v64; // [rsp+B0h] [rbp+7h]
  unsigned __int64 i; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned __int16 v66; // [rsp+120h] [rbp+77h]
  int v67; // [rsp+128h] [rbp+7Fh]

  *a2 = 0;
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this) + 1618)
    || (LODWORD(v6) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(this), (int)v6 < 0) )
  {
    v59 = *((_DWORD *)this + 15);
    v60 = *(_OWORD *)((char *)this + 12);
    v61 = *(_OWORD *)((char *)this + 28);
    v62 = *(_OWORD *)((char *)this + 44);
    v66 = BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(this);
    v67 = v66;
    v7 = v66;
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v63, 8u, 0);
    v9 = CCD_BTL::Global(v8);
    if ( (int)CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v63, v9) < 0 )
    {
LABEL_44:
      v36 = *(CCD_TOPOLOGY **)this;
      *((_DWORD *)this + 2) = 0;
      *(_OWORD *)((char *)this + 12) = v60;
      *a2 = 0;
      *(_OWORD *)((char *)this + 28) = v61;
      *(_OWORD *)((char *)this + 44) = v62;
      *((_DWORD *)this + 15) = v59;
      CCD_TOPOLOGY::Clear(v36);
      switch ( v7 )
      {
        case 1u:
          v38 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
          break;
        case 2u:
          v38 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
          break;
        case 3u:
          v38 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
          break;
        default:
          if ( (unsigned int)v7 - 4 > 1 )
          {
            v50 = WdLogNewEntry5_WdAssertion(v37);
            *(_QWORD *)(v50 + 24) = v7;
            WdLogEvent5_WdAssertion(v50);
            LODWORD(v6) = -1073741823;
            goto LABEL_72;
          }
          v38 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
          break;
      }
      LODWORD(v6) = v38;
      if ( v38 < 0 )
      {
LABEL_72:
        v51 = *(CCD_TOPOLOGY **)this;
        *((_DWORD *)this + 2) = 0;
        CCD_TOPOLOGY::Clear(v51);
        if ( v7 == 3 )
        {
          v55 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 0);
        }
        else
        {
          if ( v7 <= 3u || v7 > 5u )
          {
LABEL_78:
            if ( (int)v6 < 0 )
            {
              v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54);
              v56[3] = (int)v6;
              v56[4] = *(_QWORD *)this;
              v56[5] = v7;
              WdLogEvent5_WdWarning(v56);
              v57 = *(CCD_TOPOLOGY **)this;
              *((_DWORD *)this + 2) = 0;
              CCD_TOPOLOGY::Clear(v57);
              LODWORD(v6) = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
            }
            goto LABEL_80;
          }
          v55 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 0);
        }
        LODWORD(v6) = v55;
        goto LABEL_78;
      }
LABEL_80:
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v63);
      return (unsigned int)v6;
    }
    v10 = 0;
    *a2 = 0;
    while ( 1 )
    {
      v11 = v64 ? *(_WORD *)(v64 + 20) : 0;
      if ( v10 >= v11 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v63, v10);
      LOBYTE(i) = 0;
      if ( (int)DxgkIsMonitorConnected(
                  *(struct _LUID *)((char *)PathDescriptor + 16),
                  *((_DWORD *)PathDescriptor + 7),
                  0,
                  0,
                  (bool *)&i) >= 0
        && (_BYTE)i )
      {
        v13 = *a2;
        *((_QWORD *)PathDescriptor + 1) = 0LL;
        if ( v10 != v13 )
        {
          v14 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v63, v13);
          v15 = 2LL;
          do
          {
            *(_OWORD *)v14 = *(_OWORD *)PathDescriptor;
            *((_OWORD *)v14 + 1) = *((_OWORD *)PathDescriptor + 1);
            *((_OWORD *)v14 + 2) = *((_OWORD *)PathDescriptor + 2);
            *((_OWORD *)v14 + 3) = *((_OWORD *)PathDescriptor + 3);
            *((_OWORD *)v14 + 4) = *((_OWORD *)PathDescriptor + 4);
            *((_OWORD *)v14 + 5) = *((_OWORD *)PathDescriptor + 5);
            *((_OWORD *)v14 + 6) = *((_OWORD *)PathDescriptor + 6);
            v14 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v14 + 128);
            v16 = *((_OWORD *)PathDescriptor + 7);
            PathDescriptor = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)PathDescriptor + 128);
            *((_OWORD *)v14 - 1) = v16;
            --v15;
          }
          while ( v15 );
          *(_QWORD *)v14 = *(_QWORD *)PathDescriptor;
        }
        ++*a2;
      }
      else
      {
        v17 = 0;
        for ( i = (unsigned __int64)v63; v17 < *a2; ++v17 )
          lambda_15a4b78383c0e39845702b65e420a14d_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, v17);
        for ( j = v10 + 1; j < (unsigned __int16)CCD_TOPOLOGY::GetPathsCount((CCD_TOPOLOGY *)v63); ++j )
          lambda_15a4b78383c0e39845702b65e420a14d_::operator()((CCD_TOPOLOGY **)&i, (__int64)PathDescriptor, j);
      }
      ++v10;
    }
    v19 = *a2;
    v7 = v66;
    *(_WORD *)(v64 + 20) = *(_WORD *)a2;
    if ( v19 )
    {
      v20 = v19 - 1;
      do
      {
        v21 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v63, v20);
        v22 = *(_QWORD *)v21;
        if ( (*(_QWORD *)v21 & 0x4000000000000LL) != 0 )
        {
          v23 = 0;
          while ( 1 )
          {
            v24 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v63, v23);
            if ( (*(_QWORD *)v24 & 0x4000000000000LL) != 0 && *((_DWORD *)v21 + 46) == *((_DWORD *)v24 + 46) )
              break;
            if ( ++v23 >= v19 )
              goto LABEL_33;
          }
          *((_DWORD *)v21 + 46) = v23 | 0xFE530000;
        }
        else
        {
          *((_DWORD *)v21 + 46) = v20 | 0xFE530000;
          *(_QWORD *)v21 = v22 | 0x4000000000000LL;
        }
LABEL_33:
        --v20;
        --v19;
      }
      while ( v19 );
    }
    if ( !*a2 || (unsigned __int16)(v67 - 1) <= 1u )
    {
      LODWORD(v6) = -1073741637;
LABEL_43:
      if ( (int)v6 >= 0 )
        goto LABEL_80;
      goto LABEL_44;
    }
    v25 = *(CCD_TOPOLOGY **)this;
    *((_WORD *)this + 4) = *(_WORD *)a2;
    v26 = CCD_TOPOLOGY::CopyInheritScope(v25, (const struct CCD_TOPOLOGY *)v63);
    v6 = v26;
    if ( v26 < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v28 + 24) = v6;
      WdLogEvent5_WdError(v28);
      goto LABEL_43;
    }
    if ( *a2 != 1 )
      v67 = 4;
    v29 = (struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, 0);
    v30 = (bool *)this + 60;
    v31 = v29 + 2;
    v32 = v29;
    *(struct _LUID *)((char *)this + 12) = v29[2];
    *((_DWORD *)this + 5) = v29[3].LowPart;
    *((_DWORD *)this + 6) = v29[3].HighPart;
    *((_DWORD *)this + 7) = v29[11].LowPart;
    *((_DWORD *)this + 8) = v29[11].HighPart;
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          v29[2],
                                          v29[3].HighPart,
                                          (bool *)this + 53,
                                          (bool *)this + 60,
                                          0LL,
                                          0LL);
    v6 = IsVirtualizationDisabledForTarget;
    if ( IsVirtualizationDisabledForTarget >= 0 )
    {
      v39 = *v30;
      v40 = v67;
      v41 = !*v30;
      *((_BYTE *)this + 53) = *((_BYTE *)this + 53) == 0;
      *v30 = v41;
      *((_BYTE *)this + 11) = v40 == 3;
      v42 = v40 == 3 && !v39;
      *((_BYTE *)this + 10) = v42;
      if ( v39 && v40 == 3 )
      {
        *((_BYTE *)this + 10) = 0;
        v43 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology((CCD_TOPOLOGY **)this, 0, v31, v32[3].LowPart);
        v6 = v43;
        if ( v43 >= 0 )
        {
          if ( IsInternalVideoOutput(v32[11].LowPart) )
          {
            v46 = *(_QWORD *)(*(_QWORD *)this + 64LL);
            v47 = v46 ? *(_WORD *)(v46 + 20) : 0;
            if ( v47 >= 2u )
              CCD_TOPOLOGY::SwapPathsDescriptors(*(CCD_TOPOLOGY **)this, 0, 1u);
          }
          goto LABEL_42;
        }
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v44);
        v45[3] = v6;
        v45[4] = v32[2].HighPart;
        v45[5] = v31->LowPart;
        v45[6] = v32[3].LowPart;
        v45[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      }
      else
      {
        v48 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, 0);
        v6 = v48;
        if ( v48 >= 0 )
          goto LABEL_80;
        v45 = (_QWORD *)WdLogNewEntry5_WdError(v49);
        v45[3] = (unsigned int)v32[3].HighPart;
        v45[4] = v32[2].HighPart;
        v45[5] = v31->LowPart;
        v45[6] = v6;
      }
      WdLogEvent5_WdError(v45);
    }
    else
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v35[3] = (unsigned int)v32[3].HighPart;
      v35[4] = v32[2].HighPart;
      v35[5] = v31->LowPart;
      v35[6] = v6;
      WdLogEvent5_WdError(v35);
    }
LABEL_42:
    v7 = v66;
    goto LABEL_43;
  }
  WdLogNewEntry5_WdTrace(v5, v4);
  return (unsigned int)v6;
}
