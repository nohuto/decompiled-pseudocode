/*
 * XREFs of ?_OnItemInvoked@CSnapAssistViewController@@AEAAJPEAUIApplicationView@@@Z @ 0x180284DAC
 * Callers:
 *     ?InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x180284AE0 (-InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180070F64 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ??1?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007115C (--1-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x1800F8A74 (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     ??$As@UIMultitaskingViewForegroundStaging@@@?$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewForegroundStaging@@@WRL@Microsoft@@@Details@12@@Z @ 0x18027E5A0 (--$As@UIMultitaskingViewForegroundStaging@@@-$ComPtr@UIMultitaskingViewManagerInternal@@@WRL@Mic.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_625ab5e37b66b38d06a79fa4ea4f4743___ @ 0x18028470C (Windows--Internal--ComTaskPool--QueueTask__lambda_625ab5e37b66b38d06a79fa4ea4f4743___.c)
 */

__int64 __fastcall CSnapAssistViewController::_OnItemInvoked(
        CSnapAssistViewController *this,
        struct IApplicationView *a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  IUnknown *v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h] BYREF
  CWinRTApplicationView *v15; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v16[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  int v18; // [rsp+80h] [rbp+28h] BYREF
  __int64 v19; // [rsp+88h] [rbp+30h] BYREF
  __int64 v20; // [rsp+90h] [rbp+38h] BYREF
  CWinRTApplicationView *v21; // [rsp+98h] [rbp+40h] BYREF

  *((_BYTE *)this + 168) = 1;
  v21 = a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v21);
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v19);
  v13 = (IUnknown *)*((_QWORD *)this + 17);
  v18 = 2;
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v19);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v19,
         &GUID_76d7759a_857c_46bd_ba0c_841904e0fc8d,
         &v13,
         &v18);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v20 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IMultitaskingViewManagerInternal>::As<IMultitaskingViewForegroundStaging>(
           (_QWORD *)this + 18,
           &v20);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v10 = *(_OWORD *)((char *)this + 152);
        v15 = a2;
        v14 = v10;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v15);
        CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)v16, (const struct CMarshaledInterface *)&v19);
        v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_625ab5e37b66b38d06a79fa4ea4f4743___(v11, (__int64)&v14);
        Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)v16);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
        if ( v5 >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
          goto LABEL_11;
        }
        v7 = (unsigned int)v5;
        v8 = 118LL;
      }
      else
      {
        v7 = (unsigned int)v9;
        v8 = 110LL;
      }
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 109LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)v7);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
    (const char *)(unsigned int)v4);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>((__int64)&v19);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v21);
  return (unsigned int)v5;
}
