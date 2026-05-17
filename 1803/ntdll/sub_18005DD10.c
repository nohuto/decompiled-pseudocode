/*
 * XREFs of sub_18005DD10 @ 0x18005DD10
 * Callers:
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18005DD10(unsigned __int64 a1, __int64 a2, __int128 *a3, int a4, int a5, _DWORD *a6)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 i; // rcx
  __int64 result; // rax

  memset((void *)a1, 0, 0x78uLL);
  v10 = *a3;
  v11 = a3[1];
  *(_DWORD *)(a1 + 116) = 0;
  *(_OWORD *)(a1 + 72) = v10;
  *(_QWORD *)(a1 + 64) = a2 ^ a1;
  *(_QWORD *)&v10 = *((_QWORD *)a3 + 4);
  *(_OWORD *)(a1 + 88) = v11;
  *(_DWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 104) = v10;
  *(_DWORD *)(a1 + 112) = *a6;
  for ( i = 0LL; i < 4; ++i )
    *(_QWORD *)(a1 + 8 * i + 72) ^= a1 ^ qword_18015A440;
  result = *(_QWORD *)(a1 + 104);
  if ( result )
  {
    result ^= a1 ^ qword_18015A440;
    *(_QWORD *)(a1 + 104) = result;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
