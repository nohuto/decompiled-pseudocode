/*
 * XREFs of HvIsRangeDirty @ 0x1407013B0
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1404E31E4 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     RtlAreBitsClear @ 0x140006FE0 (RtlAreBitsClear.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

bool __fastcall HvIsRangeDirty(__int64 a1, int a2, ULONG a3)
{
  volatile signed __int64 *v6; // rbx
  __int64 v7; // rdx
  BOOLEAN v8; // di
  __int64 v9; // r8
  __int64 v10; // r9

  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 || a2 < 0 )
    return 1;
  v6 = (volatile signed __int64 *)(a1 + 80);
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v8 = RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), (unsigned int)a2 >> 9, a3);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6, v7, v9, v10);
  KeAbPostRelease((ULONG_PTR)v6);
  return v8 == 0;
}
