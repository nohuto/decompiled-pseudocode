/*
 * XREFs of RtlRegisterWait @ 0x180012DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012CB0 @ 0x180012CB0 (sub_180012CB0.c)
 *     sub_180012D28 @ 0x180012D28 (sub_180012D28.c)
 *     sub_180012FFC @ 0x180012FFC (sub_180012FFC.c)
 *     TpAllocWait @ 0x180013DF0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

NTSTATUS __cdecl RtlRegisterWait(
        PHANDLE WaitHandle,
        HANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG Milliseconds,
        ULONG Flags)
{
  int v8; // edi
  char *Heap; // rax
  HANDLE *v10; // rbx
  PTP_WAIT *v11; // r12
  DWORD v12; // eax
  char v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+24h] [rbp-94h]
  PVOID BaseAddress; // [rsp+28h] [rbp-90h]
  HANDLE TokenHandle; // [rsp+30h] [rbp-88h] BYREF
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+40h] [rbp-78h] BYREF

  v14 = 0;
  TokenHandle = 0LL;
  BaseAddress = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return -1073741823;
  if ( (char *)Handle - 1 > (char *)0xFFFFFFFFFFFFFFFCLL || !Function )
    return -1073741811;
  *WaitHandle = 0LL;
  v8 = sub_180012CB0(&TokenHandle, Flags & 0x100);
  v15 = v8;
  if ( v8 < 0 )
  {
    v10 = 0LL;
  }
  else
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v10 = (HANDLE *)Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      v11 = (PTP_WAIT *)(Heap + 48);
      *((_QWORD *)Heap + 6) = 0LL;
      v8 = sub_180012D28((HANDLE *)Heap, Flags, TokenHandle);
      v15 = v8;
      if ( v8 >= 0 )
      {
        v14 = 1;
        v10[2] = 0LL;
        *((_DWORD *)v10 + 6) = 0;
        v10[4] = Function;
        v10[5] = Context;
        v10[7] = Handle;
        if ( Milliseconds == -1 )
        {
          v10[8] = 0LL;
          v10[9] = 0LL;
        }
        else
        {
          v10[8] = (HANDLE)Milliseconds;
          v10[8] = (HANDLE)(-10000LL * Milliseconds);
          v10[9] = v10 + 8;
        }
        v10[10] = 0LL;
        *((_DWORD *)v10 + 22) = 0;
        CallbackEnviron.Version = 3;
        memset(&CallbackEnviron.Pool, 0, 52);
        CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
        CallbackEnviron.Size = 72;
        v12 = 0;
        if ( (Flags & 0xC4) != 0 )
          v12 = 2;
        CallbackEnviron.u.Flags = v12;
        if ( (Flags & 0x10) != 0 )
          CallbackEnviron.u.Flags = v12 | 1;
        CallbackEnviron.FinalizationCallback = (PTP_SIMPLE_CALLBACK)sub_180010200;
        v8 = TpAllocWait(v11, sub_1800132E0, v10, &CallbackEnviron);
        v15 = v8;
        if ( v8 >= 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v10 + 2);
          *WaitHandle = v10;
          TpSetWaitEx(*v11, Handle, (PLARGE_INTEGER)v10[9], 0LL);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v10 + 2);
          v10 = 0LL;
          BaseAddress = 0LL;
          v8 = 0;
          v15 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741801;
      v15 = -1073741801;
    }
  }
  if ( v10 )
  {
    if ( v14 )
    {
      if ( *v10 )
        ZwClose(*v10);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v8 = v15;
  }
  sub_180012FFC(TokenHandle);
  return v8;
}
