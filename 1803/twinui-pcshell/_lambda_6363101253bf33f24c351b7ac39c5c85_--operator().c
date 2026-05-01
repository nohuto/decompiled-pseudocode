/*
 * XREFs of _lambda_6363101253bf33f24c351b7ac39c5c85_::operator() @ 0x180115A4C
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x1801162B0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_6363101253bf33f24c351b7ac39c5c85_::operator()(unsigned int *a1, __int64 a2)
{
  char v4; // bp
  bool v5; // bl
  struct IUnknown *v7; // [rsp+58h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2);
  if ( (v4 & 1) != 0 )
  {
    if ( !*((_QWORD *)a1 + 1)
      || (v7 = 0LL,
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7),
          (*(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)a2 + 464LL))(a2, &v7),
          v5 = (unsigned int)SHIsSameObject(*((struct IUnknown **)a1 + 1), v7) != 0,
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7),
          v5) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)a2 + 264LL))(
             a2,
             a1[1],
             *a1,
             0LL,
             0)
        && (v4 & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 2) + 64LL))(*((_QWORD *)a1 + 2), a2);
      }
    }
  }
  return 1;
}
