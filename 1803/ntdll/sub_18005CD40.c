/*
 * XREFs of sub_18005CD40 @ 0x18005CD40
 * Callers:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18005CC10 @ 0x18005CC10 (sub_18005CC10.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18005CD40(__int64 a1, __int64 a2, unsigned __int64 *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  v4 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
  *a3 = v4;
  if ( v4 == a2 + 80 )
  {
    v4 += 4096LL;
    *a3 = v4;
  }
  v5 = (a2 + 16 * (*(unsigned __int16 *)(a2 + 8) - 2LL)) & 0xFFFFFFFFFFFFF000uLL;
  if ( v5 <= v4 )
    return 0;
  *a4 = v5 - v4;
  return 1;
}
