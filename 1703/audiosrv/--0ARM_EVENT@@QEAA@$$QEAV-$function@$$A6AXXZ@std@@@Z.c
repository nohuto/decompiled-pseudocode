/*
 * XREFs of ??0ARM_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180045090
 * Callers:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x180009890 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180039AF4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800A6730 (-OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800A69F0 (-OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ??$?4AEAV?$function@$$A6AXXZ@std@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z @ 0x18004526C (--$-4AEAV-$function@$$A6AXXZ@std@@X@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ARM_EVENT::ARM_EVENT(_QWORD *a1)
{
  _QWORD *v2; // rcx

  *a1 = &ARM_EVENT::`vftable';
  v2 = a1 + 1;
  v2[7] = 0LL;
  std::function<void (void)>::operator=<std::function<void (void)> &,void>(v2);
  return a1;
}
