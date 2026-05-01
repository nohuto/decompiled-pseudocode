/*
 * XREFs of ?PointerUp@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180292B90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18028B0A0 (-PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInput.c)
 */

char __fastcall CMultitaskingViewFrameElement::PointerUp(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 560);
  if ( !v3 )
    return CMultitaskingViewElementBase::PointerUp((_DWORD *)a1, a2, a3);
  v7 = *(_QWORD *)(a1 + 560);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v7);
  (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, a2, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return 0;
}
