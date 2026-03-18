/*
 * XREFs of imp_WdfDeviceWdmGetPhysicalDevice @ 0x1C0036240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C008045C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

_DEVICE_OBJECT *__fastcall imp_WdfDeviceWdmGetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device)
{
  __int64 v3; // rcx
  FxDeviceBase *flags; // rbx
  FxDeviceBase_vtbl *v5; // rax
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  unsigned __int16 v8; // r9
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  FxDeviceBase **p_pDevice; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  FxDeviceBase *pDevice; // [rsp+78h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1030uLL);
  LOWORD(v3) = 0;
  flags = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v3 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxDeviceBase *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4144 )
  {
    pDevice = flags;
  }
  else
  {
    pDevice = 0LL;
    p_pDevice = &pDevice;
    v5 = flags->FxNonPagedObject::FxObject::__vftable;
    v13 = v3;
    v12 = 4144;
    if ( v5->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v6, v7, v8, v10, (const void *)Device, 0x1030u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1030uLL);
    }
    flags = pDevice;
  }
  return flags->m_PhysicalDevice.m_DeviceObject;
}
