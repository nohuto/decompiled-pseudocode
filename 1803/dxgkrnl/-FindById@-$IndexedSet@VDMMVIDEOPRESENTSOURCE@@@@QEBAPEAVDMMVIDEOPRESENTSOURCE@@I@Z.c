/*
 * XREFs of ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C000BA7C
 * Callers:
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00DD764 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C02244A8 (-AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV-$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rcx

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  if ( v3 != v2 )
    v4 = v3 - 8;
  while ( v4 && *(_DWORD *)(v4 + 24) != a2 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    v4 = v6 - 8;
    if ( v6 == v2 )
      v4 = 0LL;
  }
  return v4;
}
