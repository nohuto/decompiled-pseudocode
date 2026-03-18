/*
 * XREFs of ?IsAssociatedWithSystemVisual@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NVResourceHandle@@@Z @ 0x1C008C750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::IsAssociatedWithSystemVisual(
        __int64 a1,
        int a2)
{
  __int64 v2; // r8
  _BOOL8 result; // rax

  v2 = *(_QWORD *)(a1 + 240);
  result = 0LL;
  if ( v2 )
    return *(_DWORD *)(v2 + 8) == a2;
  return result;
}
