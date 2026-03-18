/*
 * XREFs of PspStorageRemoveObject @ 0x14078098C
 * Callers:
 *     PsRemoveSiloContext @ 0x140778A40 (PsRemoveSiloContext.c)
 *     PsUnregisterSiloMonitor @ 0x14077D330 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PspGetStorageArrayIfPossible @ 0x140007D88 (PspGetStorageArrayIfPossible.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspStorageRemoveObject(__int64 a1, unsigned int a2, char a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  int v7; // esi
  ULONG_PTR v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rbx
  unsigned int v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h] BYREF

  result = PspGetStorageArrayIfPossible(a1, a2, &v13, &v14);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = v14 + 16LL * v13;
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    v12 = *(_QWORD *)(v8 + 8);
    if ( v12 )
    {
      if ( a3 || (v12 & 1) == 0 )
      {
        *(_QWORD *)(v8 + 8) = 0LL;
        v12 &= ~1uLL;
      }
      else
      {
        v12 = 0LL;
        v7 = -1073741637;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8, v9, v10, v11);
    KeAbPostRelease(v8);
    if ( v7 >= 0 )
    {
      if ( !v12 )
        return 3221226021LL;
      if ( a4 )
        *a4 = v12;
      else
        ObfDereferenceObject((PVOID)v12);
    }
    return (unsigned int)v7;
  }
  return result;
}
