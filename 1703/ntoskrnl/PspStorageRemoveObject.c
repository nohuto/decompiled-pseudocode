/*
 * XREFs of PspStorageRemoveObject @ 0x1406E4D6C
 * Callers:
 *     PsRemoveSiloContext @ 0x1406DE390 (PsRemoveSiloContext.c)
 *     PsUnregisterSiloMonitor @ 0x1406E3000 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PspGetStorageArrayIfPossible @ 0x14008BEF4 (PspGetStorageArrayIfPossible.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageRemoveObject(__int64 a1, unsigned int a2, char a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  int v7; // esi
  ULONG_PTR v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF

  result = PspGetStorageArrayIfPossible(a1, a2, &v10, &v11);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = v11 + 16LL * v10;
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 )
    {
      if ( a3 || (v9 & 1) == 0 )
      {
        *(_QWORD *)(v8 + 8) = 0LL;
        v9 &= ~1uLL;
      }
      else
      {
        v9 = 0LL;
        v7 = -1073741637;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8);
    KeAbPostRelease(v8);
    if ( v7 >= 0 )
    {
      if ( !v9 )
        return 3221226021LL;
      if ( a4 )
        *a4 = v9;
      else
        ObfDereferenceObject((PVOID)v9);
    }
    return (unsigned int)v7;
  }
  return result;
}
