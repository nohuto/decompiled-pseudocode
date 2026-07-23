/*
 * XREFs of PspIdentityBasedJobBreakaway @ 0x1406E0D48
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404A1020 (PspInitializeProcessSecurity.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140088580 (RtlQueryPackageIdentity.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PspIdentityBasedJobBreakaway(void *a1, void *a2, _DWORD *a3)
{
  BOOLEAN v5; // si
  NTSTATUS v6; // eax
  int v7; // ebx
  BOOLEAN v8; // al
  NTSTATUS PackageIdentity; // eax
  BOOLEAN Packaged; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN v12[7]; // [rsp+31h] [rbp-CFh] BYREF
  UNICODE_STRING v13; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING PackageSize; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v15; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING AppIdSize; // [rsp+68h] [rbp-98h] BYREF
  WCHAR AppId[72]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v18[72]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR PackageFullName[128]; // [rsp+1A0h] [rbp+A0h] BYREF
  WCHAR SourceString[128]; // [rsp+2A0h] [rbp+1A0h] BYREF

  *a3 = 0;
  Packaged = 0;
  *(_QWORD *)&PackageSize.Length = 256LL;
  *(_QWORD *)&v13.Length = 256LL;
  v5 = 0;
  v12[0] = 0;
  *(_QWORD *)&AppIdSize.Length = 132LL;
  *(_QWORD *)&v15.Length = 132LL;
  v6 = RtlQueryPackageIdentity(
         a1,
         PackageFullName,
         (PSIZE_T)&PackageSize.Length,
         AppId,
         (PSIZE_T)&AppIdSize.Length,
         &Packaged);
  v7 = v6;
  if ( v6 == -1073741275 || v6 == -2147483643 )
  {
    v8 = 0;
    v7 = 0;
  }
  else
  {
    v8 = Packaged;
  }
  if ( v7 >= 0 )
  {
    if ( !v8 )
      *a3 = 1;
    if ( !*a3 )
    {
      PackageIdentity = RtlQueryPackageIdentity(a2, SourceString, (PSIZE_T)&v13.Length, v18, (PSIZE_T)&v15.Length, v12);
      v7 = PackageIdentity;
      if ( PackageIdentity == -1073741275 || PackageIdentity == -2147483643 )
      {
        v5 = 0;
        v7 = 0;
      }
      else
      {
        v5 = v12[0];
      }
    }
    if ( v7 >= 0 )
    {
      if ( v5 )
      {
        if ( *(_QWORD *)&PackageSize.Length != *(_QWORD *)&v13.Length
          || *(_QWORD *)&AppIdSize.Length != *(_QWORD *)&v15.Length
          || (RtlInitUnicodeString(&v15, PackageFullName),
              RtlInitUnicodeString(&v13, AppId),
              RtlInitUnicodeString(&AppIdSize, SourceString),
              RtlInitUnicodeString(&PackageSize, v18),
              !RtlEqualUnicodeString(&v15, &AppIdSize, 1u))
          || !RtlEqualUnicodeString(&v13, &PackageSize, 1u) )
        {
          *a3 = 1;
        }
      }
    }
  }
  return (unsigned int)v7;
}
