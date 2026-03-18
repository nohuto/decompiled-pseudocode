/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x14011DB20
 * Callers:
 *     PspSetQuotaLimits @ 0x14044B53C (PspSetQuotaLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14054BB34 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1406E1118 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1406E11DC (PspApplyWorkingSetLimits.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
  unsigned __int8 v10; // r13
  char v11; // cl
  char v12; // al
  int v14; // [rsp+20h] [rbp-60h]
  char v15; // [rsp+24h] [rbp-5Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  $5BC46E0569261879018906DEC3127961 v17; // [rsp+48h] [rbp-38h] BYREF

  v2 = 0;
  v3 = (__int64)&a1[1].IdealNode[12];
  v4 = 0;
  v15 = 0;
  v5 = 0;
  v6 = 0;
  v7 = a2;
  if ( (a2 & 4) != 0 )
  {
    v7 = a2 & 0xF7;
    v2 = 0x80;
    v15 = 0x80;
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~2u;
    v15 = v2 | 0x40;
  }
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    v4 = 1;
    KiStackAttachProcess(a1, 0, (__int64)&v17);
  }
  SharedVm = MiGetSharedVm(v3);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_14036CF80;
  v10 = v9;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_14036CF80);
  v11 = *(_DWORD *)(v3 + 192);
  v14 = *(_DWORD *)(v3 + 192);
  if ( (v7 & 8) != 0 )
  {
    v11 &= ~0x80u;
    v6 = 1;
    LOBYTE(v14) = v11;
  }
  if ( (v7 & 2) != 0 )
  {
    v11 &= ~0x40u;
    v6 = 1;
    LOBYTE(v14) = v11;
  }
  v12 = v15;
  if ( v11 < 0 )
    v12 = v15 | 0x80;
  if ( (v11 & 0x40) != 0 )
    v12 |= 0x40u;
  if ( v12 < 0 && (v12 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v3 + 112) + 6LL) >= *(_QWORD *)(v3 + 152) )
  {
    v5 = -1073741748;
    v7 &= 0xFAu;
  }
  if ( (v7 & 4) != 0 )
  {
    v11 |= 0x80u;
    v6 = 1;
    LOBYTE(v14) = v11;
  }
  if ( (v7 & 1) != 0 )
  {
    v6 = 1;
    LOBYTE(v14) = v11 | 0x40;
  }
  if ( v6 )
    *(_WORD *)(v3 + 192) = v14;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockWorkingSetExclusive(v3, v10);
  if ( v4 )
    KiUnstackDetachProcess(&v17, 0LL);
  return v5;
}
