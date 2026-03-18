/*
 * XREFs of UsbhResetPort @ 0x1C001ED40
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0007900 (UsbhDriverResetPort.c)
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     UsbhReset1Complete @ 0x1C0021170 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x1C0021330 (UsbhPortConnect.c)
 *     UsbhReset1Timeout @ 0x1C00517A0 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0051D40 (UsbhReset2Timeout.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0013A80 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0018B28 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhReferenceListAdd @ 0x1C001BF40 (UsbhReferenceListAdd.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C001EF10 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhReferenceListRemove @ 0x1C0021BB0 (UsbhReferenceListRemove.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

char __fastcall UsbhResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v6; // rdi
  int v7; // edx
  KIRQL v8; // al
  KIRQL v9; // bl
  int FrameCounter; // eax
  int v11; // edi
  __int64 v12; // rax
  ULONG TimeIncrement; // eax
  int v14; // edx
  int v16; // [rsp+20h] [rbp-68h]
  int v17; // [rsp+48h] [rbp-40h]
  __int16 v18; // [rsp+98h] [rbp+10h] BYREF
  int v19; // [rsp+A0h] [rbp+18h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF
  __int16 v21; // [rsp+ACh] [rbp+24h]
  __int16 v22; // [rsp+AEh] [rbp+26h]

  v19 = 0;
  Log(a1, 4, 1919242324, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
      *(_WORD *)(a2 + 4));
  v6 = (KSPIN_LOCK *)FdoExt(a1);
  v21 = *(_WORD *)(a2 + 4);
  v18 = 0;
  v20 = 262947;
  v22 = 0;
  v7 = UsbhSyncSendCommand(a1, (__int64)&v20, 0LL, &v18, v16, &v19);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
  {
    LOBYTE(v17) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 19, 0, 0, v14, v19, usbfile_bus_c, 2486, v17);
  }
  Log(a1, 4, 1919242360, *(unsigned __int16 *)(a2 + 4), *(int *)(a2 + 696));
  Usbh_CheckPortHwPendingStatus(a1, a2);
  v8 = KeAcquireSpinLockRaiseToDpc(v6 + 618);
  *(_DWORD *)(a2 + 696) = 1;
  v9 = v8;
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  *(_DWORD *)(a2 + 848) = FrameCounter;
  *(_DWORD *)(a3 + 4) = FrameCounter;
  Log(a1, 4, 1919242580, a2, a3);
  *(_QWORD *)(a2 + 680) = a3;
  KeResetEvent((PRKEVENT)(a2 + 768));
  KeReleaseSpinLock(v6 + 618, v9);
  v11 = *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1);
  v12 = UsbhReferenceListAdd(a1, a2 + 552, 1380799602) & 0xC0000000LL;
  if ( (_DWORD)v12 != -1073741824 )
  {
    TimeIncrement = KeQueryTimeIncrement();
    LOBYTE(v12) = KeSetTimer(
                    (PKTIMER)(a2 + 552),
                    (LARGE_INTEGER)(int)(1 - 10000 * v11 - TimeIncrement),
                    (PKDPC)(a2 + 616));
    if ( (_BYTE)v12 )
      LOBYTE(v12) = UsbhReferenceListRemove(a1, a2 + 552);
  }
  return v12;
}
