/*
 * XREFs of UsbhSshSuspendHub @ 0x1C0014B70
 * Callers:
 *     Usbh_SSH_HubActive @ 0x1C000B450 (Usbh_SSH_HubActive.c)
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C0005F28 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncBusResume @ 0x1C000638C (UsbhSyncBusResume.c)
 *     UsbhEtwGetHubInfo @ 0x1C00082F0 (UsbhEtwGetHubInfo.c)
 *     UsbhDispatch_BusEvent @ 0x1C000A910 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0013A80 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0015D58 (UsbhArmHubForWakeDetect.c)
 *     Usbh_SSH_Event @ 0x1C00165B0 (Usbh_SSH_Event.c)
 *     UsbhEnableTimerObject @ 0x1C0019EB0 (UsbhEnableTimerObject.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001A710 (UsbhSyncSendInternalIoctl.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDisableTimerObject @ 0x1C0025130 (UsbhDisableTimerObject.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhSshSuspendHub(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v4; // r13
  int v5; // eax
  __int64 v6; // r11
  int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // r9d
  int v13; // eax
  int v14; // r10d
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rax
  int v19; // r9d
  int v20; // r10d
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-79h]
  int v23; // [rsp+48h] [rbp-51h]
  int v24; // [rsp+60h] [rbp-39h] BYREF
  int v25; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v26; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v27[6]; // [rsp+78h] [rbp-21h] BYREF
  __int16 v28; // [rsp+7Eh] [rbp-1Bh]
  __int16 v29; // [rsp+80h] [rbp-19h]
  __int16 v30; // [rsp+82h] [rbp-17h]
  _BYTE v31[40]; // [rsp+88h] [rbp-11h] BYREF

  v26 = 0;
  v4 = FdoExt(a1);
  v5 = UsbhSyncSendInternalIoctl(a1, 2228243LL, &v26, 0LL);
  Log((__int64)a1, 8, 1970303827, v26, v5);
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)a1, 0x10000, 1400198008, 0LL, v6);
    *(_BYTE *)(v4 + 3416) = 1;
    Usbh_SSH_Event(a1, (unsigned int)(v19 + 3), a2);
    KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
    return 3221225473LL;
  }
  else
  {
    Log((__int64)a1, 0x10000, 1400206152, a2, 0LL);
    v24 = 0;
    v25 = 0;
    if ( dword_1C0069650 )
    {
      v8 = FdoExt(a1);
      *(_DWORD *)v27 = *(_DWORD *)(v8 + 5192);
      *(_WORD *)&v27[4] = *(_WORD *)(v8 + 5196);
      v28 = *(_DWORD *)(v8 + 5200);
      v29 = *(_WORD *)(v8 + 5228);
      v30 = *(_WORD *)(v8 + 5230);
      UsbhEtwGetHubInfo(v8, (__int64)v31);
      UsbhEtwWrite(
        &USBHUB_ETW_EVENT_HUB_SUSPEND_START,
        0LL,
        (unsigned __int64)v27,
        12LL,
        v31,
        36LL,
        &v25,
        4LL,
        &v24,
        4LL,
        0LL);
    }
    v9 = FdoExt(a1);
    if ( (*(_DWORD *)(v9 + 2560) & 0x80000) == 0 )
    {
      UsbhArmHubForWakeDetect(a1);
      v24 = 0;
      LOWORD(v25) = 0;
      v10 = FdoExt(a1);
      *(_WORD *)v27 = 768;
      Log((__int64)a1, 8, 1400332651, *(unsigned int *)(v10 + 1376), 0LL);
      *(_DWORD *)&v27[2] = 1;
      v28 = 0;
      v11 = (int)UsbhSyncSendCommand((__int64)a1, (__int64)v27, 0LL, &v25, v22, &v24);
      Log((__int64)a1, 8, 1937206065, v11, v24);
      if ( (v11 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v11) )
      {
        LOBYTE(v23) = 0;
        UsbhException((int)a1, 0, 123, 0, 0, v11, v20, usbfile_hub_c, 3734, v23);
      }
      Log((__int64)a1, 8, 1937206066, v11, 0LL);
      if ( (int)v11 >= 0 )
        *(_DWORD *)(v9 + 2560) |= 0x80000u;
    }
    FdoExt(a1);
    Log((__int64)a1, 2048, 1346458174, 2LL, a2);
    *(_DWORD *)(a2 + 128) = v12;
    v13 = UsbhDispatch_BusEvent(a1, a2, v12 + 5);
    Log((__int64)a1, 2048, 1346458172, 0LL, v13);
    if ( v14 == 4 )
    {
      v15 = FdoExt(a1);
      if ( *(_QWORD *)(v15 + 4720) )
        v16 = (*(__int64 (__fastcall **)(_QWORD))(v15 + 4720))(*(_QWORD *)(v15 + 1192));
      else
        v16 = -1073741637;
      v24 = v16;
      v25 = 0;
      if ( dword_1C0069650 )
      {
        v17 = FdoExt(a1);
        *(_DWORD *)v27 = *(_DWORD *)(v17 + 5192);
        *(_WORD *)&v27[4] = *(_WORD *)(v17 + 5196);
        v28 = *(_DWORD *)(v17 + 5200);
        v29 = *(_WORD *)(v17 + 5228);
        v30 = *(_WORD *)(v17 + 5230);
        UsbhEtwGetHubInfo(v17, (__int64)v31);
        UsbhEtwWrite(
          &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE,
          0LL,
          (unsigned __int64)v27,
          12LL,
          v31,
          36LL,
          &v25,
          4LL,
          &v24,
          4LL,
          0LL);
      }
      if ( v16 < 0 )
      {
        UsbhSyncBusResume((__int64)a1, a2);
        UsbhDisarmHubWakeOnConnect((__int64)a1);
        Usbh_SSH_Event(a1, 3LL, a2);
        KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
        LOBYTE(v23) = 0;
        UsbhException((int)a1, 0, 136, 0, 0, v16, 0, usbfile_sshub_c, 2224, v23);
        v21 = FdoExt(a1);
        UsbhEnableTimerObject((_DWORD)a1, v4 + 3200, *(_DWORD *)(v4 + 5256), 0, v21 + 1912, 2001228627);
      }
      else
      {
        UsbhDisableTimerObject(a1, v4 + 3200);
        Usbh_SSH_Event(a1, 2LL, a2);
      }
      return (unsigned int)v16;
    }
    else
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_BUS_PAUSE_FAILED, 0, -1073741823);
      UsbhDisarmHubWakeOnConnect((__int64)a1);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_SUSPEND_COMPLETE, 0, -1073741823);
      *(_BYTE *)(v4 + 3416) = 1;
      Usbh_SSH_Event(a1, 3LL, a2);
      KeSetEvent((PRKEVENT)(v4 + 3384), 0, 0);
      return 3221225473LL;
    }
  }
}
