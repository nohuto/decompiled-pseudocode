/*
 * XREFs of WindowsQueryLicenseDWORD @ 0x1C00528B8
 * Callers:
 *     DpiFdoHandleStartDevice @ 0x1C01F5800 (DpiFdoHandleStartDevice.c)
 * Callees:
 *     InternalRtlGetLicenseData @ 0x1C00527EC (InternalRtlGetLicenseData.c)
 */

__int64 __fastcall WindowsQueryLicenseDWORD(__int64 a1, _DWORD *a2)
{
  void *v2; // rcx
  int LicenseData; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]
  _DWORD *v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = HIDWORD(a1);
  v2 = 0LL;
  v7 = 0;
  v9 = 0LL;
  if ( a2 )
  {
    LicenseData = InternalRtlGetLicenseData(0LL, (__int64)a2, &v7, &v9);
    v2 = v9;
    v5 = LicenseData;
    if ( LicenseData >= 0 )
    {
      if ( !v9 )
        return v5;
      v5 = 0;
      *a2 = *v9;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x2043524Bu);
  return v5;
}
