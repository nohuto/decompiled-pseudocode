/*
 * XREFs of MiAddMdlTracker @ 0x140215AE4
 * Callers:
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x1401002BC (MiProbeAndLockComplete.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14001509C (ExAllocateFromNPagedLookasideList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiGetInstructionPointer @ 0x1402143AC (MiGetInstructionPointer.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14025D7A4 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

void __fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  PEPROCESS v3; // r14
  bool v4; // bl
  __int64 v8; // rdi
  _QWORD *v9; // rax
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rdx
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
  if ( v8 && *(_DWORD *)(v8 + 32) )
  {
    v9 = ExAllocateFromNPagedLookasideList(&stru_140388E80);
    v11 = (unsigned __int64)v9;
    if ( v9 )
    {
      v9[3] = BugCheckParameter3;
      v9[5] = a2;
      v9[4] = *(_QWORD *)(BugCheckParameter3 + 32);
      *((_DWORD *)v9 + 12) = *(_DWORD *)(BugCheckParameter3 + 44);
      *((_DWORD *)v9 + 13) = *(_DWORD *)(BugCheckParameter3 + 40);
      v9[8] = *(_QWORD *)(BugCheckParameter3 + 48);
      MetroHash64::Hash(
        (const unsigned __int8 *)(BugCheckParameter3 + 48),
        8 * a2,
        (unsigned __int8 *const)&BackTraceHash,
        v10);
      *(_DWORD *)(v11 + 60) = BackTraceHash;
      memset((void *)(v11 + 72), 0, 0x40uLL);
      if ( !RtlCaptureStackBackTrace(0, 8u, (PVOID *)(v11 + 72), &BackTraceHash) )
      {
        *(_QWORD *)(v11 + 80) = retaddr;
        *(_QWORD *)(v11 + 72) = MiGetInstructionPointer();
      }
      *(_DWORD *)(v11 + 56) = a3;
      *(_QWORD *)(v11 + 136) = v3;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 24), &LockHandle);
      v12 = *(_QWORD **)v8;
      if ( *(_QWORD *)v8 )
      {
        while ( 1 )
        {
          v13 = v12[3];
          if ( BugCheckParameter3 < v13 )
          {
            v14 = (_QWORD *)*v12;
            if ( !*v12 )
              break;
          }
          else
          {
            if ( BugCheckParameter3 <= v13 )
              KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v12, BugCheckParameter3, *(_QWORD *)(v8 + 16));
            v14 = (_QWORD *)v12[1];
            if ( !v14 )
            {
              v4 = 1;
              break;
            }
          }
          v12 = v14;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)v8, (unsigned __int64)v12, v4, v11);
      *(_QWORD *)(v8 + 16) += a2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
    else
    {
      *(_DWORD *)(v8 + 32) = 0;
    }
  }
}
