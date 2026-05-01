/*
 * XREFs of ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18030535C
 * Callers:
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B1338 (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TryClose@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x1801BD630 (-TryClose@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 *     CAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034___::Invoke @ 0x180223940 (CAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034___--Invoke.c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x18028C770 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802C09B0 (-_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1802CA2D0 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1802DC35C (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180070F64 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ??1?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007115C (--1-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x1800F8A74 (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3468ccb19a16dff0d3ecf886d749dae3___ @ 0x1803051C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_3468ccb19a16dff0d3ecf886d749dae3___.c)
 */

__int64 __fastcall ApplicationViewHelpers::CloseView(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        IUnknown *a2,
        int a3,
        int a4,
        int a5)
{
  unsigned int v6; // edi
  int v10; // eax
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-50h] BYREF
  HWND hwnd; // [rsp+28h] [rbp-48h] BYREF
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  IUnknown *v26; // [rsp+40h] [rbp-30h] BYREF
  char v27[8]; // [rsp+48h] [rbp-28h] BYREF
  HWND v28; // [rsp+50h] [rbp-20h] BYREF
  int v29; // [rsp+58h] [rbp-18h]
  int v30; // [rsp+5Ch] [rbp-14h]
  int v31; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int pvAttribute; // [rsp+90h] [rbp+20h] BYREF

  v6 = 0;
  v25 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  if ( (int)(**a1)(a1, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v25) < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v14 = (**a1)(a1, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v24);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        130LL,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_22;
    }
    if ( !a2 )
    {
      v11 = -2147019873;
      v13 = 132LL;
      v12 = 2147947423LL;
      goto LABEL_11;
    }
    v15 = v24;
    hwnd = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hwnd);
    v16 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v15 + 24LL))(v15, &hwnd);
    v11 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x87,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v16);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hwnd);
      goto LABEL_21;
    }
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v22);
    pvAttribute = 2;
    v26 = a2;
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v22);
    v17 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            &v22,
            &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            &v26,
            &pvAttribute);
    v11 = v17;
    if ( v17 >= 0 )
    {
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)v27, (const struct CMarshaledInterface *)&v22);
      v28 = hwnd;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v28);
      v31 = a5;
      v29 = a3;
      v30 = a4;
      v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_3468ccb19a16dff0d3ecf886d749dae3___(v20, (__int64)v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)v27);
      if ( v11 >= 0 )
      {
LABEL_19:
        Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)&v22);
        goto LABEL_20;
      }
      v18 = (unsigned int)v11;
      v19 = 150LL;
    }
    else
    {
      v18 = (unsigned int)v17;
      v19 = 142LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)v18);
    goto LABEL_19;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v25 + 24LL))(v25, &hwnd);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 114LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)v12);
LABEL_21:
    v6 = v11;
    goto LABEL_22;
  }
  if ( (a5 & 1) != 0 )
  {
    pvAttribute = 1;
    DwmSetWindowAttribute(hwnd, 3u, &pvAttribute, 4u);
  }
  PostMessageW(hwnd, 0x112u, 0xF060uLL, 0LL);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  return v6;
}
