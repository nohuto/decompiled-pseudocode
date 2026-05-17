/*
 * XREFs of sub_180088E4C @ 0x180088E4C
 * Callers:
 *     RtlGetNtProductType @ 0x18005A930 (RtlGetNtProductType.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_180088E4C(_DWORD *a1)
{
  int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int16 v5[4]; // [rsp+40h] [rbp-71h] BYREF
  int *v6; // [rsp+48h] [rbp-69h]
  _BYTE v7[8]; // [rsp+50h] [rbp-61h] BYREF
  int v8; // [rsp+58h] [rbp-59h] BYREF
  const wchar_t *v9; // [rsp+60h] [rbp-51h]
  int v10; // [rsp+68h] [rbp-49h] BYREF
  const wchar_t *v11; // [rsp+70h] [rbp-41h]
  int v12; // [rsp+78h] [rbp-39h] BYREF
  const wchar_t *v13; // [rsp+80h] [rbp-31h]
  int v14; // [rsp+88h] [rbp-29h] BYREF
  const wchar_t *v15; // [rsp+90h] [rbp-21h]
  int v16; // [rsp+98h] [rbp-19h] BYREF
  const wchar_t *v17; // [rsp+A0h] [rbp-11h]
  int v18; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-1h]
  int *v20; // [rsp+B8h] [rbp+7h]
  int v21; // [rsp+C0h] [rbp+Fh]
  __int128 v22; // [rsp+C8h] [rbp+17h]
  _BYTE v23[4]; // [rsp+D8h] [rbp+27h] BYREF
  int v24; // [rsp+DCh] [rbp+2Bh]
  unsigned int v25; // [rsp+E0h] [rbp+2Fh]
  int v26; // [rsp+E4h] [rbp+33h] BYREF

  v4 = 0LL;
  v19 = 0LL;
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions";
  v8 = 8650882;
  v11 = L"ProductType";
  v10 = 1572886;
  v15 = L"LanmanNt";
  v14 = 1179664;
  v17 = L"ServerNt";
  v16 = 1179664;
  v13 = L"WinNt";
  v20 = &v8;
  v12 = 786442;
  v18 = 48;
  v21 = 576;
  v22 = 0LL;
  v2 = ZwOpenKey(&v4, 1LL, &v18);
  if ( v2 >= 0 )
  {
    v2 = ZwQueryValueKey(v4, &v10, 2LL, v23, 36, v7);
    if ( v2 >= 0 )
    {
      if ( v24 == 1 && v25 >= 2 )
      {
        v5[1] = v25;
        v6 = &v26;
        v5[0] = v25 - 2;
        if ( RtlEqualUnicodeString(v5, (unsigned __int16 *)&v12, 1) )
        {
          *a1 = 1;
          goto LABEL_9;
        }
        if ( RtlEqualUnicodeString(v5, (unsigned __int16 *)&v14, 1) )
        {
          *a1 = 2;
          goto LABEL_9;
        }
        if ( RtlEqualUnicodeString(v5, (unsigned __int16 *)&v16, 1) )
        {
          *a1 = 3;
          goto LABEL_9;
        }
      }
      v2 = -1073739509;
    }
  }
LABEL_9:
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)v2;
}
