/*
 * XREFs of ?ItemOperationBegin@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@W4ObservableArrayOperation@@PEAUIObservableItem@@@Z @ 0x18028EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetRootElement@ElementHelpers@@YA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMultitaskingViewElement@@@Z @ 0x180294B2C (-GetRootElement@ElementHelpers@@YA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEAUIMu.c)
 *     ?SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A1234 (-SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@.c)
 */

void __fastcall CSwitchItemGrid::ItemOperationBegin(__int64 a1, __int64 a2, int a3)
{
  const struct _GUID *v4; // rdx
  int v5; // eax
  _QWORD *RootElement; // rax
  void *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 == 1 )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
    v5 = SwitchItemCloseAnimationCoordinator_CreateInstance(*(struct ISwitchThumbnailFactory **)(a1 + 632), v4, &v7);
    if ( v5 >= 0 )
    {
      RootElement = (_QWORD *)ElementHelpers::GetRootElement(v8, a1 - 224);
      (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)*RootElement + 392LL))(*RootElement, v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        597LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  }
}
