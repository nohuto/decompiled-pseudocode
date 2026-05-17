/*
 * XREFs of RtlGetProductInfo @ 0x180084790
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800848C8 @ 0x1800848C8 (sub_1800848C8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryLicenseValue @ 0x1800A7BB0 (ZwQueryLicenseValue.c)
 */

BOOLEAN __stdcall RtlGetProductInfo(
        DWORD OSMajorVersion,
        DWORD OSMinorVersion,
        DWORD SpMajorVersion,
        DWORD SpMinorVersion,
        PDWORD ReturnedProductType)
{
  DWORD v5; // esi
  BOOLEAN v6; // bl
  __int128 v7; // xmm6
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // r10
  unsigned int v13; // [rsp+38h] [rbp-D0h] BYREF
  DWORD v14; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v18[52]; // [rsp+68h] [rbp-A0h] BYREF

  v5 = 0;
  v15 = 0;
  v6 = 1;
  v13 = 0;
  v14 = 0;
  LODWORD(v16) = OSMajorVersion;
  DWORD1(v16) = OSMinorVersion;
  DWORD2(v16) = SpMajorVersion;
  HIDWORD(v16) = SpMinorVersion;
  if ( !ReturnedProductType )
    return 0;
  *ReturnedProductType = 0;
  v7 = v16;
  v17 = xmmword_18011A6D0;
  if ( (int)sub_1800848C8(&v16, &v17) < 0 )
    return 0;
  if ( (int)ZwQueryLicenseValue(L"$&", &v15, &v14, 4LL, &v13) < 0 || v15 != 4 || v13 != 4 )
  {
    *ReturnedProductType = -1412584499;
    return v6;
  }
  if ( (int)ZwQueryLicenseValue(L">@", &v15, v18, 200LL, &v13) < 0 )
    goto LABEL_7;
  if ( v15 != 3 || v13 < 0x14 || v13 % 0x14uLL )
    return 0;
  if ( v13 / 0x14uLL )
  {
    v16 = v7;
    v9 = 0LL;
    do
    {
      v17 = *(_OWORD *)&v18[5 * v9];
      if ( (int)sub_1800848C8(&v16, &v17) < 0 )
        v5 = v18[v12 + 4];
      v9 = (unsigned int)(v11 + 1);
    }
    while ( v9 < v10 );
    if ( v5 )
    {
      *ReturnedProductType = v5;
      return v6;
    }
  }
LABEL_7:
  *ReturnedProductType = v14;
  return v6;
}
