/*
 * XREFs of ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01A2078
 * Callers:
 *     ReadTiltCalibrationData @ 0x1C01A292C (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01A31D0 (WriteTiltCalibrationData.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1C0013AC8 (RtlStringCchCopyNW.c)
 *     ?GetDeviceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z @ 0x1C0013B54 (-GetDeviceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z.c)
 *     ?GetInstanceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z @ 0x1C01A1FE4 (-GetInstanceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z.c)
 */

__int64 __fastcall GetTiltKeyName(struct _UNICODE_STRING *a1, unsigned __int16 **a2)
{
  struct _UNICODE_STRING v2; // xmm0
  NTSTATUS DeviceId; // ebx
  size_t v6; // rbx
  unsigned __int16 *v7; // rax
  unsigned __int16 *v9; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-10h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int16 *v12; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int16 *v13; // [rsp+78h] [rbp+38h] BYREF

  v2 = *a1;
  *a2 = 0LL;
  pszSrc = 0LL;
  v13 = 0LL;
  v9 = 0LL;
  v12 = 0LL;
  v10 = v2;
  DeviceId = GetDeviceId(&v10, (unsigned __int16 **)&pszSrc, &v13);
  if ( DeviceId < 0 )
    goto LABEL_11;
  v10 = *a1;
  DeviceId = GetInstanceId(&v10, &v9, &v12);
  if ( DeviceId < 0 )
    goto LABEL_11;
  v6 = v12 - pszSrc;
  v7 = (unsigned __int16 *)Win32AllocPool(2 * v6 + 2, 2020635477LL);
  *a2 = v7;
  if ( !v7 )
    return 3221225628LL;
  DeviceId = RtlStringCchCopyNW(v7, v6 + 1, pszSrc, v6);
  if ( DeviceId < 0 )
  {
LABEL_11:
    if ( *a2 )
    {
      Win32FreePool(*a2);
      *a2 = 0LL;
    }
  }
  return (unsigned int)DeviceId;
}
