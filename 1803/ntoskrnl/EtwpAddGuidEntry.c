/*
 * XREFs of EtwpAddGuidEntry @ 0x14058E46C
 * Callers:
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x140601F6C (EtwpRegisterProvider.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpFreeGuidEntry @ 0x14058E35C (EtwpFreeGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x14058E5C4 (EtwpAllocGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x1405908C8 (EtwpReferenceGuidEntry.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *i; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v3 = a3;
  result = EtwpAllocGuidEntry();
  v7 = (_QWORD *)result;
  if ( result )
  {
    v8 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 440;
    CurrentThread = KeGetCurrentThread();
    v10 = (_QWORD *)(v8 + 16 * v3);
    --CurrentThread->KernelApcDisable;
    v11 = (volatile signed __int64 *)(v8 + 48);
    ExAcquirePushLockExclusiveEx(v8 + 48, 0LL);
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v16 = *(_QWORD *)a2 - i[3];
      if ( *(_QWORD *)a2 == i[3] )
        v16 = *((_QWORD *)a2 + 1) - i[4];
      if ( !v16 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
      {
        if ( i )
        {
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11, v12, v13, v14);
          KeAbPostRelease((ULONG_PTR)v11);
          KeLeaveCriticalRegion();
          --v7[2];
          EtwpFreeGuidEntry(v7);
          return (__int64)i;
        }
        break;
      }
    }
    v17 = (_QWORD *)*v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 )
      __fastfail(3u);
    *v7 = v17;
    i = v7;
    v7[1] = v10;
    v17[1] = v7;
    *v10 = v7;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11, v12, v13, v14);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegion();
    return (__int64)i;
  }
  return result;
}
