/*
 * XREFs of sub_18010D87C @ 0x18010D87C
 * Callers:
 *     sub_180109220 @ 0x180109220 (sub_180109220.c)
 * Callees:
 *     sub_180094C58 @ 0x180094C58 (sub_180094C58.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_18010D2E4 @ 0x18010D2E4 (sub_18010D2E4.c)
 *     sub_18010D960 @ 0x18010D960 (sub_18010D960.c)
 */

__int64 __fastcall sub_18010D87C(__int64 a1, int a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  int v5; // esi
  wchar_t v7[264]; // [rsp+30h] [rbp-448h] BYREF
  WCHAR v8[264]; // [rsp+240h] [rbp-238h] BYREF

  v2 = 0;
  v3 = -1;
  v5 = 1;
  if ( a2 >= 0 )
    v2 = a2 + 1;
  if ( a1 )
  {
    if ( v2 > 9999 )
      goto LABEL_11;
    while ( (unsigned int)sub_180094C58(a1, 257LL, v2, v7)
         && (unsigned int)sub_18010D2E4(v7) != -1
         && (unsigned int)sub_18010D960(v7, 260LL, v8)
         && (unsigned int)sub_18010D2E4(v8) != -1 )
    {
      v3 = v2++;
      if ( v2 > 9999 )
      {
        if ( v5 )
        {
LABEL_11:
          v5 = 0;
          v2 = 0;
        }
        if ( v2 > 9999 )
          break;
      }
    }
  }
  return v3;
}
