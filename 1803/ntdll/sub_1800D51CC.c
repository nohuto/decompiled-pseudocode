/*
 * XREFs of sub_1800D51CC @ 0x1800D51CC
 * Callers:
 *     sub_180082F40 @ 0x180082F40 (sub_180082F40.c)
 *     sub_1800D3CE8 @ 0x1800D3CE8 (sub_1800D3CE8.c)
 *     sub_1800D57D0 @ 0x1800D57D0 (sub_1800D57D0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800D51CC(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 *v2; // rax
  __int64 v3; // r8

  v1 = (__int64 *)qword_18015B590;
  do
  {
    if ( v1 == &qword_18015B590 )
      return 0;
    v2 = v1;
    v1 = (__int64 *)*v1;
    v3 = v2[4];
  }
  while ( !v3 || *(_QWORD *)(v3 + 48) != a1 );
  return 1;
}
