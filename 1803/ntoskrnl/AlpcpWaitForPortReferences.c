/*
 * XREFs of AlpcpWaitForPortReferences @ 0x140551EEC
 * Callers:
 *     NtAlpcQueryInformation @ 0x140551C40 (NtAlpcQueryInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 */

__int64 __fastcall AlpcpWaitForPortReferences(__int64 a1, int *a2, int a3, _DWORD *a4, char a5)
{
  __int64 v6; // rax
  volatile signed __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-10h]

  if ( !a1 || a3 != 4 )
    return 3221225485LL;
  if ( a5 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    v14 = *(_DWORD *)v6;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    v14 = *a2;
    if ( a4 )
      *a4 = 0;
  }
  if ( *(_DWORD *)(a1 + 404) == v14 )
    return 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 408) )
  {
    v12 = -1073741811;
  }
  else if ( *(_DWORD *)(a1 + 404) == v14 )
  {
    v12 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 408) = &Event;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352), v9, v10, v11);
    KeAbPostRelease(a1 + 352);
    while ( 1 )
    {
      v12 = KeWaitForSingleObject(&Event, WrUserRequest, 0, 1u, 0LL);
      if ( !v12 )
        break;
      if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      {
        v12 = -1073741749;
        break;
      }
    }
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352), v9, v10, v11);
  KeAbPostRelease(a1 + 352);
  return v12;
}
