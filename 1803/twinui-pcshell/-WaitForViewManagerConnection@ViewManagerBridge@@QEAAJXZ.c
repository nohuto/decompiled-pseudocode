/*
 * XREFs of ?WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ @ 0x1801E14B4
 * Callers:
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801D10C0 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1801983B8 (-handle_wait@wil@@YA_NPEAXK@Z.c)
 *     ??1ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801DB7F8 (--1ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1801DE30C (-StartActivity@ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

__int64 __fastcall ViewManagerBridge::WaitForViewManagerConnection(ViewManagerBridge *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  int v5[2]; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v5,
    (__int64)"ConnectToViewManager");
  *(_QWORD *)v5 = &ViewManagerInteropTraceLogging::ConnectToViewManager::`vftable';
  ViewManagerInteropTraceLogging::ConnectToViewManager::StartActivity((ViewManagerInteropTraceLogging::ConnectToViewManager *)v5);
  if ( wil::handle_wait(*((wil **)this + 16), (void *)0x7530) )
  {
    v2 = *((_DWORD *)this + 37);
    if ( v2 >= 0 )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5);
      v2 = 0;
      goto LABEL_7;
    }
    v3 = 75LL;
  }
  else
  {
    v2 = -2147483638;
    v3 = 72LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  ViewManagerInteropTraceLogging::ConnectToViewManager::~ConnectToViewManager((ViewManagerInteropTraceLogging::ConnectToViewManager *)v5);
  return (unsigned int)v2;
}
