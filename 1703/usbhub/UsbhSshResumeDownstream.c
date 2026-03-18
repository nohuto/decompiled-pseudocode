/*
 * XREFs of UsbhSshResumeDownstream @ 0x1C0002760
 * Callers:
 *     Usbh_SSH_HubPendingResume @ 0x1C00025A0 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubSuspended @ 0x1C0009064 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0057EE8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhSshResumePort @ 0x1C0002B00 (UsbhSshResumePort.c)
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C0005F28 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncBusResume @ 0x1C000638C (UsbhSyncBusResume.c)
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C0018FE4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeDownstream(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r13
  unsigned __int16 v7; // r14
  unsigned __int16 i; // di
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rcx
  int v14; // ebp
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // edx
  int PortState; // eax
  char v23; // r10
  int v24; // r11d
  struct _KEVENT *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  int v28; // edx
  int v29; // [rsp+48h] [rbp-50h]
  struct _KEVENT *v30; // [rsp+58h] [rbp-40h]
  unsigned __int16 v31; // [rsp+A0h] [rbp+8h]

  v6 = 0LL;
  v30 = (struct _KEVENT *)FdoExt(a1);
  Log(a1, 0x10000, 1383285870, a2, 0LL);
  v7 = 1;
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v9 = *(_QWORD *)(a1 + 64);
    if ( !v9 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v9);
    if ( i > *(unsigned __int8 *)(v9 + 2938) )
      break;
    Log(a1, 8, 1735410772, i, 0LL);
    if ( i )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( !v10 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v10 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      if ( i <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
      {
        v11 = *(_QWORD *)(v10 + 3056);
        if ( v11 )
        {
          Log(a1, 8, 1735410750, i, v11 + 2928LL * (i - 1));
          if ( v12 )
          {
            v13 = *(_QWORD *)(v12 + 392);
            if ( v13 )
            {
              v6 = PdoExt(v13);
              KeWaitForSingleObject((PVOID)(v6 + 2912), Executive, 0, 0, 0LL);
              if ( (*(_DWORD *)(v6 + 1412) & 0x4000000) != 0 )
              {
                PortState = UsbhQueryPortState(a1);
                Log(a1, 0x10000, 1397965875, PortState, v31);
                if ( v24 >= 0 && (v23 & 2) == 0 )
                {
                  *(_DWORD *)(v6 + 1412) |= 0x3000000u;
                  v25 = (struct _KEVENT *)(v6 + 2888);
                  if ( (v23 & 1) != 0 )
                    KeSetEvent(v25, 0, 0);
                  else
                    KeResetEvent(v25);
                }
              }
              KeSetEvent((PRKEVENT)(v6 + 2912), 0, 0);
            }
          }
        }
      }
    }
  }
  if ( a3 == 1 )
    UsbhSyncBusResume(a1, a2);
  UsbhDisarmHubWakeOnConnect(a1);
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( !v15 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v15 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v15);
    result = *(unsigned __int8 *)(v15 + 2938);
    if ( v7 > (unsigned __int16)result )
      break;
    Log(a1, 8, 1735410772, v7, 0LL);
    if ( v7 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( !v17 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v17 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      if ( v7 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
      {
        v18 = *(_QWORD *)(v17 + 3056);
        if ( v18 )
        {
          v19 = v18 + 2928LL * (v7 - 1);
          Log(a1, 8, 1735410750, v7, v19);
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 392);
            if ( !v20
              || (v6 = PdoExt(*(_QWORD *)(v19 + 392)),
                  v14 = *(_DWORD *)(PdoExt(v20) + 1128),
                  (*(_DWORD *)(v6 + 1412) & 0x1000000) == 0) )
            {
              v21 = UsbhSshResumePort(a1, a2, v19);
              if ( v21 >= 0 && v20 && (*(_DWORD *)(v6 + 1412) & 0x8004) == 0 && v14 == 4 )
              {
                *(_DWORD *)(v19 + 2408) |= 2u;
                v26 = PdoExt(v20);
                v27 = UsbhSyncSuspendPdoPort(v26 + 944, v20, 0LL);
                *(_DWORD *)(v19 + 2408) &= ~2u;
                v21 = v27;
              }
              if ( (v21 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v21) )
              {
                LOBYTE(v29) = 0;
                UsbhException(a1, v7, 128, 0, 0, v28, 0, usbfile_sshub_c, 2436, v29);
              }
            }
          }
        }
      }
    }
    ++v7;
  }
  if ( a3 == 1 )
  {
    Usbh_SSH_Event(a1, 7LL, a2);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, 0);
    KeSetEvent(v30 + 141, 0, 0);
    return UsbhEnableTimerObject(a1, (int)v30 + 3200, v30[219].Header.LockNV, 0, a2, 2001228627);
  }
  return result;
}
