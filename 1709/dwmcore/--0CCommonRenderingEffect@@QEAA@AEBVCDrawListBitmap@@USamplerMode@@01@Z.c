/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x18001FD04
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A670 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180048580 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)(a1 + 16),
    24LL,
    2LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CDrawListBitmap::CDrawListBitmap);
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)(a1 + 64),
    3LL,
    2LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))SamplerMode::SamplerMode);
  CDrawListBitmap::operator=(a1 + 16, a2);
  CDrawListBitmap::operator=(a1 + 40, a4);
  *(_WORD *)(a1 + 64) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 66) = *(_BYTE *)(a3 + 2);
  *(_WORD *)(a1 + 67) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 69) = *(_BYTE *)(a5 + 2);
  return a1;
}
