/*
 * XREFs of sub_180104C60 @ 0x180104C60
 * Callers:
 *     sub_18005E3C8 @ 0x18005E3C8 (sub_18005E3C8.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180031370 (RtlWalkFrameChain.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

int __fastcall sub_180104C60(__int64 *a1, unsigned __int16 *a2)
{
  __int64 v4; // rax
  __int16 v5; // si
  unsigned __int16 v6; // bx

  LODWORD(v4) = RtlWalkFrameChain((PVOID *)(*a1 + 16), 0x100u, 0);
  v5 = 8 * v4;
  if ( 8 * (_WORD)v4 )
  {
    v6 = (v5 + 23) & 0xFFF8;
    memset((void *)(*a1 + (unsigned __int16)(v5 + 16)), 0, v6 - (unsigned __int16)(v5 + 16));
    *a2 = v6;
    *(_QWORD *)(*a1 + 8) = 0LL;
    *(_WORD *)*a1 = v6;
    *(_WORD *)(*a1 + 2) = 6;
    *(_WORD *)(*a1 + 6) = v5;
    *(_WORD *)(*a1 + 4) &= ~1u;
    v4 = *a1;
    *(_WORD *)(*a1 + 4) &= 1u;
  }
  else
  {
    *a1 = 0LL;
  }
  return v4;
}
