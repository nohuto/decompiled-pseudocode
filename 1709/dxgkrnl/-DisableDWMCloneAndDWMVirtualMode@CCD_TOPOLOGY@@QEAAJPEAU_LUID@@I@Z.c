/*
 * XREFs of ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C01005D8
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00E5108 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C01002FC (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(CCD_TOPOLOGY *this, struct _LUID *a2, int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rax
  unsigned __int16 v8; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v10; // ebp
  unsigned int j; // ebx
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  unsigned int k; // ebx
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rax

  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    if ( v7 )
      v8 = *(_WORD *)(v7 + 20);
    else
      v8 = 0;
    if ( i >= v8 )
      return 3221225473LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( *((_DWORD *)PathDescriptor + 6) == a3
      && *((_DWORD *)PathDescriptor + 4) == a2->LowPart
      && *((_DWORD *)PathDescriptor + 5) == a2->HighPart )
    {
      break;
    }
  }
  v10 = *((_DWORD *)PathDescriptor + 46);
  if ( v10 == -1 )
    return 3221225473LL;
  for ( j = 0; ; ++j )
  {
    v12 = *((_QWORD *)this + 8);
    v13 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( j >= v13 )
      break;
    v21 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( *((_DWORD *)v21 + 46) == v10 && (*((_DWORD *)v21 + 4) != a2->LowPart || *((_DWORD *)v21 + 5) != a2->HighPart) )
      return 3221225473LL;
  }
  for ( k = 0; ; ++k )
  {
    v15 = *((_QWORD *)this + 8);
    v16 = v15 ? *(_WORD *)(v15 + 20) : 0;
    if ( k >= v16 )
      break;
    v17 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    v18 = v17;
    if ( *((_DWORD *)v17 + 46) == v10 )
    {
      *((_DWORD *)v17 + 6) = a3;
      *((_BYTE *)v17 + 129) = 0;
      v19 = *(_QWORD *)v17;
      if ( (v19 & 0x20100) == 0x20100 )
      {
        if ( (v19 & 0x200) != 0 && ((*((_DWORD *)v18 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          *((_DWORD *)v18 + 24) = *((_DWORD *)v18 + 39);
          v20 = *((_DWORD *)v18 + 38);
        }
        else
        {
          *((_DWORD *)v18 + 24) = *((_DWORD *)v18 + 38);
          v20 = *((_DWORD *)v18 + 39);
        }
        *((_QWORD *)v18 + 1) |= 0x100uLL;
        *((_DWORD *)v18 + 25) = v20;
      }
    }
  }
  return 0LL;
}
