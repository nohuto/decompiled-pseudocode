/*
 * XREFs of UsbhResetPort @ 0x1C0019070
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0006380 (UsbhDriverResetPort.c)
 *     UsbhReset1Complete @ 0x1C00092A0 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x1C0009460 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhReset1Timeout @ 0x1C0052560 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0052B00 (UsbhReset2Timeout.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhSyncSendCommand @ 0x1C0011D30 (UsbhSyncSendCommand.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhReferenceListAdd @ 0x1C0023920 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C00262E4 (UsbhReferenceListRemove.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1C0027BA8 (Usbh_CheckPortHwPendingStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

char __fastcall UsbhResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v6; // r15
  int v7; // edx
  KIRQL v8; // al
  KIRQL v9; // r12
  _DWORD *v10; // rax
  int v11; // ecx
  int v12; // r15d
  __int64 v13; // rax
  ULONG TimeIncrement; // eax
  int v15; // edx
  int v17; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+48h] [rbp-8h]
  int v19; // [rsp+98h] [rbp+48h] BYREF
  int v20; // [rsp+A0h] [rbp+50h] BYREF
  int v21; // [rsp+A8h] [rbp+58h] BYREF
  __int16 v22; // [rsp+ACh] [rbp+5Ch]
  __int16 v23; // [rsp+AEh] [rbp+5Eh]

  v20 = 0;
  Log(a1, 4, 1919242324, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_e3e41794e16d35283050e58212bb38b7_Traceguids,
      *(_WORD *)(a2 + 4));
  v6 = (KSPIN_LOCK *)FdoExt(a1);
  v22 = *(_WORD *)(a2 + 4);
  LOWORD(v19) = 0;
  v21 = 262947;
  v23 = 0;
  v7 = UsbhSyncSendCommand(a1, (__int64)&v21, 0LL, &v19, v17, &v20);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
  {
    LOBYTE(v18) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 19, 0, 0, v15, v20, usbfile_bus_c, 2486, v18);
  }
  Log(a1, 4, 1919242360, *(unsigned __int16 *)(a2 + 4), *(int *)(a2 + 696));
  Usbh_CheckPortHwPendingStatus(a1, a2);
  v8 = KeAcquireSpinLockRaiseToDpc(v6 + 618);
  *(_DWORD *)(a2 + 696) = 1;
  v9 = v8;
  v10 = FdoExt(a1);
  if ( *((_QWORD *)v10 + 574) )
  {
    (*((void (__fastcall **)(_QWORD, int *))v10 + 574))(*((_QWORD *)v10 + 570), &v19);
    v11 = v19;
  }
  else
  {
    v11 = 0;
  }
  *(_DWORD *)(a2 + 852) = v11;
  *(_DWORD *)(a2 + 848) = v11;
  *(_DWORD *)(a3 + 4) = v11;
  Log(a1, 4, 1919242580, a2, a3);
  *(_QWORD *)(a2 + 680) = a3;
  KeResetEvent((PRKEVENT)(a2 + 768));
  KeReleaseSpinLock(v6 + 618, v9);
  v12 = *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1);
  v13 = UsbhReferenceListAdd(a1, a2 + 552, 1380799602LL) & 0xC0000000LL;
  if ( (_DWORD)v13 != -1073741824 )
  {
    TimeIncrement = KeQueryTimeIncrement();
    LOBYTE(v13) = KeSetTimer(
                    (PKTIMER)(a2 + 552),
                    (LARGE_INTEGER)(int)(1 - 10000 * v12 - TimeIncrement),
                    (PKDPC)(a2 + 616));
    if ( (_BYTE)v13 )
      LOBYTE(v13) = UsbhReferenceListRemove(a1, a2 + 552);
  }
  return v13;
}
