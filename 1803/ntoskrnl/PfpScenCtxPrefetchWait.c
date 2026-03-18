/*
 * XREFs of PfpScenCtxPrefetchWait @ 0x140471324
 * Callers:
 *     PfPowerActionNotify @ 0x140471F34 (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x1406129BC (PfpProcessScenarioPhase.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14015627C (PfpScenCtxWaiterTimedOut.c)
 */

__int64 __fastcall PfpScenCtxPrefetchWait(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  int v3; // r13d
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  int v6; // esi
  int v8; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v15; // r12d
  unsigned int v16; // ebx
  __int64 v17; // rbx
  unsigned int v18; // esi
  NTSTATUS v19; // r10d
  __int64 v20; // rax
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+10h]
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v23 = a3;
  v22 = a2;
  v3 = 0;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v8 = dword_1403CD398 < (unsigned int)dword_1403CD39C ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( *(_DWORD *)(BugCheckParameter2 + 48) != v6 || (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
      break;
    if ( v3 )
      goto LABEL_22;
    KeResetEvent((PRKEVENT)(BugCheckParameter2 + 16));
    v13 = *(_DWORD *)(BugCheckParameter2 + 8) & 3;
    if ( v13 == 1 )
    {
      v15 = 2;
      v16 = v5 - v4;
    }
    else
    {
      if ( v13 )
        break;
      if ( !v8 )
      {
LABEL_22:
        PfpScenCtxWaiterTimedOut(BugCheckParameter2);
        break;
      }
      v16 = v8;
      v15 = 1;
      v8 = 0;
    }
    *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFF3 | 4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v10, v11, v12);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    Timeout.QuadPart = -10000LL * v16;
    v17 = MEMORY[0xFFFFF78000000320];
    v18 = MEMORY[0xFFFFF78000000004];
    v19 = KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 16), Executive, 0, 0, &Timeout);
    v20 = (unsigned int)v17;
    v5 = v23;
    v4 += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        + ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324] - v18 * HIDWORD(v17)) << 8)
        - ((v20 * (unsigned __int64)v18) >> 24);
    if ( v19 == 258 || v4 >= v23 )
    {
      v3 = 1;
    }
    else if ( v15 == 2 )
    {
      return v4;
    }
    v6 = v22;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2, v10, v11, v12);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
