/*
 * XREFs of ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x1801501AC
 * Callers:
 *     ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180150210 (-NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x180150370 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x180159530 (-NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CBitmapOfDeviceBitmaps@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801ACA30 (-NotifyInvalidResource@CBitmapOfDeviceBitmaps@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CColorKeyBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D1AD0 (-NotifyInvalidResource@CColorKeyBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceResource::NotifyInvalid(CDeviceResource *this, const struct IDeviceResource *a2)
{
  int v3; // edi
  void (__fastcall ***v5)(_QWORD, const struct IDeviceResource *); // rcx

  v3 = *((_DWORD *)this + 8);
  (*(void (__fastcall **)(CDeviceResource *))(*(_QWORD *)this + 8LL))(this);
  while ( v3 )
  {
    v5 = *(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 1)
                                                                         + 8LL * (unsigned int)--v3);
    (**v5)(v5, a2);
  }
  (*(void (__fastcall **)(CDeviceResource *))(*(_QWORD *)this + 16LL))(this);
}
