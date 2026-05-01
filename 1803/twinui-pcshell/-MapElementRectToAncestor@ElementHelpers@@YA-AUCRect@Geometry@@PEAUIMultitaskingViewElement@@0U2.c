/*
 * XREFs of ?MapElementRectToAncestor@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U23@@Z @ 0x180294C94
 * Callers:
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x180294BA4 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 *     ?GetDestinationRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x180298828 (-GetDestinationRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUt.c)
 *     ?GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1802A4E7C (-GetDragSourceLocation@ElementDragData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F7750 (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x180282410 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 */

__m128i *__fastcall ElementHelpers::MapElementRectToAncestor(__m128i *a1, __int64 a2, struct IUnknown *a3, __m128i *a4)
{
  struct IUnknown *v7; // rbx
  struct IMultitaskingViewElement *v8; // r8
  int *v9; // rax
  __m128i v10; // xmm0
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  __int64 *v14; // rax
  struct IUnknown *v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h] BYREF
  char v18[8]; // [rsp+30h] [rbp-20h] BYREF
  __m128i v19; // [rsp+38h] [rbp-18h]

  v16 = (struct IUnknown *)a2;
  v7 = (struct IUnknown *)a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v16);
  while ( v7 && !ElementHelpers::IsSameElement(v7, a3, v8) )
  {
    v9 = (int *)((__int64 (__fastcall *)(struct IUnknown *, char *))v7->lpVtbl[5].QueryInterface)(v7, v18);
    v19 = *a4;
    v10 = v19;
    v11 = *v9;
    v12 = -v9[1];
    v19.m128i_i32[3] -= v9[1];
    v13 = -v11;
    v19.m128i_i32[2] += v13;
    v19.m128i_i32[1] += v12;
    v19.m128i_i32[0] = v13 + _mm_cvtsi128_si32(v10);
    *a4 = v19;
    v14 = (__int64 *)((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v7->lpVtbl[1].QueryInterface)(v7, &v17);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=((__int64 *)&v16, v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v7 = v16;
  }
  *a1 = *a4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return a1;
}
