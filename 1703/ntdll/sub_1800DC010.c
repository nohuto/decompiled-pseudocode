/*
 * XREFs of sub_1800DC010 @ 0x1800DC010
 * Callers:
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800DB530 @ 0x1800DB530 (sub_1800DB530.c)
 *     sub_1800DBA0C @ 0x1800DBA0C (sub_1800DBA0C.c)
 */

void sub_1800DC010()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi

  v0 = (__int64 *)qword_18015B350;
  while ( v0 != &qword_18015B350 )
  {
    v1 = (__int64)v0;
    v0 = (__int64 *)*v0;
    if ( sub_1800DBA0C(*(_QWORD *)(v1 + 48)) )
    {
      if ( (dword_18015C494 & 1) != 0 )
        DbgPrint("AVRF: skipped resnapping provider %ws ... \n", *(_QWORD *)(v1 + 96));
    }
    else
    {
      if ( (dword_18015C494 & 1) != 0 )
        DbgPrint("AVRF: resnapping %ws ... \n", *(_QWORD *)(v1 + 96));
      sub_1800DB530(v1);
    }
  }
}
