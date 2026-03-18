/*
 * XREFs of MiZeroNodePages @ 0x1401585A0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x140029540 (KeFindFirstSetLeftGroupAffinity.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeQueryNodeActiveAffinity @ 0x140080330 (KeQueryNodeActiveAffinity.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiCreateZeroThreadContext @ 0x14015892C (MiCreateZeroThreadContext.c)
 *     RtlSetAllBitsEx @ 0x140158BD0 (RtlSetAllBitsEx.c)
 *     MiDeleteZeroThreadContext @ 0x14015C1E0 (MiDeleteZeroThreadContext.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 */

void __fastcall MiZeroNodePages(char *P)
{
  unsigned int v1; // edx
  void *v3; // r12
  char v4; // cl
  unsigned __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  USHORT v13; // cx
  unsigned int LogicalProcessorsPerCore; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // eax
  PVOID v18; // rax
  int v19; // r14d
  unsigned __int64 Mask; // r13
  _DWORD *ZeroThreadContext; // r15
  unsigned int v22; // edx
  PVOID *v23; // rdi
  __int64 v24; // rsi
  int v25; // edi
  int v26; // ecx
  int v27; // eax
  struct _GROUP_AFFINITY v28; // [rsp+50h] [rbp-19h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-9h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+7h] BYREF
  USHORT Count; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+6Fh] BYREF

  v3 = 0LL;
  LODWORD(Handle) = *((_DWORD *)P + 10);
  v1 = (unsigned int)Handle;
  *((_QWORD *)P + 3) = 0LL;
  v4 = byte_14036C1B9;
  v5 = *((_QWORD *)P + 4);
  *((_QWORD *)P + 4) = 0LL;
  v6 = v1 << v4;
  v7 = *((_QWORD *)P + 17);
  *((_DWORD *)P + 10) = v6;
  v8 = (v5 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  *((_QWORD *)P + 22) = P + 168;
  *((_QWORD *)P + 21) = P + 168;
  *((_QWORD *)P + 17) = v7 + ((v5 * v1) << 30);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (v8 >> 6) + 16, 0x20206D4Du);
  v10 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = v8;
    PoolWithTag[1] = PoolWithTag + 2;
    RtlSetAllBitsEx(PoolWithTag);
    if ( v5 != v8 )
      RtlClearBitsEx(v10, v5, v8 - v5);
    *((_QWORD *)P + 19) = v10;
    v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (((v5 + 63) & 0xFFFFFFFFFFFFFFC0uLL) >> 6) + 16, 0x20206D4Du);
    v12 = v11;
    if ( v11 )
    {
      *v11 = v8;
      v11[1] = v11 + 2;
      memset(v11 + 2, 0, 4 * (v8 >> 5));
      v13 = (unsigned __int16)Handle;
      *((_QWORD *)P + 20) = v12;
      KeQueryNodeActiveAffinity(v13, &Affinity, &Count);
      LogicalProcessorsPerCore = KeGetCurrentPrcb()->LogicalProcessorsPerCore;
      v15 = Count;
      *(_WORD *)P = 263;
      P[2] = 6;
      v16 = v15 / LogicalProcessorsPerCore;
      if ( !(v15 / LogicalProcessorsPerCore) )
        v16 = 1;
      if ( v16 >= (unsigned int)v5 )
        v16 = v5;
      *((_DWORD *)P + 1) = 0;
      *((_QWORD *)P + 2) = P + 8;
      *((_QWORD *)P + 1) = P + 8;
      *((_DWORD *)P + 11) = v16;
      *((_DWORD *)P + 20) = 0;
      *((_DWORD *)P + 27) = 4;
      v17 = *((_DWORD *)P + 27);
      if ( v16 - 1 < 4 )
        v17 = v16 - 1;
      *((_DWORD *)P + 21) = v16;
      *((_DWORD *)P + 27) = v17;
      *((_DWORD *)P + 26) = v16;
      *((_DWORD *)P + 28) = v16;
      *((_DWORD *)P + 15) = 0;
      *((_WORD *)P + 28) = 0;
      P[58] = 6;
      *((_QWORD *)P + 9) = P + 64;
      *((_QWORD *)P + 8) = P + 64;
      v18 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v16, 0x20206D4Du);
      v3 = v18;
      if ( v18 )
        memset(v18, 0, 16LL * v16);
      else
        v16 = 0;
      v19 = 0;
      *((_QWORD *)P + 11) = v3;
      if ( v16 )
      {
        Mask = Affinity.Mask;
        while ( 1 )
        {
          ZeroThreadContext = (_DWORD *)MiCreateZeroThreadContext(&MiSystemPartition, P, 1LL);
          if ( !ZeroThreadContext )
            break;
          v28 = Affinity;
          if ( Mask )
          {
            v22 = KiProcessorIndexToNumberMappingTable[(unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)&Affinity)];
            *(_QWORD *)&v28.Group = (unsigned __int16)(v22 >> 6);
            *((_QWORD *)P + 4) |= 1LL << (v22 & 0x3F);
            v28.Mask = 1LL << (v22 & 0x3F);
            Mask &= ~v28.Mask;
            Affinity.Mask = Mask;
          }
          ZeroThreadContext[38] = v19;
          if ( (int)PsCreateSystemThreadEx(
                      (unsigned int)&Handle,
                      0x1FFFFF,
                      0,
                      0,
                      0LL,
                      (__int64)MiZeroLargePageThread,
                      (__int64)ZeroThreadContext,
                      (__int64)&v28,
                      0LL) < 0 )
          {
            v25 = v16 - v19;
            MiDeleteZeroThreadContext(ZeroThreadContext);
            ExFreePoolWithTag(ZeroThreadContext, 0);
            goto LABEL_33;
          }
          ObCloseHandle(Handle, 0);
          if ( ++v19 >= v16 )
            goto LABEL_20;
        }
        v25 = v16 - v19;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 11, -v25) == v25 )
          KeSignalGate((__int64)P, 1);
LABEL_33:
        if ( v25 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)P + 3, &LockHandle);
          *((_DWORD *)P + 30) += v25;
          v26 = *((_DWORD *)P + 29);
          v27 = v26 + *((_DWORD *)P + 30);
          *((_DWORD *)P + 20) = 4;
          if ( v27 == *((_DWORD *)P + 28) && v26 )
            KeSetEvent((PRKEVENT)(P + 56), 0, 0);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
        }
LABEL_20:
        if ( v19 )
          KeWaitForGate((__int64)P, 0);
      }
    }
  }
  if ( _InterlockedExchangeAdd(&dword_140381600, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)&word_140381608, 1);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v23 = (PVOID *)(P + 152);
  v24 = 2LL;
  do
  {
    if ( *((_QWORD *)*v23 + 1) )
    {
      ExFreePoolWithTag(*v23, 0);
      *v23 = 0LL;
    }
    ++v23;
    --v24;
  }
  while ( v24 );
  ExFreePoolWithTag(P, 0);
}
