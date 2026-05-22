/*
 * XREFs of ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x180073B2C
 * Callers:
 *     ?OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY__@@PEA_N@Z @ 0x180073BDC (-OpenBestMatchingControllerKey@SpatialInteractionDevices@@YAJPEB_WGGGW4Handedness@1@PEAPEAUHKEY_.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18008F488 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

CONFIGRET __fastcall DevicePropertyHelpers::DevicePropertyHelper::Initialize(DEVNODE *this)
{
  char *v2; // rcx
  CONFIGRET result; // eax
  ULONG PropertyBufferSize; // [rsp+30h] [rbp-1B8h] BYREF
  DEVPROPTYPE PropertyType[3]; // [rsp+34h] [rbp-1B4h] BYREF
  WCHAR PropertyBuffer[200]; // [rsp+40h] [rbp-1A8h] BYREF

  PropertyBufferSize = 400;
  v2 = (char *)(this + 2);
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v2 = *(char **)v2;
  if ( CM_Get_Device_Interface_PropertyW(
         (LPCWSTR)v2,
         &DEVPKEY_Device_InstanceId,
         PropertyType,
         (PBYTE)PropertyBuffer,
         &PropertyBufferSize,
         0) )
  {
    return -2147467259;
  }
  if ( PropertyType[0] != 18 )
    return -2147467259;
  result = CM_Locate_DevNodeW(this + 10, PropertyBuffer, 0);
  if ( result )
    return -2147467259;
  *this = 1;
  return result;
}
