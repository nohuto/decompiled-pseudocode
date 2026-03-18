/*
 * XREFs of CmpVolumeContextSendDeviceUsageNotification @ 0x140632AFC
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x1406329A0 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 */

__int64 __fastcall CmpVolumeContextSendDeviceUsageNotification(__int64 a1)
{
  signed __int64 *v2; // rbx
  int v3; // esi
  char v5; // bp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // al

  if ( *(_QWORD *)(a1 + 48) )
  {
    v2 = (signed __int64 *)(a1 + 56);
    ExAcquirePushLockSharedEx(a1 + 56, 0LL);
    if ( *(_BYTE *)(a1 + 64) )
    {
      v3 = 0;
      if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v2);
      KeAbPostRelease((ULONG_PTR)v2);
    }
    else
    {
      if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v2);
      KeAbPostRelease((ULONG_PTR)v2);
      v5 = 1;
      v3 = PiPagePathSetState(*(PVOID *)(a1 + 48));
      if ( v3 >= 0 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
        if ( !*(_BYTE *)(a1 + 64) )
        {
          *(_BYTE *)(a1 + 64) = 1;
          v5 = 0;
        }
        v9 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
          ExfTryToWakePushLock(v2, v6, v7, v8);
        KeAbPostRelease((ULONG_PTR)v2);
        v3 = 0;
        if ( v5 )
          PiPagePathSetState(*(PVOID *)(a1 + 48));
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
