/*
 * XREFs of EtwpAddGuidEntry @ 0x140554888
 * Callers:
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterProvider @ 0x1405520CC (EtwpRegisterProvider.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EtwpFreeGuidEntry @ 0x14044E1FC (EtwpFreeGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140480DC8 (EtwpReferenceGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x1405549DC (EtwpAllocGuidEntry.c)
 */

__int64 __fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  _QWORD *v7; // r14
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v10; // r15
  volatile signed __int64 *v11; // rsi
  _QWORD *i; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v3 = a3;
  result = EtwpAllocGuidEntry();
  v7 = (_QWORD *)result;
  if ( result )
  {
    v8 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 1432;
    CurrentThread = KeGetCurrentThread();
    v10 = (_QWORD *)(v8 + 16 * v3);
    --CurrentThread->KernelApcDisable;
    v11 = (volatile signed __int64 *)(v8 + 48);
    ExAcquirePushLockExclusiveEx(v8 + 48, 0LL);
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v13 = *(_QWORD *)a2 - i[3];
      if ( *(_QWORD *)a2 == i[3] )
        v13 = *((_QWORD *)a2 + 1) - i[4];
      if ( !v13 && EtwpReferenceGuidEntry((ULONG_PTR)i) )
      {
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11);
          KeAbPostRelease((ULONG_PTR)v11);
          KeLeaveCriticalRegion();
          --v7[2];
          EtwpFreeGuidEntry(v7);
          return (__int64)i;
        }
        break;
      }
    }
    v14 = (_QWORD *)*v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 )
      __fastfail(3u);
    *v7 = v14;
    i = v7;
    v7[1] = v10;
    v14[1] = v7;
    *v10 = v7;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegion();
    return (__int64)i;
  }
  return result;
}
