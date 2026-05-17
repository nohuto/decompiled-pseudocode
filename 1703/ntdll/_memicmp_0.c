/*
 * XREFs of _memicmp_0 @ 0x180096C98
 * Callers:
 *     _memicmp @ 0x180096CF0 (_memicmp.c)
 * Callees:
 *     <none>
 */

int __cdecl memicmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  int v3; // r9d
  int v4; // eax
  signed __int64 v5; // r11
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // r10

  v3 = 0;
  v4 = 0;
  if ( Size )
  {
    v5 = (_BYTE *)Buf1 - (_BYTE *)Buf2;
    do
    {
      v6 = *((_BYTE *)Buf2 + v5);
      --Size;
      v7 = *(_BYTE *)Buf2;
      if ( v6 != *(_BYTE *)Buf2 )
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
      Buf2 = (char *)Buf2 + 1;
    }
    while ( Size );
  }
  return v3 - v4;
}
