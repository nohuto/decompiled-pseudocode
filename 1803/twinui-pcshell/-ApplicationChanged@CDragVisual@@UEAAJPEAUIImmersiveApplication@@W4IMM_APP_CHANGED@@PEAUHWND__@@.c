/*
 * XREFs of ?ApplicationChanged@CDragVisual@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1802F0940
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 */

__int64 __fastcall CDragVisual::ApplicationChanged(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1[4];
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v10);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v9, &v10, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v7 = a1[5];
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 104LL))(v7, a2, &v10);
    if ( (_DWORD)v10 )
    {
      if ( a1[15] != a4 && a1[8] )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*(a1 - 2) + 64LL))(a1 - 2, a1[5]);
    }
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v9);
  return 0LL;
}
