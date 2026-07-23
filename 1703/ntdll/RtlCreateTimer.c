/*
 * XREFs of RtlCreateTimer @ 0x180011110
 * Callers:
 *     RtlSetTimer @ 0x180105C90 (RtlSetTimer.c)
 * Callees:
 *     sub_180012CB0 @ 0x180012CB0 (sub_180012CB0.c)
 *     sub_180012D28 @ 0x180012D28 (sub_180012D28.c)
 *     sub_180012FFC @ 0x180012FFC (sub_180012FFC.c)
 *     TpAllocTimer @ 0x180013F90 (TpAllocTimer.c)
 *     TpSetTimerEx @ 0x180017510 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

NTSTATUS __cdecl RtlCreateTimer(
        HANDLE TimerQueueHandle,
        PHANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG DueTime,
        ULONG Period,
        ULONG Flags)
{
  int v10; // ebx
  char *Heap; // rax
  _QWORD *v12; // rdi
  PTP_TIMER *v13; // r15
  DWORD v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // r8
  void *v18; // rcx
  int v19; // [rsp+24h] [rbp-94h]
  _QWORD *BaseAddress; // [rsp+28h] [rbp-90h]
  HANDLE TokenHandle; // [rsp+30h] [rbp-88h] BYREF
  LARGE_INTEGER v22; // [rsp+38h] [rbp-80h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+40h] [rbp-78h] BYREF

  TokenHandle = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  *Handle = 0LL;
  v10 = sub_180012CB0(&TokenHandle);
  v19 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v12 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v13 = (PTP_TIMER *)(Heap + 64);
      *((_QWORD *)Heap + 8) = 0LL;
      *((_DWORD *)Heap + 23) = 0;
      v10 = sub_180012D28((PHANDLE)Heap + 2);
      v19 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v12[4] = Function;
      v12[5] = Context;
      *((_DWORD *)v12 + 12) = 0;
      *((_BYTE *)v12 + 88) = Period != 0;
      v12[7] = TimerQueueHandle;
      v12[9] = 0LL;
      v12[10] = 0LL;
      CallbackEnviron.Version = 3;
      memset(&CallbackEnviron.Pool, 0, 52);
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      v14 = 0;
      if ( (Flags & 0xE0) != 0 )
        v14 = 2;
      CallbackEnviron.u.Flags = v14;
      if ( (Flags & 0x10) != 0 )
        CallbackEnviron.u.Flags = v14 | 1;
      CallbackEnviron.FinalizationCallback = (PTP_SIMPLE_CALLBACK)sub_1800846E0;
      v10 = TpAllocTimer(v13, sub_180011380, v12, &CallbackEnviron);
      v19 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v22.QuadPart = -10000LL * DueTime;
      _InterlockedIncrement((volatile signed __int32 *)TimerQueueHandle);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      v15 = (char *)TimerQueueHandle + 24;
      v16 = *((_QWORD *)TimerQueueHandle + 3);
      if ( *(HANDLE *)(v16 + 8) != (char *)TimerQueueHandle + 24 )
        __fastfail(3u);
      *BaseAddress = v16;
      BaseAddress[1] = v15;
      *(_QWORD *)(v16 + 8) = BaseAddress;
      *v15 = BaseAddress;
      *Handle = BaseAddress;
      TpSetTimerEx(*v13, &v22, Period, 0);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      v12 = 0LL;
      BaseAddress = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v19 = v10;
  }
LABEL_16:
  if ( v12 )
  {
    v18 = (void *)v12[2];
    if ( v18 )
      ZwClose(v18);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v10 = v19;
  }
  sub_180012FFC(TokenHandle);
  return v10;
}
