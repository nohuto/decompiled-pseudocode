/*
 * XREFs of ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180071BF0
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800705D0 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??_ECDrawListBitmap@@QEAAPEAXI@Z @ 0x1800772E4 (--_ECDrawListBitmap@@QEAAPEAXI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CPrimitiveGroupDrawListGenerator *__fastcall CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(
        CPrimitiveGroupDrawListGenerator *this,
        char a2)
{
  const struct IDeviceResourceNotify *v3; // rdx
  __int64 *v4; // rsi
  CD2DResource *v6; // rcx
  void (*v7)(void); // rax
  void **v8; // rdi
  void **v9; // rdi
  void *v10; // rdi
  unsigned int v11; // edx
  CDrawListBitmap *v12; // rcx
  CDrawListBitmap *v13; // rcx

  *(_QWORD *)this = &CPrimitiveGroupDrawListGenerator::`vftable'{for `CMILRefCountBase'};
  v3 = (CPrimitiveGroupDrawListGenerator *)((char *)this + 16);
  v4 = (__int64 *)((char *)this + 128);
  v6 = (CD2DResource *)*((_QWORD *)this + 16);
  *(_QWORD *)v3 = &CPrimitiveGroupDrawListGenerator::`vftable'{for `IDeviceResourceNotify'};
  if ( v6 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 32LL);
    if ( (char *)v7 == (char *)CD2DResource::RemoveResourceNotifier )
      CD2DResource::RemoveResourceNotifier(v6, v3);
    else
      v7();
  }
  v8 = (void **)*((_QWORD *)this + 3);
  if ( v8 )
  {
    operator delete(*v8);
    operator delete(v8, 0x10uLL);
  }
  v9 = (void **)*((_QWORD *)this + 4);
  if ( v9 )
  {
    operator delete(*v9);
    operator delete(v9, 0x10uLL);
  }
  v10 = (void *)*((_QWORD *)this + 17);
  if ( v10 )
  {
    FastRegion::CRegion::FreeMemory(*((FastRegion::CRegion **)this + 17));
    operator delete(v10, 0x48uLL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4);
  v12 = (CDrawListBitmap *)*((_QWORD *)this + 15);
  if ( v12 )
    CDrawListBitmap::`vector deleting destructor'(v12, v11);
  v13 = (CDrawListBitmap *)*((_QWORD *)this + 14);
  if ( v13 )
    CDrawListBitmap::`vector deleting destructor'(v13, v11);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
