/*
 * XREFs of UsbhFreePortChangeQueueObject @ 0x1C0009A54
 * Callers:
 *     UsbhFlushPortChangeQueue @ 0x1C0009998 (UsbhFlushPortChangeQueue.c)
 *     UsbhCancelQueuedTimeout @ 0x1C0021A8C (UsbhCancelQueuedTimeout.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C00236A0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhFlushQueuedDriverReset @ 0x1C0042EB0 (UsbhFlushQueuedDriverReset.c)
 * Callees:
 *     UsbhiSignalResumeEvent @ 0x1C0007C00 (UsbhiSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C0007F24 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0008E44 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalPauseEvent @ 0x1C0009B90 (UsbhSignalPauseEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C003FF64 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042448 (UsbhiSignalSuspendEvent.c)
 */

void __fastcall UsbhFreePortChangeQueueObject(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // r9
  int v9; // ecx
  __int16 v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8

  Log(a1, 512, 1969836099, 0, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      54,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  FdoExt(a1);
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_WORD *)(a2 + 420);
  v11 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v12 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v11;
  v13 = a2 + 32 * (v11 + 27);
  *(_DWORD *)v13 = v12;
  *(_DWORD *)(v13 + 4) = v9;
  *(_WORD *)(v13 + 18) = 256;
  *(_WORD *)(v13 + 16) = v10;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_DWORD *)(v13 + 20) = 0;
  *(_DWORD *)(v13 + 28) = 1;
  if ( a4 )
  {
    if ( *(_DWORD *)(a3 + 8) == 4 )
      UsbhiSignalResumeEvent(a1, a2);
    if ( *(_DWORD *)(a3 + 8) == 0x80000 )
      UsbhSignalPauseEvent(a1, a2);
    if ( *(_DWORD *)(a3 + 8) == 4 )
      UsbhiSignalSuspendEvent(a1, a2);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
  {
    if ( a4 )
    {
      UsbhSignalSyncDeviceResetPdo(a1, *(_QWORD *)(a3 + 40), -1073741823);
      if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 3LL, 30);
    }
  }
  else if ( *(_DWORD *)(a3 + 48) == 2 )
  {
    v14 = *(_QWORD *)(a3 + 40);
    LOBYTE(v8) = a4;
    *(_QWORD *)(a3 + 40) = 0LL;
    UsbhFreePortChangeQueueTimeoutObject(a1, a2, v14, v8);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
    UsbhUnlatchPdo(a1, *(_QWORD *)(a3 + 40), a3, 1230065731LL);
  Log(a1, 512, 1718767684, a2, a3);
  ExFreePoolWithTag((PVOID)a3, 0);
}
