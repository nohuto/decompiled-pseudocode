/*
 * XREFs of __ascii_memicmp @ 0x14017B268
 * Callers:
 *     _memicmp @ 0x14017B2C0 (_memicmp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ascii_memicmp(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  int v3; // r9d
  int v4; // eax
  __int64 v5; // r11
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // r10

  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    v5 = a1 - (_QWORD)a2;
    do
    {
      v6 = a2[v5];
      --a3;
      v7 = *a2;
      if ( v6 != *a2 )
      {
        v3 = v6;
        if ( (unsigned __int8)(v6 - 65) <= 0x19u )
          v3 = v6 + 32;
        v4 = v7;
        if ( (unsigned __int8)(v7 - 65) <= 0x19u )
          v4 = v7 + 32;
        if ( v3 != v4 )
          break;
      }
      ++a2;
    }
    while ( a3 );
  }
  return (unsigned int)(v3 - v4);
}
