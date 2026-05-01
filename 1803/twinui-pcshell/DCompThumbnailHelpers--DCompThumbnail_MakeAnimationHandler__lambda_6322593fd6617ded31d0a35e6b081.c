/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x1802EFF68
 * Callers:
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802F3BD0 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x1802F00A4 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_c66964d4c04018f15f5ab93036354.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *a3 = 0LL;
  v4 = a3;
  v8 = *a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v8);
  LOBYTE(v5) = 0;
  LODWORD(v4) = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_c66964d4c04018f15f5ab93036354322___lambda_6322593fd6617ded31d0a35e6b081f9a___(
                  v5,
                  &v8,
                  v6,
                  v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return (unsigned int)v4;
}
