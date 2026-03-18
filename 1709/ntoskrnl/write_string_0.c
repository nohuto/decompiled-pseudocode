/*
 * XREFs of write_string_0 @ 0x140162798
 * Callers:
 *     _output_l @ 0x140161F3C (_output_l.c)
 * Callees:
 *     write_char_0 @ 0x140165A68 (write_char_0.c)
 */

__int64 __fastcall write_string_0(_BYTE *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  int v7; // ebx
  _BYTE *v8; // r14

  result = *(unsigned int *)(a3 + 24);
  v7 = a2;
  v8 = a1;
  if ( (result & 0x40) == 0 || *(_QWORD *)(a3 + 16) )
  {
    if ( a2 > 0 )
    {
      do
      {
        LOBYTE(a1) = *v8;
        --v7;
        result = write_char_0(a1, a3, a4);
        ++v8;
        if ( *a4 == -1 )
        {
          if ( gbl_errno != 42 )
            return result;
          LOBYTE(a1) = 63;
          result = write_char_0(a1, a3, a4);
        }
      }
      while ( v7 > 0 );
    }
  }
  else
  {
    *a4 += a2;
  }
  return result;
}
