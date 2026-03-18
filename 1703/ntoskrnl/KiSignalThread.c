/*
 * XREFs of KiSignalThread @ 0x1400E2F70
 * Callers:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KeAlertThreadByThreadId @ 0x140018540 (KeAlertThreadByThreadId.c)
 *     KiSignalThreadForApc @ 0x14003FFA4 (KiSignalThreadForApc.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     KiSuspendThread @ 0x14007301C (KiSuspendThread.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400FD8B0 (KiTryUnwaitThreadWithPriority.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 *     KeAlertThread @ 0x1401201B0 (KeAlertThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  char result; // al
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a2 + 112);
  result = 0;
  v9 = v6 & 7;
  if ( v9 == 1 || v9 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    if ( v10 )
    {
      if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
      {
        *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 4LL * *(unsigned int *)(a2 + 540) + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
      }
    }
    v11 = *(_QWORD *)(a2 + 712);
    if ( v11 )
    {
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 22800), 0LL) )
      {
        do
          KeYieldProcessorEx(&v14);
        while ( *(_QWORD *)(v11 + 22800) );
      }
      if ( *(_QWORD *)(a2 + 712) )
      {
        v12 = *(_QWORD *)(a2 + 216);
        v13 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v12 + 8) != a2 + 216 || *v13 != a2 + 216 )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 22800), 0LL);
    }
    *(_BYTE *)(a2 + 388) = 7;
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = a2 + 216;
    *(_QWORD *)(a2 + 200) = a3;
    return 1;
  }
  if ( a4 )
  {
    if ( (v6 & 7) == 0 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 2;
      *(_QWORD *)(a2 + 200) = a3;
      *(_BYTE *)(a4 + 17) = 0;
      return 1;
    }
    if ( v9 == 5 )
    {
      *(_BYTE *)(a2 + 112) = v6 & 0xF8 | 6;
    }
    else if ( v9 == 3 )
    {
      *(_BYTE *)(a4 + 17) = 2;
    }
  }
  return result;
}
