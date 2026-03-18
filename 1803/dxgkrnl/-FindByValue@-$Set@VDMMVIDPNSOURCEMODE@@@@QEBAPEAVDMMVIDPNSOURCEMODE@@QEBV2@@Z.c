/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0024DD0
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003B98 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0005A08 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DMMVIDPNSOURCEMODE>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v6; // rcx

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  if ( v3 != v2 )
    v4 = v3 - 8;
  while ( v4 && !DMMVIDPNSOURCEMODE::operator==(v4, a2) )
  {
    v6 = *(_QWORD *)(v4 + 8);
    v4 = v6 - 8;
    if ( v6 == v2 )
      v4 = 0LL;
  }
  return v4;
}
