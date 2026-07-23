/*
 * XREFs of MiFreeInitializationCode @ 0x1405F84EC
 * Callers:
 *     MiFreeDriverInitialization @ 0x1405F845C (MiFreeDriverInitialization.c)
 *     MmDiscardDriverSection @ 0x1408E0DA4 (MmDiscardDriverSection.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiVaToPfn @ 0x14003C4FC (MiVaToPfn.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiGetControlAreaPartition @ 0x14006278C (MiGetControlAreaPartition.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiClearNonPagedBitMapBits @ 0x140160DA4 (MiClearNonPagedBitMapBits.c)
 *     MiAddExpansionNonPagedPool @ 0x14017021C (MiAddExpansionNonPagedPool.c)
 *     MiBadRefCount @ 0x1401A6864 (MiBadRefCount.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x140265758 (MiReturnPartitionResidentAvailable.c)
 */

unsigned __int64 __fastcall MiFreeInitializationCode(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  char *AnyMultiplexedVm; // r12
  __int64 PteAddress; // rax
  ULONG_PTR *ControlAreaPartition; // rbp
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 result; // rax
  PVOID v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  _QWORD v19[4]; // [rsp+30h] [rbp-48h] BYREF

  memset(v19, 0, sizeof(v19));
  v6 = (__int64)(a2 << 25) >> 16;
  v7 = (__int64)(a3 - a2 + 8) >> 3;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  PteAddress = MiGetPteAddress(a1[6]);
  MiClearNonPagedBitMapBits((__int64)(a1 + 20), (__int64)AnyMultiplexedVm, (__int64)(a2 - PteAddress) >> 3, v7);
  ControlAreaPartition = &MiSystemPartition;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v6) )
  {
    for ( ; v7; v7 -= v18 )
    {
      v16 = MiVaToPfn(v6);
      v17 = 48 * v16 - 0x58000000000LL;
      if ( *(_WORD *)(v17 + 32) != 1 )
        MiBadRefCount(v17);
      v18 = 512 - (v16 & 0x1FF);
      if ( v18 > v7 )
        v18 = v7;
      MiAddExpansionNonPagedPool(v16, v18);
      v6 += v18 << 12;
    }
  }
  else
  {
    v11 = a1[14];
    if ( v11 )
    {
      v12 = MiSectionControlArea(v11);
      ControlAreaPartition = (ULONG_PTR *)MiGetControlAreaPartition(v12);
    }
    MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v11, a2, v7, 1, v19);
  }
  result = v19[3];
  if ( v19[3] )
  {
    a1[25] -= v19[3];
    a1[26] -= result;
    v14 = (PVOID)a1[6];
    if ( v14 == PsNtosImageBase || v14 == PsHalImageBase )
    {
      v15 = v19[3];
      qword_1403CC650 -= v19[3];
    }
    else
    {
      _InterlockedExchangeAdd(&dword_1403CC678, -(int)result);
      v15 = v19[3];
    }
    if ( ControlAreaPartition == &MiSystemPartition )
      MiReturnResidentAvailable(v15);
    else
      MiReturnPartitionResidentAvailable((__int64)ControlAreaPartition, v15);
    return MiReturnCommit((__int64)ControlAreaPartition, v15 - v19[1]);
  }
  return result;
}
