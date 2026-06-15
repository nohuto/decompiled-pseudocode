/*
 * XREFs of ?IsFormatSensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180009D60
 * Callers:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180009460 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180009520 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBaseStreamGroupProxy::IsFormatSensitive(CBaseStreamGroupProxy *this)
{
  return *((_DWORD *)this + 33) != 0;
}
