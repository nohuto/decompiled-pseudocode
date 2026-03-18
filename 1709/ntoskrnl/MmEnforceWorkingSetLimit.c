/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x1400D46B0
 * Callers:
 *     PspSetQuotaLimits @ 0x140449BF0 (PspSetQuotaLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14050D218 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1407173F8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1407174BC (PspApplyWorkingSetLimits.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *a1, char a2)
{
  char v2; // al
  __int64 v3; // r14
  int v4; // r12d
  unsigned int v5; // r15d
  int v6; // esi
  char v7; // di
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // r13
  char v11; // cl
  char v12; // al
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-60h]
  char v16; // [rsp+24h] [rbp-5Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v18; // [rsp+48h] [rbp-38h] BYREF

  v2 = 0;
  v3 = (__int64)&a1[1].IdealNode[12];
  v4 = 0;
  v16 = 0;
  v5 = 0;
  v6 = 0;
  v7 = a2;
  if ( (a2 & 4) != 0 )
  {
    v7 = a2 & 0xF7;
    v2 = 0x80;
    v16 = 0x80;
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~2u;
    v16 = v2 | 0x40;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v4 = 1;
    KiStackAttachProcess(a1, 0, (__int64)&v18);
  }
  SharedVm = MiGetSharedVm(v3);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_140389240;
  v10 = v9;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140389240);
  v11 = *(_DWORD *)(v3 + 192);
  v15 = *(_DWORD *)(v3 + 192);
  if ( (v7 & 8) != 0 )
  {
    v11 &= ~0x80u;
    v6 = 1;
    LOBYTE(v15) = v11;
  }
  if ( (v7 & 2) != 0 )
  {
    v11 &= ~0x40u;
    v6 = 1;
    LOBYTE(v15) = v11;
  }
  v12 = v16;
  if ( v11 < 0 )
    v12 = v16 | 0x80;
  if ( (v11 & 0x40) != 0 )
    v12 |= 0x40u;
  if ( v12 < 0 && (v12 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v3 + 112) + 6LL) >= *(_QWORD *)(v3 + 152) )
  {
    v7 = -6;
    v5 = -1073741748;
  }
  if ( (v7 & 4) != 0 )
  {
    v11 |= 0x80u;
    v6 = 1;
    LOBYTE(v15) = v11;
  }
  if ( (v7 & 1) != 0 )
  {
    v6 = 1;
    LOBYTE(v15) = v11 | 0x40;
  }
  if ( v6 )
    *(_WORD *)(v3 + 192) = v15;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  LOBYTE(v13) = v10;
  MiUnlockWorkingSetExclusive(v3, v13);
  if ( v4 )
    KiUnstackDetachProcess(&v18, 0LL);
  return v5;
}
