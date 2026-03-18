/*
 * XREFs of ??1Dwm3DRECompositorThunk@@MEAA@XZ @ 0x18017A56C
 * Callers:
 *     ??_EDwm3DRECompositorThunk@@MEAAPEAXI@Z @ 0x180149D98 (--_EDwm3DRECompositorThunk@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18017A5E8 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall Dwm3DRECompositorThunk::~Dwm3DRECompositorThunk(Dwm3DRECompositorThunk *this)
{
  __int64 v2; // rcx
  HMODULE v3; // rcx

  *(_QWORD *)this = &Dwm3DRECompositorThunk::`vftable'{for `IDwm3DRECompositor'};
  *((_QWORD *)this + 1) = &Dwm3DRECompositorThunk::`vftable'{for `CMILCOMBase'};
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset((char *)this + 32);
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    (char *)this + 24,
    0LL);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (HMODULE)*((_QWORD *)this + 3);
  if ( v3 )
    FreeLibrary(v3);
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
}
