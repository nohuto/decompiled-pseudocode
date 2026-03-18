/*
 * XREFs of ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C0101554
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00A8CB8 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0003A50 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(
        CCD_TOPOLOGY *this,
        struct _LUID *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r14d
  unsigned int i; // ebx
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v11; // rcx
  int v12; // ebp
  unsigned int j; // ebx
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  unsigned int k; // ebx
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rax

  v4 = a3;
  for ( i = 0; ; ++i )
  {
    v8 = *((_QWORD *)this + 8);
    if ( v8 )
      v9 = *(_WORD *)(v8 + 20);
    else
      v9 = 0;
    if ( i >= v9 )
      return 3221225473LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i, a3, a4);
    if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, a2, v4) )
      break;
  }
  v12 = *(_DWORD *)(v11 + 232);
  if ( v12 == -1 )
    return 3221225473LL;
  for ( j = 0; ; ++j )
  {
    v14 = *((_QWORD *)this + 8);
    v15 = v14 ? *(_WORD *)(v14 + 20) : 0;
    if ( j >= v15 )
      break;
    v23 = CCD_TOPOLOGY::GetPathDescriptor(this, j, a3, a4);
    if ( *((_DWORD *)v23 + 58) == v12 && (*((_DWORD *)v23 + 4) != a2->LowPart || *((_DWORD *)v23 + 5) != a2->HighPart) )
      return 3221225473LL;
  }
  for ( k = 0; ; ++k )
  {
    v17 = *((_QWORD *)this + 8);
    v18 = v17 ? *(_WORD *)(v17 + 20) : 0;
    if ( k >= v18 )
      break;
    v19 = CCD_TOPOLOGY::GetPathDescriptor(this, k, a3, a4);
    v20 = v19;
    if ( *((_DWORD *)v19 + 58) == v12 )
    {
      *((_DWORD *)v19 + 6) = v4;
      *((_BYTE *)v19 + 129) = 0;
      v21 = *(_QWORD *)v19;
      if ( (v21 & 0x20100) == 0x20100 )
      {
        if ( (v21 & 0x200) != 0 && ((*((_DWORD *)v20 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          *((_DWORD *)v20 + 24) = *((_DWORD *)v20 + 39);
          v22 = *((_DWORD *)v20 + 38);
        }
        else
        {
          *((_DWORD *)v20 + 24) = *((_DWORD *)v20 + 38);
          v22 = *((_DWORD *)v20 + 39);
        }
        *((_QWORD *)v20 + 1) |= 0x100uLL;
        *((_DWORD *)v20 + 25) = v22;
      }
    }
  }
  return 0LL;
}
