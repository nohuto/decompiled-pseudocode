/*
 * XREFs of ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18013E3C0
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x180072BEC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?NotifyInvalidResource@CPrimitiveGroupDrawListGenerator@@UEAAXPEBVIDeviceResource@@@Z @ 0x18017B870 (-NotifyInvalidResource@CPrimitiveGroupDrawListGenerator@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_ECDrawListBitmap@@QEAAPEAXI@Z @ 0x1800772E4 (--_ECDrawListBitmap@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(CPrimitiveGroupDrawListGenerator *this)
{
  CDrawListBitmap *v2; // rcx
  CDrawListBitmap *v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  v2 = (CDrawListBitmap *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v2 )
    CDrawListBitmap::`vector deleting destructor'(v2);
  v3 = (CDrawListBitmap *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v3 )
    CDrawListBitmap::`vector deleting destructor'(v3);
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 32LL))(v4, (char *)this + 16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  }
}
