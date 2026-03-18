/*
 * XREFs of ?RemoveResourceNotifier@CRenderTargetBitmap@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180047560
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z @ 0x18004C09C (-Remove@-$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderTargetBitmap::RemoveResourceNotifier(
        CRenderTargetBitmap *this,
        const struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // ebx
  const struct IDeviceResourceNotify *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v2 = 0;
  if ( !(unsigned int)DynArray<IDeviceResourceNotify *,0>::Remove((char *)this + 40, &v4) )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x139u);
  }
  return v2;
}
