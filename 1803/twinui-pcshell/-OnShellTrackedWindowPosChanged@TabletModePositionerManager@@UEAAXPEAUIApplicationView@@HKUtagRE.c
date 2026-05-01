/*
 * XREFs of ?OnShellTrackedWindowPosChanged@TabletModePositionerManager@@UEAAXPEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1802C2D90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TabletModePositionerManager::OnShellTrackedWindowPosChanged(
        TabletModePositionerManager *this,
        struct IApplicationView *a2,
        unsigned int a3,
        int a4,
        struct tagRECT *a5)
{
  int v8; // eax
  HRESULT v9; // eax
  __int64 v10; // rax
  IUnknown *punk[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  void *ppvOut; // [rsp+68h] [rbp+18h] BYREF

  punk[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)punk);
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a2 + 80LL))(a2, punk);
  if ( v8 >= 0 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v9 = IUnknown_QueryService(
           punk[0],
           &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
           &GUID_bfb5cdb3_5571_4e1f_9541_a1e9fa66b59a,
           &ppvOut);
    if ( v9 >= 0 )
    {
      v10 = *(_QWORD *)ppvOut;
      v12 = (__int128)*a5;
      (*(void (__fastcall **)(void *, struct IApplicationView *, _QWORD, __int128 *, int))(v10 + 24))(
        ppvOut,
        a2,
        a3,
        &v12,
        a4);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        156LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      153LL,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)punk);
}
