/*
 * XREFs of MiMapUserLargePages @ 0x140755B60
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiCopyLargeVad @ 0x140755448 (MiCopyLargeVad.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiGetPdeAddress @ 0x14003B3E0 (MiGetPdeAddress.c)
 *     MiFreeLargeZeroPages @ 0x140049444 (MiFreeLargeZeroPages.c)
 *     MiGetPfnLink @ 0x1400D1210 (MiGetPfnLink.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402547CC (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1402602EC (MiInitPerfMemoryFlags.c)
 *     MiReturnPartitionResidentAvailable @ 0x140265758 (MiReturnPartitionResidentAvailable.c)
 *     MiDemotePfnListChain @ 0x1402689E8 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x140268D44 (MiInsertLargeUserMapping.c)
 *     MiGetCrossPartitionCharges @ 0x14026F274 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14026FC54 (MiReturnCrossPartitionCharges.c)
 *     MiAllocateLargeZeroPages @ 0x14075522C (MiAllocateLargeZeroPages.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // r8
  __int64 ProcessPartition; // r15
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  int CrossPartitionCharges; // edi
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v17; // rax
  int v18; // r12d
  unsigned __int16 *v19; // rdi
  unsigned __int64 v20; // r12
  unsigned __int64 PteAddress; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 PdeAddress; // r13
  unsigned __int64 v26; // r14
  unsigned int v27; // r8d
  __int64 v28; // rdi
  unsigned __int64 v29; // rdi
  __int64 v30; // rcx
  unsigned int v31; // r8d
  unsigned int inited; // eax
  unsigned __int16 *v34; // [rsp+30h] [rbp-30h]
  unsigned __int64 v35; // [rsp+38h] [rbp-28h]
  __int64 Process; // [rsp+40h] [rbp-20h]
  _QWORD *v37; // [rsp+48h] [rbp-18h] BYREF
  __int64 v38; // [rsp+50h] [rbp-10h]
  __int64 v39; // [rsp+58h] [rbp-8h]
  struct _KTHREAD *v40; // [rsp+A0h] [rbp+40h]
  unsigned __int64 v41; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v42; // [rsp+B8h] [rbp+58h]

  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v40 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  ProcessPartition = MiGetProcessPartition(Process);
  v9 = *(unsigned __int8 *)(a1 + 32);
  v10 = 0;
  v11 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v42 = ProcessPartition;
  v12 = (*(unsigned int *)(a1 + 28) | v11) - (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v9 << 32)) + 1;
  v35 = v12;
  if ( v7 )
  {
    ProcessPartition = v7;
    v42 = v7;
    CrossPartitionCharges = MiGetCrossPartitionCharges(v7, 4, 1, v12);
    if ( CrossPartitionCharges < 0 )
      goto LABEL_40;
    CurrentThread = v40;
    v10 = 1;
  }
  v14 = v12;
  if ( (*(_DWORD *)(ProcessPartition + 4) & 8) == 0 )
    v14 = v12 + 160;
  if ( !(unsigned int)MiSufficientAvailablePages(ProcessPartition, v14) )
  {
LABEL_7:
    CrossPartitionCharges = -1073741670;
    goto LABEL_36;
  }
  if ( a2
    || (*(_DWORD *)(a1 + 48) & 0x4000) == 0 && (a2 = (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) >> 20) & 0x3F) != 0 )
  {
    v16 = a2 - 1;
  }
  else
  {
    v16 = *(_DWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 23572);
  }
  if ( !a3 )
  {
LABEL_17:
    if ( (unsigned int)MiChargeResident((ULONG_PTR *)ProcessPartition, v12, 0LL, v15) )
    {
      v10 |= 4u;
      v17 = (*(_DWORD *)(a1 + 48) >> 3) & 0x1F;
      v41 = v12;
      v18 = MmMakeProtectNotWriteCopy[v17];
      v19 = (unsigned __int16 *)((char *)qword_1403CB6A0 + 2 * v16 * (unsigned __int16)KeNumberNodes);
      v34 = &v19[(unsigned __int16)KeNumberNodes];
      while ( 1 )
      {
        MiAllocateLargeZeroPages(ProcessPartition, (__int64 *)&v41, v16, v18, (__int64)&v37, 0);
        if ( !v41 )
          break;
        if ( ++v19 == v34 )
        {
          MiFreeLargeZeroPages(ProcessPartition, &v37);
          goto LABEL_7;
        }
        v16 = *v19;
      }
      v20 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
      PteAddress = MiGetPteAddress(v20);
      ValidPte = MiMakeValidPte(PteAddress, -1LL, v22, v23);
      PdeAddress = MiGetPdeAddress(v20);
      if ( PdeAddress < PdeAddress + 8 * (v12 >> 9) )
      {
        v26 = PdeAddress + 8 * (v12 >> 9);
        do
        {
          v27 = 1;
          if ( (PdeAddress & 0xFFF) != 0 || (__int64)((v26 - PdeAddress) & 0xFFFFFFFFFFFFFFF8uLL) < 4096 || !v37 )
          {
            if ( !v38 )
            {
              MiDemotePfnListChain((__int64)&v37, 1);
              v27 = 1;
            }
          }
          else
          {
            v27 = 0;
          }
          v28 = v27;
          (&v37)[v27] = (_QWORD *)MiGetPfnLink((__int64)(&v37)[v27]);
          v29 = MiLargePageSizes[v28];
          ValidPte ^= (ValidPte ^ (((v30 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
          MiInsertLargeUserMapping((__int64)(PdeAddress << 25) >> 16 << 25 >> 16, ValidPte, v16, v31);
          PdeAddress += 8 * (v29 >> 9);
        }
        while ( PdeAddress < v26 );
        v12 = v35;
        ProcessPartition = v42;
      }
      if ( (BYTE4(PerfGlobalGroupMask[0]) & 1) != 0 )
      {
        inited = MiInitPerfMemoryFlags(1, 13);
        MiLogPerfMemoryRangeEvent(v20, Process, inited, v12);
      }
      v10 = 0;
      CrossPartitionCharges = 0;
      goto LABEL_36;
    }
    goto LABEL_7;
  }
  if ( (unsigned int)MiChargeCommit(ProcessPartition, v12, 0) )
  {
    v10 |= 2u;
    goto LABEL_17;
  }
  CrossPartitionCharges = -1073741523;
LABEL_36:
  if ( v10 >= 4 )
  {
    if ( (ULONG_PTR *)ProcessPartition == &MiSystemPartition )
      MiReturnResidentAvailable(v12);
    else
      MiReturnPartitionResidentAvailable(ProcessPartition, v12);
  }
LABEL_40:
  if ( (v10 & 2) != 0 )
    MiReturnCommit(ProcessPartition, v12);
  if ( (v10 & 1) != 0 )
    MiReturnCrossPartitionCharges(ProcessPartition, 4, 1, v12);
  return (unsigned int)CrossPartitionCharges;
}
