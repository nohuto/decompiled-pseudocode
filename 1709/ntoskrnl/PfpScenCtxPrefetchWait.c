/*
 * XREFs of PfpScenCtxPrefetchWait @ 0x140430E90
 * Callers:
 *     PfPowerActionNotify @ 0x1404309DC (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x1405EF25C (PfpProcessScenarioPhase.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140239710 (PfpScenCtxWaiterTimedOut.c)
 */

__int64 __fastcall PfpScenCtxPrefetchWait(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  int v3; // r13d
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  int v6; // esi
  int v8; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v10; // eax
  int v11; // r12d
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  unsigned int v15; // esi
  NTSTATUS v16; // r10d
  __int64 v17; // rax
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+10h]
  unsigned int v21; // [rsp+80h] [rbp+18h]

  v21 = a3;
  v20 = a2;
  v3 = 0;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v8 = dword_140387A98 < (unsigned int)dword_140387A9C ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( *(_DWORD *)(BugCheckParameter2 + 48) != v6 || (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
      break;
    if ( v3 )
      goto LABEL_18;
    KeResetEvent((PRKEVENT)(BugCheckParameter2 + 16));
    v10 = *(_DWORD *)(BugCheckParameter2 + 8);
    if ( (v10 & 3) == 1 )
    {
      v11 = 2;
      v12 = v10 & 0xFFFFFFF3 | 4;
      v13 = v5 - v4;
    }
    else
    {
      if ( (v10 & 3) != 0 )
        break;
      if ( !v8 )
      {
LABEL_18:
        PfpScenCtxWaiterTimedOut(BugCheckParameter2);
        break;
      }
      v11 = 1;
      v12 = v10 & 0xFFFFFFF3 | 4;
      v13 = v8;
      v8 = 0;
    }
    *(_DWORD *)(BugCheckParameter2 + 8) = v12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    Timeout.QuadPart = -10000LL * v13;
    v14 = MEMORY[0xFFFFF78000000320];
    v15 = MEMORY[0xFFFFF78000000004];
    v16 = KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 16), Executive, 0, 0, &Timeout);
    v17 = (unsigned int)v14;
    v5 = v21;
    v4 += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        + ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324] - v15 * HIDWORD(v14)) << 8)
        - ((v17 * (unsigned __int64)v15) >> 24);
    if ( v16 == 258 || v4 >= v21 )
    {
      v3 = 1;
    }
    else if ( v11 == 2 )
    {
      return v4;
    }
    v6 = v20;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v4;
}
