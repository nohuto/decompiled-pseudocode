/*
 * XREFs of ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001ED8C
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C0038B70 (imp_WdfDeviceCreateSymbolicLink.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0017810 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001D59C (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ??1FxAutoString@@QEAA@XZ @ 0x1C0038C30 (--1FxAutoString@@QEAA@XZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C0066444 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxDevice::CreateSymbolicLink(
        FxDevice *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *SymbolicLinkName)
{
  FxAutoString *p_m_DeviceName; // r14
  int DeviceProperty; // edi
  __int64 v9; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // r14
  wchar_t *v11; // rax
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // ax
  const void *v15; // rbx
  const void *v16; // rbx
  FxAutoString pdoName; // [rsp+50h] [rbp-10h] BYREF
  void *Caller; // [rsp+88h] [rbp+28h]
  unsigned int length; // [rsp+90h] [rbp+30h] BYREF

  *(_QWORD *)&pdoName.m_UnicodeString.Length = 0LL;
  pdoName.m_UnicodeString.Buffer = 0LL;
  if ( this->m_DeviceName.Buffer )
  {
    p_m_DeviceName = (FxAutoString *)&this->m_DeviceName;
    goto LABEL_3;
  }
  if ( this->m_Legacy )
  {
    m_ObjectSize = this->m_ObjectSize;
    DeviceProperty = -1073741436;
    v13 = 12;
    goto LABEL_27;
  }
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( !SafePhysicalDevice )
  {
    m_ObjectSize = *(_WORD *)(v9 + 10);
    DeviceProperty = -1073741436;
    v13 = 13;
    goto LABEL_27;
  }
  length = 0;
  DeviceProperty = IoGetDeviceProperty(SafePhysicalDevice, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &length);
  if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
  {
    v13 = 14;
LABEL_26:
    m_ObjectSize = this->m_ObjectSize;
    goto LABEL_27;
  }
  if ( length <= 0xFFFF )
  {
    if ( !length )
    {
      DeviceProperty = -1073741436;
      v13 = 16;
      goto LABEL_26;
    }
    v11 = (wchar_t *)FxPoolAllocator(
                       FxDriverGlobals,
                       &FxDriverGlobals->FxPoolFrameworks,
                       1u,
                       length,
                       FxDriverGlobals->Tag,
                       Caller);
    if ( !v11 )
    {
      DeviceProperty = -1073741670;
      v13 = 17;
      goto LABEL_26;
    }
    pdoName.m_UnicodeString.Buffer = v11;
    DeviceProperty = IoGetDeviceProperty(
                       SafePhysicalDevice,
                       DevicePropertyPhysicalDeviceObjectName,
                       length,
                       v11,
                       &length);
    if ( DeviceProperty >= 0 )
    {
      p_m_DeviceName = &pdoName;
      pdoName.m_UnicodeString.MaximumLength = length;
      pdoName.m_UnicodeString.Length = length - 2;
LABEL_3:
      DeviceProperty = FxDuplicateUnicodeString(FxDriverGlobals, SymbolicLinkName, &this->m_SymbolicLinkName);
      if ( DeviceProperty < 0 )
      {
        v13 = 19;
      }
      else
      {
        DeviceProperty = IoCreateSymbolicLink(&this->m_SymbolicLinkName, &p_m_DeviceName->m_UnicodeString);
        if ( DeviceProperty >= 0 )
          goto LABEL_5;
        FxPoolFree((_QWORD *)this->m_SymbolicLinkName.Buffer);
        *(_QWORD *)&this->m_SymbolicLinkName.Length = 0LL;
        this->m_SymbolicLinkName.Buffer = 0LL;
        v13 = 20;
      }
      goto LABEL_26;
    }
    m_ObjectSize = this->m_ObjectSize;
    v13 = 18;
LABEL_27:
    v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v16 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, v13, WPP_FxDeviceKm_cpp_Traceguids, v16, DeviceProperty);
    goto LABEL_5;
  }
  v14 = this->m_ObjectSize;
  v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  DeviceProperty = -1073741675;
  if ( !v14 )
    v15 = 0LL;
  WPP_IFR_SF_qddd(FxDriverGlobals, 0xFFu, 0x12u, 0xFu, WPP_FxDeviceKm_cpp_Traceguids, v15, length, 0xFFFF, -1073741675);
LABEL_5:
  FxAutoString::~FxAutoString(&pdoName);
  return (unsigned int)DeviceProperty;
}
