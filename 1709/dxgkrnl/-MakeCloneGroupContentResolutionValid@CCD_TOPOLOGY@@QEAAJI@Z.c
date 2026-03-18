/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DCE00
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DCD78 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00B3A10 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00F8258 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  char v2; // r12
  int *v3; // rbx
  char v4; // r13
  unsigned int v6; // r15d
  unsigned __int64 v7; // rcx
  UINT v8; // edi
  UINT cy; // esi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v11; // r8d
  char cx; // al
  unsigned int v14; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rbx
  int IsVirtualizationDisabledForTarget; // eax
  __int64 v17; // r15
  unsigned int v18; // r12d
  unsigned int v19; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r15
  unsigned int v25; // ebx
  int *v26; // rax
  signed int v27; // r9d
  __int64 v28; // r8
  __int128 v29; // rax
  __int64 v30; // rax
  UINT v31; // eax
  __int64 v32; // rax
  _QWORD *v33; // rax
  struct _D3DKMDT_2DREGION v34; // [rsp+30h] [rbp-10h] BYREF
  struct _D3DKMDT_2DREGION v35; // [rsp+80h] [rbp+40h] BYREF
  bool v36; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v37; // [rsp+98h] [rbp+58h]

  v2 = 1;
  v3 = 0LL;
  LOBYTE(v35.cx) = 0;
  v4 = 1;
  v6 = 0;
  v37 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  v8 = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_49;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    v7 = v37;
    if ( *((_DWORD *)PathDescriptor + 46) == v37 )
      break;
LABEL_11:
    ++v6;
    v7 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    if ( v6 >= (unsigned int)v7 )
    {
      cx = v35.cx;
      goto LABEL_13;
    }
  }
  if ( (*(_QWORD *)PathDescriptor & 0x20000LL) != 0 )
  {
    v11 = *((_DWORD *)PathDescriptor + 38);
    v7 = (unsigned __int64)PathDescriptor + 152;
    if ( v3 )
      v7 = (unsigned __int64)v3;
    v3 = (int *)v7;
    if ( !v11 || (v7 = *((unsigned int *)PathDescriptor + 39), !(_DWORD)v7) || *(_QWORD *)v3 != __PAIR64__(v7, v11) )
    {
      *((_DWORD *)PathDescriptor + 57) |= 0x400u;
      goto LABEL_17;
    }
    if ( (*(_QWORD *)PathDescriptor & 0x20000000000000LL) != 0 )
    {
      if ( __PAIR64__(v7, v11) == *((_QWORD *)PathDescriptor + 20) )
        v4 = 0;
    }
    else
    {
      v2 = 0;
    }
    goto LABEL_11;
  }
  v2 = 0;
  cx = 1;
LABEL_13:
  if ( v2 )
  {
LABEL_49:
    v24 = 0x3FFFFFFF00000001LL;
    v25 = 0;
    if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      goto LABEL_66;
    v18 = v37;
    while ( 1 )
    {
      v26 = (int *)CCD_TOPOLOGY::GetPathDescriptor(this, v25);
      v7 = (unsigned __int64)v26;
      if ( v26[46] == v18 )
      {
        if ( v4 )
        {
          v27 = v26[40];
          v28 = v26[41];
          v29 = v26[38] * (__int64)v26[39] - v28 * v27;
          v30 = (*((_QWORD *)&v29 + 1) ^ v29) - *((_QWORD *)&v29 + 1);
          if ( v30 < v24 )
          {
            v8 = v27;
            cy = v28;
            v24 = v30;
          }
        }
        else if ( v26[38] == v26[40] )
        {
          v31 = v26[41];
          if ( *(_DWORD *)(v7 + 156) == v31 )
          {
            v8 = *(_DWORD *)(v7 + 160);
            cy = v31;
            goto LABEL_28;
          }
        }
      }
      ++v25;
      v7 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v25 >= (unsigned int)v7 )
        goto LABEL_28;
    }
  }
  if ( !cx )
    return 0LL;
LABEL_17:
  v14 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_66;
  while ( 2 )
  {
    v15 = CCD_TOPOLOGY::GetPathDescriptor(this, v14);
    if ( *((_DWORD *)v15 + 46) != v37 )
    {
LABEL_26:
      ++v14;
      v7 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v14 >= (unsigned int)v7 )
        goto LABEL_27;
      continue;
    }
    break;
  }
  CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v15, 1, &v34);
  IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                        *(struct _LUID *)((char *)v15 + 16),
                                        *((_DWORD *)v15 + 7),
                                        (bool *)&v35,
                                        &v36,
                                        0LL,
                                        0LL);
  v17 = IsVirtualizationDisabledForTarget;
  if ( IsVirtualizationDisabledForTarget < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v23 + 24) = v17;
    WdLogEvent5_WdError(v23);
    return (unsigned int)v17;
  }
  if ( LOBYTE(v35.cx) && !v36 )
  {
    v35 = v34;
    v8 = v34.cx;
    cy = v34.cy;
LABEL_27:
    v18 = v37;
    goto LABEL_28;
  }
  if ( !IsInternalVideoOutput(*((_DWORD *)v15 + 22)) )
  {
    if ( v34.cx < v8 )
    {
      v8 = v34.cx;
      *((_DWORD *)v15 + 57) |= 0x4000u;
    }
    if ( v34.cy < cy )
    {
      cy = v34.cy;
      *((_DWORD *)v15 + 57) |= 0x4000u;
    }
    goto LABEL_26;
  }
  v18 = v37;
  if ( (*(_DWORD *)v15 & 0x20000) != 0 )
  {
    v8 = *((_DWORD *)v15 + 38);
    cy = *((_DWORD *)v15 + 39);
  }
  else
  {
    v35 = v34;
    v8 = v34.cx;
    cy = v34.cy;
  }
LABEL_28:
  if ( !v8 || !cy || v8 == 0x7FFFFFFF || cy == 0x7FFFFFFF )
    goto LABEL_66;
  v19 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 2 )
  {
    v20 = CCD_TOPOLOGY::GetPathDescriptor(this, v19);
    v21 = v20;
    if ( *((_DWORD *)v20 + 46) != v18
      || (v7 = *(_QWORD *)v20, (*(_QWORD *)v20 & 0x20000LL) != 0)
      && *((_DWORD *)v20 + 38) == v8
      && *((_DWORD *)v20 + 39) == cy )
    {
LABEL_38:
      if ( ++v19 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        return 0LL;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v20 + 2) & 0x20000) == 0 )
  {
    v22 = *((_QWORD *)v20 + 27);
    *((_DWORD *)v21 + 38) = v8;
    *((_DWORD *)v21 + 39) = cy;
    *(_QWORD *)v21 = v7 & 0xFFFFFFFFFF7DFFFFuLL | 0x20000;
    if ( v22 )
    {
      *(_DWORD *)(v22 + 172) = v8;
      *(_DWORD *)(*((_QWORD *)v21 + 27) + 176LL) = cy;
    }
    goto LABEL_38;
  }
  if ( (*(_QWORD *)v20 & 0x20000LL) == 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v32);
  }
  *((_DWORD *)v21 + 57) |= 0x80000000;
LABEL_66:
  v33 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v33[3] = *((_QWORD *)this + 8);
  v33[4] = v8;
  v33[5] = cy;
  WdLogEvent5_WdError(v33);
  return 3221225473LL;
}
