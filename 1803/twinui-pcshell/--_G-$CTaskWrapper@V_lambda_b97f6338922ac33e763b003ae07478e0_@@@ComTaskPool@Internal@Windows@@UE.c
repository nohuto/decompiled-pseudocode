/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_b97f6338922ac33e763b003ae07478e0_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1802C28D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x180010B90 (--1-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_b97f6338922ac33e763b003ae07478e0_>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  void *v4; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 24));
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)(a1 + 16));
  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v4);
  return a1;
}
