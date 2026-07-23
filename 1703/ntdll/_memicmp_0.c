/*
 * XREFs of _memicmp_0 @ 0x180096C98
 * Callers:
 *     _memicmp @ 0x180096CF0 (_memicmp.c)
 * Callees:
 *     <none>
 */

int __cdecl memicmp_0(const void *_Buf1, const void *_Buf2, size_t _Size)
{
  int v3; // r9d
  int v4; // eax
  signed __int64 v5; // r11
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // r10

  v3 = 0;
  v4 = 0;
  if ( _Size )
  {
    v5 = (_BYTE *)_Buf1 - (_BYTE *)_Buf2;
    do
    {
      v6 = *((_BYTE *)_Buf2 + v5);
      --_Size;
      v7 = *(_BYTE *)_Buf2;
      if ( v6 != *(_BYTE *)_Buf2 )
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
      _Buf2 = (char *)_Buf2 + 1;
    }
    while ( _Size );
  }
  return v3 - v4;
}
