/*
 * XREFs of Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5_____lambda_3d6638088535fad8bc54773006e1fbb5__&___ptr64_void_____ptr64_&___ptr64_ @ 0x18029CF28
 * Callers:
 *     ObservableProperty_HWND_______ptr64_::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___ @ 0x18029CE3C (ObservableProperty_HWND_______ptr64_--AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18027BB48 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Mic.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5_____lambda_3d6638088535fad8bc54773006e1fbb5______ptr64_void_____ptr64_____ptr64_(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = *a2;
    v10 = v7;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v10);
    v8 = *a3;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>(v6);
    *v6 = off_180342E00;
    v6[2] = v7;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v6 + 2);
    v6[3] = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v6;
  }
  return a1;
}
