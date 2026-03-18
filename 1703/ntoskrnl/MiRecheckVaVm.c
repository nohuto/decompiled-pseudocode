/*
 * XREFs of MiRecheckVaVm @ 0x1400A5790
 * Callers:
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x1400FF430 (MiCrcStillIntact.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRecheckVaVm(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int16 v6; // ax
  int SystemRegionType; // edx
  char v9; // al

  v4 = 1;
  if ( (*(_BYTE *)(a1 + 192) & 7) == 0 )
  {
    if ( a2 < 0xFFFF800000000000uLL )
      goto LABEL_3;
    return 0LL;
  }
  if ( a2 < 0xFFFF800000000000uLL )
    return 0LL;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_14036C59C);
  SystemRegionType = MiGetSystemRegionType(a2);
  v9 = *(_BYTE *)(a1 + 192) & 7;
  switch ( v9 )
  {
    case 1:
      if ( SystemRegionType != 1 && SystemRegionType != 11 )
        goto LABEL_17;
      break;
    case 2:
      if ( SystemRegionType == 8 )
        break;
      goto LABEL_17;
    case 3:
      if ( SystemRegionType == 6 )
        break;
LABEL_17:
      v4 = 0;
      goto LABEL_5;
    default:
      if ( v9 == 4 && SystemRegionType != 9 )
        goto LABEL_17;
      break;
  }
LABEL_3:
  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned __int8)MiIsAddressValid(v5) != 1 )
    goto LABEL_17;
  v6 = MI_READ_PTE_LOCK_FREE(v5);
  if ( (v6 & 1) == 0 && (v6 & 0xC00) != 0x800LL )
    goto LABEL_17;
LABEL_5:
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C59C);
  return v4;
}
