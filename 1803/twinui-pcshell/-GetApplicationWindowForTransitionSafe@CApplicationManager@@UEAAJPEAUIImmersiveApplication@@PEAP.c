/*
 * XREFs of ?GetApplicationWindowForTransitionSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x180107260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplicationWindowForTransitionSafe(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        HWND *a3)
{
  int v5; // ebx
  __int64 v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-28h] BYREF

  v7[1] = -2LL;
  *a3 = 0LL;
  v7[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  v5 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2)(
         a2,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, HWND *, _BYTE *))(*(_QWORD *)v7[0] + 328LL))(v7[0], a3, v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  return (unsigned int)v5;
}
