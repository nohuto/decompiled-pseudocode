/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EC608
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01DFE40 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C0003A74 (-GetPrimaryPathInCloneGroup@@YAIPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0009CF0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000BA78 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00A5130 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_N.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v4; // esi
  unsigned int i; // r14d
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  unsigned int j; // r14d
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v13; // r13
  unsigned int v14; // ebx
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int k; // r14d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // esi
  unsigned int v25; // r15d
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rbx
  unsigned int PrimaryPathInCloneGroup; // eax
  __int64 v30; // rdx
  unsigned int v31; // r14d
  __int64 v32; // rcx
  int v33; // r13d
  signed int cx; // r14d
  UINT v35; // r15d
  signed int cy; // r12d
  UINT v37; // r13d
  struct _D3DKMDT_2DREGION v38; // rax
  __int64 v39; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v46; // rbx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v47; // r15
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // r11
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v55; // ecx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // r9
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  struct _D3DKMDT_2DREGION v71; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v72; // [rsp+30h] [rbp-D8h]
  _D3DKMDT_2DREGION v73; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v74[64]; // [rsp+48h] [rbp-C0h] BYREF

  v4 = 0;
  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( i >= v8 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i, a3, a4);
    if ( (*(_DWORD *)PathDescriptor & 0x800LL) != 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
    {
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)PathDescriptor + 33)) != D3DKMDT_VPPR_IDENTITY )
      {
        v53 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
        *(_QWORD *)(v53 + 24) = 6581LL;
        WdLogEvent5_WdAssertion(v53);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v73);
      v45 = *((_QWORD *)PathDescriptor + 23);
      if ( v45 )
      {
        *(_QWORD *)(v45 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 23) + 72LL) |= 0x20u;
      }
      if ( (signed int)(v73.cx + *((_DWORD *)PathDescriptor + 36)) > v4 )
        v4 = v73.cx + *((_DWORD *)PathDescriptor + 36);
    }
  }
  for ( j = 0; ; ++j )
  {
    v10 = *((_QWORD *)this + 8);
    v11 = v10 ? *(unsigned __int16 *)(v10 + 20) : 0LL;
    if ( j >= (unsigned __int16)v11 )
      break;
    v46 = CCD_TOPOLOGY::GetPathDescriptor(this, j, a3, a4);
    if ( (*(_QWORD *)v46 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      v55 = *((_DWORD *)v46 + 33);
      *((_DWORD *)v46 + 37) = 0;
      *(_QWORD *)v46 = v54 | 0x800;
      *((_DWORD *)v46 + 36) = v4;
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v55) != D3DKMDT_VPPR_IDENTITY )
      {
        v60 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
        *(_QWORD *)(v60 + 24) = 6626LL;
        WdLogEvent5_WdAssertion(v60);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v46, 0, &v73);
      v61 = *((_QWORD *)v46 + 23);
      if ( v61 )
      {
        *(_DWORD *)(v61 + 76) = v4;
        *(_DWORD *)(*((_QWORD *)v46 + 23) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v46 + 23) + 72LL) |= 0x20u;
      }
      v4 += v73.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent(v11);
  if ( Current )
  {
    v13 = *((_QWORD *)Current + 9);
    if ( v13 )
    {
      v14 = -1;
      v15 = 0;
      memset(v74, 0, sizeof(v74));
      for ( k = 0; ; ++k )
      {
        v20 = *((_QWORD *)this + 8);
        v21 = v20 ? *(unsigned __int16 *)(v20 + 20) : 0LL;
        if ( k >= (unsigned __int16)v21 )
          break;
        v47 = CCD_TOPOLOGY::GetPathDescriptor(this, k, v17, v18);
        if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, k) )
        {
          if ( v15 == 16 )
          {
            v63 = WdLogNewEntry5_WdError(v48, v16);
            *(_QWORD *)(v63 + 24) = 16LL;
            WdLogEvent5_WdError(v63);
            break;
          }
          if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v47 + 33)) != D3DKMDT_VPPR_IDENTITY )
          {
            v62 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
            *(_QWORD *)(v62 + 24) = 6687LL;
            WdLogEvent5_WdAssertion(v62);
          }
          CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v47, 0, &v71);
          v16 = 2LL * v15;
          v74[2 * v16] = *((_DWORD *)v47 + 36);
          v74[2 * v16 + 1] = *((_DWORD *)v47 + 37);
          v74[2 * v16 + 2] = v71.cx + *((_DWORD *)v47 + 36);
          v74[2 * v16 + 3] = v71.cy + *((_DWORD *)v47 + 37);
          if ( v14 == -1 && !*((_DWORD *)v47 + 36) && !*((_DWORD *)v47 + 37) )
            v14 = v15;
          ++v15;
        }
      }
      if ( v14 == -1 )
      {
        v64 = WdLogNewEntry5_WdWarning(v21, v16, v17, v18);
        WdLogEvent5_WdWarning(v64);
        v14 = 0;
      }
      (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(v13 + 336))(v74, v15, v14);
      v24 = 0;
      v25 = 0;
      LODWORD(v72) = 0;
      while ( 1 )
      {
        v26 = *((_QWORD *)this + 8);
        v27 = v26 ? *(_WORD *)(v26 + 20) : 0;
        if ( v24 >= v27 || v25 >= 0x10 )
          break;
        v28 = CCD_TOPOLOGY::GetPathDescriptor(this, v24, v22, v23);
        PrimaryPathInCloneGroup = GetPrimaryPathInCloneGroup(*((const struct _D3DKMT_GETPATHSMODALITY **)this + 8), v24);
        v31 = PrimaryPathInCloneGroup;
        if ( PrimaryPathInCloneGroup == v24 )
        {
          v32 = 2LL * v25;
          v33 = v74[4 * v25 + 3];
          cx = v74[4 * v25];
          v35 = v74[4 * v25 + 2] - cx;
          cy = v74[2 * v32 + 1];
          v37 = v33 - cy;
          LODWORD(v72) = v72 + 1;
          v71 = (struct _D3DKMDT_2DREGION)__PAIR64__(v37, v35);
          v38.cy = v37;
        }
        else
        {
          v73 = (_D3DKMDT_2DREGION)*((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, PrimaryPathInCloneGroup, v22, v23)
                                   + 18);
          v67 = CCD_TOPOLOGY::GetPathDescriptor(this, v31, v65, v66);
          cy = v73.cy;
          cx = v73.cx;
          v38 = (struct _D3DKMDT_2DREGION)*((_QWORD *)v67 + 19);
          v71 = v38;
          v37 = v38.cy;
          v35 = v38.cx;
        }
        if ( *((_QWORD *)v28 + 19) != __PAIR64__(v38.cy, v35) )
        {
          v68 = WdLogNewEntry5_WdAssertion(v32, v30, v22, v23);
          WdLogEvent5_WdAssertion(v68);
        }
        if ( *((_DWORD *)v28 + 36) != cx )
        {
          v69 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v30, v22, v23);
          v69[3] = v24;
          v69[4] = *((int *)v28 + 36);
          v32 = cx;
          v69[5] = cx;
        }
        *((_DWORD *)v28 + 36) = cx;
        if ( *((_DWORD *)v28 + 37) != cy )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v30, v22, v23);
          v70[3] = v24;
          v70[4] = *((int *)v28 + 37);
          v70[5] = cy;
        }
        *(_QWORD *)v28 |= 0x800uLL;
        v39 = *((_QWORD *)v28 + 23);
        *((_DWORD *)v28 + 37) = cy;
        if ( v39 )
        {
          *(_QWORD *)(v39 + 76) = *((_QWORD *)v28 + 18);
          *(_DWORD *)(*((_QWORD *)v28 + 23) + 172LL) = v35;
          *(_DWORD *)(*((_QWORD *)v28 + 23) + 176LL) = v37;
          *(_DWORD *)(*((_QWORD *)v28 + 23) + 72LL) |= 0x180020u;
        }
        v25 = v72;
        ++v24;
      }
    }
  }
}
