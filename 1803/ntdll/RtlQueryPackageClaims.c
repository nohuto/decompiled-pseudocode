/*
 * XREFs of RtlQueryPackageClaims @ 0x18006D3F0
 * Callers:
 *     sub_18006D23C @ 0x18006D23C (sub_18006D23C.c)
 *     RtlQueryPackageIdentityEx @ 0x18006D380 (RtlQueryPackageIdentityEx.c)
 * Callees:
 *     sub_18006D568 @ 0x18006D568 (sub_18006D568.c)
 *     sub_18006D6B4 @ 0x18006D6B4 (sub_18006D6B4.c)
 *     RtlGUIDFromString @ 0x18006D840 (RtlGUIDFromString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlQueryPackageClaims(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp-388h] BYREF
  char v15; // [rsp+48h] [rbp-380h] BYREF
  char v16; // [rsp+50h] [rbp-378h] BYREF
  __int64 v17; // [rsp+58h] [rbp-370h]

  result = sub_18006D568(a1, a2, (unsigned int)&v16, a7, a8);
  v12 = result;
  if ( (int)result < 0 )
    return result;
  if ( a2 )
  {
    if ( a3 )
    {
      result = sub_18006D6B4(
                 a2,
                 *a3,
                 (unsigned int)&v14,
                 (unsigned int)&v15,
                 2048,
                 (__int64)L"%wZ",
                 *(_QWORD *)(v17 + 32));
      v12 = result;
      if ( (int)result < 0 )
        return result;
      *a3 = v14 - a2 + 2;
      goto LABEL_5;
    }
    return 3221225485LL;
  }
  if ( a3 )
    return 3221225485LL;
LABEL_5:
  if ( a4 )
  {
    result = sub_18006D6B4(a4, *a5, (unsigned int)&v14, 0, 2048, (__int64)L"%wZ", *(_QWORD *)(v17 + 32) + 16LL);
    v12 = result;
    if ( (int)result < 0 )
      return result;
    *a5 = v14 - a4 + 2;
  }
  if ( a6 )
  {
    v13 = v17;
    *a6 = 0LL;
    a6[1] = 0LL;
    if ( *(_DWORD *)(v13 + 24) > 3u )
      RtlGUIDFromString(*(_QWORD *)(v13 + 32) + 48LL, a6);
  }
  return v12;
}
