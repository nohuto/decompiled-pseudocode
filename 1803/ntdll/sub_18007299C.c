/*
 * XREFs of sub_18007299C @ 0x18007299C
 * Callers:
 *     sub_1800728E0 @ 0x1800728E0 (sub_1800728E0.c)
 * Callees:
 *     sub_180085C54 @ 0x180085C54 (sub_180085C54.c)
 */

void __fastcall sub_18007299C(__int64 a1)
{
  unsigned __int8 i; // bl
  unsigned int v3; // ecx
  _BYTE *v4; // rax
  __int64 v5; // rax

  if ( *(__int16 *)(a1 + 98) < 0 )
  {
    for ( i = 0; i < 0x40u; ++i )
    {
      v3 = 0;
      v4 = (_BYTE *)(a1 + 150);
      while ( !*(v4 - 2) || *v4 != i )
      {
        ++v3;
        v4 += 24;
        if ( v3 >= 4 )
        {
          v5 = 0LL;
          goto LABEL_7;
        }
      }
      v5 = a1 + 8 * (3LL * v3 + 16);
LABEL_7:
      if ( v5 )
        sub_180085C54(i, a1);
    }
  }
}
