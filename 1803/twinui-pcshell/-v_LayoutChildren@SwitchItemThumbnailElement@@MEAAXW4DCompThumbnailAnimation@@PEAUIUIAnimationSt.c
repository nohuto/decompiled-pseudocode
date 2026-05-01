/*
 * XREFs of ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x18029DE70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18026FF80 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x18027058C (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?SwitchItemLoadError_@MultitaskingViewTelemetry@@QEBAXJ@Z @ 0x18028792C (-SwitchItemLoadError_@MultitaskingViewTelemetry@@QEBAXJ@Z.c)
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180296FD0 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x18029DBC8 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 */

void __fastcall SwitchItemThumbnailElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  char v9; // al
  __int64 v10; // rbx
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rcx
  MultitaskingViewTelemetry *v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20[2]; // [rsp+68h] [rbp-18h] BYREF

  v20[0] = *(_QWORD *)(a1 + 240);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v20);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, v20, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
  CShrinkButtonElement::v_LayoutChildren(a1, a2, a3);
  v6 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
  v8 = *(_BYTE *)(a1 + 72) == 0;
  v18 = __PAIR64__(v7, v6);
  if ( !v8 )
  {
    if ( !*(_QWORD *)(a1 + 592)
      || (v6 != *(_DWORD *)(a1 + 612) || v7 != *(_DWORD *)(a1 + 616) ? (v9 = 1) : (v9 = 0), v9) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 592));
      v10 = *(_QWORD *)(a1 + 576);
      v11 = *(_QWORD *)(a1 + 240);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 592));
      v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, unsigned __int64 *, _QWORD, GUID *, __int64))(*(_QWORD *)v11 + 64LL))(
              v11,
              *(_QWORD *)(a1 + 248),
              *v12,
              0x40000000LL,
              &v18,
              0LL,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              a1 + 592);
      if ( v14 >= 0 )
      {
        *(_QWORD *)(a1 + 612) = v18;
        SwitchItemThumbnailElement::UpdateThumbnailBorder((SwitchItemThumbnailElement *)a1);
      }
      else if ( MultitaskingViewTelemetry::IsEnabled(v13) )
      {
        wil::details::static_lazy<MultitaskingViewTelemetry>::get(
          v15,
          (void (__cdecl *)())lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
        MultitaskingViewTelemetry::SwitchItemLoadError_(v16, v14);
      }
    }
  }
  v17 = *(_QWORD *)(a1 + 592);
  if ( v17 )
  {
    v20[0] = 0LL;
    v20[1] = v18;
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v17 + 24LL))(v17, v20, 0LL, 0LL);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
}
