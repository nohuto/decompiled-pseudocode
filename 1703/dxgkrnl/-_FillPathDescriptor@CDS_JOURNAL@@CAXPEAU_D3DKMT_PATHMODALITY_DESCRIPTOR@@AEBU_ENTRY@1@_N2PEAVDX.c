/*
 * XREFs of ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ABC54
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00A8B70 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00A8EC4 (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUGMENT_CDS.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01E1C44 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0003AB4 (-_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C00A4ED8 (ConvertGdiScalingToDMMScaling.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00A8A40 (DxgkGetAdapterDefaultScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00ABE78 (EnforceDriverModelScalingPolicy.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00ABF30 (_EnforceDriverModelScalingPolicy.c)
 *     DmmGetDefaultScaling @ 0x1C01D5298 (DmmGetDefaultScaling.c)
 */

void __fastcall CDS_JOURNAL::_FillPathDescriptor(
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct CDS_JOURNAL::_ENTRY *a2,
        __int64 a3,
        __int64 a4,
        struct DXGADAPTER *a5)
{
  unsigned int *v5; // rdi
  char v6; // r12
  char v7; // r15
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // eax
  __int64 v18; // r10
  __int64 v19; // r11
  int v20; // eax
  __int64 v21; // rax
  char *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  char v27; // cl
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v31; // rdx
  int v32; // ecx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _DWORD *v35; // rdx
  _QWORD *v36; // rax

  *(_QWORD *)a1 &= 0xFFFFFFFFFF7DFE78uLL;
  v5 = (unsigned int *)((char *)a2 + 44);
  v6 = a4;
  v7 = a3;
  if ( (*((_DWORD *)a2 + 11) & 0x80u) != 0 )
  {
    v10 = *((_DWORD *)a2 + 14);
    if ( v10 )
    {
      v32 = v10 - 1;
      if ( !v32 )
      {
        *((_DWORD *)a1 + 33) = 2;
        goto LABEL_4;
      }
      v33 = (unsigned int)(v32 - 1);
      if ( !(_DWORD)v33 )
      {
        *((_DWORD *)a1 + 33) = 3;
        goto LABEL_4;
      }
      if ( (_DWORD)v33 == 1 )
      {
        *((_DWORD *)a1 + 33) = 4;
        goto LABEL_4;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, a2, a3, a4);
      v34[3] = v5;
      v34[4] = *v5;
      v34[5] = v5[3];
      WdLogEvent5_WdWarning(v34);
    }
    *((_DWORD *)a1 + 33) = 1;
LABEL_4:
    *(_QWORD *)a1 |= 0x200uLL;
    *((_QWORD *)a1 + 1) |= 0x200uLL;
  }
  if ( (*v5 & 0x80000) != 0 )
  {
    v11 = *((_DWORD *)a2 + 17);
    *(_QWORD *)a1 |= 0x20000uLL;
    *((_DWORD *)a1 + 38) = v11;
  }
  v12 = 0x100000LL;
  if ( (*v5 & 0x100000) != 0 )
  {
    v13 = *((_DWORD *)a2 + 18);
    *(_QWORD *)a1 |= 0x20000uLL;
    *((_DWORD *)a1 + 39) = v13;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x10) == 0 )
  {
    if ( (*v5 & 0x80000) != 0 )
    {
      v14 = !CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1);
      v17 = *((_DWORD *)a2 + 17);
      if ( v14 )
        *((_DWORD *)a1 + 24) = v17;
      else
        *((_DWORD *)a1 + 25) = v17;
      *(_QWORD *)a1 |= v16;
      *((_QWORD *)a1 + 1) |= v15;
    }
    if ( ((unsigned int)v12 & *v5) != 0 )
    {
      v14 = !CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1);
      v20 = *((_DWORD *)a2 + 18);
      if ( v14 )
        *((_DWORD *)a1 + 25) = v20;
      else
        *((_DWORD *)a1 + 24) = v20;
      *(_QWORD *)a1 |= v19;
      *((_QWORD *)a1 + 1) |= v18;
    }
  }
  if ( (*v5 & 0x20) != 0 )
  {
    v21 = *((_QWORD *)a2 + 6);
    *(_QWORD *)a1 |= 0x800uLL;
    *((_QWORD *)a1 + 18) = v21;
  }
  if ( (*v5 & 0x20000000) != 0 && *((_DWORD *)a2 + 15) )
  {
    v35 = (_DWORD *)((char *)a1 + 140);
    if ( (*v5 & 0x20000000) != 0 )
      ConvertGdiScalingToDMMScaling(v5[4], v35, a3, v12);
    else
      *v35 = 253;
  }
  else if ( (*(_DWORD *)a1 & 0x10000LL) == 0 )
  {
    v31 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)a1 + 140);
    if ( a5 )
      DmmGetDefaultScaling(a5, v31);
    else
      DxgkGetAdapterDefaultScaling((struct _LUID *)((char *)a2 + 20), v31);
  }
  v22 = (char *)a1 + 140;
  if ( a5 )
    EnforceDriverModelScalingPolicy(a5, v22);
  else
    EnforceDriverModelScalingPolicy((char *)a2 + 20, v22);
  *((_DWORD *)a1 + 34) = *((_DWORD *)a1 + 35);
  *(_QWORD *)a1 |= 0x40000010000uLL;
  if ( (*v5 & 0x40000) != 0 )
  {
    v26 = v5[5];
    switch ( v26 )
    {
      case 0x20u:
LABEL_26:
        *((_DWORD *)a1 + 29) = 21;
        break;
      case 8u:
        *((_DWORD *)a1 + 29) = 41;
        break;
      case 0x10u:
        *((_DWORD *)a1 + 29) = 23;
        break;
      case 0x18u:
        *((_DWORD *)a1 + 29) = 20;
        break;
      default:
        v36 = (_QWORD *)WdLogNewEntry5_WdWarning(0x40000LL, v23, v24, v25);
        v36[3] = v5;
        v36[4] = *v5;
        v36[5] = v5[5];
        WdLogEvent5_WdWarning(v36);
        goto LABEL_26;
    }
  }
  if ( (*v5 & 0x200000) != 0 )
  {
    v27 = -((*v5 & 0x200000) != 0 && (v5[9] & 2) != 0);
    v28 = *((_DWORD *)a1 + 20) & 0xFFFFFFF8;
    *(_QWORD *)a1 |= 4uLL;
    *((_DWORD *)a1 + 20) = v28 | ((v27 != 0) + 1);
  }
  if ( (*v5 & 0x400000) != 0 )
  {
    if ( (*(_QWORD *)a1 & 4) != 0 && (unsigned int)(((int)(*((_DWORD *)a1 + 20) << 29) >> 29) - 2) <= 1 )
      v29 = 2 * *((_DWORD *)a2 + 19);
    else
      v29 = *((_DWORD *)a2 + 19);
    v30 = *(_QWORD *)a1 | 2LL;
    *((_DWORD *)a1 + 13) = v29;
    *(_QWORD *)a1 = v30;
    *((_DWORD *)a1 + 14) = 1;
  }
  if ( !v6 && !v7 )
  {
    *((_DWORD *)a1 + 33) = 0;
    *(_QWORD *)a1 &= ~0x200uLL;
  }
}
