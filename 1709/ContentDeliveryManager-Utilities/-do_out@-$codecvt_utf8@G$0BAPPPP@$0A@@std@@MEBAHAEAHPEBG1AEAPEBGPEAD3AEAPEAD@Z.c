/*
 * XREFs of ?do_out@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBG1AEAPEBGPEAD3AEAPEAD@Z @ 0x180049D40
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
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  unsigned int v8; // edi
  unsigned int v12; // r8d
  char v13; // r10
  int v14; // r9d
  _BYTE *v15; // rdx
  int v16; // ecx

  v8 = 0;
  *a5 = a3;
  *a8 = a6;
  while ( *a5 != a4 )
  {
    if ( *a8 == a7 )
      break;
    v12 = *(unsigned __int16 *)*a5;
    if ( v12 >= 0x80 )
    {
      if ( v12 >= 0x800 )
      {
        v14 = 2;
        v13 = (v12 >> 12) | 0xE0;
      }
      else
      {
        v14 = 1;
        v13 = (v12 >> 6) | 0xC0;
      }
    }
    else
    {
      v13 = *(_WORD *)*a5;
      v14 = 0;
    }
    if ( !*a2 )
      *a2 = 1;
    if ( a7 - *a8 < (unsigned int)(v14 + 1) )
      break;
    *a5 += 2LL;
    *(_BYTE *)(*a8)++ = v13;
    v15 = (_BYTE *)*a8;
    if ( v14 )
    {
      v16 = 6 * v14;
      do
      {
        v16 -= 6;
        --v14;
        *v15 = (v12 >> v16) & 0x3F | 0x80;
        v15 = (_BYTE *)++*a8;
      }
      while ( v14 > 0 );
    }
  }
  LOBYTE(v8) = a3 == *a5;
  return v8;
}
