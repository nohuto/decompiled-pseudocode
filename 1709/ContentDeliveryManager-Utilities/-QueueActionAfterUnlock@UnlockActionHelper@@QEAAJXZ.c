/*
 * XREFs of ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x18006D8D4
 * Callers:
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x18002E670 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800261F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18006E660 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall UnlockActionHelper::QueueActionAfterUnlock(UnlockActionHelper *this)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  int v4; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int SharedExtendedExecutionSession; // eax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v17[1] = -2LL;
  v17[0] = 0LL;
  v14 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"lockframework.LockAppBroker", 0x1Bu, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_fcc7498e_d8cf_4993_a9ae_804193af19d7, &v14);
  v4 = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x19,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreenappinterop.h",
      (const char *)(unsigned int)ActivationFactory);
LABEL_5:
    v5 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v5)[2])(v5);
    }
    goto LABEL_17;
  }
  v15 = 0LL;
  v6 = (**v14)(v14, &GUID_91398107_1c08_44be_8b18_79322a23a71d, &v15);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1B,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreenappinterop.h",
      (const char *)(unsigned int)v6);
    v7 = v15;
    goto LABEL_9;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 24LL))(v15, v17);
  v7 = v15;
  if ( v4 < 0 )
  {
LABEL_9:
    if ( v7 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    goto LABEL_5;
  }
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
  }
  v4 = 0;
LABEL_17:
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_31;
  }
  v16 = 0LL;
  v9 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v17[0])(
         v17[0],
         &GUID_f2f2e6cf_4806_4728_954a_ef83a6301791,
         &v16);
  v4 = v9;
  if ( v9 < 0 )
  {
    v10 = 48LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_29;
  }
  v11 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  SharedExtendedExecutionSession = UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession((struct IInspectable **)this + 5);
  if ( SharedExtendedExecutionSession < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)SharedExtendedExecutionSession);
  v9 = (*(__int64 (__fastcall **)(__int64, UnlockActionHelper *))(*(_QWORD *)v16 + 32LL))(v16, this);
  v4 = v9;
  if ( v9 < 0 )
  {
    v10 = 55LL;
    goto LABEL_27;
  }
  v4 = 0;
LABEL_29:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_31:
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  return (unsigned int)v4;
}
