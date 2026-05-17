/*
 * XREFs of sub_1800D48E4 @ 0x1800D48E4
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     sub_1800D49E4 @ 0x1800D49E4 (sub_1800D49E4.c)
 */

__int64 __fastcall sub_1800D48E4(unsigned __int16 *a1)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rax
  int v5; // ecx
  int v6; // [rsp+20h] [rbp-50h] BYREF
  void *v7; // [rsp+28h] [rbp-48h]
  __int16 v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h]
  int v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  int *v12; // [rsp+50h] [rbp-20h]
  int v13; // [rsp+58h] [rbp-18h]
  __int128 v14; // [rsp+60h] [rbp-10h]

  v6 = 82051072;
  v7 = &unk_18015B940;
  result = RtlAppendUnicodeToString((unsigned __int16 *)&v6, L"\\REGISTRY\\USER\\");
  if ( (int)result >= 0 )
  {
    result = sub_1800D49E4(&v6);
    if ( (int)result >= 0 )
    {
      result = RtlAppendUnicodeStringToString((unsigned __int16 *)&v6, word_180111328);
      if ( (int)result >= 0 )
      {
        v3 = *a1;
        v4 = *((_QWORD *)a1 + 1) + *a1;
        if ( *a1 )
        {
          do
          {
            if ( *(_WORD *)(v4 - 2) == 92 )
              break;
            v4 -= 2LL;
            v3 -= 2;
          }
          while ( v3 );
        }
        v5 = *a1 - v3;
        v9 = v4;
        v8 = v5;
        if ( (unsigned __int16)v5 == v5 )
        {
          result = RtlAppendUnicodeStringToString((unsigned __int16 *)&v6, &v8);
          if ( (int)result >= 0 )
          {
            v10 = 48;
            v12 = &v6;
            v11 = 0LL;
            v13 = 64;
            v14 = 0LL;
            return ZwOpenKey();
          }
        }
        else
        {
          return 3221225507LL;
        }
      }
    }
  }
  return result;
}
