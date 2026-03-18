/*
 * XREFs of UsbhFdoScheduleDeferredPowerRequest @ 0x1C00014C4
 * Callers:
 *     UsbhSet_D0_wQueued_Action @ 0x1C0001008 (UsbhSet_D0_wQueued_Action.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0002284 (UsbhQueueWorkItemEx.c)
 *     UsbhAllocWorkItem @ 0x1C00023D8 (UsbhAllocWorkItem.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C00058C0 (UsbhPoStartNextPowerIrp_Pdo.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall UsbhFdoScheduleDeferredPowerRequest(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v9; // r9
  __int64 v10; // rax

  v5 = 0LL;
  Log(a1, 16, 1935962161, a4, a3);
  if ( !v9 )
    return UsbhQueueWorkItemEx(a1, 0, a2, a3, 0, 1769428816, v5);
  v10 = FdoExt(a1);
  v5 = UsbhAllocWorkItem(a1, a2, a3, 0, 1769428816, *(_BYTE *)(v10 + 5268));
  if ( v5 )
  {
    *(_BYTE *)(*(_QWORD *)(a4 + 184) + 3LL) |= 1u;
    UsbhPoStartNextPowerIrp_Pdo(a1, *(_QWORD *)(a3 + 48), a4, 1810LL);
    return UsbhQueueWorkItemEx(a1, 0, a2, a3, 0, 1769428816, v5);
  }
  return 3221225626LL;
}
