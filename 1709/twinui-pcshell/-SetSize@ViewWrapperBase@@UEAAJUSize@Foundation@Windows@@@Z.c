/*
 * XREFs of ?SetSize@ViewWrapperBase@@UEAAJUSize@Foundation@Windows@@@Z @ 0x18013F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180141AB0 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 */

__int64 __fastcall ViewWrapperBase::SetSize(__int64 a1, __int64 a2)
{
  ViewWrapperBase::SetDesiredPosition(
    a1 - 8,
    0LL,
    0LL,
    (unsigned int)(int)*(float *)&a2,
    (int)*((float *)&a2 + 1),
    2,
    0LL);
  return 0LL;
}
