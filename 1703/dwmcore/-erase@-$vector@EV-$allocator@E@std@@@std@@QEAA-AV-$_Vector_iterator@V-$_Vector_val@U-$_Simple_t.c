/*
 * XREFs of ?erase@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@2@0@Z @ 0x1801BFD68
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180008780 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 * Callees:
 *     <none>
 */

char **__fastcall std::vector<unsigned char>::erase(_QWORD *a1, char **a2, char *a3, char *a4)
{
  size_t v7; // rdi
  char **result; // rax

  if ( a3 == (char *)*a1 && a4 == (char *)a1[1] )
  {
    a1[1] = *a1;
  }
  else if ( a3 != a4 )
  {
    v7 = a1[1] - (_QWORD)a4;
    memmove(a3, a4, v7);
    a1[1] = &a3[v7];
  }
  result = a2;
  *a2 = a3;
  return result;
}
