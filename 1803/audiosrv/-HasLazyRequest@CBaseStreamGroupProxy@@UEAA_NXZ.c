/*
 * XREFs of ?HasLazyRequest@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18001F020
 * Callers:
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18001F0C0 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180045D60 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseStreamGroupProxy::HasLazyRequest(CBaseStreamGroupProxy *this)
{
  return *((_DWORD *)this + 36) != 0;
}
