/*
 * XREFs of ?OnSizeConstraintsQueried@CApplicationViewManager@@UEAAXPEAUIApplicationView@@UtagSIZE@@1G@Z @ 0x18002CD90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002A0C0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x18002A430 (-SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationViewManager::OnSizeConstraintsQueried(
        CApplicationViewManager *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        unsigned __int16 a5)
{
  __int64 (__fastcall *v8)(CWin32ApplicationView *, struct _GUID *, void **); // rax
  int Interface; // eax
  int v10; // esi
  __int64 (__fastcall *v11)(CWin32ApplicationView *, unsigned int, struct tagSIZE, struct tagSIZE); // rax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-28h]
  CWinRTApplicationView *v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CWin32ApplicationView *v16; // [rsp+58h] [rbp+10h] BYREF

  v14[1] = (CWinRTApplicationView *)-2LL;
  v16 = 0LL;
  v14[0] = a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  v8 = **(__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))a2;
  if ( v8 == CWin32ApplicationView::QueryInterface )
    Interface = CWin32ApplicationView::QueryInterface(a2, &GUID_dcf504eb_598b_4411_ac89_cf48aba70af1, (void **)&v16);
  else
    Interface = v8(a2, &GUID_dcf504eb_598b_4411_ac89_cf48aba70af1, (void **)&v16);
  v10 = Interface;
  if ( Interface < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2F0,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)Interface,
      v13);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v14);
  if ( v10 >= 0 )
  {
    v11 = *(__int64 (__fastcall **)(CWin32ApplicationView *, unsigned int, struct tagSIZE, struct tagSIZE))(*(_QWORD *)v16 + 24LL);
    if ( v11 == CWin32ApplicationView::SizeConstraintsQueried )
      v12 = CWin32ApplicationView::SizeConstraintsQueried(v16, a5, a3, a4);
    else
      v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v11)(v16, a5, a3, a4);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2F2,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v12,
        v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
}
