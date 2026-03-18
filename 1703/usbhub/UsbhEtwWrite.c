/*
 * XREFs of UsbhEtwWrite @ 0x1C0005320
 * Callers:
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0005004 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0005130 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C000820C (UsbhEtwLogHubPastExceptions.c)
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 *     UsbhSshSuspendHub @ 0x1C0014B70 (UsbhSshSuspendHub.c)
 *     UsbhQueryBusRelations @ 0x1C0015090 (UsbhQueryBusRelations.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0015D58 (UsbhArmHubForWakeDetect.c)
 *     UsbhFdoPower_WaitWake @ 0x1C00188B0 (UsbhFdoPower_WaitWake.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001B654 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhEtwLogPortInformation @ 0x1C001E080 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubInformation @ 0x1C001EB70 (UsbhEtwLogHubInformation.c)
 *     UsbhDmTimerDpc @ 0x1C0022AF0 (UsbhDmTimerDpc.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDisableTimerObject @ 0x1C0025130 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C0025888 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C0025994 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C0059060 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C0059150 (UsbhEtwLogHubException.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

NTSTATUS UsbhEtwWrite(PCEVENT_DESCRIPTOR EventDescriptor, LPCGUID ActivityId, unsigned __int64 a3, ...)
{
  va_list v5; // rcx
  ULONG v6; // r9d
  unsigned __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData[10]; // [rsp+30h] [rbp-C8h] BYREF
  va_list va; // [rsp+118h] [rbp+20h] BYREF

  va_start(va, a3);
  memset(UserData, 0, sizeof(UserData));
  va_copy(v5, va);
  v6 = 0;
  v7 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)v5;
      if ( !*(_DWORD *)v5 )
        break;
      if ( v6 >= 0xA )
        break;
      v9 = v6++;
      v9 *= 2LL;
      *(&UserData[0].Ptr + v9) = v7;
      *(&UserData[0].Size + 2 * v9) = v8;
      *(&UserData[0].Reserved + 2 * v9) = 0;
      v7 = *((_QWORD *)v5 + 1);
      if ( !v7 )
        break;
      v5 += 16;
    }
  }
  return EtwWrite(RegHandle, EventDescriptor, ActivityId, v6, UserData);
}
