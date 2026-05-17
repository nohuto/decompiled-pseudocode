/*
 * XREFs of sub_1800FF090 @ 0x1800FF090
 * Callers:
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 * Callees:
 *     sub_1800F4858 @ 0x1800F4858 (sub_1800F4858.c)
 *     sub_1800FC374 @ 0x1800FC374 (sub_1800FC374.c)
 *     sub_1800FEB48 @ 0x1800FEB48 (sub_1800FEB48.c)
 */

void __fastcall sub_1800FF090(int a1)
{
  unsigned int v2; // r8d

  if ( dword_18015D014 == (unsigned int)sub_1800FC374() )
  {
    if ( a1 <= dword_18015D450 )
    {
      sub_1800FEB48();
      if ( sub_1800F4858() )
      {
        if ( (byte_18015D028 & 4) == 0 )
          __debugbreak();
      }
    }
  }
  else
  {
    LOBYTE(v2) = ~byte_18015D028;
    sub_1800F4894(0xC0000374, (ULONG_PTR)&unk_1801597B0, (v2 >> 2) & 1);
  }
}
