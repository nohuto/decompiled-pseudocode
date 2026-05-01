/*
 * XREFs of ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x18027160C
 * Callers:
 *     ??$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewManager@@$$QEAUMultitaskingViewManagerInitializeArgs@3@@Z @ 0x180270658 (--$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Det.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x18008FFB0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z @ 0x18014CD7C (--4-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInspectable@@@Z.c)
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x1802674D0 (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 */

__int64 __fastcall CMultitaskingViewManager::RuntimeClassInitialize(
        CMultitaskingViewManager *this,
        const struct CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs *a2)
{
  int inited; // edi
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  inited = CObjectWithThreadUseDetection::InitApartmentId((CMultitaskingViewManager *)((char *)this + 40));
  if ( inited < 0 )
  {
    v5 = 128LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  inited = ForegroundStaging::Initialize((CMultitaskingViewManager *)((char *)this + 304));
  if ( inited < 0 )
  {
    v5 = 132LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  inited = CoCreateInstance(
             &CLSID_SwitchThumbnailDeviceManager,
             0LL,
             1u,
             &GUID_10d320fe_985c_476a_a6b7_81f8e2d1881e,
             (LPVOID *)this + 39);
  if ( inited < 0 )
  {
    v5 = 135LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 160LL))(*((_QWORD *)this + 39));
  v7 = *((_QWORD *)this + 11);
  v8 = *(_QWORD *)a2;
  if ( v7 != *(_QWORD *)a2 )
  {
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)a2);
      v7 = *((_QWORD *)this + 11);
    }
    v11 = v7;
    *((_QWORD *)this + 11) = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 12, *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 104);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 14, *((_QWORD *)a2 + 3));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 15, *((_QWORD *)a2 + 4));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 16, *((_QWORD *)a2 + 5));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 17, *((_QWORD *)a2 + 6));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 18, *((_QWORD *)a2 + 7));
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 152);
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 160);
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 168);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 22, *((_QWORD *)a2 + 11));
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 184);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 24, *((_QWORD *)a2 + 13));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 25, *((_QWORD *)a2 + 14));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 26, *((_QWORD *)a2 + 15));
  Microsoft::WRL::ComPtr<IInspectable>::operator=((UAPViewWrapper **)this + 27, *((UAPViewWrapper **)a2 + 18));
  Microsoft::WRL::ComPtr<IInspectable>::operator=((UAPViewWrapper **)this + 28, *((UAPViewWrapper **)a2 + 19));
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 240);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 29, *((_QWORD *)a2 + 16));
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 256);
  v9 = *((_QWORD *)a2 + 20);
  if ( *((_QWORD *)this + 31) != v9 )
  {
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)a2 + 20));
    v11 = *((_QWORD *)this + 31);
    *((_QWORD *)this + 31) = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 264);
  return 0LL;
}
