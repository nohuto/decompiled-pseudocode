/*
 * XREFs of UsbhSetIdleIrpState @ 0x1C0001350
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001280 (UsbhCompletePdoIdleIrp.c)
 *     UsbhIdleExIrp_IdleReady @ 0x1C00569E0 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C0056B58 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C0056C5C (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C0056D9C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_Event @ 0x1C0056EE8 (UsbhIdleIrp_Event.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005706C (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C00574B4 (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

void __fastcall UsbhSetIdleIrpState(__int64 a1, __int64 a2, int a3, int a4, KIRQL a5)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  v7 = PdoExt(a2);
  v8 = 32LL * *(unsigned int *)(v7 + 1780);
  *(_DWORD *)(v8 + v7 + 1784) = a3;
  *(_DWORD *)(v7 + 1528) = a4;
  *(_DWORD *)(v8 + v7 + 1792) = a4;
  *(_DWORD *)(v7 + 1780) = ((unsigned __int8)*(_DWORD *)(v7 + 1780) + 1) & 7;
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 2040), a5);
}
