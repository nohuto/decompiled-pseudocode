/*
 * XREFs of UsbhDerefPdoDeviceHandle @ 0x1C0017678
 * Callers:
 *     UsbhPdoAbortAllDevicePipes @ 0x1C0001084 (UsbhPdoAbortAllDevicePipes.c)
 *     UsbhClearPdoIdleReady @ 0x1C0006900 (UsbhClearPdoIdleReady.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0006AC0 (UsbhSyncSendCommandToDevice.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoSetDeviceData @ 0x1C0024DB8 (UsbhPdoSetDeviceData.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C003DBB4 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C0047608 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047BC0 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhGetHubNodeInfo @ 0x1C004E178 (UsbhGetHubNodeInfo.c)
 *     UsbhPdoQueryWmiDataBlock @ 0x1C004E560 (UsbhPdoQueryWmiDataBlock.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0056160 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhDerefPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v8; // rax
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r15
  __int64 v11; // r9
  int v12; // r10d
  _DWORD *v13; // rax

  v4 = a4;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v9 = (KSPIN_LOCK *)(v8 + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 3720));
  Log(a1, 256, 1146498353, a2, a3);
  Log(a1, v12, 1146498354, v11, v4);
  v13 = FdoExt(a1);
  if ( *((_QWORD *)v13 + 559) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))v13 + 559))(
      *((_QWORD *)v13 + 529),
      a2,
      a3,
      (unsigned int)v4);
  KeReleaseSpinLock(v9, v10);
}
