/*
 * XREFs of ?NavigateToItem@CSwitchItemGrid@@UEAAJPEAUIUnknown@@@Z @ 0x18028F5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VCompareToItemData@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareToItemData@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18028DFDC (--$FindEx@VCompareToItemData@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElement@@@WRL@Mi.c)
 */

__int64 __fastcall CSwitchItemGrid::NavigateToItem(CSwitchItemGrid *this, struct IUnknown *a2)
{
  __int64 v3; // r8
  int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CWinRTApplicationView *v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = (CWinRTApplicationView *)a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef((__int64 *)&v7);
  v4 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<CompareToItemData>(
         (__int64 *)this - 24,
         &v7,
         v3,
         &v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 26) + 288LL))(
      (char *)this - 208,
      *(_QWORD *)(*((_QWORD *)this - 24) + 8 * v9));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EA,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
}
