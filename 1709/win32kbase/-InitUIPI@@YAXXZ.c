/*
 * XREFs of ?InitUIPI@@YAXXZ @ 0x1C0007090
 * Callers:
 *     Win32UserInitialize @ 0x1C01DD910 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void InitUIPI(void)
{
  void *v0; // rbx
  int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[4]; // [rsp+34h] [rbp-44h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-28h] BYREF
  int v9; // [rsp+5Ch] [rbp-1Ch]

  if ( (int)RtlQueryElevationFlags(v5) < 0 || (v5[0] & 1) != 0 )
  {
    v4 = gdwPolicyFlags;
    v0 = (void *)OpenCacheKeyEx(0LL, 49LL, 131097LL, &v4);
    if ( v0 )
    {
      v1 = 1;
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, L"EnableUIPI");
        if ( ZwQueryValueKey(
               v0,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength) >= 0 )
          break;
        if ( !v4 )
          goto LABEL_7;
        ZwClose(v0);
        v0 = (void *)OpenCacheKeyEx(0LL, 49LL, 131097LL, &v4);
        if ( !v0 )
          goto LABEL_13;
      }
      v1 = v9;
LABEL_7:
      ZwClose(v0);
      gbEnforceUIPI = v1;
    }
    else
    {
LABEL_13:
      gbEnforceUIPI = 1;
    }
    if ( (int)IsUIPISQMStatusSupported() >= 0 )
    {
      v2 = (unsigned int)gbEnforceUIPI;
      v3 = 1LL;
LABEL_10:
      UIPISQMStatus(v3, v2);
    }
  }
  else if ( (int)IsUIPISQMStatusSupported() >= 0 )
  {
    v2 = 0LL;
    v3 = 0LL;
    goto LABEL_10;
  }
}
