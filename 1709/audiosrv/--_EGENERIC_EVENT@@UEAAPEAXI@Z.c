/*
 * XREFs of ??_EGENERIC_EVENT@@UEAAPEAXI@Z @ 0x18000C6F0
 * Callers:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18000E3C4 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18000F710 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180059F20 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ??1?$unique_ptr@UGENERIC_EVENT@@U?$default_delete@UGENERIC_EVENT@@@std@@@std@@QEAA@XZ @ 0x18005C37C (--1-$unique_ptr@UGENERIC_EVENT@@U-$default_delete@UGENERIC_EVENT@@@std@@@std@@QEAA@XZ.c)
 *     ?OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180094330 (-OnDefaultDeviceChanged@CMMNotificationDelegator@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800945F0 (-OnEndpointUnlockedForSharedUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

GENERIC_EVENT *__fastcall GENERIC_EVENT::`vector deleting destructor'(GENERIC_EVENT *this, char a2)
{
  *(_QWORD *)this = &GENERIC_EVENT::`vftable';
  std::_Func_class<void,>::_Tidy((char *)this + 8);
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
