/*
 * XREFs of ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00A8B70
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADC20 (-Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C00ADD74 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0101B68 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0003A50 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x1C0004264 (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000BA78 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ABC54 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDX.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01DE884 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01E1C44 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::_CommitEntry(const struct CDS_JOURNAL::_ENTRY *a1, struct CCD_TOPOLOGY *this)
{
  bool IsPrimaryClonePathByModality; // bp
  int v3; // r12d
  unsigned int v4; // r14d
  unsigned int i; // esi
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int j; // ebp
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // r15
  bool v21; // al
  bool v22; // r11
  __int64 result; // rax
  _QWORD *v24; // rax

  IsPrimaryClonePathByModality = 0;
  v3 = -1;
  v4 = -1;
  for ( i = 0; ; ++i )
  {
    v8 = *((_QWORD *)this + 8);
    v9 = v8 ? *(_WORD *)(v8 + 20) : 0;
    if ( i >= v9 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( *((_DWORD *)PathDescriptor + 7) == *((_DWORD *)a1 + 8)
      && *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a1 + 5)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a1 + 6) )
    {
      v4 = *((_DWORD *)PathDescriptor + 6);
      v3 = *((_DWORD *)PathDescriptor + 58);
      IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
      break;
    }
  }
  v11 = 0;
  if ( CDS_JOURNAL::_IsUnextend(a1) )
  {
    if ( v4 == -1 || !IsPrimaryClonePathByModality )
    {
LABEL_28:
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      v24[3] = *((int *)a1 + 6);
      v24[4] = *((unsigned int *)a1 + 5);
      v24[5] = *((unsigned int *)a1 + 8);
      v24[6] = this;
      v24[7] = *((_QWORD *)this + 8);
      WdLogEvent5_WdWarning(v24);
      return 0LL;
    }
    result = CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)((char *)a1 + 20), v4);
  }
  else
  {
    if ( v4 != -1 )
    {
      if ( IsPrimaryClonePathByModality )
      {
        for ( j = 0; ; ++j )
        {
          v17 = *((_QWORD *)this + 8);
          v18 = v17 ? *(_WORD *)(v17 + 20) : 0;
          if ( j >= v18 )
            break;
          v19 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
          v20 = v19;
          if ( v3 == *((_DWORD *)v19 + 58) )
          {
            CCD_TOPOLOGY::IsMatchingSource(v19, (const struct _LUID *)((char *)a1 + 20), v4);
            v21 = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j);
            CDS_JOURNAL::_FillPathDescriptor(v20, a1, v21, v22, 0LL);
          }
        }
        return v11;
      }
      goto LABEL_28;
    }
    result = CDS_JOURNAL::_ExtendTopology(this, a1);
  }
  v11 = result;
  if ( (int)result >= 0 )
    return v11;
  return result;
}
