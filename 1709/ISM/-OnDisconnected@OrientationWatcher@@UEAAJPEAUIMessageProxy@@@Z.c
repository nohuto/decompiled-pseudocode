/*
 * XREFs of ?OnDisconnected@OrientationWatcher@@UEAAJPEAUIMessageProxy@@@Z @ 0x18006DE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OrientationWatcher::OnDisconnected(OrientationWatcher *this, struct IMessageProxy *a2)
{
  *((_BYTE *)this + 24) = 0;
  return 0LL;
}
