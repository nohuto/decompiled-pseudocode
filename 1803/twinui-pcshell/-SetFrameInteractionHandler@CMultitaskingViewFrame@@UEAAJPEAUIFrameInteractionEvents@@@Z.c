/*
 * XREFs of ?SetFrameInteractionHandler@CMultitaskingViewFrame@@UEAAJPEAUIFrameInteractionEvents@@@Z @ 0x180282DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F7750 (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetFrameInteractionHandler(
        CMultitaskingViewFrame *this,
        struct IFrameInteractionEvents *a2)
{
  __int64 *v2; // rbx
  __int64 v5; // rax
  struct IFrameInteractionEvents *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+28h] [rbp-10h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)((char *)this + 2440);
  if ( a2 )
  {
    v7 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v7);
    v8[0] = (__int64)this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v8);
    v5 = *v2;
    v7 = 0LL;
    v9 = v5;
    *v2 = (__int64)a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=(v2 + 1, v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 305);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2 + 1);
  }
  return 0LL;
}
