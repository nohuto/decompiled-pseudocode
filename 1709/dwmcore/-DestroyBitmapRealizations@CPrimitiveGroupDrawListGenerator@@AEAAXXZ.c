/*
 * XREFs of ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18011B864
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?NotifyInvalidResource@CPrimitiveGroupDrawListGenerator@@UEAAXPEBVIDeviceResource@@@Z @ 0x180152750 (-NotifyInvalidResource@CPrimitiveGroupDrawListGenerator@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(CPrimitiveGroupDrawListGenerator *this)
{
  char *v2; // rcx
  char *v3; // rbx
  char *v4; // rcx
  char *v5; // rbx
  __int64 v6; // rcx

  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  v2 = (char *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    v3 = v2 - 8;
    `vector destructor iterator'(v2, 24LL, *((_QWORD *)v2 - 1), CDrawListBitmap::~CDrawListBitmap);
    WPF::ProcessHeapImpl::Free(v3);
    *((_QWORD *)this + 15) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    v5 = v4 - 8;
    `vector destructor iterator'(v4, 24LL, *((_QWORD *)v4 - 1), CDrawListBitmap::~CDrawListBitmap);
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 16) = 0LL;
  }
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 32LL))(v6, (char *)this + 16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  }
}
