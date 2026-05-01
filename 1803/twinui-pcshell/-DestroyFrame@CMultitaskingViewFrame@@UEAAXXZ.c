/*
 * XREFs of ?DestroyFrame@CMultitaskingViewFrame@@UEAAXXZ @ 0x180281E50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?MultitaskingViewFrameDismissed@MultitaskingViewTelemetry@@SAXXZ @ 0x180282494 (-MultitaskingViewFrameDismissed@MultitaskingViewTelemetry@@SAXXZ.c)
 */

void __fastcall CMultitaskingViewFrame::DestroyFrame(CMultitaskingViewFrame *this)
{
  __int64 *v1; // r14
  __int64 v3; // rcx
  HWND v4; // rcx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 2464);
  v6 = *((_QWORD *)this + 308);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v6);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v5, &v6, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  v3 = *((_QWORD *)this + 313);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 232LL))(v3);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 313) + 80LL))(*((_QWORD *)this + 313));
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 305);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 306);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 313);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 303);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 304);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 307);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 309);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 310);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 311);
  v4 = (HWND)*((_QWORD *)this + 5);
  if ( v4 )
  {
    RemovePropW(v4, L"NonRudeHWND");
    DestroyWindow(*((HWND *)this + 5));
  }
  MultitaskingViewTelemetry::MultitaskingViewFrameDismissed();
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v5);
}
