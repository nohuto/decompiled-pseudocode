/*
 * XREFs of ?ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1801AE2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AA320 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B1AA8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     _LogEventWithViewHostItemData @ 0x1801B2B30 (_LogEventWithViewHostItemData.c)
 *     ?_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B3C58 (-_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::ExitFullScreenForView(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  HolographicPositioner *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = (HolographicPositioner *)((char *)this - 128);
  HolographicPositioner::_FindViewHostItem((char *)this - 128, &v10, a2);
  if ( !v10 )
  {
    v5 = -2147024809;
    goto LABEL_10;
  }
  LogEventWithViewHostItemData(
    v10,
    HolographicPositionerTelemetry::ExitFullScreenForView<unsigned short const *,unsigned int &>);
  v9 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
         &v10,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 112LL))(v9);
    v5 = v4;
    if ( v4 >= 0 )
    {
      HolographicPositioner::_UpdateViewStateDataForView(v3, a2);
      v5 = 0;
      goto LABEL_8;
    }
    v6 = 880LL;
  }
  else
  {
    v6 = 879LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v5;
}
