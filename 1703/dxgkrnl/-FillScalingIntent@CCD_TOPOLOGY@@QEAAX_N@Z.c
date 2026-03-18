/*
 * XREFs of ?FillScalingIntent@CCD_TOPOLOGY@@QEAAX_N@Z @ 0x1C00ED224
 * Callers:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADC20 (-Augment@CDS_JOURNAL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0101B68 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     DxgkGetAdapterDefaultScaling @ 0x1C00A8A40 (DxgkGetAdapterDefaultScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C00ABE78 (EnforceDriverModelScalingPolicy.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::FillScalingIntent(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int i; // esi
  __int64 v6; // rax
  unsigned __int16 v7; // dx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  int v9; // eax
  int v10; // ecx
  int v11; // eax

  for ( i = 0; ; ++i )
  {
    v6 = *((_QWORD *)this + 8);
    v7 = v6 ? *(_WORD *)(v6 + 20) : 0;
    if ( i >= v7 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i, a3, a4);
    if ( (*(_QWORD *)PathDescriptor & 0x10000LL) != 0 )
    {
      v9 = *((_DWORD *)PathDescriptor + 34);
      v10 = *((_DWORD *)PathDescriptor + 35);
      if ( v9 != v10 && (unsigned int)(v10 - 4) <= 1 )
      {
        if ( v9 == 1 )
          DxgkGetAdapterDefaultScaling(
            (struct _LUID *)PathDescriptor + 2,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 35);
        else
          *((_DWORD *)PathDescriptor + 35) = v9;
      }
      EnforceDriverModelScalingPolicy((struct _LUID *)PathDescriptor + 2, (__int64)PathDescriptor + 140);
    }
    else
    {
      if ( (*(_QWORD *)PathDescriptor & 0x40000000000LL) != 0
        && (v11 = *((_DWORD *)PathDescriptor + 34), v11 >= 2)
        && v11 <= 5 )
      {
        *((_DWORD *)PathDescriptor + 35) = v11;
        EnforceDriverModelScalingPolicy((struct _LUID *)PathDescriptor + 2, (__int64)PathDescriptor + 140);
      }
      else
      {
        DxgkGetAdapterDefaultScaling(
          (struct _LUID *)PathDescriptor + 2,
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 35);
      }
      *(_QWORD *)PathDescriptor |= 0x10000uLL;
    }
  }
}
