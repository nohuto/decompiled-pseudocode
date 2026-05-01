/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___ @ 0x1802975E4
 * Callers:
 *     ?AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@_N@Z @ 0x180297CF4 (-AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___ @ 0x18029764C (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = a3;
  v8 = *a1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v8);
  LOBYTE(v6) = 0;
  LODWORD(v4) = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___(
                  v6,
                  &v8,
                  a2,
                  v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return (unsigned int)v4;
}
