/*
 * XREFs of ObpPushRefDerefInfo @ 0x1406C2E54
 * Callers:
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     ObpPushStackInfoQueue @ 0x1406C2FF0 (ObpPushStackInfoQueue.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ObpGetObjectRefInfo @ 0x1406C2974 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x1406C2A8C (ObpGetTraceIndex.c)
 *     ObpRefillWorkItemFreeList @ 0x1406C3074 (ObpRefillWorkItemFreeList.c)
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
  unsigned __int16 TraceIndex; // r10
  unsigned __int16 i; // dx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // xmm0_8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int16 *v21; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    if ( (int)ObpGetObjectRefInfo(a1, &v21) >= 0 )
    {
      v11 = v21;
      if ( v21 )
      {
        TraceIndex = ObpGetTraceIndex(Source2);
        if ( TraceIndex >= 0x3FFDu )
        {
          DbgPrintEx(0, 1u, "ObpPushRefDerefInfo - ObpStackTable overflow\n");
        }
        else
        {
          for ( i = v11[16]; i; --i )
          {
            v14 = i - 1 + 3LL;
            v15 = 3 * v14;
            if ( a4 >= *(_DWORD *)&v11[6 * v14] )
              break;
            v16 = *(_QWORD *)&v11[6 * v14];
            v17 = 3 * (i + 3LL);
            *(_QWORD *)&v11[2 * v17] = v16;
            *(_DWORD *)&v11[2 * v17 + 4] = *(_DWORD *)&v11[2 * v15 + 4];
          }
          v18 = i;
          v19 = 3LL * i;
          v11[2 * v19 + 20] = TraceIndex | (a2 != 0 ? 0x8000 : 0);
          v11[2 * v19 + 21] = a3;
          *(_DWORD *)&v11[6 * v18 + 18] = a4;
          *(_DWORD *)&v11[2 * v19 + 22] = a6;
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
