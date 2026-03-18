/*
 * XREFs of ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C001A28C
 * Callers:
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0076370 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C008D570 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 * Callees:
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00092D0 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseInput::EnumDevices(CBaseInput *this, void *a2, bool (*a3)(struct DEVICEINFO *const, void *))
{
  struct DEVICEINFO *i; // rbx
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded(
    (CInpLockExclusiveIfNeeded *)&v6,
    (struct CInpPushLock *)&CBaseInput::_sLock);
  for ( i = CBaseInput::_spDevList;
        i && ((unsigned __int8 (__fastcall *)(struct DEVICEINFO *, _QWORD))a3)(i, 0LL);
        i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    ;
  }
  if ( !v7 )
  {
    v5 = v6;
    *(_QWORD *)(v6 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
