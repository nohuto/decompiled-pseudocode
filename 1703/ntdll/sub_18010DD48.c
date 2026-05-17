/*
 * XREFs of sub_18010DD48 @ 0x18010DD48
 * Callers:
 *     sub_180002BD0 @ 0x180002BD0 (sub_180002BD0.c)
 * Callees:
 *     sub_180094C58 @ 0x180094C58 (sub_180094C58.c)
 *     sub_18010B820 @ 0x18010B820 (sub_18010B820.c)
 *     sub_18010D960 @ 0x18010D960 (sub_18010D960.c)
 */

__int64 __fastcall sub_18010DD48(__int64 a1, __int64 a2, int a3, int a4, wchar_t *Buffer)
{
  int v6; // eax

  if ( !Buffer )
    return 0LL;
  if ( a3 >= 0 )
  {
    if ( a4 >= 0 )
    {
      v6 = sub_18010B820(Buffer, 0x103uLL, L"%s\\%s%04d\\%s%d%s", a1, L"rc", a3, L"Segment", a4, L".cmf");
      Buffer[259] = 0;
      return v6 >= 0;
    }
    else
    {
      return sub_180094C58(a1, 261LL, a3, Buffer);
    }
  }
  else
  {
    if ( a4 >= 0 )
      return 0LL;
    return sub_18010D960(a1, 261, Buffer);
  }
}
