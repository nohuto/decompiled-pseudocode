/*
 * XREFs of sub_18010D6E8 @ 0x18010D6E8
 * Callers:
 *     sub_180109220 @ 0x180109220 (sub_180109220.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _wcsnicmp @ 0x1800977C0 (_wcsnicmp.c)
 *     sub_18010B820 @ 0x18010B820 (sub_18010B820.c)
 *     sub_18010CAF8 @ 0x18010CAF8 (sub_18010CAF8.c)
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 *     sub_18010CFA0 @ 0x18010CFA0 (sub_18010CFA0.c)
 *     sub_18010D2E4 @ 0x18010D2E4 (sub_18010D2E4.c)
 *     sub_18010D960 @ 0x18010D960 (sub_18010D960.c)
 */

__int64 __fastcall sub_18010D6E8(__int64 a1)
{
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rdi
  int v6; // ecx
  char *v7; // rdx
  int v8; // r8d
  int v9; // eax
  _BYTE v10[44]; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t String1[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  char v12; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR DosFileName[264]; // [rsp+280h] [rbp+180h] BYREF
  wchar_t Buffer[264]; // [rsp+490h] [rbp+390h] BYREF

  if ( !a1 || !(unsigned int)sub_18010D960(a1, 1281LL, DosFileName) )
    return 0xFFFFFFFFLL;
  v4 = -1;
  v5 = sub_18010CB98(DosFileName, v3, (__int64)v10);
  while ( v5 != -1 )
  {
    if ( (v10[0] & 0x10) != 0
      && !wcsnicmp(String1, L"rc", 2uLL)
      && (unsigned int)sub_18010D960(String1, 260LL, DosFileName)
      && (int)sub_18010B820(Buffer, 0x103uLL, L"%s\\%s", a1, DosFileName) >= 0
      && (unsigned int)sub_18010D2E4(Buffer) != -1 )
    {
      v6 = 0;
      v7 = &v12;
      v8 = 2;
      while ( *(_WORD *)v7 )
      {
        if ( (unsigned __int16)(*(_WORD *)v7 - 48) > 9u )
        {
          v6 = -1;
          break;
        }
        v9 = *(unsigned __int16 *)v7;
        ++v8;
        v7 += 2;
        v6 = v9 + 2 * (5 * v6 - 24);
        if ( v8 >= 260 )
          break;
      }
      if ( v6 > v4 )
        v4 = v6;
    }
    if ( !(unsigned int)sub_18010CFA0(v5, (__int64)v10) )
    {
      sub_18010CAF8((_RTL_CRITICAL_SECTION *)v5);
      v5 = -1LL;
    }
  }
  return (unsigned int)v4;
}
