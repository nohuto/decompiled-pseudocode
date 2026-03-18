/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x14001BAA0
 * Callers:
 *     ExSetResourceOwnerPointerEx @ 0x14001BA80 (ExSetResourceOwnerPointerEx.c)
 *     ExSetResourceOwnerPointer @ 0x1401469F0 (ExSetResourceOwnerPointer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpFindCurrentThread @ 0x1400909C0 (ExpFindCurrentThread.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1400EF440 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1402560C4 (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

void __fastcall ExpSetResourceOwnerPointerEx(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter4, char a3)
{
  bool v6; // di
  ULONG_PTR CurrentThread; // rsi
  unsigned __int64 *v8; // rcx
  unsigned int v9; // r13d
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rbp
  int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // r14
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v21; // [rsp+80h] [rbp+8h] BYREF

  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v8 = (unsigned __int64 *)(BugCheckParameter1 + 96);
  v21 = 2;
  LockHandle.LockQueue.Next = 0LL;
  v9 = 65792;
  LockHandle.LockQueue.Lock = v8;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v10 = KiFastAcquireQueuedSpinLockInstrumented(&LockHandle, v8, &v21);
  }
  else
  {
    v10 = 0;
    v11 = _InterlockedExchange64((volatile __int64 *)v8, (__int64)&LockHandle);
    if ( v11 )
    {
      KxWaitForLockOwnerShipWithIrql(&LockHandle, v11, &v21);
      v10 = 1;
    }
  }
  if ( v10 )
  {
    _disable();
    __writecr8(v21);
  }
  if ( *(char *)(BugCheckParameter1 + 26) < 0 )
  {
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1)
      && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
    {
      KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
    }
    if ( (a3 & 1) != 0 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
      *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 1) != 0 )
      {
        LOBYTE(v17) = 1;
        PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), v17, 0LL, 0LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      }
      if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter1 + 48) + 1796LL));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
    __incgsdword(0x6514u);
    if ( v6 )
      v9 = 65824;
  }
  else
  {
    v12 = ExpFindCurrentThread(BugCheckParameter1, BugCheckParameter4, (unsigned int)&LockHandle, 0, 0, 0);
    if ( (CurrentThread & 3) != 0 )
      v13 = 0;
    else
      v13 = *(unsigned __int8 *)(CurrentThread + 649);
    v14 = (_QWORD *)ExpFindCurrentThread(BugCheckParameter1, CurrentThread, (unsigned int)&LockHandle, 0, 0, v13);
    v16 = v14;
    if ( !v14 )
      KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 4uLL);
    if ( v12 )
    {
      if ( (a3 & 1) != 0 )
      {
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        if ( (v14[1] & 1) != 0 )
        {
          v18 = *(_DWORD *)(v12 + 8);
          if ( (v18 & 1) != 0 )
          {
            LOBYTE(v15) = 1;
            PsBoostThreadIoEx(*(_QWORD *)v16, v15, 0LL, 0LL);
          }
          else
          {
            *(_DWORD *)(v12 + 8) = v18 | 1;
          }
          v16[2] &= ~1u;
        }
        if ( (v16[2] & 4) != 0 )
        {
          v19 = *(_DWORD *)(v12 + 8);
          if ( (v19 & 4) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v16 + 1796LL));
          else
            *(_DWORD *)(v12 + 8) = v19 | 4;
          v16[2] &= ~4u;
        }
        if ( (*(_DWORD *)(v12 + 8) & 2) == 0 )
        {
          ObfReferenceObjectWithTag(*(PVOID *)v16, 0x746C6644u);
          *(_DWORD *)(v12 + 8) |= 2u;
        }
      }
      else
      {
        if ( (v14[1] & 1) != 0 )
        {
          LOBYTE(v15) = 1;
          PsBoostThreadIoEx(*v14, v15, 0LL, 0LL);
          v16[2] &= ~1u;
        }
        if ( (v16[2] & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v16 + 1796LL));
          v16[2] &= ~4u;
        }
      }
      *(_DWORD *)(v12 + 8) += v16[2] & 0xFFFFFFF8;
      v16[2] &= 7u;
      *(_QWORD *)v16 = 0LL;
      --*(_DWORD *)(BugCheckParameter1 + 64);
      __incgsdword(0x651Cu);
    }
    else
    {
      if ( (a3 & 1) != 0 )
      {
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
        v16[2] |= 2u;
      }
      else
      {
        if ( (v14[1] & 1) != 0 )
        {
          LOBYTE(v15) = 1;
          PsBoostThreadIoEx(*v14, v15, 0LL, 0LL);
          v16[2] &= ~1u;
        }
        if ( (v16[2] & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)v16 + 1796LL));
          v16[2] &= ~4u;
        }
      }
      *(_QWORD *)v16 = BugCheckParameter4;
      __incgsdword(0x6518u);
    }
    if ( v6 )
      v9 = 65856;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  _enable();
  if ( v6 )
    PerfLogExecutiveResourceSetOwnerPointer(v9, BugCheckParameter1);
}
