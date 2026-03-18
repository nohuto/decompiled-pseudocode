/*
 * XREFs of ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01A9B7C
 * Callers:
 *     ReadTiltCalibrationData @ 0x1C01AA434 (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01AA988 (WriteTiltCalibrationData.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1C00DBB38 (RtlStringCchCopyNW.c)
 *     ?GetDeviceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z @ 0x1C00DBBC4 (-GetDeviceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z.c)
 *     ?GetInstanceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z @ 0x1C01A9AE8 (-GetInstanceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z.c)
 */

__int64 __fastcall GetTiltKeyName(struct _UNICODE_STRING *a1, unsigned __int16 **a2)
{
  struct _UNICODE_STRING v2; // xmm0
  __int64 v5; // rdx
  NTSTATUS DeviceId; // ebx
  __int64 v7; // r8
  size_t v8; // rbx
  unsigned __int16 *v9; // rax
  unsigned __int16 *v11; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING v12; // [rsp+30h] [rbp-10h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int16 *v14; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int16 *v15; // [rsp+78h] [rbp+38h] BYREF

  v2 = *a1;
  *a2 = 0LL;
  pszSrc = 0LL;
  v15 = 0LL;
  v11 = 0LL;
  v14 = 0LL;
  v12 = v2;
  DeviceId = GetDeviceId(&v12, (unsigned __int16 **)&pszSrc, &v15);
  if ( DeviceId < 0 )
    goto LABEL_11;
  v12 = *a1;
  DeviceId = GetInstanceId(&v12, &v11, &v14);
  if ( DeviceId < 0 )
    goto LABEL_11;
  v8 = v14 - pszSrc;
  v9 = (unsigned __int16 *)Win32AllocPool(2 * v8 + 2, 2020635477LL);
  *a2 = v9;
  if ( !v9 )
    return 3221225628LL;
  DeviceId = RtlStringCchCopyNW(v9, v8 + 1, pszSrc, v8);
  if ( DeviceId < 0 )
  {
LABEL_11:
    if ( *a2 )
    {
      Win32FreePool(*a2, v5, v7);
      *a2 = 0LL;
    }
  }
  return (unsigned int)DeviceId;
}
