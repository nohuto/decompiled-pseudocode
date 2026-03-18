/*
 * XREFs of DitStopRead @ 0x1C01BA158
 * Callers:
 *     EditionHandleMitSignal @ 0x1C00FF5C0 (EditionHandleMitSignal.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C0109144 (WaitForRitToCompleteLastCommand.c)
 *     UserProcessDwmInput @ 0x1C01A12C0 (UserProcessDwmInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?CloseDevice@@YAXPEAUDEVICEINFO@@@Z @ 0x1C01B8CF4 (-CloseDevice@@YAXPEAUDEVICEINFO@@@Z.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01B94F8 (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

__int64 DitStopRead()
{
  __int64 v0; // rcx
  __int64 i; // rbx
  int v2; // eax
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  EnterDeviceInfoListCrit_(v0);
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(i + 96) & 0x40) != 0 )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit
        && (v2 = *(_DWORD *)(i + 96), (v2 & 4) != 0) )
      {
        *(_DWORD *)(i + 96) = v2 | 0x40;
        RitWakeDITAndWaitForResponse(8u);
      }
      else
      {
        v3 = *(void **)(i + 224);
        *(_WORD *)(i + 64) &= ~2u;
        ZwCancelIoFile(v3, &IoStatusBlock);
        CloseDevice((struct DEVICEINFO *)i);
      }
      *(_DWORD *)(i + 96) &= ~0x40u;
    }
  }
  KeSetEvent(gpkeDITResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v4);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return 1LL;
}
