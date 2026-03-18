/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0021268
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z @ 0x1C000A2B0 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJV-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@@Z.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C00074CC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DMMVIDPNSOURCEMODE>::FindByValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdx

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 == a1 + 24 )
    return 0LL;
  v7 = v4 - 8;
  while ( v7 )
  {
    if ( DMMVIDPNSOURCEMODE::operator==(v7, a2, a3, a4) )
      break;
    v8 = *(_QWORD *)(v7 + 8);
    v7 = v8 - 8;
    if ( v8 == a1 + 24 )
      v7 = 0LL;
  }
  return v7;
}
