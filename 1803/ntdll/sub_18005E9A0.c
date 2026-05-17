/*
 * XREFs of sub_18005E9A0 @ 0x18005E9A0
 * Callers:
 *     sub_18005E4EC @ 0x18005E4EC (sub_18005E4EC.c)
 *     sub_180062598 @ 0x180062598 (sub_180062598.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E9A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax

  v3 = a2 + 32 * a3;
  *(_WORD *)(v3 + 24) = *(_WORD *)(a2 + 24) - a3;
  *(_WORD *)(v3 + 26) = a3;
  *(_WORD *)(a2 + 24) = a3;
  *(_BYTE *)v3 &= ~2u;
  *(_BYTE *)v3 |= 1u;
  v4 = *(unsigned __int16 *)(v3 + 24);
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(a2 + 8);
  v5 = v3 + 32LL * v4;
  if ( v5 < 32LL * *(unsigned __int16 *)(a1 + 40) + (a2 & ~(32 * (unsigned __int64)*(unsigned __int16 *)(a1 + 40) - 1)) )
    *(_WORD *)(v5 + 26) = v4;
  return v3;
}
