/*
 * XREFs of ?InitUIPI@@YAXXZ @ 0x1C00B1C50
 * Callers:
 *     Win32UserInitialize @ 0x1C01F2A58 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void InitUIPI(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  void *v2; // rdi
  int v3; // ebx
  int v4; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[4]; // [rsp+34h] [rbp-44h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-28h] BYREF
  int v9; // [rsp+5Ch] [rbp-1Ch]

  if ( (int)RtlQueryElevationFlags(v5) >= 0 && (v5[0] & 1) == 0 )
  {
    if ( (int)IsUIPISQMStatusSupported() < 0 )
      return;
    v0 = 0LL;
    v1 = 0LL;
    goto LABEL_16;
  }
  v4 = gdwPolicyFlags;
  while ( 1 )
  {
    v2 = OpenCacheKeyEx(0LL, 0x31u, 0x20019u, &v4);
    if ( !v2 )
      break;
    RtlInitUnicodeString(&DestinationString, L"EnableUIPI");
    if ( ZwQueryValueKey(v2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) < 0 )
    {
      v3 = v4;
      if ( !v4 )
        gbEnforceUIPI = 1;
    }
    else
    {
      v3 = 0;
      v4 = 0;
      gbEnforceUIPI = v9;
    }
    ZwClose(v2);
    if ( !v3 )
      goto LABEL_14;
  }
  gbEnforceUIPI = 1;
LABEL_14:
  if ( (int)IsUIPISQMStatusSupported() >= 0 )
  {
    v0 = (unsigned int)gbEnforceUIPI;
    v1 = 1LL;
LABEL_16:
    UIPISQMStatus(v1, v0);
  }
}
