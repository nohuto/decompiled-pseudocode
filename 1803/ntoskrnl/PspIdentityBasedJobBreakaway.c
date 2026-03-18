/*
 * XREFs of PspIdentityBasedJobBreakaway @ 0x14077AFF0
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404F019C (PspInitializeProcessSecurity.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14006E7F0 (RtlQueryPackageIdentity.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PspIdentityBasedJobBreakaway(__int64 a1, __int64 a2, int *a3)
{
  char v5; // si
  int v6; // eax
  int v7; // ebx
  char v8; // al
  int v9; // eax
  int PackageIdentity; // eax
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[7]; // [rsp+31h] [rbp-CFh] BYREF
  UNICODE_STRING String1; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING v15; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String2; // [rsp+68h] [rbp-98h] BYREF
  WCHAR v18[72]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v19[72]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR SourceString[128]; // [rsp+1A0h] [rbp+A0h] BYREF
  WCHAR v21[128]; // [rsp+2A0h] [rbp+1A0h] BYREF

  *a3 = 0;
  v12 = 0;
  *(_QWORD *)&v15.Length = 256LL;
  *(_QWORD *)&String1.Length = 256LL;
  v5 = 0;
  v13[0] = 0;
  *(_QWORD *)&String2.Length = 132LL;
  *(_QWORD *)&DestinationString.Length = 132LL;
  v6 = RtlQueryPackageIdentity(a1, (__int64)SourceString, (__int64)&v15, (__int64)v18, (__int64)&String2, &v12);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v8 = 0;
    v7 = 0;
  }
  else
  {
    v8 = v12;
  }
  if ( v7 >= 0 )
  {
    if ( v8 )
    {
      v9 = *a3;
    }
    else
    {
      *a3 = 1;
      v9 = 1;
    }
    if ( !v9 )
    {
      PackageIdentity = RtlQueryPackageIdentity(
                          a2,
                          (__int64)v21,
                          (__int64)&String1,
                          (__int64)v19,
                          (__int64)&DestinationString,
                          v13);
      v7 = PackageIdentity;
      if ( PackageIdentity == -1073741275 || PackageIdentity == -2147483643 )
      {
        v5 = 0;
        v7 = 0;
      }
      else
      {
        v5 = v13[0];
      }
    }
    if ( v7 >= 0 )
    {
      if ( v5 )
      {
        if ( *(_QWORD *)&v15.Length != *(_QWORD *)&String1.Length
          || *(_QWORD *)&String2.Length != *(_QWORD *)&DestinationString.Length
          || (RtlInitUnicodeString(&DestinationString, SourceString),
              RtlInitUnicodeString(&String1, v18),
              RtlInitUnicodeString(&String2, v21),
              RtlInitUnicodeString(&v15, v19),
              !RtlEqualUnicodeString(&DestinationString, &String2, 1u))
          || !RtlEqualUnicodeString(&String1, &v15, 1u) )
        {
          *a3 = 1;
        }
      }
    }
  }
  return (unsigned int)v7;
}
