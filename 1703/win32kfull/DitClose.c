/*
 * XREFs of DitClose @ 0x1C01B9FB8
 * Callers:
 *     EditionHandleMitSignal @ 0x1C00FF5C0 (EditionHandleMitSignal.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C0109144 (WaitForRitToCompleteLastCommand.c)
 *     UserProcessDwmInput @ 0x1C01A12C0 (UserProcessDwmInput.c)
 * Callees:
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01B8CF4 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 */

__int64 DitClose()
{
  __int64 v0; // rcx
  __int64 i; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 1LL);
  EnterDeviceInfoListCrit_(v0);
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(i + 96) & 0x10) != 0 )
    {
      CloseDevice((struct DEVICEINFO *)i);
      *(_DWORD *)(i + 96) &= 0xFFFFFFEB;
    }
  }
  KeSetEvent(gpkeDITResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v2);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return 1LL;
}
