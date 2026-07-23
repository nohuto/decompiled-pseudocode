/*
 * XREFs of sub_18000A514 @ 0x18000A514
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x18000A0D0 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     sub_18000A6BC @ 0x18000A6BC (sub_18000A6BC.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _ltow_s @ 0x180095410 (_ltow_s.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18000A514(_DWORD *a1, __int64 a2, __int16 a3)
{
  int v4; // ebx
  int v6; // edi
  __int16 v7; // ax
  char v9; // [rsp+28h] [rbp-D8h]
  int v10; // [rsp+28h] [rbp-D8h]
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v13[28]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Buffer[8]; // [rsp+120h] [rbp+20h] BYREF

  v4 = a3;
  v6 = -1073741811;
  memset(a1, 0, 0x2CuLL);
  if ( !ltow_s(v4, Buffer, 5uLL, 10) )
  {
    memset(v13, 0, sizeof(v13));
    v9 = 1;
    v13[2] = L"FirstEntry";
    LODWORD(v13[4]) = 0x4000000;
    v13[3] = &v11;
    LODWORD(v13[11]) = 0x4000000;
    v13[9] = L"LastEntry";
    LODWORD(v13[1]) = 292;
    v13[10] = &v12;
    v11 = -4;
    v13[16] = Buffer;
    LODWORD(v13[8]) = 292;
    v12 = -4;
    LODWORD(v13[15]) = 288;
    v13[17] = a1;
    LODWORD(v13[18]) = 50331648;
    *a1 = -44;
    v6 = sub_18000A6BC(0x40000000LL, a2, v13, 0LL, 0LL, v9);
    if ( v6 >= 0 )
    {
      v7 = v11;
      if ( v12 == -4 || v11 == -4 )
        v6 = -1073741762;
      if ( v6 >= 0 && (v4 > v12 || v4 < v11) )
      {
        if ( v4 > v12 )
          v7 = v12;
        if ( ltow_s(v7, Buffer, 5uLL, 10) )
        {
          return (unsigned int)-1073741762;
        }
        else
        {
          LOBYTE(v10) = 1;
          LODWORD(v13[15]) = 292;
          LODWORD(v13[18]) = 50331648;
          *a1 = -44;
          return (unsigned int)sub_18000A6BC(0x40000000LL, a2, &v13[14], 0LL, 0LL, v10);
        }
      }
    }
  }
  return (unsigned int)v6;
}
