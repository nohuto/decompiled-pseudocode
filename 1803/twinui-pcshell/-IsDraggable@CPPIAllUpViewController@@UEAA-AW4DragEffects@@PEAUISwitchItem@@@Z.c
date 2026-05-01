/*
 * XREFs of ?IsDraggable@CPPIAllUpViewController@@UEAA?AW4DragEffects@@PEAUISwitchItem@@@Z @ 0x180285B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1802840BC (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CPPIAllUpViewController::IsDraggable(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  unsigned int v2; // edi
  char v4; // si
  int v5; // eax
  __int64 (__fastcall ****v6)(CWin32ApplicationView *, struct _GUID *, void **); // rax
  struct IApplicationView *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  CWinRTApplicationView *v11; // [rsp+50h] [rbp+18h] BYREF
  CWinRTApplicationView *v12; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v10 = 0LL;
  v4 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = (**a2)(a2, &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb, &v10);
  if ( v5 >= 0 )
  {
    v6 = (__int64 (__fastcall ****)(CWin32ApplicationView *, struct _GUID *, void **))(*(__int64 (__fastcall **)(__int64, CWinRTApplicationView **))(*(_QWORD *)v10 + 24LL))(
                                                                                        v10,
                                                                                        &v11);
    v4 = 1;
    if ( TabletModePositionerHelpers::IsOperableView(*v6, v7) )
      v2 = 2;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      29LL,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewcontroller.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( (v4 & 1) != 0 )
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v2;
}
