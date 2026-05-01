/*
 * XREFs of ?GetTitleSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAG@Z @ 0x180107B30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetTitleSafe(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        unsigned __int16 **a3)
{
  int v5; // ebx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  v5 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2)(
         a2,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v7 + 480LL))(v7, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return (unsigned int)v5;
}
