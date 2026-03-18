/*
 * XREFs of PopFxCompleteComponentActivation @ 0x140069C9C
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140068FE0 (PopFxActivateComponentWorker.c)
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PopFxIdleWorkerTail @ 0x140069A78 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxIdleComponent @ 0x140069D5C (PopFxIdleComponent.c)
 *     PopPluginComponentActive @ 0x14006A38C (PopPluginComponentActive.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

void __fastcall PopFxCompleteComponentActivation(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 i; // rsi
  __int64 v7; // rax
  bool v8; // r14
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v11; // r15
  KIRQL v12; // al
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // r8
  KIRQL v16; // [rsp+60h] [rbp+18h]

  _InterlockedOr((volatile signed __int32 *)(a2 + 88), 0x80000000);
  KeSetEvent((PRKEVENT)(a2 + 104), 0, 0);
  if ( a3 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 188); i = (unsigned int)(i + 1) )
    {
      v7 = *(_QWORD *)(a2 + 192);
      v8 = 0;
      v9 = *(unsigned int *)(v7 + 8 * i);
      v10 = *(unsigned int *)(v7 + 8 * i + 4);
      v11 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 632) + 8 * v9);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 128));
      v13 = *(_QWORD *)(v11 + 176);
      v16 = v12;
      if ( *(_BYTE *)(v13 + 8 * v10 + 4) == 1 )
      {
        *(_BYTE *)(v13 + 8 * v10 + 4) = 0;
        v14 = (*(_DWORD *)(v11 + 184))-- == 1;
        v8 = v14;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 128));
      __writecr8(v16);
      if ( v8 )
      {
        LOBYTE(v15) = 1;
        PopPluginComponentActive(BugCheckParameter2, (unsigned int)v9, v15, 0LL);
      }
    }
  }
  PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(a2 + 16));
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 216), 0LL, 0x20u);
}
