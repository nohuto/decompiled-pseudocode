/*
 * XREFs of MiClearNonPagedPtes @ 0x1401354A0
 * Callers:
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiReturnPoolCharges @ 0x140134F8C (MiReturnPoolCharges.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140260304 (MiLogNonPagedPoolReleaseEvent.c)
 */

void __fastcall MiClearNonPagedPtes(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r8
  unsigned __int64 *v7; // rdi
  unsigned __int64 *v8; // r8
  __int64 v9; // r12
  unsigned __int64 *v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *v13; // rbx
  bool v14; // zf
  char v15; // al
  _SLIST_HEADER *v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 *v19; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v20; // [rsp+30h] [rbp-D0h]
  _QWORD v21[4]; // [rsp+38h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v23[22]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v24[26]; // [rsp+120h] [rbp+20h] BYREF

  memset(v23, 0, sizeof(v23));
  memset(v24, 0, 0xC8uLL);
  v23[4] = a1;
  LODWORD(v23[0]) = 2183;
  v23[5] = (a2 << 12) + a1 - 1;
  LODWORD(v24[24]) = a3;
  LODWORD(v24[0]) = 0;
  WORD2(v24[0]) = 0;
  v24[2] = 0LL;
  v24[3] = 0LL;
  v23[19] = MiDeleteNonPagedPoolPte;
  v23[20] = MiDeleteNonPagedPoolTail;
  v23[21] = v24;
  v24[1] = 20LL;
  v23[3] = &unk_1403CCC10;
  BYTE4(v23[0]) = MiLockWorkingSetShared((__int64)&unk_1403CCC10);
  MiWalkPageTables((int *)v23);
  MiUnlockWorkingSetShared((__int64)&unk_1403CCC10, BYTE4(v23[0]), v6);
  v7 = (unsigned __int64 *)v24[23];
  if ( v24[23] )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      MiLogNonPagedPoolReleaseEvent(v24[23]);
      v7 = (unsigned __int64 *)v24[23];
    }
    memset(v21, 0, sizeof(v21));
    v8 = 0LL;
    v20 = v7[5] >> 58;
    v9 = 0LL;
    v10 = 0LL;
    v19 = 0LL;
    do
    {
      v11 = *v7;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v13 = (volatile signed __int32 *)(v7 + 3);
      LODWORD(v18) = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 6, 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v18);
          while ( *(__int64 *)v13 < 0 );
        }
        while ( _interlockedbittestandset64(v13, 0x3FuLL) );
        v8 = v19;
      }
      *(_QWORD *)v13 &= 0xC000000000000000uLL;
      v14 = (*((_BYTE *)v7 + 35) & 0x10) == 0;
      *((_WORD *)v7 + 16) = 0;
      if ( v14 )
      {
        MiInsertPageInFreeOrZeroedList((__int64)(v7 + 0xB000000000LL) / 48, 2);
        ++v21[0];
        ++v21[3];
        v8 = v19;
      }
      else
      {
        v15 = *((_BYTE *)v7 + 34);
        ++v9;
        *v7 = (unsigned __int64)v10;
        v7[1] = -8LL;
        *((_BYTE *)v7 + 34) = v15 & 0xF8 | 5;
        v10 = v7;
        if ( v8 )
          v7 = v8;
        v8 = v7;
        v19 = v7;
      }
      _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v7 = (unsigned __int64 *)v11;
    }
    while ( v11 );
    v18 = (unsigned __int64)v10;
    if ( v9 )
    {
      v16 = &qword_1403CB6A8[25 * (unsigned __int16)v20];
      KeAcquireInStackQueuedSpinLock(&v16[19].Alignment, &LockHandle);
      *v19 = v16[19].Region;
      v17 = v18;
      v16[18].Region += v9;
      v16[19].Region = v17;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    MiReturnPoolCharges(v21, 0LL);
  }
}
