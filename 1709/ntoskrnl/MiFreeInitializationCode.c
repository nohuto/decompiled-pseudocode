/*
 * XREFs of MiFreeInitializationCode @ 0x14058F3A0
 * Callers:
 *     MiFreeDriverInitialization @ 0x14058F310 (MiFreeDriverInitialization.c)
 *     MmDiscardDriverSection @ 0x140857448 (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiClearNonPagedBitMapBits @ 0x140129BC4 (MiClearNonPagedBitMapBits.c)
 *     MiAddExpansionNonPagedPool @ 0x14014DD28 (MiAddExpansionNonPagedPool.c)
 *     MiBadRefCount @ 0x14017CA3C (MiBadRefCount.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 */

unsigned __int64 __fastcall MiFreeInitializationCode(unsigned __int64 *a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  char *AnyMultiplexedVm; // r12
  __int64 PteAddress; // rax
  ULONG_PTR *ControlAreaPartition; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 result; // rax
  PVOID v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rax
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
      qword_1403893D8 -= result;
    else
      _InterlockedExchangeAdd(&dword_140389400, -(int)result);
    if ( ControlAreaPartition == &MiSystemPartition )
      MiReturnResidentAvailable(v19[3]);
    else
      MiReturnPartitionResidentAvailable((__int64)ControlAreaPartition, v19[3]);
    return MiReturnCommit((__int64)ControlAreaPartition, v15 - v19[1]);
  }
  return result;
}
