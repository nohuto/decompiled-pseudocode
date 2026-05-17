/*
 * XREFs of sub_1800D57D0 @ 0x1800D57D0
 * Callers:
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1800D4CE4 @ 0x1800D4CE4 (sub_1800D4CE4.c)
 *     sub_1800D51CC @ 0x1800D51CC (sub_1800D51CC.c)
 */

void sub_1800D57D0()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi

  v0 = (__int64 *)qword_18015C370;
  while ( v0 != &qword_18015C370 )
  {
    v1 = (__int64)v0;
    v0 = (__int64 *)*v0;
    if ( sub_1800D51CC(*(_QWORD *)(v1 + 48)) )
    {
      if ( (dword_18015D498 & 1) != 0 )
        DbgPrint("AVRF: skipped resnapping provider %ws ... \n", *(_QWORD *)(v1 + 96));
    }
    else
    {
      if ( (dword_18015D498 & 1) != 0 )
        DbgPrint("AVRF: resnapping %ws ... \n", *(_QWORD *)(v1 + 96));
      sub_1800D4CE4(v1);
    }
  }
}
