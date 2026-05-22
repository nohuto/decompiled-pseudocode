/*
 * XREFs of ?UnregisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180090710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall InputConfigContextProvider::UnregisterSystemContextObserver(
        InputConfigContextProvider *this,
        struct ISystemContextObserver *a2)
{
  return SystemContextProvider::UnregisterSystemContextObserver(this, a2);
}
