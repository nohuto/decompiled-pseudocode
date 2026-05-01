/*
 * XREFs of ?NavigateToItem@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@PEAUIUnknown@@@Z @ 0x180282930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIMultitaskingViewElementRoot@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElementRoot@@@WRL@Microsoft@@@Details@12@@Z @ 0x180280818 (--$As@UIMultitaskingViewElementRoot@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x180283700 (-_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAP.c)
 */

__int64 __fastcall CMultitaskingViewFrame::NavigateToItem(__int64 a1, int a2, __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF

  if ( a2 == 1 )
  {
    v9 = *(_QWORD *)(a1 + 2464);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v9);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v11, &v9, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewElementRoot>((_QWORD *)(a1 + 2504), &v10);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL, 1LL);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v6 = CMultitaskingViewFrame::_SetFocusToControl(a1, 1LL, &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2, &v13);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 104LL))(v13, a3);
      v5 = v6;
      if ( v6 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v11);
        return v5;
      }
      v7 = 576LL;
    }
    else
    {
      v7 = 575LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_8;
  }
  v5 = -2147467263;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x234,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)0x80004001LL);
  return v5;
}
