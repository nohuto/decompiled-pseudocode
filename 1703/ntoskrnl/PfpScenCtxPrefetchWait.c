/*
 * XREFs of PfpScenCtxPrefetchWait @ 0x140409BCC
 * Callers:
 *     PfPowerActionNotify @ 0x140409780 (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x14058509C (PfpProcessScenarioPhase.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     PfpScenCtxWaiterTimedOut @ 0x14013E00C (PfpScenCtxWaiterTimedOut.c)
 */

__int64 __fastcall PfpScenCtxPrefetchWait(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  int v3; // r12d
  unsigned int v4; // r14d
  int v6; // edi
  int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  int v10; // eax
  unsigned int v12; // eax
  int v13; // r15d
  unsigned int v14; // edi
  int v15; // edi
  NTSTATUS v16; // eax
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v18; // [rsp+78h] [rbp+10h]

  v18 = a2;
  v3 = 0;
  v4 = 0;
  v6 = a2;
  v8 = dword_14036DB18 < (unsigned int)dword_14036DB1C ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( *(_DWORD *)(BugCheckParameter2 + 48) != v6 || (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
      break;
    if ( v3 )
      goto LABEL_12;
    KeResetEvent((PRKEVENT)(BugCheckParameter2 + 16));
    v10 = *(_DWORD *)(BugCheckParameter2 + 8);
    if ( (v10 & 3) == 1 )
    {
      v12 = v10 & 0xFFFFFFF3 | 4;
      v13 = 2;
      v14 = a3 - v4;
    }
    else
    {
      if ( (v10 & 3) != 0 || !v8 )
      {
        if ( (v10 & 3) != 0 )
          break;
LABEL_12:
        PfpScenCtxWaiterTimedOut(BugCheckParameter2);
        break;
      }
      v14 = v8;
      v12 = v10 & 0xFFFFFFF3 | 4;
      v13 = 1;
      v8 = 0;
    }
    *(_DWORD *)(BugCheckParameter2 + 8) = v12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    Timeout.QuadPart = -10000LL * v14;
    v15 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
        + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v16 = KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 16), Executive, 0, 0, &Timeout);
    v4 += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
        + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        - v15;
    if ( v16 == 258 || v4 >= a3 )
    {
      v3 = 1;
    }
    else if ( v13 == 2 )
    {
      return v4;
    }
    v6 = v18;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
