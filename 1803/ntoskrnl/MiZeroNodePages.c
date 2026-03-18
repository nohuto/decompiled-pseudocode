/*
 * XREFs of MiZeroNodePages @ 0x14016FC80
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x1400C0780 (KeFindFirstSetLeftGroupAffinity.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiCreateZeroThreadContext @ 0x14016FEEC (MiCreateZeroThreadContext.c)
 *     MiDeleteZeroThreadContext @ 0x14017B574 (MiDeleteZeroThreadContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 */

void __fastcall MiZeroNodePages(char *P)
{
  int v2; // ecx
  unsigned int v3; // eax
  unsigned int LogicalProcessorsPerCore; // r8d
  unsigned int v5; // ebx
  unsigned int v6; // eax
  PVOID PoolWithTag; // rax
  void *v8; // r12
  int v9; // esi
  unsigned __int64 Mask; // r13
  _DWORD *ZeroThreadContext; // r15
  unsigned int v12; // edx
  int v13; // ebx
  int v14; // ecx
  int v15; // eax
  USHORT Count[8]; // [rsp+58h] [rbp-29h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+68h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-1h] BYREF
  struct _GROUP_AFFINITY v20; // [rsp+98h] [rbp+17h] BYREF

  *((_QWORD *)P + 3) = 0LL;
  v2 = *((_DWORD *)P + 12);
  *((_QWORD *)P + 5) = P + 32;
  *((_QWORD *)P + 4) = P + 32;
  KeQueryNodeActiveAffinity(v2, &Affinity, Count);
  v3 = Count[0];
  LogicalProcessorsPerCore = KeGetCurrentPrcb()->LogicalProcessorsPerCore;
  *(_WORD *)P = 263;
  P[2] = 6;
  v5 = v3 / LogicalProcessorsPerCore;
  if ( !(v3 / LogicalProcessorsPerCore) )
    v5 = 1;
  *((_DWORD *)P + 1) = 0;
  *((_QWORD *)P + 2) = P + 8;
  *((_QWORD *)P + 1) = P + 8;
  *((_DWORD *)P + 13) = v5;
  *((_DWORD *)P + 22) = 0;
  *((_DWORD *)P + 29) = 4;
  v6 = *((_DWORD *)P + 29);
  if ( v5 - 1 < 4 )
    v6 = v5 - 1;
  *((_DWORD *)P + 23) = v5;
  *((_DWORD *)P + 29) = v6;
  *((_DWORD *)P + 28) = v5;
  *((_DWORD *)P + 30) = v5;
  *((_WORD *)P + 32) = 0;
  *((_DWORD *)P + 17) = 0;
  P[66] = 6;
  *((_QWORD *)P + 10) = P + 72;
  *((_QWORD *)P + 9) = P + 72;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v5, 0x20206D4Du);
  v8 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 16LL * v5);
  else
    v5 = 0;
  v9 = 0;
  *((_QWORD *)P + 12) = v8;
  if ( v5 )
  {
    Mask = Affinity.Mask;
    while ( 1 )
    {
      ZeroThreadContext = (_DWORD *)MiCreateZeroThreadContext(P, 1LL);
      if ( !ZeroThreadContext )
        break;
      v20 = Affinity;
      if ( Mask )
      {
        v12 = KiProcessorIndexToNumberMappingTable[(unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)&Affinity)];
        *(_QWORD *)&v20.Group = (unsigned __int16)(v12 >> 6);
        v20.Mask = 1LL << (v12 & 0x3F);
        Mask &= ~v20.Mask;
        Affinity.Mask = Mask;
      }
      ZeroThreadContext[62] = v9;
      if ( (int)PsCreateSystemThreadEx(
                  &Handle,
                  0x1FFFFFLL,
                  0LL,
                  0LL,
                  0LL,
                  MiZeroLargePageThread,
                  ZeroThreadContext,
                  &v20,
                  0LL) < 0 )
      {
        v13 = v5 - v9;
        MiDeleteZeroThreadContext(ZeroThreadContext);
        ExFreePoolWithTag(ZeroThreadContext, 0);
        goto LABEL_23;
      }
      ObCloseHandle(Handle, 0);
      if ( ++v9 >= v5 )
        goto LABEL_14;
    }
    v13 = v5 - v9;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 13, -v13) == v13 )
      KeSignalGate((__int64)P, 1);
LABEL_23:
    if ( v13 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)P + 3, &LockHandle);
      *((_DWORD *)P + 32) += v13;
      v14 = *((_DWORD *)P + 31);
      v15 = v14 + *((_DWORD *)P + 32);
      *((_DWORD *)P + 22) = 4;
      if ( v15 == *((_DWORD *)P + 30) && v14 )
        KeSetEvent((PRKEVENT)(P + 64), 0, 0);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
LABEL_14:
    if ( v9 )
      KeWaitForGate((__int64)P, 0);
  }
  if ( _InterlockedExchangeAdd(&dword_1403CF800, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)&word_1403CF808, 1);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  ExFreePoolWithTag(P, 0);
}
