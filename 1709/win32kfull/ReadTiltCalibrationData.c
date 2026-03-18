/*
 * XREFs of ReadTiltCalibrationData @ 0x1C01AA434
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0043BB4 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     RtlUnicodeStringCatString @ 0x1C004F65C (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1C004F784 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01A9B7C (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C01A9C54 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 */

__int64 __fastcall ReadTiltCalibrationData(__int64 a1, struct _UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  struct _UNICODE_STRING v3; // xmm6
  int v4; // r12d
  int TiltKeyName; // edi
  int v7; // ecx
  __int64 i; // rax
  _DWORD *v9; // r14
  __int64 j; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int8 **v13; // r15
  unsigned int *v14; // r8
  PCWSTR SourceString; // [rsp+28h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v19; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v20; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int8 **v21[4]; // [rsp+88h] [rbp-80h]
  unsigned int *v22[4]; // [rsp+A8h] [rbp-60h]
  _DWORD v23[4]; // [rsp+C8h] [rbp-40h] BYREF
  char v24; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v25[1408]; // [rsp+398h] [rbp+290h] BYREF

  v2 = *(_QWORD *)(a1 + 304);
  v3 = *a2;
  v4 = *(_DWORD *)(a1 + 224);
  SourceString = 0LL;
  if ( !v2 )
    return 3221225628LL;
  *(_DWORD *)&DestinationString.Length = 45875200;
  DestinationString.Buffer = (PWSTR)&v24;
  TiltKeyName = RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)(grpWinStaList + 168LL));
  if ( TiltKeyName >= 0 )
  {
    v7 = 1;
    v22[0] = (unsigned int *)(v2 + 24);
    v22[1] = (unsigned int *)(v2 + 40);
    v22[2] = (unsigned int *)(v2 + 56);
    v22[3] = (unsigned int *)(v2 + 72);
    v21[0] = (unsigned __int8 **)(v2 + 16);
    v21[1] = (unsigned __int8 **)(v2 + 32);
    v21[2] = (unsigned __int8 **)(v2 + 48);
    v21[3] = (unsigned __int8 **)(v2 + 64);
    for ( i = 0LL; i < 4; ++i )
      v23[i] = v7++;
    v16 = v3;
    TiltKeyName = GetTiltKeyName(&v16, (unsigned __int16 **)&SourceString);
    if ( TiltKeyName >= 0 )
    {
      RtlInitUnicodeString(&v18, SourceString);
      v9 = v23;
      for ( j = 0LL; j < 4; ++j )
      {
        memset(v25, 0, 0x578uLL);
        *(_DWORD *)&v16.Length = 91750400;
        v16.Buffer = (PWSTR)v25;
        RtlCopyUnicodeString(&v16, &DestinationString);
        TiltKeyName = RtlUnicodeStringCatString(&v16, off_1C02D9840[j]);
        if ( TiltKeyName >= 0 )
        {
          v13 = v21[j];
          v14 = v22[j];
          v19 = v16;
          v20 = v18;
          TiltKeyName = ReadCalibrationDataImp(&v20, &v19, v14, v13);
          if ( TiltKeyName >= 0 && v4 == *v9 )
            *(_QWORD *)(v2 + 80) = *v13;
        }
        ++v9;
      }
      Win32FreePool(SourceString, v11, v12);
    }
  }
  return (unsigned int)TiltKeyName;
}
