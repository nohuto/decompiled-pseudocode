/*
 * XREFs of ?SetAppWindow@CImmersiveWindowFactoryBase@@UEAAJJ@Z @ 0x1801DFD60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::SetAppWindow(CImmersiveWindowFactoryBase *this, int a2)
{
  bool v3; // zf

  v3 = *((_DWORD *)this + 9) == 0;
  *((_QWORD *)this + 3) = a2;
  if ( !v3 )
    SetPropW((HWND)a2, L"Microsoft.Windows.WindowFactory.ExtraData", (HANDLE)*((unsigned int *)this + 9));
  if ( *((_DWORD *)this + 10) )
    SetPropW(*((HWND *)this + 3), L"Microsoft.Windows.WindowFactory.ViewId", (HANDLE)*((unsigned int *)this + 10));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 12) + 88LL))((char *)this - 96);
  return 0LL;
}
