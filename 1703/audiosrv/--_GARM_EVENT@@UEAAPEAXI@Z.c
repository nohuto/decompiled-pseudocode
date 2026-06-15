/*
 * XREFs of ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x180045030
 * Callers:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x180009890 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180038440 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180039AF4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x1800A6730 (-OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800A69F0 (-OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ??1ARM_EVENT@@UEAA@XZ @ 0x180045064 (--1ARM_EVENT@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ARM_EVENT *__fastcall ARM_EVENT::`scalar deleting destructor'(ARM_EVENT *this, char a2)
{
  ARM_EVENT::~ARM_EVENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
