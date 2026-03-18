/*
 * XREFs of bDescStr @ 0x1C02359DC
 * Callers:
 *     bBmfdLoadFont @ 0x1C023550C (bBmfdLoadFont.c)
 *     vtfdQueryFontFile @ 0x1C0239B70 (vtfdQueryFontFile.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall bDescStr(__int64 a1, unsigned __int64 a2, void *a3)
{
  unsigned __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rbx
  char *v9; // rax
  _BYTE *v10; // rdx
  int v11; // ebx

  if ( a2 >= 0x40 && *(_WORD *)a1 == 23117 )
  {
    v5 = *(unsigned __int8 *)(a1 + 60) | ((*(unsigned __int8 *)(a1 + 61) | (*(unsigned __int16 *)(a1 + 62) << 8)) << 8);
    if ( a2 >= v5
      && a2 - v5 >= 0x40
      && (*(unsigned __int8 *)(v5 + a1) | (*(unsigned __int8 *)((*(unsigned __int8 *)(a1 + 60) | ((*(unsigned __int8 *)(a1 + 61) | (*(unsigned __int16 *)(a1 + 62) << 8)) << 8))
                                                              + a1
                                                              + 1) << 8)) == 0x454E )
    {
      v6 = *(unsigned __int8 *)(v5 + a1 + 44) | ((*(unsigned __int8 *)(v5 + a1 + 45) | (*(unsigned __int16 *)(v5 + a1 + 46) << 8)) << 8);
      v7 = *(unsigned __int8 *)(v5 + a1 + 44) | ((*(unsigned __int8 *)(v5 + a1 + 45) | (*(unsigned __int16 *)(v5 + a1 + 46) << 8)) << 8);
      if ( v7 <= a2 - 1 )
      {
        v8 = *(unsigned __int8 *)(v6 + a1);
        if ( *(_BYTE *)(v6 + a1) )
        {
          if ( a2 >= (unsigned int)(v8 + 1) && v7 <= a2 - v8 - 1 )
          {
            memmove(a3, (const void *)(v7 + a1 + 1), *(unsigned __int8 *)(v6 + a1));
            *((_BYTE *)a3 + v8) = 0;
            v9 = strchr((const char *)a3, 58);
            if ( !v9 )
              return 1LL;
            v10 = v9 + 1;
            v11 = (_DWORD)a3 - ((_DWORD)v9 + 1) + v8;
            if ( v11 )
            {
              do
              {
                if ( *v10 != 32 )
                  break;
                ++v10;
                --v11;
              }
              while ( v11 );
              if ( v11 )
              {
                memmove(a3, v10, (unsigned int)(v11 + 1));
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
