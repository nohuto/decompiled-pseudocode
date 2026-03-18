/*
 * XREFs of ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C00E5BD0
 * Callers:
 *     ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C00E5028 (-bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C00E53B8 (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ?bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C013B4F0 (-bThicken@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDEPATHOBJ::vEndFigure(WIDEPATHOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  v1 = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v2 = (*((_QWORD *)this + 17) - v1 - 24) >> 3;
  *(_DWORD *)(v1 + 16) |= 2u;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 20LL) = v2;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                               + 8
                                                               * (*(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                              + 40LL)
                                                                                  + 20LL)
                                                                + 3LL);
}
