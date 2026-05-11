/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C00010C4
 * Callers:
 *     DeInitSideband @ 0x1C0006C2C (DeInitSideband.c)
 *     SidebandDispatchIrp @ 0x1C0007050 (SidebandDispatchIrp.c)
 *     ?DeInitIoQueue@CSidebandDevice@@QEAAJXZ @ 0x1C000727C (-DeInitIoQueue@CSidebandDevice@@QEAAJXZ.c)
 *     ?IrpMJCreateHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007368 (-IrpMJCreateHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJCloseHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007484 (-IrpMJCloseHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00075A8 (-IrpMJIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJInternalIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007684 (-IrpMJInternalIoControlHandler@CSidebandDevice@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     DeviceStart @ 0x1C0017260 (DeviceStart.c)
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x1C0017570 (SidebandCapableDeferredFilterFactoryCreate.c)
 *     USBDeviceGetOffloadCapability @ 0x1C001FAA0 (USBDeviceGetOffloadCapability.c)
 *     USBHwGetTransportResources @ 0x1C0020530 (USBHwGetTransportResources.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0020738 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}
