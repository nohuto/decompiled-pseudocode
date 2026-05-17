/*
 * XREFs of sub_1800DBA0C @ 0x1800DBA0C
 * Callers:
 *     sub_180088F00 @ 0x180088F00 (sub_180088F00.c)
 *     sub_1800DA5D0 @ 0x1800DA5D0 (sub_1800DA5D0.c)
 *     sub_1800DC010 @ 0x1800DC010 (sub_1800DC010.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800DBA0C(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 *v2; // rax
  __int64 v3; // r8

  v1 = (__int64 *)qword_18015A570;
  do
  {
    if ( v1 == &qword_18015A570 )
      return 0;
    v2 = v1;
    v1 = (__int64 *)*v1;
    v3 = v2[4];
  }
  while ( !v3 || *(_QWORD *)(v3 + 48) != a1 );
  return 1;
}
