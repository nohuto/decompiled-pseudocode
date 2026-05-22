/*
 * XREFs of ?OnConnected@OrientationWatcher@@UEAAJPEAUIMessageProxy@@@Z @ 0x18006DE20
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCurrentOrientation@OrientationWatcher@@IEAAXXZ @ 0x18006DE6C (-CheckCurrentOrientation@OrientationWatcher@@IEAAXXZ.c)
 */

__int64 __fastcall OrientationWatcher::OnConnected(OrientationWatcher *this, struct IMessageProxy *a2)
{
  *((_BYTE *)this + 24) = 1;
  OrientationWatcher::CheckCurrentOrientation((OrientationWatcher *)((char *)this - 16));
  return 0LL;
}
