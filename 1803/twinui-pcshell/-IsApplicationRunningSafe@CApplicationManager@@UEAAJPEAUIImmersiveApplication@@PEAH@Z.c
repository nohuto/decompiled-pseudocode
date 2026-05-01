/*
 * XREFs of ?IsApplicationRunningSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180108620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::IsApplicationRunningSafe(
        CApplicationManager *this,
        struct IImmersiveApplication *a2,
        int *a3)
{
  int v5; // edi
  int v6; // ebx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  *a3 = 0;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v6 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2)(
         a2,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         &v8);
  if ( v6 >= 0 )
  {
    LOBYTE(v5) = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 408LL))(v8) != 0;
    *a3 = v5;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (unsigned int)v6;
}
