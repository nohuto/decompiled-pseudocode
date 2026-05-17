/*
 * XREFs of EtwpGetCpuSpeed_0 @ 0x180053FB8
 * Callers:
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     EtwpGetCpuSpeed @ 0x180053FB0 (EtwpGetCpuSpeed.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

__int64 __fastcall EtwpGetCpuSpeed_0(_DWORD *a1)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // [rsp+30h] [rbp-29h] BYREF
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
  result = ZwOpenKey(&v4, 131097LL, &v8);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&v7, L"~MHz");
    v3 = ZwQueryValueKey(v4, &v7, 2LL, v13, 16, v5);
    if ( v3 >= 0 )
      *a1 = v14;
    ZwClose(v4);
    return (unsigned int)v3;
  }
  return result;
}
