/*
 * XREFs of ??$MakeAndInitialize@VAppRequestOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppRequestOperation@@@Z @ 0x1801E3D90
 * Callers:
 *     ?RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1801E62C0 (-RequestCloseAsync@ViewWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@View.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0AppRequestOperation@@QEAA@XZ @ 0x1801E443C (--0AppRequestOperation@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppRequestOperation,AppRequestOperation,>(
        AppRequestOperation **a1)
{
  unsigned int v2; // edi
  AppRequestOperation *v3; // rax
  AppRequestOperation *v4; // rbx
  AppRequestOperation *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (AppRequestOperation *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = AppRequestOperation::AppRequestOperation(v3);
    v6 = v4;
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v4 + 2) + 104LL))((__int64)v4 + 16);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v6);
    *a1 = v4;
    (*(void (__fastcall **)(AppRequestOperation *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
