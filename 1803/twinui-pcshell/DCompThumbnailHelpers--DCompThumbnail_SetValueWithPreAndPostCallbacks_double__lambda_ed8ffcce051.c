/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x1802F5868
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x1802F56A8 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_9IVirtualDesktopNotification@@$BCA@AA @ 0x1800AF950 (--_9IVirtualDesktopNotification@@$BCA@AA.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x1802F55D8 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564_ea_1802F55D8.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 *v8; // rdi
  int AnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d; // ebx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = *a5;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v8 = a6;
  a5 = (__int128 *)*a6;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&a5);
  AnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___((__int64)&v11, (__int64 *)&a5, a7, &v12);
  if ( AnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d >= 0 )
    AnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d =  IVirtualDesktopNotification::`vcall'{32,{flat}}(a1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  return (unsigned int)AnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d;
}
