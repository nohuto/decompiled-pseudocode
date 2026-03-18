/*
 * XREFs of UsbhResetPortTimerDpc @ 0x1C0043DF0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0018B28 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhReferenceListAdd @ 0x1C001BF40 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C0021BB0 (UsbhReferenceListRemove.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C00409F0 (UsbhPCE_QueueChangeObject.c)
 */

void __fastcall UsbhResetPortTimerDpc(
        struct _KDPC *Dpc,
        unsigned __int16 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v5; // rsi
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  KIRQL v8; // r10
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
      DeferredContext[2]);
  Log(*((_QWORD *)DeferredContext + 2), 4, 1382314083, (__int64)DeferredContext, DeferredContext[2]);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = DeferredContext[2];
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_104684de40073ce1937d0e9f4e1d15ba_Traceguids,
      v11);
  }
  v5 = (KSPIN_LOCK *)(FdoExt(*((_QWORD *)DeferredContext + 2)) + 1236);
  KeAcquireSpinLockRaiseToDpc(v5);
  Log(*((_QWORD *)DeferredContext + 2), 4, 1382314033, (__int64)DeferredContext, DeferredContext[2]);
  v6 = (_DWORD *)*((_QWORD *)DeferredContext + 85);
  v7 = *((_QWORD *)DeferredContext + 2);
  if ( !v6 )
    UsbhTrapFatal_Dbg(v7, 0LL);
  if ( *v6 != 1867468116 )
    UsbhTrapFatal_Dbg(v7, *((_QWORD *)DeferredContext + 85));
  Log(v7, 4, 1383361903, *((_QWORD *)DeferredContext + 85), DeferredContext[2]);
  *((_DWORD *)DeferredContext + 174) = 4;
  KeReleaseSpinLock(v5, v8);
  v9 = *((_QWORD *)DeferredContext + 2);
  LODWORD(v12) = 0x10000;
  v6[2] = Usbh_UsbdReadFrameCounter(v9);
  UsbhReferenceListAdd(*((_QWORD *)DeferredContext + 2), (__int64)&v12, 1869444177);
  UsbhReferenceListRemove(*((_QWORD *)DeferredContext + 2), (__int64)(DeferredContext + 276));
  KeSetEvent((PRKEVENT)DeferredContext + 32, 0, 0);
  UsbhPCE_QueueChangeObject(
    *((_QWORD *)DeferredContext + 2),
    DeferredContext[2],
    v12,
    (__int64)(DeferredContext + 12),
    v10,
    (__int64)v6);
  Log(*((_QWORD *)DeferredContext + 2), 4, 1383294324, DeferredContext[2], (__int64)v6);
  UsbhReferenceListRemove(*((_QWORD *)DeferredContext + 2), (__int64)&v12);
}
