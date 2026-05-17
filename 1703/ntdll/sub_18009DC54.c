/*
 * XREFs of sub_18009DC54 @ 0x18009DC54
 * Callers:
 *     sub_18009DD10 @ 0x18009DD10 (sub_18009DD10.c)
 * Callees:
 *     sub_18009EDF8 @ 0x18009EDF8 (sub_18009EDF8.c)
 */

_BOOL8 __fastcall sub_18009DC54(char a1, __int16 a2)
{
  int v3; // ebx

  v3 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a2 & 0x80u) != 0 )
  {
    sub_18009EDF8(1LL);
    v3 &= ~8u;
  }
  else if ( (a1 & 4) != 0 && (a2 & 0x200) != 0 )
  {
    sub_18009EDF8(4LL);
    v3 &= ~4u;
  }
  else if ( (a1 & 1) != 0 && (a2 & 0x400) != 0 )
  {
    sub_18009EDF8(8LL);
    v3 &= ~1u;
  }
  else if ( (a1 & 2) != 0 && (a2 & 0x800) != 0 )
  {
    if ( (a1 & 0x10) != 0 )
      sub_18009EDF8(16LL);
    v3 &= ~2u;
  }
  if ( (a1 & 0x10) != 0 && (a2 & 0x1000) != 0 )
  {
    sub_18009EDF8(32LL);
    v3 &= ~0x10u;
  }
  return v3 == 0;
}
