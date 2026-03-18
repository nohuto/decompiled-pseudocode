/*
 * XREFs of CleanupResources @ 0x1C0078618
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     CleanupPowerRequestList @ 0x1C0063C90 (CleanupPowerRequestList.c)
 */

__int64 CleanupResources()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  gdwHydraHint |= 0x20000u;
  gbCleanedUpResources = 1;
  CleanupPowerRequestList();
  for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v1, v0, v2) + 288); i; i = *(_QWORD *)(i + 584) )
  {
    v6 = *(_QWORD *)(i + 384);
    if ( v6 )
    {
      v12 = (unsigned __int64)(v6 + 328);
      HMAssignmentLock((__int64)&v12);
    }
  }
  if ( (int)IsUnloadCursorsAndIconsSupported(v4, v3) >= 0 )
    UnloadCursorsAndIcons(v8, v7);
  if ( (int)IsDestroyDpiMetricsCacheSupported(v8, v7) >= 0 )
    DestroyDpiMetricsCache(v10, v9);
  return CleanupGDI();
}
