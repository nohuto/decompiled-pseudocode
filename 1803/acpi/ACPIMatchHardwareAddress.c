/*
 * XREFs of ACPIMatchHardwareAddress @ 0x1C007E4A4
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00791CC (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002A2C4 (ACPIInternalQueryExtendedAddress.c)
 *     WPP_RECORDER_SF_IqL @ 0x1C002E144 (WPP_RECORDER_SF_IqL.c)
 *     WPP_RECORDER_SF_IqLL @ 0x1C002E234 (WPP_RECORDER_SF_IqLL.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C007D7F0 (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPIMatchHardwareAddress(PDEVICE_OBJECT DeviceObject, __int64 a2, _BYTE *a3)
{
  int v6; // edx
  int DeviceCapabilities; // ebp
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+50h] [rbp-78h] BYREF
  _DWORD v12[16]; // [rsp+60h] [rbp-68h] BYREF

  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  *a3 = 0;
  DeviceCapabilities = ACPIInternalGetDeviceCapabilities(DeviceObject, v12);
  if ( DeviceCapabilities >= 0 )
  {
    WPP_RECORDER_SF_IqL(WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9);
    v11 = v12[2];
    if ( (_DWORD)a2 == v12[2] )
    {
      *a3 = 1;
      if ( (int)ACPIInternalQueryExtendedAddress(DeviceObject, (__int64)&v11) >= 0 && a2 != v11 )
        *a3 = 0;
    }
  }
  WPP_RECORDER_SF_IqLL(WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9);
  return (unsigned int)DeviceCapabilities;
}
