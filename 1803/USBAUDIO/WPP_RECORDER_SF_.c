/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0001008
 * Callers:
 *     USBType1CompleteCallback @ 0x1C0003DE0 (USBType1CompleteCallback.c)
 *     USBCaptureCompleteCallback @ 0x1C00053F0 (USBCaptureCompleteCallback.c)
 *     DeInitSideband @ 0x1C0006C2C (DeInitSideband.c)
 *     IsSidebandIrp @ 0x1C0006E64 (IsSidebandIrp.c)
 *     IsDeviceInSidebandMode @ 0x1C0006F44 (IsDeviceInSidebandMode.c)
 *     SidebandDispatchIrp @ 0x1C0007050 (SidebandDispatchIrp.c)
 *     ?DeInitIoQueue@CSidebandDevice@@QEAAJXZ @ 0x1C000727C (-DeInitIoQueue@CSidebandDevice@@QEAAJXZ.c)
 *     ?IrpMJCreateHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007368 (-IrpMJCreateHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJCloseHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007484 (-IrpMJCloseHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00075A8 (-IrpMJIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJInternalIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007684 (-IrpMJInternalIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C0017570 (SidebandCapableDeferredFilterFactoryCreate.c)
 *     PinReset @ 0x1C0018DC0 (PinReset.c)
 *     USBHwGetTransportResources @ 0x1C0020530 (USBHwGetTransportResources.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0020738 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]

  v8 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, 0LL);
}
