/*
 * XREFs of PspStorageReplaceObject @ 0x140780A68
 * Callers:
 *     PsReplaceSiloContext @ 0x140778A70 (PsReplaceSiloContext.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PspGetStorageArray @ 0x1406207C8 (PspGetStorageArray.c)
 */

__int64 __fastcall PspStorageReplaceObject(__int64 a1, unsigned int a2, void *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rdi
  void *v13; // rcx
  unsigned int v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h] BYREF

  result = PspGetStorageArray(a1, a2, &v14, &v15);
  v7 = result;
  if ( (int)result >= 0 )
  {
    ObfReferenceObject(a3);
    v8 = v15 + 16LL * v14;
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    v12 = *(void **)(v8 + 8);
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      v12 = 0LL;
      v7 = -1073741637;
    }
    else
    {
      *(_QWORD *)(v8 + 8) = a3;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8, v9, v10, v11);
    KeAbPostRelease(v8);
    if ( (v7 & 0x80000000) != 0 )
    {
      v13 = a3;
    }
    else
    {
      if ( !v12 )
      {
        if ( a4 )
          *a4 = 0LL;
        return v7;
      }
      if ( a4 )
      {
        *a4 = v12;
        return v7;
      }
      v13 = v12;
    }
    ObfDereferenceObject(v13);
    return v7;
  }
  return result;
}
