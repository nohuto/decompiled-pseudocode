/*
 * XREFs of ?do_out@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x18004D8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt_utf8<unsigned short,1114111,0>::do_out(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _BYTE *a6,
        _BYTE *a7,
        _QWORD *a8)
{
  unsigned int v8; // r11d
  _BYTE *v10; // r10
  _WORD *i; // rax
  unsigned int v13; // ebx
  int v14; // r8d
  char v15; // r9
  int v16; // ecx

  v8 = 0;
  v10 = a6;
  *a5 = a3;
  *a8 = a6;
  for ( i = (_WORD *)*a5; *a5 != a4; i = (_WORD *)*a5 )
  {
    if ( v10 == a7 )
      break;
    v13 = (unsigned __int16)*i;
    if ( v13 >= 0x80 )
    {
      if ( v13 >= 0x800 )
      {
        v14 = 2;
        v15 = (v13 >> 12) | 0xE0;
      }
      else
      {
        v14 = 1;
        v15 = (v13 >> 6) | 0xC0;
      }
    }
    else
    {
      v14 = 0;
      v15 = *i;
    }
    if ( !*a2 )
      *a2 = 1;
    if ( (__int64)&a7[-*a8] < (unsigned int)(v14 + 1) )
      break;
    *a5 += 2LL;
    *(_BYTE *)(*a8)++ = v15;
    v10 = (_BYTE *)*a8;
    if ( v14 )
    {
      v16 = 6 * v14;
      do
      {
        v16 -= 6;
        --v14;
        *v10 = (v13 >> v16) & 0x3F | 0x80;
        v10 = (_BYTE *)(*a8 + 1LL);
        *a8 = v10;
      }
      while ( v14 > 0 );
    }
  }
  LOBYTE(v8) = a3 == *a5;
  return v8;
}
