/*
 * XREFs of ?do_in@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBD1AEAPEBDPEAG3AEAPEAG@Z @ 0x180049EB0
 * Callers:
 *     ?do_length@?$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBD1_K@Z @ 0x180049C70 (-do_length@-$codecvt_utf8@G$0BAPPPP@$0A@@std@@MEBAHAEAHPEBD1_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt_utf8<unsigned short,1114111,0>::do_in(
        __int64 a1,
        _BYTE *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 **a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  unsigned int v8; // r11d
  unsigned __int8 *v11; // rbx
  unsigned __int8 v12; // al
  unsigned int v13; // r8d
  int v14; // r9d
  unsigned __int8 *v15; // rbx
  int v16; // ecx

  v8 = 0;
  *a5 = a3;
  *a8 = a6;
  if ( *a5 != a4 )
  {
    while ( 1 )
    {
      if ( *a8 == a7 )
        goto LABEL_16;
      v11 = *a5;
      v12 = **a5;
      if ( v12 >= 0x80u )
        break;
      v13 = v12;
      *a5 = v11 + 1;
LABEL_12:
      if ( !*a2 )
        *a2 = 1;
      if ( v13 > 0x10FFFF )
        return 2LL;
      *(_WORD *)*a8 = v13;
      *a8 += 2LL;
      if ( *a5 == a4 )
        goto LABEL_16;
    }
    if ( v12 < 0xC0u )
    {
      *a5 = v11 + 1;
      return 2LL;
    }
    if ( v12 >= 0xE0u )
    {
      if ( v12 >= 0xF0u )
      {
        if ( v12 >= 0xF8u )
        {
          v13 = v12 & 3;
          v14 = 5 - (v12 < 0xFCu);
        }
        else
        {
          v13 = v12 & 7;
          v14 = 3;
        }
      }
      else
      {
        v13 = v12 & 0xF;
        v14 = 2;
      }
    }
    else
    {
      v13 = v12 & 0x1F;
      v14 = 1;
    }
    if ( a4 - v11 >= (unsigned int)(v14 + 1) )
    {
      v15 = v11 + 1;
      *a5 = v15;
      while ( (unsigned __int8)(*v15 + 0x80) <= 0x3Fu )
      {
        v16 = *v15++ & 0x3F;
        v13 = (v13 << 6) | v16;
        *a5 = v15;
        if ( --v14 <= 0 )
          goto LABEL_12;
      }
      return 2LL;
    }
  }
LABEL_16:
  LOBYTE(v8) = a3 == *a5;
  return v8;
}
