/*
 * XREFs of ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D7CD4
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D79BC (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D7C2C (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C0229D54 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C000AFC0 (-_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00D7F18 (EnforceDriverModelScalingPolicy.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1C00D7FCC (_EnforceDriverModelScalingPolicy.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D8450 (DxgkGetAdapterDefaultScaling.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1C00D857C (ConvertGdiScalingToDMMScaling.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0212B5C (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 */

void __fastcall CDS_JOURNAL::_FillPathDescriptor(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct CDS_JOURNAL::_ENTRY *a2,
        __int64 a3,
        char a4,
        struct DXGADAPTER *a5)
{
  unsigned int *v5; // rdi
  int v6; // eax
  __int64 v8; // r10
  char v10; // r15
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // r11
  int v18; // r9d
  __int64 v19; // r11
  int v20; // r9d
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax

  *(_QWORD *)a1 &= 0xFFFFFFFFFF7DFE78uLL;
  v5 = (unsigned int *)((char *)a2 + 44);
  v6 = *((_DWORD *)a2 + 11);
  v8 = *(_QWORD *)a1;
  v10 = a3;
  v12 = v6;
  if ( (v6 & 0x80u) != 0 )
  {
    v13 = *((_DWORD *)a2 + 14);
    if ( v13 )
    {
      v29 = v13 - 1;
      if ( !v29 )
      {
        *((_DWORD *)a1 + 33) = 2;
        goto LABEL_4;
      }
      v30 = (unsigned int)(v29 - 1);
      if ( !(_DWORD)v30 )
      {
        *((_DWORD *)a1 + 33) = 3;
        goto LABEL_4;
      }
      if ( (_DWORD)v30 == 1 )
      {
        *((_DWORD *)a1 + 33) = 4;
        goto LABEL_4;
      }
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, a2, a3);
      v31[3] = v5;
      v31[4] = *v5;
      v31[5] = v5[3];
      WdLogEvent5_WdWarning(v31);
    }
    *((_DWORD *)a1 + 33) = 1;
LABEL_4:
    *(_QWORD *)a1 |= 0x200uLL;
    *((_QWORD *)a1 + 1) |= 0x200uLL;
    v6 = *v5;
    v12 = *v5;
    v8 = *(_QWORD *)a1;
  }
  if ( (v6 & 0x80000) != 0 )
  {
    v14 = *((_DWORD *)a2 + 17);
    v8 |= 0x20000uLL;
    *(_QWORD *)a1 = v8;
    *((_DWORD *)a1 + 38) = v14;
    v6 = *v5;
    v12 = *v5;
  }
  if ( (v6 & 0x100000) != 0 )
  {
    v15 = *((_DWORD *)a2 + 18);
    v8 |= 0x20000uLL;
    *(_QWORD *)a1 = v8;
    *((_DWORD *)a1 + 39) = v15;
    v12 = *v5;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x10) == 0 )
  {
    v16 = v12;
    v17 = v8;
    if ( (v12 & 0x80000) != 0 )
    {
      if ( CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1) )
        *((_DWORD *)a1 + 25) = v18;
      else
        *((_DWORD *)a1 + 24) = v18;
      v17 = v19 | 0x40000000000100LL;
      *((_QWORD *)a1 + 1) |= 0x100uLL;
      *(_QWORD *)a1 = v17;
      v12 = *v5;
      v16 = *v5;
    }
    v8 = v17;
    if ( (v16 & 0x100000) != 0 )
    {
      if ( CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped(a1) )
        *((_DWORD *)a1 + 24) = v20;
      else
        *((_DWORD *)a1 + 25) = v20;
      v8 = v21 | 0x40000000000100LL;
      *((_QWORD *)a1 + 1) |= 0x100uLL;
      *(_QWORD *)a1 = v8;
      v12 = *v5;
    }
  }
  if ( (v12 & 0x20) != 0 )
  {
    v8 |= 0x800uLL;
    *((_QWORD *)a1 + 18) = *((_QWORD *)a2 + 6);
    *(_QWORD *)a1 = v8;
    v12 = *v5;
  }
  if ( (v12 & 0x20000000) != 0 && (v32 = *((unsigned int *)a2 + 15), (_DWORD)v32) )
  {
    ConvertGdiScalingToDMMScaling(v32, (char *)a1 + 140);
  }
  else if ( (v8 & 0x10000) == 0 )
  {
    if ( a5 )
      DmmGetDefaultScaling(a5, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)a1 + 35);
    else
      DxgkGetAdapterDefaultScaling((char *)a2 + 20);
  }
  if ( a5 )
    EnforceDriverModelScalingPolicy(a5, (char *)a1 + 140);
  else
    EnforceDriverModelScalingPolicy((char *)a2 + 20);
  *((_DWORD *)a1 + 34) = *((_DWORD *)a1 + 35);
  *(_QWORD *)a1 |= 0x40000010000uLL;
  if ( (*v5 & 0x40000) != 0 )
  {
    v25 = v5[5];
    switch ( v25 )
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
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
        v33[3] = v5;
        v33[4] = *v5;
        v33[5] = v5[5];
        WdLogEvent5_WdWarning(v33);
        goto LABEL_26;
    }
  }
  v26 = *v5;
  if ( (*v5 & 0x200000) != 0 )
  {
    v27 = *((_DWORD *)a1 + 20) & 0xFFFFFFF8 | (((*((_DWORD *)a2 + 20) & 2) != 0) + 1);
    *(_QWORD *)a1 |= 4uLL;
    *((_DWORD *)a1 + 20) = v27;
    v26 = *v5;
  }
  if ( (v26 & 0x400000) != 0 )
  {
    if ( (*(_BYTE *)a1 & 4) != 0 && (unsigned int)(((int)(*((_DWORD *)a1 + 20) << 29) >> 29) - 2) <= 1 )
      v28 = 2 * *((_DWORD *)a2 + 19);
    else
      v28 = *((_DWORD *)a2 + 19);
    *((_DWORD *)a1 + 13) = v28;
    *(_QWORD *)a1 |= 2uLL;
    *((_DWORD *)a1 + 14) = 1;
  }
  if ( !a4 && !v10 )
  {
    *((_DWORD *)a1 + 33) = 0;
    *(_QWORD *)a1 &= ~0x200uLL;
  }
}
