/*
 * XREFs of ?GetShellWindowIdForView@ViewManagerBridge@@AEAAJPEAUIShellView@Server@Navigation@@PEAI@Z @ 0x180135888
 * Callers:
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801353A0 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x18012ED64 (-StartActivity@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 *     ??$WindowId@AEAI@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z @ 0x18013888C (--$WindowId@AEAI@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewManagerBridge::GetShellWindowIdForView(
        ViewManagerBridge *this,
        struct IShellView *a2,
        unsigned int *a3)
{
  struct IShellViewVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, int *); // rcx
  __int64 v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, int *); // rcx
  int v19[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, int *); // [rsp+28h] [rbp-D8h] BYREF
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v24[3]; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v25[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+70h] [rbp-90h]
  int *v27; // [rsp+78h] [rbp-88h]
  int *v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+88h] [rbp-78h] BYREF
  char v30; // [rsp+8Ch] [rbp-74h]
  int v31; // [rsp+B0h] [rbp-50h] BYREF
  const char *v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  char v34; // [rsp+C8h] [rbp-38h]
  __int64 v35; // [rsp+D0h] [rbp-30h]
  _BYTE v36[144]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v37; // [rsp+168h] [rbp+68h]
  __int64 v38; // [rsp+170h] [rbp+70h]
  __int64 v39; // [rsp+178h] [rbp+78h]
  __int64 v40; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v35 = 1LL;
  *a3 = 0;
  v25[2] = v25;
  v25[1] = 0LL;
  v27 = &v31;
  v25[3] = 0LL;
  v28 = &v29;
  v26 = 0;
  v32 = "GetShellWindowIdForView";
  v29 = 0;
  v30 = 0;
  v34 = 0;
  v31 = 0;
  v33 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  memset(v36, 0, sizeof(v36));
  v39 = 0LL;
  v25[0] = &ViewManagerInteropTraceLogging::GetShellWindowIdForView::`vftable';
  v40 = 0LL;
  ViewManagerInteropTraceLogging::GetShellWindowIdForView::StartActivity(
    (ViewManagerInteropTraceLogging::GetShellWindowIdForView *)v25,
    a2);
  lpVtbl = a2->lpVtbl;
  v22 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IShellView *, __int64 *))lpVtbl[1].ContextSensitiveHelp)(a2, &v22);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 799LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 48LL))(v22, &v21);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 802LL;
    goto LABEL_5;
  }
  v9 = 0;
  if ( v21 <= 0 )
  {
LABEL_18:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v25);
    v7 = 0;
  }
  else
  {
    while ( 1 )
    {
      v20 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 56LL))(v22, v9, &v20);
      v7 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x327,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_28;
      }
      *(_QWORD *)v19 = 0LL;
      v11 = (**v20)(v20, &GUID_8b494dca_e0e9_479a_adf3_023a8da54cb7, v19);
      v7 = v11;
      if ( v11 < 0 )
        break;
      v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v19 + 88LL))(*(_QWORD *)v19, &v23);
      v7 = v11;
      if ( v11 < 0 )
      {
        v16 = 813LL;
        goto LABEL_25;
      }
      if ( v23 == 1 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v19 + 24LL))(*(_QWORD *)v19, v24);
        v7 = v11;
        if ( v11 < 0 )
        {
          v16 = 818LL;
          goto LABEL_25;
        }
        *a3 = v24[0];
        ViewManagerInteropTraceLogging::GetShellWindowIdForView::WindowId<unsigned int &>(v25, a3);
      }
      v12 = *(_QWORD *)v19;
      if ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *)))(*v13)[2])(v13);
      }
      if ( (int)++v9 >= v21 )
        goto LABEL_18;
    }
    v16 = 810LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v11);
    v17 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 )
    {
      *(_QWORD *)v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
LABEL_28:
    v18 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *)))(*v18)[2])(v18);
    }
  }
LABEL_19:
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v25[0] = &ViewManagerInteropTraceLogging::GetShellWindowIdForView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v25);
  return v7;
}
