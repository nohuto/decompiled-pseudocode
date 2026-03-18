/*
 * XREFs of ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C012D4E0
 * Callers:
 *     ?CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z @ 0x1C0062B00 (-CleanUpDelayZonesOnThreadExit@DelayZonePalmRejection@@QEAAXQEAUtagTHREADINFO@@@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1C012D3EC (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012D59C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 */

char __fastcall DelayZonePalmRejection::RemoveDelayZoneFromListInternal(
        DelayZonePalmRejection *this,
        struct CPalmRejectZoneInfo **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  char v7; // bl
  CInpLockGuard *v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v9,
    (DelayZonePalmRejection *)((char *)this + 120));
  if ( a2 && (v4 = (__int64)*a2) != 0 )
  {
    if ( *(_QWORD *)(v4 + 48) )
    {
      ObfDereferenceObject(*(PVOID *)(v4 + 48));
      v4 = (__int64)*a2;
    }
    v5 = *(_QWORD *)v4;
    v6 = *(_QWORD **)(v4 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    Win32FreePool(v4);
    WPP_RECORDER_SF_d(
      *((_QWORD *)this + 14),
      4u,
      0xDu,
      0x1Au,
      (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
      --*((_DWORD *)this + 23));
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  if ( !v10 )
    CInpLockGuard::UnLock((PERESOURCE *)v9);
  return v7;
}
