/*
 * XREFs of EtwpAddGuidEntry @ 0x14048972C
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x140491780 (EtwpRegisterUMGuid.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpRegisterProvider @ 0x1404F0B1C (EtwpRegisterProvider.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EtwpAllocGuidEntry @ 0x140489654 (EtwpAllocGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140491F18 (EtwpReferenceGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x14058B77C (EtwpFreeGuidEntry.c)
 */

char *__fastcall EtwpAddGuidEntry(__int64 a1, unsigned int *a2, int a3)
{
  __int64 v3; // rdi
  char *result; // rax
  char *v7; // r14
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char **v10; // r15
  volatile signed __int64 *v11; // rsi
  char *i; // rdi
  __int64 v13; // rcx
  char *v14; // rax

  v3 = a3;
  result = EtwpAllocGuidEntry(a1, a2);
  v7 = result;
  if ( result )
  {
    v8 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 432;
    CurrentThread = KeGetCurrentThread();
    v10 = (char **)(v8 + 16 * v3);
    --CurrentThread->KernelApcDisable;
    v11 = (volatile signed __int64 *)(v8 + 48);
    ExAcquirePushLockExclusiveEx(v8 + 48, 0LL);
    for ( i = *v10; i != (char *)v10; i = *(char **)i )
    {
      v13 = *(_QWORD *)a2 - *((_QWORD *)i + 3);
      if ( *(_QWORD *)a2 == *((_QWORD *)i + 3) )
        v13 = *((_QWORD *)a2 + 1) - *((_QWORD *)i + 4);
      if ( !v13 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
      {
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11);
          KeAbPostRelease((ULONG_PTR)v11);
          KeLeaveCriticalRegion();
          --*((_QWORD *)v7 + 2);
          EtwpFreeGuidEntry(v7);
          return i;
        }
        break;
      }
    }
    v14 = *v10;
    if ( *((char ***)*v10 + 1) != v10 )
      __fastfail(3u);
    *(_QWORD *)v7 = v14;
    i = v7;
    *((_QWORD *)v7 + 1) = v10;
    *((_QWORD *)v14 + 1) = v7;
    *v10 = v7;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegion();
    return i;
  }
  return result;
}
