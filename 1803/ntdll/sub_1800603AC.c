/*
 * XREFs of sub_1800603AC @ 0x1800603AC
 * Callers:
 *     sub_180060360 @ 0x180060360 (sub_180060360.c)
 *     sub_180060DF0 @ 0x180060DF0 (sub_180060DF0.c)
 *     RtlCompactHeap @ 0x1800EAF00 (RtlCompactHeap.c)
 * Callees:
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 *     sub_18006073C @ 0x18006073C (sub_18006073C.c)
 */

__int64 __fastcall sub_1800603AC(__int64 a1, int a2)
{
  int v2; // r8d
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  unsigned int v7; // ebx

  v2 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 64);
  v5 = a2 | v2 & 0x13000003;
  v6 = 0;
  if ( v4 )
    LOBYTE(v6) = v4 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v7 = v5 | 1;
  if ( !v6 )
    v7 = v5;
  sub_18006073C(a1 + 512, v7);
  sub_180060414(a1 + 112, v7);
  sub_180060414(a1 + 232, v7);
  return 0LL;
}
