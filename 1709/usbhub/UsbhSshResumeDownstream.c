/*
 * XREFs of UsbhSshResumeDownstream @ 0x1C000266C
 * Callers:
 *     Usbh_SSH_HubPendingResume @ 0x1C0002530 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C00267A8 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0057DE8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhSshResumePort @ 0x1C00028AC (UsbhSshResumePort.c)
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C000568C (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncBusResume @ 0x1C0005C70 (UsbhSyncBusResume.c)
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     UsbhQueryPortState @ 0x1C0011680 (UsbhQueryPortState.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C001CF30 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0023164 (UsbhSyncSuspendPdoPort.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeDownstream(struct _DEVICE_OBJECT *a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  unsigned __int16 v7; // r14
  unsigned __int16 i; // si
  __int64 PortData; // rax
  __int64 v10; // rcx
  int v11; // r13d
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbp
  int v16; // edx
  int PortState; // eax
  char v18; // r10
  int v19; // r11d
  struct _KEVENT *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v23; // edx
  int v24; // [rsp+48h] [rbp-50h]
  struct _KEVENT *v25; // [rsp+58h] [rbp-40h]
  unsigned __int16 v26; // [rsp+B0h] [rbp+18h]

  v3 = 0LL;
  v25 = (struct _KEVENT *)FdoExt(a1);
  Log((_DWORD)a1, 0x10000, 1383285870, a2, 0LL);
  v7 = 1;
  for ( i = 1; i <= *(unsigned __int8 *)(FdoExt(a1) + 2938); ++i )
  {
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v10 = *(_QWORD *)(PortData + 392);
      if ( v10 )
      {
        v3 = PdoExt(v10);
        KeWaitForSingleObject((PVOID)(v3 + 2928), Executive, 0, 0, 0LL);
        if ( (*(_DWORD *)(v3 + 1412) & 0x4000000) != 0 )
        {
          PortState = UsbhQueryPortState((_DWORD)a1);
          Log((_DWORD)a1, 0x10000, 1397965875, PortState, v26);
          if ( v19 >= 0 && (v18 & 2) == 0 )
          {
            *(_DWORD *)(v3 + 1412) |= 0x3000000u;
            v20 = (struct _KEVENT *)(v3 + 2904);
            if ( (v18 & 1) != 0 )
              KeSetEvent(v20, 0, 0);
            else
              KeResetEvent(v20);
          }
        }
        KeSetEvent((PRKEVENT)(v3 + 2928), 0, 0);
      }
    }
  }
  if ( a3 == 1 )
    UsbhSyncBusResume(a1, a2);
  UsbhDisarmHubWakeOnConnect(a1);
  v11 = 0;
  while ( 1 )
  {
    result = FdoExt(a1);
    if ( v7 > *(unsigned __int8 *)(result + 2938) )
      break;
    v13 = UsbhGetPortData(a1, v7);
    v14 = v13;
    if ( v13 )
    {
      v15 = *(_QWORD *)(v13 + 392);
      if ( !v15
        || (v3 = PdoExt(*(_QWORD *)(v13 + 392)),
            v11 = *(_DWORD *)(PdoExt(v15) + 1128),
            (*(_DWORD *)(v3 + 1412) & 0x1000000) == 0) )
      {
        v16 = UsbhSshResumePort(a1, a2, v14);
        if ( v16 >= 0 && v15 && (*(_DWORD *)(v3 + 1412) & 0x8004) == 0 && v11 == 4 )
        {
          *(_DWORD *)(v14 + 2408) |= 2u;
          v21 = PdoExt(v15);
          v22 = UsbhSyncSuspendPdoPort(v21 + 944, v15, 0LL);
          *(_DWORD *)(v14 + 2408) &= ~2u;
          v16 = v22;
        }
        if ( (v16 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v16) )
        {
          LOBYTE(v24) = 0;
          UsbhException((int)a1, v7, 128, 0, 0, v23, 0, usbfile_sshub_c, 2436, v24);
        }
      }
    }
    ++v7;
  }
  if ( a3 == 1 )
  {
    Usbh_SSH_Event(a1);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, 0);
    KeSetEvent(v25 + 141, 0, 0);
    return UsbhEnableTimerObject((_DWORD)a1, (int)v25 + 3200, v25[219].Header.LockNV, 0, a2, 2001228627);
  }
  return result;
}
