/*
 * XREFs of NtUserGetDisplayConfigBufferSizes @ 0x1C000D080
 * Callers:
 *     <none>
 * Callees:
 *     GreIsDisconnectDeviceAttached @ 0x1C000D194 (GreIsDisconnectDeviceAttached.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C000D3A0 (DrvGetDisplayConfigBufferSizes.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     UserSessionSwitchEnterCrit @ 0x1C007E4D0 (UserSessionSwitchEnterCrit.c)
 */

__int64 __fastcall NtUserGetDisplayConfigBufferSizes(unsigned int a1, CTouchProcessor *a2, CTouchProcessor *a3)
{
  CTouchProcessor *v6; // rcx
  CTouchProcessor *v7; // rcx
  int DisplayConfigBufferSizes; // eax
  unsigned int v9; // ebx
  _DWORD v11[14]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  v11[0] = 0;
  UserSessionSwitchEnterCrit();
  if ( gbVideoInitialized )
  {
    v6 = a2;
    if ( a2 >= W32UserProbeAddress )
      v6 = W32UserProbeAddress;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = a3;
    if ( a3 >= W32UserProbeAddress )
      v7 = W32UserProbeAddress;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu || (unsigned int)GreIsDisconnectDeviceAttached() )
    {
      v9 = 0;
    }
    else
    {
      DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a1, &v12, v11);
      v9 = DisplayConfigBufferSizes;
      if ( DisplayConfigBufferSizes < 0
        && DisplayConfigBufferSizes != -1073741811
        && DisplayConfigBufferSizes != -1073741801
        && DisplayConfigBufferSizes != -1073741790
        && DisplayConfigBufferSizes != -1073741776
        && DisplayConfigBufferSizes != -1073741637
        && (DisplayConfigBufferSizes <= -1073741586 || DisplayConfigBufferSizes > -1073741574) )
      {
        v9 = -1073741823;
      }
    }
    *(_DWORD *)a2 = v12;
    *(_DWORD *)a3 = v11[0];
  }
  else
  {
    v9 = -1073741823;
  }
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread()) == gptiRit
    && !gbRITBlockedOnDIT
    && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v9;
}
