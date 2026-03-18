/*
 * XREFs of KiSignalThread @ 0x1400621E0
 * Callers:
 *     KiWakeOtherQueueWaiters @ 0x140061290 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140061410 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140062020 (KiTryUnwaitThreadWithPriority.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     KeAlertThreadByThreadId @ 0x1400893F0 (KeAlertThreadByThreadId.c)
 *     KiResumeThread @ 0x1400AA1FC (KiResumeThread.c)
 *     KiSignalThreadForApc @ 0x1400AB2FC (KiSignalThreadForApc.c)
 *     KeAlertThread @ 0x1400AB690 (KeAlertThread.c)
 *     KiSuspendThread @ 0x1400ABB8C (KiSuspendThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 */

char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // dl
  char result; // al
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rdx
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
        if ( *(_QWORD *)(v12 + 8) != a2 + 216 || (v13 = *(_QWORD **)(a2 + 224), *v13 != a2 + 216) )
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
