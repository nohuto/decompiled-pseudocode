/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x1405BFE38
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1405BFCD4 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1406F5CCC (CmpVirtualPathPresent.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

void __fastcall CmpUnblockTwoHiveWrites(char *P, _QWORD *a2, __int64 a3, __int64 a4)
{
  char *v6; // rsi
  char v7; // al
  char v8; // al

  if ( P )
  {
    v6 = P + 72;
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 9, (__int64)a2, a3, a4);
    KeAbPostRelease((ULONG_PTR)v6);
  }
  if ( a2 )
  {
    v8 = _InterlockedExchangeAdd64(a2 + 9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
      ExfTryToWakePushLock(a2 + 9, (__int64)a2, a3, a4);
    KeAbPostRelease((ULONG_PTR)(a2 + 9));
  }
  if ( P && !_InterlockedDecrement((volatile signed __int32 *)P + 1072) )
    CmpDeleteHive(P);
  if ( a2 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)a2 + 1072) )
      CmpDeleteHive(a2);
  }
}
