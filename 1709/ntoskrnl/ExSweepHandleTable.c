/*
 * XREFs of ExSweepHandleTable @ 0x1404DD240
 * Callers:
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     ObKillProcess @ 0x1404DCFD4 (ObKillProcess.c)
 *     ObInitProcess @ 0x14053923C (ObInitProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
 */

_QWORD *__fastcall ExSweepHandleTable(_KPROCESS *a1, __int64 a2, unsigned __int8 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v4; // r13
  int v8; // esi
  ULONG_PTR v9; // rbx
  signed __int64 *v10; // rdi
  signed __int64 v11; // r8
  bool v12; // al
  _QWORD *result; // rax
  $709EDFC2F9E0D4565D6AA3C4377BC643 v14; // [rsp+30h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0, (__int64)&v14);
    v4 = 1;
  }
  v8 = 0;
  v9 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v10 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a2, v9);
  if ( v10 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        _m_prefetchw(v10);
        v11 = *v10;
        if ( (*v10 & 1) != 0 )
          break;
        if ( v11 )
        {
          ExpBlockOnLockedHandleEntry(a2, v10, v11);
        }
        else
        {
LABEL_7:
          v9 += 4LL;
          v10 += 2;
          if ( (v9 & 0x3FF) == 0 )
          {
            v9 += 4LL;
            goto LABEL_4;
          }
        }
      }
      if ( v11 == _InterlockedCompareExchange64(v10, v11 - 1, v11) )
      {
        v12 = (int)ObCloseHandleTableEntry(a2, v10, a1, v9, a3, 1) >= 0;
        --CurrentThread->KernelApcDisable;
        if ( v12 )
          ++v8;
        goto LABEL_7;
      }
    }
  }
  ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
  *(_DWORD *)(a2 + 88) -= v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64));
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 == 1 )
    return (_QWORD *)KiUnstackDetachProcess(&v14, 0LL);
  return result;
}
