/*
 * XREFs of MiSessionCreate @ 0x14060A560
 * Callers:
 *     MiMapProcessExecutable @ 0x1404E94B0 (MiMapProcessExecutable.c)
 *     MmInitializeProcessAddressSpace @ 0x1404ECD04 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiCreateSystemWsles @ 0x14006A794 (MiCreateSystemWsles.c)
 *     ExInitializePagedLookasideListInternal @ 0x1400C7700 (ExInitializePagedLookasideListInternal.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     ExInitializeSessionHeapManager @ 0x140165BDC (ExInitializeSessionHeapManager.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiDereferenceSession @ 0x140577AC4 (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x14060A7FC (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x14060AA9C (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSpecialPool @ 0x14060AB08 (MiInitializeSpecialPool.c)
 *     MiInitializeSessionPool @ 0x14060ABC4 (MiInitializeSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14060B070 (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x14060B700 (MiInitializeSessionGlobals.c)
 */

__int64 MiSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rdi
  __int64 ProcessPartition; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _QWORD *PteAddress; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 DemandZeroPte; // rdx
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ebx
  PVOID PoolWithTag; // rax
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rbp

  result = MiInitializeSessionGlobals();
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    result = MiSessionCreateInternal(ProcessPartition);
    if ( (int)result >= 0 )
    {
      v3 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !(unsigned int)MiCreateSystemWsles()
        || !(unsigned int)MiInitializeDynamicBitmap(v3 + 8136, qword_1403CB610, 0x200000LL, 0LL) )
      {
        goto LABEL_4;
      }
      *(_QWORD *)(v3 + 8032) = qword_1403CB5F0;
      *(_QWORD *)(v3 + 8024) = 0x10000LL;
      PteAddress = (_QWORD *)MiGetPteAddress(qword_1403CB5F0);
      v6 = MiGetPteAddress(v4 + 0x1FFF);
      v7 = qword_1403CB5F8;
      v8 = v6;
      if ( !qword_1403CB5F8 )
      {
        v7 = ((v6 - (__int64)PteAddress) >> 3) + 1;
        qword_1403CB5F8 = v7;
      }
      if ( !(unsigned int)MiChargeCommit(ProcessPartition, v7, 0) )
      {
LABEL_4:
        MiDereferenceSession();
        return 3221225626LL;
      }
      if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, v8, 1u, 11) )
      {
        MiReturnCommit(ProcessPartition, qword_1403CB5F8);
LABEL_24:
        v14 = -1073741670;
        goto LABEL_26;
      }
      v9 = qword_1403CB5F8 + *(_QWORD *)(v3 + 48);
      *(_DWORD *)(v3 + 4) |= 8u;
      *(_QWORD *)(v3 + 48) = v9;
      DemandZeroPte = MiMakeDemandZeroPte(4);
      if ( (unsigned __int64)PteAddress <= v8 )
      {
        do
        {
          *PteAddress = DemandZeroPte;
          if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
            MiWritePteShadow(v12, DemandZeroPte, v13);
          ++PteAddress;
        }
        while ( (unsigned __int64)PteAddress <= v8 );
        v11 = *(_DWORD *)(v3 + 4);
      }
      *(_DWORD *)(v3 + 4) = v11 | 0x10;
      MiInitializeSystemWorkingSetList(ProcessPartition, v3 + 3008, 1LL);
      *(_QWORD *)(v3 + 56) = qword_1403CB600;
      *(_QWORD *)(v3 + 64) = qword_1403CB600 + 0x1FFFFFFFFFLL;
      result = ExInitializeSessionHeapManager();
      if ( (int)result >= 0 )
      {
        *(_DWORD *)(v3 + 4) |= 0x100u;
        v14 = MiInitializeSessionPool();
        if ( v14 >= 0 )
        {
          if ( !(unsigned int)MiInitializeSpecialPool(33LL) )
            goto LABEL_24;
          PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 1uLL, 0x6C6F6F50u);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          v16 = 0LL;
          v17 = 16LL;
          v18 = 21LL;
          do
          {
            ExInitializePagedLookasideListInternal(v16 + v3 + 256, 0LL, 0LL, 33, v17, 1819242320, 256, 0);
            v17 += 16LL;
            v16 += 128LL;
            --v18;
          }
          while ( v18 );
          *(_DWORD *)(v3 + 4) |= 1u;
          if ( !(unsigned int)MiInitializeSystemSpaceMap(v3 + 2944) )
            goto LABEL_24;
          v14 = MiSessionObjectCreate();
          if ( v14 >= 0 )
            return (unsigned int)v14;
        }
LABEL_26:
        MiDereferenceSession();
        return (unsigned int)v14;
      }
    }
  }
  return result;
}
