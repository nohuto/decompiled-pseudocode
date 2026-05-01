/*
 * XREFs of ??_GCImmersiveShellComponent@@UEAAPEAXI@Z @ 0x18001F410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CImmersiveShellComponent *__fastcall CImmersiveShellComponent::`scalar deleting destructor'(
        CImmersiveShellComponent *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CImmersiveShellComponent::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 1) = &CImmersiveShellComponentWithSite::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    CoTaskMemFree(v5);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
