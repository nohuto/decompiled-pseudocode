/*
 * XREFs of ?GetShellWindowIdForView@ViewManagerBridge@@AEAAJPEAUIShellView@Server@Navigation@@PEAI@Z @ 0x18010AD10
 * Callers:
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x18010A8E0 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAPEAUIShellView@Server@Navigation@@@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@SA?AV01@AEAPEAUIShellView@Server@Navigation@@@Z @ 0x18010DA64 (--$Start@AEAPEAUIShellView@Server@Navigation@@@GetShellWindowIdForView@ViewManagerInteropTraceLo.c)
 *     ??$WindowId@AEAI@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z @ 0x18010DB20 (--$WindowId@AEAI@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewManagerBridge::GetShellWindowIdForView(
        ViewManagerBridge *this,
        struct IShellView *a2,
        unsigned int *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+28h] [rbp-D8h] BYREF
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v23[3]; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v24[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  *a3 = 0;
  *(_QWORD *)v18 = a2;
  ViewManagerInteropTraceLogging::GetShellWindowIdForView::Start<Navigation::Server::IShellView * &>((ViewManagerInteropTraceLogging::GetShellWindowIdForView *)v24);
  v21 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IShellView *, __int64 *))a2->lpVtbl[1].ContextSensitiveHelp)(a2, &v21);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 799LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_19;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 48LL))(v21, &v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 802LL;
    goto LABEL_5;
  }
  v8 = 0;
  if ( v20 <= 0 )
  {
LABEL_18:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v24);
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      *(_QWORD *)v18 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v21 + 56LL))(v21, v8, v18);
      v6 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x327,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_28;
      }
      v19 = 0LL;
      v10 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v18)(
              *(_QWORD *)v18,
              &GUID_8b494dca_e0e9_479a_adf3_023a8da54cb7,
              &v19);
      v6 = v10;
      if ( v10 < 0 )
        break;
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 88LL))(v19, &v22);
      v6 = v10;
      if ( v10 < 0 )
      {
        v15 = 813LL;
        goto LABEL_25;
      }
      if ( v22 == 1 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, v23);
        v6 = v10;
        if ( v10 < 0 )
        {
          v15 = 818LL;
          goto LABEL_25;
        }
        *a3 = v23[0];
        ViewManagerInteropTraceLogging::GetShellWindowIdForView::WindowId<unsigned int &>(v24, a3);
      }
      v11 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 )
      {
        *(_QWORD *)v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( (int)++v8 >= v20 )
        goto LABEL_18;
    }
    v15 = 810LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v10);
    v16 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
LABEL_28:
    v17 = *(_QWORD *)v18;
    if ( *(_QWORD *)v18 )
    {
      *(_QWORD *)v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
LABEL_19:
  v13 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v24[0] = &ViewManagerInteropTraceLogging::GetShellWindowIdForView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
  return v6;
}
