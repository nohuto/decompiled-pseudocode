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

__int64 __fastcall sub_18000A514(_DWORD *a1, int a2, __int16 a3)
{
  int v4; // ebx
  int v6; // edi
  __int16 v7; // ax
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v11[28]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Buffer[8]; // [rsp+120h] [rbp+20h] BYREF

  v4 = a3;
  v6 = -1073741811;
  memset(a1, 0, 0x2CuLL);
  if ( !ltow_s(v4, Buffer, 5uLL, 10) )
  {
    memset(v11, 0, sizeof(v11));
    v11[2] = L"FirstEntry";
    LODWORD(v11[4]) = 0x4000000;
    v11[3] = &v9;
    LODWORD(v11[11]) = 0x4000000;
    v11[9] = L"LastEntry";
    LODWORD(v11[1]) = 292;
    v11[10] = &v10;
    v9 = -4;
    v11[16] = Buffer;
    LODWORD(v11[8]) = 292;
    v10 = -4;
    LODWORD(v11[15]) = 288;
    v11[17] = a1;
    LODWORD(v11[18]) = 50331648;
    *a1 = -44;
    v6 = sub_18000A6BC(0x40000000, a2, (unsigned int)v11, 0, 0LL, 1);
    if ( v6 >= 0 )
    {
      v7 = v9;
      if ( v10 == -4 || v9 == -4 )
        v6 = -1073741762;
      if ( v6 >= 0 && (v4 > v10 || v4 < v9) )
      {
        if ( v4 > v10 )
          v7 = v10;
        if ( ltow_s(v7, Buffer, 5uLL, 10) )
        {
          return (unsigned int)-1073741762;
        }
        else
        {
          LODWORD(v11[15]) = 292;
          LODWORD(v11[18]) = 50331648;
          *a1 = -44;
          return (unsigned int)sub_18000A6BC(0x40000000, a2, (unsigned int)&v11[14], 0, 0LL, 1);
        }
      }
    }
  }
  return (unsigned int)v6;
}
