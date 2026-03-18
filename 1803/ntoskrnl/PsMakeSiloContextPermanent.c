/*
 * XREFs of PsMakeSiloContextPermanent @ 0x1407789A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PspGetStorageArray @ 0x1406207C8 (PspGetStorageArray.c)
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  int StorageArray; // edi
  ULONG_PTR v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
    v2 = *(_QWORD *)(a1 + 1288);
  else
    v2 = qword_140466978;
  StorageArray = PspGetStorageArray(v2, a2, &v9, &v10);
  if ( StorageArray >= 0 )
  {
    v4 = v10 + 16LL * v9;
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    if ( (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      *(_QWORD *)(v4 + 8) = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL | 1;
    else
      StorageArray = -1073741811;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4, v5, v6, v7);
    KeAbPostRelease(v4);
  }
  return (unsigned int)StorageArray;
}
