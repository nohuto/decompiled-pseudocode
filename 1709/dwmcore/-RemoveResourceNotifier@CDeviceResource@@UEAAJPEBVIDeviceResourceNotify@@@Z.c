/*
 * XREFs of ?RemoveResourceNotifier@CDeviceResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800BDB54
 * Callers:
 *     ?RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18002B510 (-RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180165CC0 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z @ 0x180092980 (-Remove@-$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z.c)
 */

__int64 __fastcall CDeviceResource::RemoveResourceNotifier(
        CDeviceResource *this,
        const struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // ebx
  const struct IDeviceResourceNotify *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v2 = 0;
  if ( !(unsigned int)DynArray<IDeviceResourceNotify *,0>::Remove((__int64 *)this + 1, (__int64 *)&v4) )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x36u);
  }
  return v2;
}
