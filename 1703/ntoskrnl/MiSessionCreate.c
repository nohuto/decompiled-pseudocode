/*
 * XREFs of MiSessionCreate @ 0x14057DF80
 * Callers:
 *     MiMapProcessExecutable @ 0x14049A420 (MiMapProcessExecutable.c)
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     MiJoinPartition @ 0x140063F74 (MiJoinPartition.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     ExInitializePagedLookasideListInternal @ 0x14012F140 (ExInitializePagedLookasideListInternal.c)
 *     MiCreateSystemWsles @ 0x14014358C (MiCreateSystemWsles.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiDereferenceSession @ 0x14044DF60 (MiDereferenceSession.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     MiInitializeSystemSpaceMap @ 0x14057E4D0 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeSpecialPool @ 0x14057E514 (MiInitializeSpecialPool.c)
 *     MiInitializeSessionPool @ 0x14057E5D0 (MiInitializeSessionPool.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x14057EA30 (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     MiInitializeSessionGlobals @ 0x14057F1FC (MiInitializeSessionGlobals.c)
 */

__int64 MiSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rdi
  __int64 ProcessPartition; // rax
  ULONG_PTR *v3; // rsi
  int Internal; // ebx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  _QWORD *PteAddress; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 DemandZeroPte; // rdx
  PVOID PoolWithTag; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rbp

  result = MiInitializeSessionGlobals();
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    v3 = MiJoinPartition(*(ULONG_PTR ***)(ProcessPartition + 200));
    Internal = MiSessionCreateInternal(v3);
    if ( Internal < 0 )
    {
      MiDereferencePartition((volatile LONG *)v3);
      return (unsigned int)Internal;
    }
    v5 = Process[1].ActiveProcessors.Bitmap[2];
    *MiGetSharedVm(v5 + 3008) = 0;
    if ( !(unsigned int)MiCreateSystemWsles()
      || !(unsigned int)MiInitializeDynamicBitmap(v5 + 8008, qword_14036C148, 0x200000LL, 0LL) )
    {
      goto LABEL_5;
    }
    *(_QWORD *)(v5 + 7904) = qword_14036C128;
    *(_QWORD *)(v5 + 7896) = 0x10000LL;
    PteAddress = (_QWORD *)MiGetPteAddress(qword_14036C128);
    v8 = MiGetPteAddress(v6 + 0x1FFF);
    v9 = qword_14036C130;
    v10 = v8;
    if ( !qword_14036C130 )
    {
      v9 = ((v8 - (__int64)PteAddress) >> 3) + 1;
      qword_14036C130 = v9;
    }
    if ( !(unsigned int)MiChargeCommit((unsigned __int64)v3, v9, 0LL) )
    {
LABEL_5:
      MiDereferenceSession();
      return 3221225626LL;
    }
    if ( !(unsigned int)MiMakeZeroedPageTables((__int64)PteAddress, v10, 1, 11) )
    {
      MiReturnCommit((__int64)v3, qword_14036C130);
      goto LABEL_5;
    }
    *(_QWORD *)(v5 + 48) += qword_14036C130;
    *(_DWORD *)(v5 + 4) |= 8u;
    DemandZeroPte = MiMakeDemandZeroPte(4);
    while ( (unsigned __int64)PteAddress <= v10 )
    {
      *PteAddress = DemandZeroPte;
      if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
        MiWritePteShadow();
      ++PteAddress;
    }
    *(_DWORD *)(v5 + 4) |= 0x10u;
    if ( !(unsigned int)MiInitializeSystemWorkingSetList(v3, v5 + 3008, 1LL) )
    {
      *(_DWORD *)(v5 + 4) &= ~0x10u;
LABEL_26:
      Internal = -1073741670;
      goto LABEL_28;
    }
    *(_QWORD *)(v5 + 56) = qword_14036C138;
    *(_QWORD *)(v5 + 64) = qword_14036C138 + 0x1FFFFFFFFFLL;
    Internal = MiInitializeSessionPool();
    if ( Internal >= 0 )
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
        ExInitializePagedLookasideListInternal(v13 + v5 + 256, 0LL, 0LL, 33, v14, 1819242320, 256, 0);
        v14 += 16LL;
        v13 += 128LL;
        --v15;
      }
      while ( v15 );
      *(_DWORD *)(v5 + 4) |= 1u;
      if ( !(unsigned int)MiInitializeSystemSpaceMap(v5 + 2944) )
        goto LABEL_26;
      Internal = MiSessionObjectCreate();
      if ( Internal >= 0 )
        return (unsigned int)Internal;
    }
LABEL_28:
    MiDereferenceSession();
    return (unsigned int)Internal;
  }
  return result;
}
