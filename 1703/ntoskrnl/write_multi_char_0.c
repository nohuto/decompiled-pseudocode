/*
 * XREFs of write_multi_char_0 @ 0x14016DF38
 * Callers:
 *     _output_l @ 0x14016D6E0 (_output_l.c)
 *     _output_s @ 0x140170830 (_output_s.c)
 * Callees:
 *     write_char_0 @ 0x14017120C (write_char_0.c)
 */

__int64 __fastcall write_multi_char_0(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx
  char v7; // bp
  __int64 result; // rax

  if ( a2 > 0 )
  {
    v6 = a2;
    v7 = a1;
    do
    {
      LOBYTE(a1) = v7;
      --v6;
      result = write_char_0(a1, a3, a4);
    }
    while ( *a4 != -1 && v6 > 0 );
  }
  return result;
}
