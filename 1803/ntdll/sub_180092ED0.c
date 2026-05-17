/*
 * XREFs of sub_180092ED0 @ 0x180092ED0
 * Callers:
 *     sub_180092F8C @ 0x180092F8C (sub_180092F8C.c)
 * Callees:
 *     sub_180094074 @ 0x180094074 (sub_180094074.c)
 */

_BOOL8 __fastcall sub_180092ED0(char a1, __int16 a2)
{
  int v3; // ebx

  v3 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a2 & 0x80u) != 0 )
  {
    sub_180094074(1LL);
    v3 &= ~8u;
  }
  else if ( (a1 & 4) != 0 && (a2 & 0x200) != 0 )
  {
    sub_180094074(4LL);
    v3 &= ~4u;
  }
  else if ( (a1 & 1) != 0 && (a2 & 0x400) != 0 )
  {
    sub_180094074(8LL);
    v3 &= ~1u;
  }
  else if ( (a1 & 2) != 0 && (a2 & 0x800) != 0 )
  {
    if ( (a1 & 0x10) != 0 )
      sub_180094074(16LL);
    v3 &= ~2u;
  }
  if ( (a1 & 0x10) != 0 && (a2 & 0x1000) != 0 )
  {
    sub_180094074(32LL);
    v3 &= ~0x10u;
  }
  return v3 == 0;
}
