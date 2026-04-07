/*
 * XREFs of _anonymous_namespace_::IsFodInstalled @ 0x1800738A4
 * Callers:
 *     ?EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ @ 0x18001036C (-EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ.c)
 *     _anonymous_namespace_::FodWaiter @ 0x180073570 (_anonymous_namespace_--FodWaiter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

char __fastcall anonymous_namespace_::IsFodInstalled(__int64 *a1)
{
  __int64 v1; // rbx
  char v3; // di
  __int64 v4; // rbx
  int v5; // [rsp+70h] [rbp+20h] BYREF
  int v6; // [rsp+78h] [rbp+28h] BYREF
  __int64 v7; // [rsp+80h] [rbp+30h] BYREF
  __int64 v8; // [rsp+88h] [rbp+38h] BYREF

  v1 = *a1;
  if ( !*a1 )
    return 0;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v3 = 1;
  if ( (*(int (__fastcall **)(__int64, __int64, const wchar_t *))(*(_QWORD *)v1 + 144LL))(
         v1,
         1LL,
         L"Analog.Holographic.Desktop") >= 0 )
  {
    v7 = 0LL;
    v5 = 0;
    v4 = v8;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
    if ( (*(int (__fastcall **)(__int64, __int64, __int64 *, int *))(*(_QWORD *)v4 + 24LL))(v4, 1LL, &v7, &v5) >= 0
      && v7 )
    {
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 152LL))(v7, &v6) < 0 || v6 != 7 )
        v3 = 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  }
  v3 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return v3;
}
