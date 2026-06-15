/*
 * XREFs of ?HasLazyRequest@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18000DFE0
 * Callers:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000E010 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000E0D0 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseStreamGroupProxy::HasLazyRequest(CBaseStreamGroupProxy *this)
{
  return *((_DWORD *)this + 36) != 0;
}
