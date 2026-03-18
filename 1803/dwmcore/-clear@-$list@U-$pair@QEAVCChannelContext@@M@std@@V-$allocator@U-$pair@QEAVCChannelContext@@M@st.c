/*
 * XREFs of ?clear@?$list@U?$pair@QEAVCChannelContext@@M@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@2@@std@@QEAAXXZ @ 0x18017F3CC
 * Callers:
 *     ??1CChannelContext@@UEAA@XZ @ 0x180020FBC (--1CChannelContext@@UEAA@XZ.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x18017ED68 (--1CExpressionManager@@UEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::list<std::pair<CChannelContext * const,float>>::clear(__int64 a1)
{
  char **v1; // rax
  char *v3; // rcx
  char *v4; // rbx

  v1 = *(char ***)a1;
  v3 = **(char ***)a1;
  *v1 = (char *)v1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v3 != *(char **)a1 )
  {
    do
    {
      v4 = *(char **)v3;
      std::_Deallocate(v3, 1uLL, 0x20uLL);
      v3 = v4;
    }
    while ( v4 != *(char **)a1 );
  }
}
