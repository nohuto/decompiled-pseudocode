/*
 * XREFs of DitTouchInject @ 0x1C01BA218
 * Callers:
 *     EditionHandleMitSignal @ 0x1C00FF5C0 (EditionHandleMitSignal.c)
 *     UserProcessDwmInput @ 0x1C01A12C0 (UserProcessDwmInput.c)
 * Callees:
 *     xxxProcessHidInput @ 0x1C01B3FC0 (xxxProcessHidInput.c)
 */

__int64 DitTouchInject()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-28h]
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  EnterDeviceInfoListCrit_(v0);
  v2 = gpDeviceInfoList;
  while ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 96) & 0x80u) == 0 )
    {
      v2 = *(_QWORD *)(v2 + 56);
    }
    else
    {
      LeaveDeviceInfoListCrit_(v1);
      *(_QWORD *)&v9 = &gpDitTouchInjectionDeviceInfo;
      *((_QWORD *)&v9 + 1) = v2;
      v10 = v9;
      HMAssignmentLock(&v10);
      xxxProcessHidInput((struct DEVICEINFO *)v2);
      EnterDeviceInfoListCrit_(v3);
      v2 = *(_QWORD *)(v2 + 56);
      HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
    }
  }
  if ( gbTouchInjectionBlockedOnDIT )
    KeSetEvent(gpkeDITTouchInjectionResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v1);
  return UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
}
