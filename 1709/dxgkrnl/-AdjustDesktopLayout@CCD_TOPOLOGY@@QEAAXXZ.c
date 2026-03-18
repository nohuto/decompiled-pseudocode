/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DC8A0
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00DE7C8 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01F9980 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0006980 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000BD9C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00F8258 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

void __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this, __int64 a2)
{
  signed int v2; // edi
  unsigned int i; // r14d
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  unsigned int j; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // r13
  unsigned int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int k; // r14d
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // r14d
  unsigned int v20; // r15d
  __int64 v21; // rax
  unsigned __int16 v22; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  _DWORD *v28; // rax
  int v29; // r13d
  signed int cx; // edi
  UINT v31; // r15d
  signed int cy; // r12d
  UINT v33; // r13d
  struct _D3DKMDT_2DREGION v34; // rax
  __int64 v35; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v39; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r11
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  struct _D3DKMDT_2DREGION v56; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v57; // [rsp+30h] [rbp-D8h]
  struct _D3DKMDT_2DREGION v58; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v59[64]; // [rsp+48h] [rbp-C0h] BYREF

  v2 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( (*(_DWORD *)PathDescriptor & 0x800LL) != 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
    {
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)PathDescriptor + 33)) != D3DKMDT_VPPR_IDENTITY )
      {
        v43 = WdLogNewEntry5_WdAssertion(v37);
        *(_QWORD *)(v43 + 24) = 4421LL;
        WdLogEvent5_WdAssertion(v43);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v58);
      v38 = *((_QWORD *)PathDescriptor + 27);
      if ( v38 )
      {
        *(_QWORD *)(v38 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 27) + 72LL) |= 0x20u;
      }
      a2 = *((_DWORD *)PathDescriptor + 36) + v58.cx;
      if ( (int)a2 > v2 )
        v2 = *((_DWORD *)PathDescriptor + 36) + v58.cx;
    }
  }
  for ( j = 0; ; ++j )
  {
    v8 = *((_QWORD *)this + 8);
    v9 = v8 ? *(unsigned __int16 *)(v8 + 20) : 0LL;
    if ( j >= (unsigned __int16)v9 )
      break;
    v39 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_QWORD *)v39 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      v45 = *((_DWORD *)v39 + 33);
      *((_DWORD *)v39 + 37) = 0;
      *(_QWORD *)v39 = v44 | 0x800;
      *((_DWORD *)v39 + 36) = v2;
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v45) != D3DKMDT_VPPR_IDENTITY )
      {
        v47 = WdLogNewEntry5_WdAssertion(v46);
        *(_QWORD *)(v47 + 24) = 4466LL;
        WdLogEvent5_WdAssertion(v47);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v39, 0, &v58);
      v48 = *((_QWORD *)v39 + 27);
      if ( v48 )
      {
        *(_DWORD *)(v48 + 76) = v2;
        *(_DWORD *)(*((_QWORD *)v39 + 27) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v39 + 27) + 72LL) |= 0x20u;
      }
      v2 += v58.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent(v9, a2);
  if ( Current )
  {
    v11 = *((_QWORD *)Current + 12);
    if ( v11 )
    {
      v12 = -1;
      v13 = 0;
      memset(v59, 0, sizeof(v59));
      for ( k = 0; ; ++k )
      {
        v17 = *((_QWORD *)this + 8);
        v18 = v17 ? *(unsigned __int16 *)(v17 + 20) : 0LL;
        if ( k >= (unsigned __int16)v18 )
          break;
        v40 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
        if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, k) )
        {
          if ( v13 == 16 )
          {
            v50 = WdLogNewEntry5_WdError(v41);
            *(_QWORD *)(v50 + 24) = 16LL;
            WdLogEvent5_WdError(v50);
            break;
          }
          if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v40 + 33)) != D3DKMDT_VPPR_IDENTITY )
          {
            v49 = WdLogNewEntry5_WdAssertion(v42);
            *(_QWORD *)(v49 + 24) = 4527LL;
            WdLogEvent5_WdAssertion(v49);
          }
          CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v40, 0, &v56);
          v14 = 2LL * v13;
          v59[2 * v14] = *((_DWORD *)v40 + 36);
          v59[2 * v14 + 1] = *((_DWORD *)v40 + 37);
          v59[2 * v14 + 2] = v56.cx + *((_DWORD *)v40 + 36);
          v59[2 * v14 + 3] = v56.cy + *((_DWORD *)v40 + 37);
          if ( v12 == -1 && !*((_DWORD *)v40 + 36) && !*((_DWORD *)v40 + 37) )
            v12 = v13;
          ++v13;
        }
      }
      if ( v12 == -1 )
      {
        v51 = WdLogNewEntry5_WdWarning(v18, v14, v15);
        WdLogEvent5_WdWarning(v51);
        v12 = 0;
      }
      (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(v11 + 336))(v59, v13, v12);
      v19 = 0;
      v20 = 0;
      LODWORD(v57) = 0;
      while ( 1 )
      {
        v21 = *((_QWORD *)this + 8);
        v22 = v21 ? *(_WORD *)(v21 + 20) : 0;
        if ( v19 >= v22 || v20 >= 0x10 )
          break;
        v23 = CCD_TOPOLOGY::GetPathDescriptor(this, v19);
        v24 = *((_QWORD *)this + 8);
        v25 = 0;
        v26 = *(unsigned int *)(264LL * v19 + v24 + 232);
        v27 = *(unsigned __int16 *)(v24 + 20);
        if ( *(_WORD *)(v24 + 20) )
        {
          v28 = (_DWORD *)(v24 + 232);
          while ( *v28 != (_DWORD)v26 )
          {
            ++v25;
            v28 += 66;
            if ( v25 >= (unsigned int)v27 )
              goto LABEL_70;
          }
        }
        else
        {
LABEL_70:
          v25 = -559038737;
        }
        if ( v25 == v19 )
        {
          v34 = (struct _D3DKMDT_2DREGION)(2LL * v20);
          v29 = v59[4 * v20 + 3];
          cx = v59[4 * v20];
          v31 = v59[4 * v20 + 2] - cx;
          cy = v59[2 * *(_QWORD *)&v34 + 1];
          v33 = v29 - cy;
          LODWORD(v57) = v57 + 1;
          v56 = (struct _D3DKMDT_2DREGION)__PAIR64__(v33, v31);
          v34.cy = v33;
        }
        else
        {
          v58 = (struct _D3DKMDT_2DREGION)*((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v25) + 18);
          v52 = CCD_TOPOLOGY::GetPathDescriptor(this, v25);
          cy = v58.cy;
          cx = v58.cx;
          v34 = (struct _D3DKMDT_2DREGION)*((_QWORD *)v52 + 19);
          v56 = v34;
          v33 = v34.cy;
          v31 = v34.cx;
        }
        if ( *((_QWORD *)v23 + 19) != __PAIR64__(v34.cy, v31) )
        {
          v53 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v53);
        }
        if ( *((_DWORD *)v23 + 36) != cx )
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26);
          v54[3] = v19;
          v54[4] = *((int *)v23 + 36);
          v27 = cx;
          v54[5] = cx;
        }
        *((_DWORD *)v23 + 36) = cx;
        if ( *((_DWORD *)v23 + 37) != cy )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26);
          v55[3] = v19;
          v55[4] = *((int *)v23 + 37);
          v55[5] = cy;
        }
        *(_QWORD *)v23 |= 0x800uLL;
        v35 = *((_QWORD *)v23 + 27);
        *((_DWORD *)v23 + 37) = cy;
        if ( v35 )
        {
          *(_QWORD *)(v35 + 76) = *((_QWORD *)v23 + 18);
          *(_DWORD *)(*((_QWORD *)v23 + 27) + 172LL) = v31;
          *(_DWORD *)(*((_QWORD *)v23 + 27) + 176LL) = v33;
          *(_DWORD *)(*((_QWORD *)v23 + 27) + 72LL) |= 0x180020u;
        }
        v20 = v57;
        ++v19;
      }
    }
  }
}
