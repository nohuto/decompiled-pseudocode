/*
 * XREFs of ObpPushRefDerefInfo @ 0x14075ACC4
 * Callers:
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ObpPushStackInfoQueue @ 0x14075AE50 (ObpPushStackInfoQueue.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     ObpGetObjectRefInfo @ 0x14075A7C0 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x14075A8DC (ObpGetTraceIndex.c)
 *     ObpRefillWorkItemFreeList @ 0x14075AED4 (ObpRefillWorkItemFreeList.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 TraceIndex; // r9
  unsigned __int16 *v14; // rdi
  unsigned __int16 i; // dx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int16 *v20; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    if ( (int)ObpGetObjectRefInfo(a1, &v20) >= 0 )
    {
      v14 = v20;
      if ( v20 )
      {
        TraceIndex = (unsigned __int16)ObpGetTraceIndex(Source2);
        if ( (unsigned __int16)TraceIndex >= 0x3FFDu )
        {
          DbgPrintEx(0, 1u, "ObpPushRefDerefInfo - ObpStackTable overflow\n");
        }
        else
        {
          for ( i = v14[16]; i; *(_DWORD *)&v14[2 * v16 + 22] = *(_DWORD *)&v14[6 * i-- + 16] )
          {
            v12 = 3LL * i;
            if ( a4 >= *(_DWORD *)&v14[6 * i + 12] )
              break;
            v16 = 3LL * i;
            *(_QWORD *)&v14[2 * v16 + 18] = *(_QWORD *)&v14[6 * i + 12];
          }
          v17 = i;
          v18 = 3LL * i;
          v14[2 * v18 + 20] = TraceIndex | (a2 != 0 ? 0x8000 : 0);
          v14[2 * v18 + 21] = a3;
          *(_DWORD *)&v14[6 * v17 + 18] = a4;
          *(_DWORD *)&v14[2 * v18 + 22] = a6;
          v11 = 1LL;
          ++v14[16];
        }
      }
    }
    if ( LOWORD(ObpWorkItemFreeList.Alignment) < 0x64u )
      ObpRefillWorkItemFreeList();
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock, v11, v12, TraceIndex);
  KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
