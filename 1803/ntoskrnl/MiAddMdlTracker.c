/*
 * XREFs of MiAddMdlTracker @ 0x1402539C4
 * Callers:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x140138D4C (MiProbeAndLockComplete.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1400AE6F0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     RtlCaptureStackBackTrace @ 0x140130B00 (RtlCaptureStackBackTrace.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiGetInstructionPointer @ 0x140252580 (MiGetInstructionPointer.c)
 */

void __fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  PEPROCESS v3; // r14
  bool v4; // bl
  __int64 v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rdx
  char v12; // al
  ULONG_PTR v13; // rax
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  ULONG BackTraceHash; // [rsp+80h] [rbp+8h] BYREF

  v3 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  v4 = 0;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  v8 = *(_QWORD *)&v3[1].ThreadSeed[6];
  if ( !v8 || !*(_DWORD *)(v8 + 32) )
    return;
  v9 = ExAllocateFromNPagedLookasideList(&stru_1403CC140);
  v10 = v9;
  if ( !v9 )
  {
    *(_DWORD *)(v8 + 32) = 0;
    return;
  }
  v9[3] = BugCheckParameter3;
  v9[5] = a2;
  v9[4] = *(_QWORD *)(BugCheckParameter3 + 32);
  *((_DWORD *)v9 + 12) = *(_DWORD *)(BugCheckParameter3 + 44);
  *((_DWORD *)v9 + 13) = *(_DWORD *)(BugCheckParameter3 + 40);
  v9[8] = *(_QWORD *)(BugCheckParameter3 + 48);
  MetroHash64::Hash((const unsigned __int8 *)(BugCheckParameter3 + 48), 8 * a2, (unsigned __int8 *const)&BackTraceHash);
  *((_DWORD *)v10 + 15) = BackTraceHash;
  memset(v10 + 9, 0, 0x40uLL);
  if ( !RtlCaptureStackBackTrace(0, 8u, (PVOID *)v10 + 9, &BackTraceHash) )
  {
    v10[10] = retaddr;
    v10[9] = MiGetInstructionPointer();
  }
  *((_DWORD *)v10 + 14) = a3;
  v10[17] = v3;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 24), &LockHandle);
  v11 = *(_QWORD **)v8;
  v12 = 0;
  if ( !*(_QWORD *)v8 )
    goto LABEL_19;
  while ( 1 )
  {
    v13 = v11[3];
    if ( BugCheckParameter3 < v13 )
    {
      v14 = (_QWORD *)*v11;
      if ( !*v11 )
        goto LABEL_14;
      goto LABEL_17;
    }
    if ( BugCheckParameter3 <= v13 )
      break;
    v14 = (_QWORD *)v11[1];
    if ( !v14 )
    {
      v4 = 1;
      goto LABEL_14;
    }
LABEL_17:
    v11 = v14;
  }
  v12 = 1;
LABEL_19:
  if ( v12 )
    KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v11, BugCheckParameter3, *(_QWORD *)(v8 + 16));
LABEL_14:
  RtlAvlInsertNodeEx((unsigned __int64 *)v8, (unsigned __int64)v11, v4, v10);
  *(_QWORD *)(v8 + 16) += a2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
}
