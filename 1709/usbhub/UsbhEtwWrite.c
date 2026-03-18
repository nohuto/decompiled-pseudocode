/*
 * XREFs of UsbhEtwWrite @ 0x1C001DD00
 * Callers:
 *     UsbhEtwLogHubPowerEvent @ 0x1C0004B00 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0004E6C (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhQueryBusRelations @ 0x1C0013BC0 (UsbhQueryBusRelations.c)
 *     UsbhHubProcessIsr @ 0x1C0014D30 (UsbhHubProcessIsr.c)
 *     UsbhBusConnectPdo @ 0x1C001B7E0 (UsbhBusConnectPdo.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001C0E0 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C001C280 (UsbhDmTimerDpc.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     UsbhEnableTimerObject @ 0x1C001CF30 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogPortInformation @ 0x1C001D500 (UsbhEtwLogPortInformation.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwLogHubInformation @ 0x1C001E5BC (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001FE2C (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C0058F78 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C00590B4 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C00591A4 (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C00592B8 (UsbhEtwLogHubPastExceptions.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     memset @ 0x1C0029840 (memset.c)
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
