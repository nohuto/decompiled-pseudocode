/*
 * XREFs of PinMatchChannelConfigToFormat @ 0x1C001853C
 * Callers:
 *     PinValidateDataFormat @ 0x1C00185F0 (PinValidateDataFormat.c)
 *     IntersectConvertDatarangeToFormat @ 0x1C0019BC0 (IntersectConvertDatarangeToFormat.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00089A0 (__security_check_cookie.c)
 */

__int64 __fastcall PinMatchChannelConfigToFormat(unsigned int a1, unsigned int a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  unsigned int i; // r10d
  __int64 v5; // r10
  int *j; // rax
  int v8; // [rsp+0h] [rbp-28h] BYREF
  _DWORD v9[5]; // [rsp+4h] [rbp-24h]

  v2 = 0LL;
  v3 = a2;
  for ( i = 0; v3; v3 &= v3 - 1 )
    ++i;
  if ( i >= a1 )
  {
    v8 = 63;
    v9[0] = 1551;
    v9[1] = 255;
    v9[2] = 1599;
    v9[3] = 1;
    v9[4] = 4;
    if ( a1 )
    {
      v5 = a1;
      do
      {
        v3 |= a2 - (a2 & (a2 - 1));
        a2 &= a2 - 1;
        --v5;
      }
      while ( v5 );
    }
    for ( j = &v8; v3 != *j; j += 2 )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= 3 )
        return v3;
    }
    return (unsigned int)v9[2 * v2];
  }
  return v3;
}
