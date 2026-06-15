/*
 * XREFs of ?HasLazyRequest@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000A950
 * Callers:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180009460 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180009520 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBaseStreamGroupProxy::HasLazyRequest(CBaseStreamGroupProxy *this)
{
  return *((_DWORD *)this + 34) != 0;
}
