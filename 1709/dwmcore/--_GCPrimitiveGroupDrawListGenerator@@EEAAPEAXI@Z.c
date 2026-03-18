/*
 * XREFs of ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180046CB0
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180046690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_GCCommandBuffer@@QEAAPEAXI@Z @ 0x18004691C (--_GCCommandBuffer@@QEAAPEAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveResourceNotifier@CHwTextureRenderTarget@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18008FA80 (-RemoveResourceNotifier@CHwTextureRenderTarget@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CPrimitiveGroupDrawListGenerator *__fastcall CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(
        CPrimitiveGroupDrawListGenerator *this,
        char a2)
{
  const struct IDeviceResourceNotify *v3; // rdx
  char *v4; // rsi
  CD2DResource *v6; // rcx
  void (*v7)(void); // rax
  LPVOID *v8; // rcx
  void **v9; // rbx
  char *v10; // rcx
  char *v11; // rcx
  char *v12; // rbx
  char *v14; // rbx

  *(_QWORD *)this = &CPrimitiveGroupDrawListGenerator::`vftable'{for `CMILRefCountBase'};
  v3 = (CPrimitiveGroupDrawListGenerator *)((char *)this + 16);
  v4 = (char *)this + 136;
  v6 = (CD2DResource *)*((_QWORD *)this + 17);
  *(_QWORD *)v3 = &CPrimitiveGroupDrawListGenerator::`vftable'{for `IDeviceResourceNotify'};
  if ( v6 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 32LL);
    if ( (char *)v7 == (char *)CD2DResource::RemoveResourceNotifier )
    {
      CD2DResource::RemoveResourceNotifier(v6, v3);
    }
    else if ( (char *)v7 == (char *)CHwTextureRenderTarget::RemoveResourceNotifier )
    {
      CHwTextureRenderTarget::RemoveResourceNotifier(v6, v3);
    }
    else
    {
      v7();
    }
  }
  v8 = (LPVOID *)*((_QWORD *)this + 3);
  if ( v8 )
    CCommandBuffer::`scalar deleting destructor'(v8);
  v9 = (void **)*((_QWORD *)this + 4);
  if ( v9 )
  {
    WPF::ProcessHeapImpl::Free(*v9);
    WPF::ProcessHeapImpl::Free(v9);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4);
  v10 = (char *)*((_QWORD *)this + 16);
  if ( v10 )
  {
    v14 = v10 - 8;
    `vector destructor iterator'(v10, 24LL, *((_QWORD *)v10 - 1), CDrawListBitmap::~CDrawListBitmap);
    WPF::ProcessHeapImpl::Free(v14);
  }
  v11 = (char *)*((_QWORD *)this + 15);
  if ( v11 )
  {
    v12 = v11 - 8;
    `vector destructor iterator'(v11, 24LL, *((_QWORD *)v11 - 1), CDrawListBitmap::~CDrawListBitmap);
    WPF::ProcessHeapImpl::Free(v12);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
