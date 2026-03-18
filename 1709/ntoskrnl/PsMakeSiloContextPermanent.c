/*
 * XREFs of PsMakeSiloContextPermanent @ 0x1407147A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PspGetStorageArray @ 0x1405C0028 (PspGetStorageArray.c)
 */

__int64 __fastcall PsMakeSiloContextPermanent(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  int StorageArray; // edi
  ULONG_PTR v4; // rbx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 )
    v2 = *(_QWORD *)(a1 + 1288);
  else
    v2 = qword_14041B978;
  StorageArray = PspGetStorageArray(v2, a2, &v6, &v7);
  if ( StorageArray >= 0 )
  {
    v4 = v7 + 16LL * v6;
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    if ( (*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      *(_QWORD *)(v4 + 8) = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFEuLL | 1;
    else
      StorageArray = -1073741811;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease(v4);
  }
  return (unsigned int)StorageArray;
}
