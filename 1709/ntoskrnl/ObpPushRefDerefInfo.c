/*
 * XREFs of ObpPushRefDerefInfo @ 0x1406F18D8
 * Callers:
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ObpPushStackInfoQueue @ 0x1406F1A60 (ObpPushStackInfoQueue.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     ObpGetObjectRefInfo @ 0x1406F13D4 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x1406F14F0 (ObpGetTraceIndex.c)
 *     ObpRefillWorkItemFreeList @ 0x1406F1AE4 (ObpRefillWorkItemFreeList.c)
 */

__int64 __fastcall ObpPushRefDerefInfo(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int16 *Source2,
        int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v11; // rdi
  unsigned __int16 TraceIndex; // r9
  unsigned __int16 i; // dx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int16 *v18; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    if ( (int)ObpGetObjectRefInfo(a1, &v18) >= 0 )
    {
      v11 = v18;
      if ( v18 )
      {
        TraceIndex = ObpGetTraceIndex(Source2);
        if ( TraceIndex >= 0x3FFDu )
        {
          DbgPrintEx(0, 1u, "ObpPushRefDerefInfo - ObpStackTable overflow\n");
        }
        else
        {
          for ( i = v11[16]; i; *(_DWORD *)&v11[2 * v14 + 22] = *(_DWORD *)&v11[6 * i-- + 16] )
          {
            if ( a4 >= *(_DWORD *)&v11[6 * i + 12] )
              break;
            v14 = 3LL * i;
            *(_QWORD *)&v11[2 * v14 + 18] = *(_QWORD *)&v11[6 * i + 12];
          }
          v15 = i;
          v16 = 3LL * i;
          v11[2 * v16 + 20] = TraceIndex | (a2 != 0 ? 0x8000 : 0);
          v11[2 * v16 + 21] = a3;
          *(_DWORD *)&v11[6 * v15 + 18] = a4;
          *(_DWORD *)&v11[2 * v16 + 22] = a6;
          ++v11[16];
        }
      }
    }
    if ( LOWORD(ObpWorkItemFreeList.Alignment) < 0x64u )
      ObpRefillWorkItemFreeList();
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
