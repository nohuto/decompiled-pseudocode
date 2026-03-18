/*
 * XREFs of ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B45D0
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00B64BC (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02277EC (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0003290 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C00072FC (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00D7858 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall CCD_TOPOLOGY::AdjustDesktopLayout(CCD_TOPOLOGY *this)
{
  unsigned int v1; // r12d
  signed int v3; // edi
  unsigned int i; // r14d
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  unsigned int j; // r14d
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // r13
  unsigned int v12; // edi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int k; // r15d
  __int64 v17; // rax
  __int64 v18; // rcx
  signed int v19; // edi
  signed int *v20; // rcx
  __int64 v21; // rdx
  signed int v22; // eax
  unsigned int v23; // r15d
  __int64 v24; // rax
  unsigned __int16 v25; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  __int64 v27; // r9
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rbx
  __int64 v29; // rcx
  unsigned int v30; // r14d
  _DWORD *v31; // rax
  UINT cx; // r13d
  __int64 v33; // rdx
  signed int cy; // r14d
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  struct _D3DKMDT_2DREGION v37; // r12
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v41; // rcx
  __int64 v42; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v43; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // r14
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r11
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  struct _D3DKMDT_2DREGION v61; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v62; // [rsp+30h] [rbp-D8h]
  struct _D3DKMDT_2DREGION v63; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v64; // [rsp+40h] [rbp-C8h]
  _DWORD v65[64]; // [rsp+48h] [rbp-C0h] BYREF

  v1 = 0;
  v3 = 0;
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
        v47 = WdLogNewEntry5_WdAssertion(v41);
        *(_QWORD *)(v47 + 24) = 4445LL;
        WdLogEvent5_WdAssertion(v47);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 0, &v63);
      v42 = *((_QWORD *)PathDescriptor + 28);
      if ( v42 )
      {
        *(_QWORD *)(v42 + 76) = *((_QWORD *)PathDescriptor + 18);
        *(_DWORD *)(*((_QWORD *)PathDescriptor + 28) + 72LL) |= 0x20u;
      }
      if ( (signed int)(*((_DWORD *)PathDescriptor + 36) + v63.cx) > v3 )
        v3 = *((_DWORD *)PathDescriptor + 36) + v63.cx;
    }
  }
  for ( j = 0; ; ++j )
  {
    v8 = *((_QWORD *)this + 8);
    v9 = v8 ? *(_WORD *)(v8 + 20) : 0;
    if ( j >= v9 )
      break;
    v43 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_QWORD *)v43 & 0x800LL) == 0 && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j) )
    {
      v49 = *((_DWORD *)v43 + 33);
      *(_QWORD *)v43 = v48 | 0x800;
      *((_DWORD *)v43 + 36) = v3;
      *((_DWORD *)v43 + 37) = 0;
      if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(v49) != D3DKMDT_VPPR_IDENTITY )
      {
        v51 = WdLogNewEntry5_WdAssertion(v50);
        *(_QWORD *)(v51 + 24) = 4490LL;
        WdLogEvent5_WdAssertion(v51);
      }
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v43, 0, &v63);
      v52 = *((_QWORD *)v43 + 28);
      if ( v52 )
      {
        *(_DWORD *)(v52 + 76) = v3;
        *(_DWORD *)(*((_QWORD *)v43 + 28) + 80LL) = 0;
        *(_DWORD *)(*((_QWORD *)v43 + 28) + 72LL) |= 0x20u;
      }
      v3 += v63.cx;
    }
  }
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v11 = *((_QWORD *)Current + 13);
    if ( v11 )
    {
      v12 = -1;
      v13 = 0;
      memset(v65, 0, sizeof(v65));
      for ( k = 0; ; ++k )
      {
        v17 = *((_QWORD *)this + 8);
        v18 = v17 ? *(unsigned __int16 *)(v17 + 20) : 0LL;
        if ( k >= (unsigned __int16)v18 )
          break;
        v44 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
        if ( !*((_DWORD *)v44 + 53) && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, k) )
        {
          if ( v13 == 16 )
          {
            v54 = WdLogNewEntry5_WdError(v45);
            *(_QWORD *)(v54 + 24) = 16LL;
            WdLogEvent5_WdError(v54);
            break;
          }
          if ( D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v44 + 33)) != D3DKMDT_VPPR_IDENTITY )
          {
            v53 = WdLogNewEntry5_WdAssertion(v46);
            *(_QWORD *)(v53 + 24) = 4557LL;
            WdLogEvent5_WdAssertion(v53);
          }
          CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v44, 0, &v61);
          v14 = 2LL * v13;
          v65[2 * v14] = *((_DWORD *)v44 + 36);
          v65[2 * v14 + 1] = *((_DWORD *)v44 + 37);
          v65[2 * v14 + 2] = v61.cx + *((_DWORD *)v44 + 36);
          v65[2 * v14 + 3] = v61.cy + *((_DWORD *)v44 + 37);
          if ( v12 == -1 && !*((_DWORD *)v44 + 36) && !*((_DWORD *)v44 + 37) )
            v12 = v13;
          ++v13;
        }
      }
      if ( v12 == -1 )
      {
        v55 = WdLogNewEntry5_WdWarning(v18, v14, v15);
        WdLogEvent5_WdWarning(v55);
        v12 = 0;
      }
      (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(v11 + 328))(v65, v13, v12);
      v19 = 0;
      if ( v13 )
      {
        v20 = &v65[2];
        v21 = v13;
        do
        {
          v22 = *v20;
          if ( *v20 <= v19 )
            v22 = v19;
          v20 += 4;
          v19 = v22;
          --v21;
        }
        while ( v21 );
      }
      v23 = 0;
      LODWORD(v62) = 0;
      while ( 1 )
      {
        v24 = *((_QWORD *)this + 8);
        v25 = v24 ? *(_WORD *)(v24 + 20) : 0;
        if ( v23 >= v25 || v1 >= 0x10 )
          break;
        v26 = CCD_TOPOLOGY::GetPathDescriptor(this, v23);
        v28 = v26;
        if ( *((_DWORD *)v26 + 53) )
        {
          v63.cy = 0;
          v56 = *((_DWORD *)v26 + 24);
          *(_QWORD *)v26 |= 0x800uLL;
          v63.cx = v19;
          v19 += v56;
          *((struct _D3DKMDT_2DREGION *)v26 + 18) = v63;
          *((_DWORD *)v26 + 39) = *((_DWORD *)v26 + 25);
          *((_DWORD *)v26 + 38) = v56;
        }
        else
        {
          v29 = *((_QWORD *)this + 8);
          v30 = 0;
          if ( *(_WORD *)(v29 + 20) )
          {
            v31 = (_DWORD *)(v29 + 232);
            while ( *v31 != *(_DWORD *)(272LL * v23 + v29 + 232) )
            {
              ++v30;
              v31 += 68;
              if ( v30 >= *(unsigned __int16 *)(v29 + 20) )
                goto LABEL_78;
            }
          }
          else
          {
LABEL_78:
            v30 = -559038737;
          }
          if ( v30 == v23 )
          {
            cx = v65[4 * v1];
            v33 = v65[4 * v1 + 2] - cx;
            cy = v65[4 * v1 + 1];
            v35 = (unsigned int)(v65[4 * v1 + 3] - cy);
            v61.cx = v35;
            LODWORD(v62) = v1 + 1;
            LODWORD(v36) = v33;
            v37.cx = cx;
            v38 = (unsigned int)v35;
          }
          else
          {
            v37 = (struct _D3DKMDT_2DREGION)*((_QWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, v30) + 18);
            v61 = v37;
            v57 = CCD_TOPOLOGY::GetPathDescriptor(this, v30);
            cy = v61.cy;
            cx = v37.cx;
            v36 = *((_QWORD *)v57 + 19);
            v64 = v36;
            v61.cx = HIDWORD(v36);
            v33 = (unsigned int)v36;
            v38 = HIDWORD(v36);
          }
          LODWORD(v64) = v33;
          if ( *((_DWORD *)v28 + 38) != (_DWORD)v36 || *((_DWORD *)v28 + 39) != (_DWORD)v38 )
          {
            v58 = WdLogNewEntry5_WdAssertion(v38);
            WdLogEvent5_WdAssertion(v58);
          }
          if ( *((_DWORD *)v28 + 36) != v37.cx )
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v33, v35, v27);
            v59[3] = v23;
            v59[4] = *((int *)v28 + 36);
            v38 = (int)v37.cx;
            v59[5] = (int)v37.cx;
          }
          *((_DWORD *)v28 + 36) = cx;
          if ( *((_DWORD *)v28 + 37) != cy )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v33, v35, v27);
            v60[3] = v23;
            v60[4] = *((int *)v28 + 37);
            v60[5] = cy;
          }
          *(_QWORD *)v28 |= 0x800uLL;
          v39 = *((_QWORD *)v28 + 28);
          v1 = v62;
          *((_DWORD *)v28 + 37) = cy;
          if ( v39 )
          {
            *(_QWORD *)(v39 + 76) = *((_QWORD *)v28 + 18);
            *(_DWORD *)(*((_QWORD *)v28 + 28) + 172LL) = v64;
            *(_DWORD *)(*((_QWORD *)v28 + 28) + 176LL) = v61.cx;
            *(_DWORD *)(*((_QWORD *)v28 + 28) + 72LL) |= 0x180020u;
          }
        }
        ++v23;
      }
    }
  }
}
