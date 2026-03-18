/*
 * XREFs of MiSessionCreate @ 0x1405B4810
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 *     MiMapProcessExecutable @ 0x14045EF60 (MiMapProcessExecutable.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiCreateSystemWsles @ 0x14005C00C (MiCreateSystemWsles.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400B4390 (ExInitializePagedLookasideListInternal.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiDereferenceSession @ 0x14058B274 (MiDereferenceSession.c)
 *     MiInitializeSessionGlobals @ 0x1405B3E08 (MiInitializeSessionGlobals.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405B471C (MiInitializeSystemWorkingSetList.c)
 *     MiSessionObjectCreate @ 0x1405B4ABC (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x1405B4D5C (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSpecialPool @ 0x1405B6FA0 (MiInitializeSpecialPool.c)
 *     MiInitializeSessionPool @ 0x1405B705C (MiInitializeSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x1405B70F8 (MiInitializeDynamicBitmap.c)
 */

__int64 MiSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rdi
  ULONG_PTR *ProcessPartition; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _QWORD *PteAddress; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  __int64 DemandZeroPte; // rdx
  int v11; // ebx
  PVOID PoolWithTag; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rbp

  result = MiInitializeSessionGlobals();
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)Process);
    result = MiSessionCreateInternal(ProcessPartition);
    if ( (int)result >= 0 )
    {
      v3 = Process[1].ActiveProcessors.Bitmap[2];
      *MiGetSharedVm(v3 + 3008) = 0;
      if ( !(unsigned int)MiCreateSystemWsles()
        || !(unsigned int)MiInitializeDynamicBitmap(v3 + 8008, qword_140388488, 0x200000LL, 0LL) )
      {
        goto LABEL_4;
      }
      *(_QWORD *)(v3 + 7904) = qword_140388468;
      *(_QWORD *)(v3 + 7896) = 0x10000LL;
      PteAddress = (_QWORD *)MiGetPteAddress(qword_140388468);
      v6 = MiGetPteAddress(v4 + 0x1FFF);
      v8 = qword_140388470;
      v9 = v6;
      if ( !qword_140388470 )
      {
        v8 = ((v6 - (__int64)PteAddress) >> 3) + 1;
        qword_140388470 = v8;
      }
      if ( !(unsigned int)MiChargeCommit((__int64)ProcessPartition, v8, 0LL, v7) )
        goto LABEL_4;
      if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, v9, 1, 11) )
      {
        MiReturnCommit((__int64)ProcessPartition, qword_140388470);
LABEL_4:
        MiDereferenceSession();
        return 3221225626LL;
      }
      *(_QWORD *)(v3 + 48) += qword_140388470;
      *(_DWORD *)(v3 + 4) |= 8u;
      DemandZeroPte = MiMakeDemandZeroPte(4);
      while ( (unsigned __int64)PteAddress <= v9 )
      {
        *PteAddress = DemandZeroPte;
        if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
        {
          MiWritePteShadow();
        }
        ++PteAddress;
      }
      *(_DWORD *)(v3 + 4) |= 0x10u;
      if ( !(unsigned int)MiInitializeSystemWorkingSetList(ProcessPartition, v3 + 3008, 1, 0LL) )
      {
        *(_DWORD *)(v3 + 4) &= ~0x10u;
LABEL_26:
        v11 = -1073741670;
        goto LABEL_28;
      }
      *(_QWORD *)(v3 + 56) = qword_140388478;
      *(_QWORD *)(v3 + 64) = qword_140388478 + 0x1FFFFFFFFFLL;
      v11 = MiInitializeSessionPool();
      if ( v11 >= 0 )
      {
        if ( !(unsigned int)MiInitializeSpecialPool(33LL) )
          goto LABEL_26;
        PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 1uLL, 0x6C6F6F50u);
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        v13 = 0LL;
        v14 = 16LL;
        v15 = 21LL;
        do
        {
          ExInitializePagedLookasideListInternal(v13 + v3 + 256, 0LL, 0LL, 33, v14, 1819242320, 256, 0);
          v14 += 16LL;
          v13 += 128LL;
          --v15;
        }
        while ( v15 );
        *(_DWORD *)(v3 + 4) |= 1u;
        if ( !(unsigned int)MiInitializeSystemSpaceMap(v3 + 2944) )
          goto LABEL_26;
        v11 = MiSessionObjectCreate();
        if ( v11 >= 0 )
          return (unsigned int)v11;
      }
LABEL_28:
      MiDereferenceSession();
      return (unsigned int)v11;
    }
  }
  return result;
}
