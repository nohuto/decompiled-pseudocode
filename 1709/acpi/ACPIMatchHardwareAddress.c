/*
 * XREFs of ACPIMatchHardwareAddress @ 0x1C0092280
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00920B0 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     WPP_RECORDER_SF_IqLL @ 0x1C0022610 (WPP_RECORDER_SF_IqLL.c)
 *     WPP_RECORDER_SF_IqL @ 0x1C00226CC (WPP_RECORDER_SF_IqL.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002276C (ACPIInternalQueryExtendedAddress.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C0092370 (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPIMatchHardwareAddress(PDEVICE_OBJECT DeviceObject, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rdx
  int DeviceCapabilities; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-A8h]
  __int64 v12; // [rsp+50h] [rbp-78h] BYREF
  _DWORD v13[16]; // [rsp+60h] [rbp-68h] BYREF

  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  *a3 = 0;
  DeviceCapabilities = ACPIInternalGetDeviceCapabilities(DeviceObject, v13);
  if ( DeviceCapabilities >= 0 )
  {
    WPP_RECORDER_SF_IqL(WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9);
    v12 = v13[2];
    if ( (_DWORD)a2 == v13[2] )
    {
      *a3 = 1;
      if ( (int)ACPIInternalQueryExtendedAddress(DeviceObject, (__int64)&v12) >= 0 && a2 != v12 )
        *a3 = 0;
    }
  }
  WPP_RECORDER_SF_IqLL((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9, v11);
  return (unsigned int)DeviceCapabilities;
}
