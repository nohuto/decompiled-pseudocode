/*
 * XREFs of WheapAttemptPhysicalPageOffline @ 0x140763138
 * Callers:
 *     WheaAttemptPhysicalPageOffline @ 0x140762DF0 (WheaAttemptPhysicalPageOffline.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140763240 (WheapAttemptPhysicalPageOfflineWorker.c)
 * Callees:
 *     MmMarkPhysicalMemoryAsBad @ 0x140214CE0 (MmMarkPhysicalMemoryAsBad.c)
 *     WheaPersistOfflinedPage @ 0x1402898F4 (WheaPersistOfflinedPage.c)
 *     WheapLogPageOfflineAttemptEvent @ 0x14028A168 (WheapLogPageOfflineAttemptEvent.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x140763278 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapSqmAddToStream @ 0x140764500 (WheapSqmAddToStream.c)
 */

__int64 __fastcall WheapAttemptPhysicalPageOffline(UNICODE_STRING *a1, char a2, char a3)
{
  __int64 v3; // rbp
  char v4; // di
  int v8; // r15d
  int v9; // eax
  unsigned int v10; // esi
  bool v11; // bl
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  _DWORD v16[22]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  v18 = 4096LL;
  v3 = (_QWORD)a1 << 12;
  v4 = 0;
  v17 = (_QWORD)a1 << 12;
  if ( a3 )
  {
    v8 = 2;
  }
  else
  {
    v8 = 1;
    v17 = ((_QWORD)a1 << 12) | 1LL;
  }
  v9 = MmMarkPhysicalMemoryAsBad(&v17, &v18);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = v9 == 0;
    v16[2] = v8;
    v16[6] = v9 == 0;
    v16[0] = 1;
    v16[4] = 1;
    WheapSqmAddToStream(7212LL, 2LL, v16);
    if ( !v11 )
    {
      LOBYTE(v13) = a3;
      LOBYTE(v12) = a2;
      WheapCallInUsePageNotificationCallbacks(a1, v12, v13);
    }
  }
  if ( WheapPolicyMemPersistOffline )
  {
    v14 = WheaPersistOfflinedPage(a1);
    if ( v14 >= 0 )
      v4 = 1;
    else
      v10 = v14;
  }
  WheapLogPageOfflineAttemptEvent(v3, v10 == 259, a3, v4, a2);
  return v10;
}
