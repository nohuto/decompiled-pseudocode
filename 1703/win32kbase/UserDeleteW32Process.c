/*
 * XREFs of UserDeleteW32Process @ 0x1C00D8090
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00291D8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall UserDeleteW32Process(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 988) )
    {
      v2 = *(_QWORD *)(a1 + 1000);
      v3 = *(_QWORD **)(a1 + 1008);
      if ( *(_QWORD *)(v2 + 8) != a1 + 1000 || *v3 != a1 + 1000 )
        __fastfail(3u);
      *v3 = v2;
      *(_QWORD *)(v2 + 8) = v3;
    }
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
    v4 = *(_QWORD *)(a1 + 688);
    if ( v4 )
    {
      Win32FreePool(v4);
      RtlInitializeBitMap((PRTL_BITMAP)(a1 + 680), 0LL, 0);
    }
    PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
    Win32FreePool(a1);
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  }
  if ( !v5 )
    UserSessionSwitchLeaveCrit();
}
