/*
 * XREFs of IsSysShadow @ 0x1C013E2CC
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     xxxAddShadow @ 0x1C011EA6C (xxxAddShadow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSysShadow(__int64 a1)
{
  return *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) == (unsigned __int16)gatomShadow;
}
