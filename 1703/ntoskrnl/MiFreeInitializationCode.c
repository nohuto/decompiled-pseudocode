/*
 * XREFs of MiFreeInitializationCode @ 0x1404B1698
 * Callers:
 *     MiFreeDriverInitialization @ 0x1404B1608 (MiFreeDriverInitialization.c)
 *     MmDiscardDriverSection @ 0x140825DE0 (MmDiscardDriverSection.c)
 * Callees:
 *     MiClearNonPagedBitMapBits @ 0x14006BEE0 (MiClearNonPagedBitMapBits.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     MiAddExpansionNonPagedPool @ 0x140160910 (MiAddExpansionNonPagedPool.c)
 *     MiBadRefCount @ 0x14017D194 (MiBadRefCount.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x14021F5AC (MiReturnPartitionResidentAvailable.c)
 */

unsigned __int64 __fastcall MiFreeInitializationCode(unsigned __int64 *a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  char *AnyMultiplexedVm; // r12
  __int64 PteAddress; // rax
  ULONG_PTR *ControlAreaPartition; // rsi
  ULONG_PTR *v11; // r11
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 result; // rax
  PVOID v15; // rcx
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  _QWORD v20[4]; // [rsp+30h] [rbp-48h] BYREF

  memset(v20, 0, sizeof(v20));
  v6 = (__int64)(a2 << 25) >> 16;
  v7 = (__int64)(a3 - a2 + 8) >> 3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  PteAddress = MiGetPteAddress(a1[6]);
  MiClearNonPagedBitMapBits((__int64)(a1 + 20), (__int64)AnyMultiplexedVm, (__int64)(a2 - PteAddress) >> 3, v7);
  ControlAreaPartition = &MiSystemPartition;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
  {
    v12 = a1[14];
    if ( v12 )
    {
      v13 = MiSectionControlArea(v12);
      ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v13);
    }
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v12, a2, v7, 1, v20);
LABEL_5:
    v11 = &MiSystemPartition;
    goto LABEL_6;
  }
  if ( v7 )
  {
    do
    {
      v17 = MiVaToPfn(v6);
      v18 = 48 * v17 - 0x58000000000LL;
      if ( *(_WORD *)(v18 + 32) != 1 )
        MiBadRefCount(v18);
      v19 = 512 - (v17 & 0x1FF);
      if ( v19 > v7 )
        v19 = v7;
      MiAddExpansionNonPagedPool(v17, v19);
      v6 += v19 << 12;
      v7 -= v19;
    }
    while ( v7 );
    goto LABEL_5;
  }
LABEL_6:
  result = v20[3];
  if ( v20[3] )
  {
    a1[25] -= v20[3];
    a1[26] -= result;
    v15 = (PVOID)a1[6];
    if ( v15 == PsNtosImageBase || v15 == PsHalImageBase )
      qword_14036D118 -= result;
    else
      _InterlockedExchangeAdd(&dword_14036D140, -(int)result);
    if ( ControlAreaPartition == v11 )
      MiReturnResidentAvailable(v20[3]);
    else
      MiReturnPartitionResidentAvailable((__int64)ControlAreaPartition, v20[3]);
    return MiReturnCommit((__int64)ControlAreaPartition, v16 - v20[1]);
  }
  return result;
}
