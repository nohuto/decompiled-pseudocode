/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C001DFF8
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C000AF08 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0004244 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DMMVIDPNSOURCEMODE>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 == a1 + 24 )
    return 0LL;
  v5 = v2 - 8;
  while ( v5 )
  {
    if ( DMMVIDPNSOURCEMODE::operator==(v5, a2) )
      break;
    v6 = *(_QWORD *)(v5 + 8);
    v5 = v6 - 8;
    if ( v6 == a1 + 24 )
      v5 = 0LL;
  }
  return v5;
}
