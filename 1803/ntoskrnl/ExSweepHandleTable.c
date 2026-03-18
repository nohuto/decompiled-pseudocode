/*
 * XREFs of ExSweepHandleTable @ 0x1405541A0
 * Callers:
 *     ObInitProcess @ 0x1404EAAEC (ObInitProcess.c)
 *     ObKillProcess @ 0x1404F8400 (ObKillProcess.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 */

_QWORD *__fastcall ExSweepHandleTable(_KPROCESS *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v4; // r13
  int v8; // esi
  __int64 v9; // rbx
  __int64 *v10; // rdi
  __int64 v11; // r8
  bool v12; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *result; // rax
  int v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+28h] [rbp-80h]
  _BYTE v19[48]; // [rsp+30h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0, (__int64)v19);
    v4 = 1;
  }
  v8 = 0;
  v9 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v10 = (__int64 *)ExpLookupHandleTableEntry(a2, v9);
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
        LOBYTE(v18) = 1;
        LOBYTE(v17) = a3;
        v12 = (int)ObCloseHandleTableEntry(a2, v10, a1, v9, v17, v18) >= 0;
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
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 64), v13, v14, v15);
  KeAbPostRelease(a2 + 64);
  *(_BYTE *)(a2 + 44) |= 4u;
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 == 1 )
    return (_QWORD *)KiUnstackDetachProcess((__int64)v19, 0LL);
  return result;
}
