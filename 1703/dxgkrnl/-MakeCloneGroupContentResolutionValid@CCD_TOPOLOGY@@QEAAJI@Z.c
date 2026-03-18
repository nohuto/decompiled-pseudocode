/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00ECB3C
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00ECAB4 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1C00A5130 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@_N.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AAF40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(
        CCD_TOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r12
  _QWORD *v5; // rbx
  char v6; // r13
  unsigned int v8; // r15d
  __int128 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  UINT v13; // edi
  UINT cy; // esi
  char cx; // al
  unsigned int v17; // r12d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v19; // r15
  unsigned int v20; // r12d
  unsigned int v21; // r15d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r15
  unsigned int v27; // ebx
  UINT v28; // eax
  __int64 v29; // rax
  _QWORD *v30; // rax
  struct _D3DKMDT_2DREGION v31; // [rsp+30h] [rbp-10h] BYREF
  struct _D3DKMDT_2DREGION v32; // [rsp+80h] [rbp+40h] BYREF
  char v33; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v34; // [rsp+98h] [rbp+58h]

  v4 = 1;
  v5 = 0LL;
  LOBYTE(v32.cx) = 0;
  v6 = 1;
  v8 = 0;
  v34 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2, a3, a4) + 58);
  v13 = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_49;
  while ( 1 )
  {
    *(_QWORD *)&v9 = CCD_TOPOLOGY::GetPathDescriptor(this, v8, v11, v12);
    v10 = v34;
    if ( *(_DWORD *)(v9 + 232) == v34 )
      break;
LABEL_11:
    ++v8;
    v10 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    if ( v8 >= (unsigned int)v10 )
    {
      cx = v32.cx;
      goto LABEL_13;
    }
  }
  v12 = *(_QWORD *)v9;
  if ( (*(_QWORD *)v9 & 0x20000LL) != 0 )
  {
    *((_QWORD *)&v9 + 1) = v9 + 152;
    v11 = *(unsigned int *)(v9 + 152);
    v10 = v9 + 152;
    if ( v5 )
      v10 = (__int64)v5;
    v5 = (_QWORD *)v10;
    if ( !(_DWORD)v11 || (v10 = *(unsigned int *)(v9 + 156), !(_DWORD)v10) || *v5 != __PAIR64__(v10, v11) )
    {
      *(_DWORD *)(v9 + 196) |= 0x400u;
      goto LABEL_17;
    }
    *((_QWORD *)&v9 + 1) = 0x20000000000000LL;
    if ( (v12 & 0x20000000000000LL) != 0 )
    {
      if ( __PAIR64__(v10, v11) == *(_QWORD *)(v9 + 160) )
        v6 = 0;
    }
    else
    {
      v4 = 0;
    }
    goto LABEL_11;
  }
  v4 = 0;
  cx = 1;
LABEL_13:
  if ( v4 )
  {
LABEL_49:
    v26 = 0x3FFFFFFF00000001LL;
    v27 = 0;
    if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
      goto LABEL_66;
    v20 = v34;
    while ( 1 )
    {
      *(_QWORD *)&v9 = CCD_TOPOLOGY::GetPathDescriptor(this, v27, v11, v12);
      v10 = v9;
      if ( *(_DWORD *)(v9 + 232) == v20 )
      {
        if ( v6 )
        {
          v12 = *(int *)(v9 + 160);
          v11 = *(int *)(v9 + 164);
          v9 = *(int *)(v9 + 152) * (__int64)*(int *)(v9 + 156) - v11 * v12;
          *(_QWORD *)&v9 = (*((_QWORD *)&v9 + 1) ^ v9) - *((_QWORD *)&v9 + 1);
          if ( (__int64)v9 < v26 )
          {
            v13 = v12;
            cy = v11;
            v26 = v9;
          }
        }
        else if ( *(_DWORD *)(v9 + 152) == *(_DWORD *)(v9 + 160) )
        {
          v28 = *(_DWORD *)(v9 + 164);
          if ( *(_DWORD *)(v10 + 156) == v28 )
          {
            v13 = *(_DWORD *)(v10 + 160);
            cy = v28;
            goto LABEL_28;
          }
        }
      }
      ++v27;
      v10 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v27 >= (unsigned int)v10 )
        goto LABEL_28;
    }
  }
  if ( !cx )
    return 0LL;
LABEL_17:
  v17 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_66;
  while ( 2 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v17, v11, v12);
    if ( *((_DWORD *)PathDescriptor + 58) != v34 )
    {
LABEL_26:
      ++v17;
      v10 = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
      if ( v17 >= (unsigned int)v10 )
        goto LABEL_27;
      continue;
    }
    break;
  }
  CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(PathDescriptor, 1, &v31);
  LODWORD(v9) = DxgkIsVirtualizationDisabledForTarget(
                  *(struct _LUID *)((char *)PathDescriptor + 16),
                  *((_DWORD *)PathDescriptor + 7),
                  (__int64)&v32,
                  (__int64)&v33,
                  0LL,
                  0LL);
  v19 = (int)v9;
  if ( (int)v9 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v10, *((_QWORD *)&v9 + 1));
    *(_QWORD *)(v25 + 24) = v19;
    WdLogEvent5_WdError(v25);
    return (unsigned int)v19;
  }
  if ( LOBYTE(v32.cx) && !v33 )
  {
    v32 = v31;
    v13 = v31.cx;
    cy = v31.cy;
LABEL_27:
    v20 = v34;
    goto LABEL_28;
  }
  if ( !IsInternalVideoOutput(*((_DWORD *)PathDescriptor + 22)) )
  {
    if ( v31.cx < v13 )
    {
      v13 = v31.cx;
      *((_DWORD *)PathDescriptor + 49) |= 0x4000u;
    }
    if ( v31.cy < cy )
    {
      cy = v31.cy;
      *((_DWORD *)PathDescriptor + 49) |= 0x4000u;
    }
    goto LABEL_26;
  }
  v20 = v34;
  if ( (*(_DWORD *)PathDescriptor & 0x20000) != 0 )
  {
    v13 = *((_DWORD *)PathDescriptor + 38);
    cy = *((_DWORD *)PathDescriptor + 39);
  }
  else
  {
    v32 = v31;
    v13 = v31.cx;
    cy = v31.cy;
  }
LABEL_28:
  if ( !v13 || !cy || v13 == 0x7FFFFFFF || cy == 0x7FFFFFFF )
    goto LABEL_66;
  v21 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 2 )
  {
    v22 = CCD_TOPOLOGY::GetPathDescriptor(this, v21, v11, v12);
    v23 = v22;
    if ( *((_DWORD *)v22 + 58) != v20
      || (v10 = *(_QWORD *)v22, *((_QWORD *)&v9 + 1) = 0x20000LL, (*(_QWORD *)v22 & 0x20000LL) != 0)
      && *((_DWORD *)v22 + 38) == v13
      && *((_DWORD *)v22 + 39) == cy )
    {
LABEL_38:
      if ( ++v21 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        return 0LL;
      continue;
    }
    break;
  }
  if ( (*((_DWORD *)v22 + 2) & 0x20000) == 0 )
  {
    v24 = *((_QWORD *)v22 + 23);
    *((_DWORD *)v23 + 38) = v13;
    *((_DWORD *)v23 + 39) = cy;
    *(_QWORD *)v23 = v10 & 0xFFFFFFFFFF7DFFFFuLL | 0x20000;
    if ( v24 )
    {
      *(_DWORD *)(v24 + 172) = v13;
      *(_DWORD *)(*((_QWORD *)v23 + 23) + 176LL) = cy;
    }
    goto LABEL_38;
  }
  if ( (v10 & 0x20000) == 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v10, 0x20000LL, v11, v12);
    WdLogEvent5_WdAssertion(v29);
  }
  *((_DWORD *)v23 + 49) |= 0x80000000;
LABEL_66:
  v30 = (_QWORD *)WdLogNewEntry5_WdError(v10, *((_QWORD *)&v9 + 1));
  v30[3] = *((_QWORD *)this + 8);
  v30[4] = v13;
  v30[5] = cy;
  WdLogEvent5_WdError(v30);
  return 3221225473LL;
}
