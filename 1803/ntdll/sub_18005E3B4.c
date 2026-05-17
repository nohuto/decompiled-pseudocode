/*
 * XREFs of sub_18005E3B4 @ 0x18005E3B4
 * Callers:
 *     sub_18002302C @ 0x18002302C (sub_18002302C.c)
 *     sub_18005DC24 @ 0x18005DC24 (sub_18005DC24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005E3B4(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  *(_QWORD *)(a2 + 16) = a2 ^ a1 ^ qword_18015A440 ^ 0xA2E64EADA2E64EADuLL;
  result = a1 + 32;
  v3 = *(unsigned __int64 **)(a1 + 40);
  if ( *v3 != a1 + 32 )
    __fastfail(3u);
  *(_QWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  *(_QWORD *)(a1 + 40) = a2;
  ++*(_QWORD *)(a1 + 48);
  return result;
}
