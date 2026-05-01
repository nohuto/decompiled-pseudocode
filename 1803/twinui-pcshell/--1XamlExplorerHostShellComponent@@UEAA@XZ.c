/*
 * XREFs of ??1XamlExplorerHostShellComponent@@UEAA@XZ @ 0x1801F78A4
 * Callers:
 *     ??_EXamlExplorerHostShellComponent@@UEAAPEAXI@Z @ 0x1801F7C04 (--_EXamlExplorerHostShellComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

void __fastcall XamlExplorerHostShellComponent::~XamlExplorerHostShellComponent(XamlExplorerHostShellComponent *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  volatile int *v4; // rdx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  __abi_winrt_ptr_dtor(*((_QWORD *)this + 28));
  v2 = (__int64 *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 26);
    if ( v2 != v3 )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2++);
      while ( v2 != v3 );
      v2 = (__int64 *)*((_QWORD *)this + 25);
    }
    std::_Deallocate((char *)v2, (__int64)(*((_QWORD *)this + 27) - (_QWORD)v2) >> 3, 8uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>(
    (__int64 *)this,
    v4);
}
