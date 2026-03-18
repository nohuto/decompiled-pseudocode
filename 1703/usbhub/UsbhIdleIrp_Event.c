/*
 * XREFs of UsbhIdleIrp_Event @ 0x1C0056EE8
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001280 (UsbhCompletePdoIdleIrp.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0012450 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003E3FC (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoIdleIrp @ 0x1C00569B0 (UsbhCompleteCanceledPdoIdleIrp.c)
 *     UsbhPdoIdleCC_Worker @ 0x1C0057690 (UsbhPdoIdleCC_Worker.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C0001350 (UsbhSetIdleIrpState.c)
 *     UsbhGetIdleIrpState @ 0x1C00013BC (UsbhGetIdleIrpState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhIdleExIrp_IdleReady @ 0x1C00569E0 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C0056B58 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C0056C5C (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C0056D9C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005706C (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C00574B4 (UsbhIdleIrp_WaitWorker.c)
 */

__int64 __fastcall UsbhIdleIrp_Event(ULONG_PTR a1, __int64 a2, IRP *a3, int a4, int a5)
{
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  int IdleIrpState; // eax
  int v12; // r10d
  unsigned int v13; // ebx
  KIRQL v16; // [rsp+68h] [rbp+20h] BYREF

  Log(a1, 0x10000, 1936934230, a4, (__int64)a3);
  v9 = PdoExt(a2);
  IdleIrpState = UsbhGetIdleIrpState(v10, a2, &v16);
  v9[358] = a5;
  Log(a1, 0x10000, 1936934193, a2, IdleIrpState);
  switch ( v12 )
  {
    case 0:
      return (unsigned int)UsbhIdleIrp_NoIrp(a1, a2, a3, (unsigned int)a4, 0, v16);
    case 1:
      return (unsigned int)UsbhIdleIrp_WaitWorker(a1, a2, (_DWORD)a3, a4, 1, v16);
    case 2:
      return (unsigned int)UsbhIdleIrp_CB_Pending(a1, a2, a3, a4, 2, v16);
    case 3:
      return (unsigned int)UsbhIdleIrp_CB_Canceled(a1, a2, (__int64)a3, a4, 3, v16);
    case 4:
      return (unsigned int)UsbhIdleIrp_CB_Complete(a1, a2, (__int64)a3, a4, 4, v16);
    case 5:
      return (unsigned int)UsbhIdleExIrp_IdleReady(a1, a2, (__int64)a3, a4, 5, v16);
  }
  v13 = -1073741823;
  UsbhSetIdleIrpState((unsigned int)(v12 - 4), a2, a4, v12, v16);
  return v13;
}
