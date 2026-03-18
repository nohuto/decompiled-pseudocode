/*
 * XREFs of DitOpen @ 0x1C01BA028
 * Callers:
 *     EditionHandleMitSignal @ 0x1C00FF5C0 (EditionHandleMitSignal.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C0109144 (WaitForRitToCompleteLastCommand.c)
 *     UserProcessDwmInput @ 0x1C01A12C0 (UserProcessDwmInput.c)
 * Callees:
 *     ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01B91C8 (-OpenDevice@@YAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 DitOpen()
{
  __int64 v0; // rcx
  __int64 i; // rbx
  NTSTATUS v2; // eax
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD FileInformation[3]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  EnterDeviceInfoListCrit_(v0);
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(i + 96) & 8) != 0 )
    {
      if ( (unsigned int)OpenDevice((struct DEVICEINFO *)i) )
      {
        v2 = 0;
        if ( gbDITUseIocp )
        {
          v3 = *(void **)(i + 224);
          FileInformation[0] = ghDITIocp;
          FileInformation[1] = i;
          v2 = ZwSetInformationFile(v3, (PIO_STATUS_BLOCK)(i + 256), FileInformation, 0x10u, FileCompletionInformation);
        }
        if ( v2 >= 0 )
          *(_DWORD *)(i + 96) |= 4u;
      }
      *(_DWORD *)(i + 96) &= ~8u;
    }
  }
  KeSetEvent(gpkeDITResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v4);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return 0LL;
}
