/*
 * XREFs of ?PointerDown@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180292950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18028AE10 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 */

char __fastcall CMultitaskingViewFrameElement::PointerDown(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a1[32];
  if ( v5 )
  {
    LOBYTE(a3) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 72LL))(a1, v5, a3);
  }
  v7 = a1[70];
  if ( !v7 )
    return CMultitaskingViewElementBase::PointerDown((__int64)a1, a2, v4);
  v9 = a1[70];
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2, v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return 0;
}
