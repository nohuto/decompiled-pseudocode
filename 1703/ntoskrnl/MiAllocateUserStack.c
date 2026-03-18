/*
 * XREFs of MiAllocateUserStack @ 0x1404A434C
 * Callers:
 *     MmAllocateVirtualMemory @ 0x1404A42E8 (MmAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     MiInsertVadEvent @ 0x140099800 (MiInsertVadEvent.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     MiVadDeleted @ 0x1400CE370 (MiVadDeleted.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400CE380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400CE400 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405160A8 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiFreeRfgControlStack @ 0x1406BFE90 (MiFreeRfgControlStack.c)
 */

__int64 __fastcall MiAllocateUserStack(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, int a6, int a7, int a8)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v9; // r12d
  __int64 Process; // rbp
  __int64 v12; // r14
  int VirtualMemory; // edi
  char *v15; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rbp
  _QWORD *v18; // r15
  int v19; // eax
  char *v20; // rcx
  PVOID P[9]; // [rsp+50h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0;
  P[0] = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v12 = *(_QWORD *)(Process + 1296);
  VirtualMemory = MiAllocateVirtualMemory(-1LL, a2, a3, a4, a5, a6, 0, a8, P);
  if ( VirtualMemory < 0 )
    goto LABEL_5;
  if ( (a8 & 0x40000000) == 0 )
  {
    MiUnlockAndDereferenceVad((char *)P[0]);
    return 0;
  }
  v15 = (char *)P[0];
  MiUnlockVad((__int64)CurrentThread, (__int64)P[0]);
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    VirtualMemory = -1073741558;
    goto LABEL_18;
  }
  v9 = 1;
  _InterlockedAdd((volatile signed __int32 *)(v12 + 136), 1u);
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x70526D4Du);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
  {
    VirtualMemory = -1073741670;
LABEL_5:
    v15 = (char *)P[0];
    goto LABEL_18;
  }
  *((_DWORD *)PoolWithTag + 16) = 256;
  v18 = PoolWithTag + 1;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  v19 = MiAllocateFromSubAllocatedRegion(3LL, *a4, PoolWithTag + 1, PoolWithTag + 2);
  v15 = (char *)P[0];
  VirtualMemory = v19;
  if ( v19 >= 0 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)P[0]);
    if ( !(unsigned int)MiVadDeleted((__int64)v15)
      && ((*((unsigned int *)v15 + 7) | ((unsigned __int64)(unsigned __int8)v15[33] << 32))
        - (*((unsigned int *)v15 + 6) | ((unsigned __int64)(unsigned __int8)v15[32] << 32))
        + 1) << 12 == *a4 )
    {
      MiInsertVadEvent((__int64)v15, v17, 1);
      MiUnlockAndDereferenceVad(v15);
      VirtualMemory = 0;
LABEL_23:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 136), 0xFFFFFFFF) == 1 )
        KeSetEvent(*(PRKEVENT *)(v12 + 160), 0, 0);
      return (unsigned int)VirtualMemory;
    }
    MiUnlockVad((__int64)CurrentThread, (__int64)v15);
    VirtualMemory = -1073741800;
  }
  if ( *v18 )
    MiFreeRfgControlStack(v17[2], *v18, *a4);
  ExFreePoolWithTag(v17, 0);
LABEL_18:
  if ( v15 )
  {
    MiLockVad((__int64)CurrentThread, (__int64)v15);
    if ( (unsigned int)MiVadDeleted((__int64)v15) )
      MiUnlockAndDereferenceVad(v20);
    else
      MiDeleteVad((__int64)v20, 0);
  }
  if ( v9 )
    goto LABEL_23;
  return (unsigned int)VirtualMemory;
}
