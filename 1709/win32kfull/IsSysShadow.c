/*
 * XREFs of IsSysShadow @ 0x1C0144434
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSysShadow(__int64 a1)
{
  return *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) == (unsigned __int16)gatomShadow;
}
