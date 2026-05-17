/*
 * XREFs of EtwpGetCpuSpeedFromRegistry @ 0x180065878
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeed @ 0x180065870 (EtwpGetCpuSpeed.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 */

__int64 __fastcall EtwpGetCpuSpeedFromRegistry(_DWORD *a1)
{
  __int64 result; // rax
  int v3; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v5[8]; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING v7; // [rsp+50h] [rbp-9h] BYREF
  int v8; // [rsp+60h] [rbp+7h] BYREF
  __int64 v9; // [rsp+68h] [rbp+Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp+17h]
  int v11; // [rsp+78h] [rbp+1Fh]
  __int128 v12; // [rsp+80h] [rbp+27h]
  _BYTE v13[12]; // [rsp+90h] [rbp+37h] BYREF
  int v14; // [rsp+9Ch] [rbp+43h]

  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0");
  v9 = 0LL;
  p_DestinationString = &DestinationString;
  v8 = 48;
  v11 = 64;
  v12 = 0LL;
  result = NtOpenKey(&Handle, 131097LL, &v8);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&v7, L"~MHz");
    v3 = NtQueryValueKey(Handle, &v7, 2LL, v13, 16, v5);
    if ( v3 >= 0 )
      *a1 = v14;
    NtClose(Handle);
    return (unsigned int)v3;
  }
  return result;
}
