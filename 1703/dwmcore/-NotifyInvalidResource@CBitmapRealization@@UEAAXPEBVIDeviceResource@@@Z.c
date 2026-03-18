/*
 * XREFs of ?NotifyInvalidResource@CBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x18015AA60
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801B5D80 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801B72B0 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800474A8 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapRealization::NotifyInvalidResource(CBitmapRealization *this, const struct IDeviceResource *a2)
{
  int v2; // esi
  char *v3; // rbx
  __int64 v4; // rdi
  void (__fastcall ***v7)(_QWORD, const struct IDeviceResource *); // rcx

  v2 = *((_DWORD *)this + 90);
  v3 = (char *)this - 24;
  v4 = *((_QWORD *)this + 41);
  if ( v4 )
  {
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(*((CRenderTargetBitmap **)this + 41));
    *(_BYTE *)(v4 + 229) = 0;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
  while ( v2 > 0 )
  {
    v7 = *(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 42)
                                                                         + 8LL * (unsigned int)(v2 - 1));
    (**v7)(v7, a2);
    --v2;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
}
