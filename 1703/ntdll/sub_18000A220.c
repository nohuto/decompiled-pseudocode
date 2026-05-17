/*
 * XREFs of sub_18000A220 @ 0x18000A220
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     sub_18001F314 @ 0x18001F314 (sub_18001F314.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000A220(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  *(_QWORD *)(a2 + 16) = a1 ^ qword_18015BFA8 ^ (a2 >> 20) ^ 0xA2E64EADA2E64EADuLL;
  result = a1 + 96;
  v3 = *(unsigned __int64 **)(a1 + 104);
  if ( *v3 != a1 + 96 )
    __fastfail(3u);
  *(_QWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  *(_QWORD *)(a1 + 104) = a2;
  ++*(_QWORD *)(a1 + 112);
  return result;
}
