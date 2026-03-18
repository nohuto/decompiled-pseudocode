/*
 * XREFs of MiMapUserLargePages @ 0x1406BEE28
 * Callers:
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiCopyLargeVad @ 0x1406BE598 (MiCopyLargeVad.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14006B954 (MiGetPdeAddress.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14020F010 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x140217AC0 (MiInitPerfMemoryFlags.c)
 *     MiReturnPartitionResidentAvailable @ 0x14021F5AC (MiReturnPartitionResidentAvailable.c)
 *     MiInsertLargeUserMapping @ 0x14022181C (MiInsertLargeUserMapping.c)
 *     MiAllocateLargeZeroPages @ 0x1406BE398 (MiAllocateLargeZeroPages.c)
 *     MiDemotePfnListChain @ 0x1406BE8AC (MiDemotePfnListChain.c)
 *     MiFreeLargeZeroPages @ 0x1406BEC28 (MiFreeLargeZeroPages.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, int a2)
{
  _KPROCESS *Process; // r13
  ULONG_PTR *ProcessPartition; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned int v10; // esi
  __int64 v11; // rax
  int v12; // r15d
  unsigned __int16 *v13; // r14
  unsigned __int16 *v14; // r12
  unsigned __int64 v15; // r14
  unsigned __int64 PteAddress; // rax
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 PdeAddress; // r15
  unsigned __int64 v19; // r14
  unsigned int v20; // r13d
  _QWORD **v21; // rcx
  unsigned __int64 v22; // rdi
  unsigned int inited; // eax
  _KPROCESS *v24; // [rsp+30h] [rbp-58h]
  _QWORD *v25; // [rsp+38h] [rbp-50h] BYREF
  __int64 v26; // [rsp+40h] [rbp-48h]
  unsigned __int64 v27; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v29; // [rsp+A8h] [rbp+20h]

  v25 = 0LL;
  v26 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v24 = Process;
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)Process);
  v7 = ProcessPartition[720] - 160;
  v8 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
     - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
     + 1;
  v28 = v8;
  if ( (__int64)v8 > v7 )
    return 3221225626LL;
  if ( a2
    || (*(_DWORD *)(a1 + 48) & 0x8000) == 0 && (a2 = (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) >> 20) & 0x3F) != 0 )
  {
    v10 = a2 - 1;
  }
  else
  {
    v10 = *(_DWORD *)(KiProcessorBlock[*(unsigned int *)(v6 + 588)] + 23656);
  }
  if ( !(unsigned int)MiChargeResident(ProcessPartition, v8, 0LL) )
    return 3221225626LL;
  v11 = (*(_DWORD *)(a1 + 48) >> 3) & 0x1F;
  v27 = v8;
  v12 = MmMakeProtectNotWriteCopy[v11];
  v13 = (unsigned __int16 *)((char *)qword_14036C1C0 + 2 * v10 * (unsigned __int16)KeNumberNodes);
  v14 = &v13[(unsigned __int16)KeNumberNodes];
  while ( 1 )
  {
    MiAllocateLargeZeroPages((int)ProcessPartition, (__int64 *)&v27, v10, v12, (__int64)&v25);
    if ( !v27 )
      break;
    if ( ++v13 == v14 )
    {
      MiFreeLargeZeroPages((__int64)ProcessPartition, &v25);
      if ( ProcessPartition == &MiSystemPartition )
        MiReturnResidentAvailable(v8);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, v8);
      return 3221225626LL;
    }
    v10 = *v13;
  }
  v29 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v15 = v29;
  PteAddress = MiGetPteAddress(v29);
  ValidPte = MiMakeValidPte(PteAddress, -1LL, v12 | 0x84000000);
  PdeAddress = MiGetPdeAddress(v15);
  if ( PdeAddress < PdeAddress + 8 * (v8 >> 9) )
  {
    v19 = PdeAddress + 8 * (v8 >> 9);
    do
    {
      v20 = 1;
      if ( (PdeAddress & 0xFFF) != 0 || (__int64)((v19 - PdeAddress) & 0xFFFFFFFFFFFFFFF8uLL) < 4096 || !v25 )
      {
        if ( !v26 )
          MiDemotePfnListChain(&v25);
      }
      else
      {
        v20 = 0;
      }
      v21 = (_QWORD **)(&v25)[v20];
      (&v25)[v20] = *v21;
      v22 = MiLargePageSizes[v20];
      ValidPte ^= (ValidPte ^ (((__int64)(v21 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
      MiInsertLargeUserMapping((__int64)(PdeAddress << 25) >> 16 << 25 >> 16, ValidPte, v10, v20);
      PdeAddress += 8 * (v22 >> 9);
    }
    while ( PdeAddress < v19 );
    v8 = v28;
    v15 = v29;
    Process = v24;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 13);
    MiLogPerfMemoryRangeEvent(v15, (__int64)Process, inited, v8);
  }
  return 0LL;
}
