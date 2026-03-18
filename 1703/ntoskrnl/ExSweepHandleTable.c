/*
 * XREFs of ExSweepHandleTable @ 0x14042F3C0
 * Callers:
 *     ObInitProcess @ 0x14049CA68 (ObInitProcess.c)
 *     ObKillProcess @ 0x1404EDAA0 (ObKillProcess.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExSweepHandleTable(_KPROCESS *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v4; // r13
  int v8; // esi
  __int64 v9; // rbx
  signed __int64 *v10; // rdi
  signed __int64 v11; // r8
  bool v12; // al
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-88h]
  int v15; // [rsp+28h] [rbp-80h]
  $5BC46E0569261879018906DEC3127961 v16; // [rsp+30h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( CurrentThread->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0, (__int64)&v16);
    v4 = 1;
  }
  v8 = 0;
  v9 = 4LL;
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v10 = (signed __int64 *)ExpLookupHandleTableEntry(a2, v9);
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
        LOBYTE(v15) = 1;
        LOBYTE(v14) = a3;
        v12 = (int)ObCloseHandleTableEntry(a2, v10, a1, v9, v14, v15) >= 0;
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
    return KiUnstackDetachProcess(&v16, 0LL);
  return result;
}
