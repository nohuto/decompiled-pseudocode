/*
 * XREFs of ??1CBitmapSourceArray@@QEAA@XZ @ 0x180045090
 * Callers:
 *     _dynamic_atexit_destructor_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x180046EB0 (_dynamic_atexit_destructor_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CBitmapSourceArray::~CBitmapSourceArray(__int64 this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
