/*
 * XREFs of MiMapUserLargePages @ 0x1406EC0E4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiCopyLargeVad @ 0x1406EB9F8 (MiCopyLargeVad.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiFreeLargeZeroPages @ 0x1400C5300 (MiFreeLargeZeroPages.c)
 *     MiGetPfnLink @ 0x14012FE20 (MiGetPfnLink.c)
 *     MiGetPdeAddress @ 0x1401322DC (MiGetPdeAddress.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140216D54 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x14022138C (MiInitPerfMemoryFlags.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 *     MiDemotePfnListChain @ 0x14022E394 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x14022E6A4 (MiInsertLargeUserMapping.c)
 *     MiAllocateLargeZeroPages @ 0x1406EB7E8 (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *ProcessPartition; // rbx
  unsigned __int64 v6; // r14
  unsigned int v8; // esi
  int v9; // eax
  int v10; // r12d
  unsigned __int16 *v11; // r15
  unsigned __int16 *v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 PteAddress; // rax
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 PdeAddress; // r12
  unsigned __int64 v18; // r15
  unsigned int v19; // r8d
  __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned int v23; // r8d
  unsigned int inited; // eax
  unsigned __int64 v25; // [rsp+30h] [rbp-30h]
  __int64 Process; // [rsp+38h] [rbp-28h]
  _QWORD *v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h]
  __int64 v29; // [rsp+50h] [rbp-10h]
  unsigned __int64 v30; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int64 v31; // [rsp+B8h] [rbp+58h]

  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(Process);
  v6 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
     - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
     + 1;
  v31 = v6;
  if ( !(unsigned int)MiSufficientAvailablePages((__int64)ProcessPartition, v6 + 160) )
    return 3221225626LL;
  if ( a2
    || (*(_DWORD *)(a1 + 48) & 0x8000) == 0 && (a2 = (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) >> 20) & 0x3F) != 0 )
  {
    v8 = a2 - 1;
  }
  else
  {
    v8 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 23572);
  }
  if ( !(unsigned int)MiChargeResident(ProcessPartition, v6) )
    return 3221225626LL;
  v9 = *(_DWORD *)(a1 + 48);
  v30 = v6;
  v10 = MmMakeProtectNotWriteCopy[(unsigned __int8)v9 >> 3];
  v11 = (unsigned __int16 *)((char *)qword_140388508 + 2 * v8 * (unsigned __int16)KeNumberNodes);
  v12 = &v11[(unsigned __int16)KeNumberNodes];
  MiAllocateLargeZeroPages((int)ProcessPartition, (__int64 *)&v30, v8, v10, (__int64)&v27, 0);
  v13 = v30;
  if ( v30 )
  {
    do
    {
      if ( ++v11 == v12 )
        break;
      v8 = *v11;
      MiAllocateLargeZeroPages((int)ProcessPartition, (__int64 *)&v30, v8, v10, (__int64)&v27, 0);
      v13 = v30;
    }
    while ( v30 );
    if ( v13 )
    {
      MiFreeLargeZeroPages((__int64)ProcessPartition, &v27);
      if ( ProcessPartition == &MiSystemPartition )
        MiReturnResidentAvailable(v6);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, v6);
      return 3221225626LL;
    }
  }
  v14 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v25 = v14;
  PteAddress = MiGetPteAddress(v14);
  ValidPte = MiMakeValidPte(PteAddress, -1LL, v10 | 0x84000000);
  PdeAddress = MiGetPdeAddress(v14);
  if ( PdeAddress < PdeAddress + 8 * (v6 >> 9) )
  {
    v18 = PdeAddress + 8 * (v6 >> 9);
    do
    {
      v19 = 1;
      if ( (PdeAddress & 0xFFF) != 0 || (__int64)((v18 - PdeAddress) & 0xFFFFFFFFFFFFFFF8uLL) < 4096 || !v27 )
      {
        if ( !v28 )
        {
          MiDemotePfnListChain((__int64)&v27, 1);
          v19 = 1;
        }
      }
      else
      {
        v19 = 0;
      }
      v20 = v19;
      (&v27)[v19] = (_QWORD *)MiGetPfnLink((__int64)(&v27)[v19]);
      v21 = MiLargePageSizes[v20];
      ValidPte ^= (ValidPte ^ (((v22 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
      MiInsertLargeUserMapping((__int64)(PdeAddress << 25) >> 16 << 25 >> 16, ValidPte, v8, v23);
      PdeAddress += 8 * (v21 >> 9);
    }
    while ( PdeAddress < v18 );
    v6 = v31;
    v14 = v25;
  }
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 13);
    MiLogPerfMemoryRangeEvent(v14, Process, inited, v6);
  }
  return 0LL;
}
