/*
 * XREFs of ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x180135BA8
 * Callers:
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801353A0 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x18012F294 (-StartActivity@CloseOrphanedShellViews@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x180134800 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewManagerBridge::CloseOrphanedShellWindows(ViewManagerBridge *this, __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 i; // rax
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
  unsigned int v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+70h] [rbp-90h]
  int *v26; // [rsp+78h] [rbp-88h]
  int *v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+88h] [rbp-78h] BYREF
  char v29; // [rsp+8Ch] [rbp-74h]
  int v30; // [rsp+B0h] [rbp-50h] BYREF
  const char *v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C0h] [rbp-40h]
  char v33; // [rsp+C8h] [rbp-38h]
  __int64 v34; // [rsp+D0h] [rbp-30h]
  _BYTE v35[144]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v36; // [rsp+168h] [rbp+68h]
  __int64 v37; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+178h] [rbp+78h]
  __int64 v39; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v34 = 1LL;
  v24[1] = 0LL;
  v24[2] = v24;
  v24[3] = 0LL;
  v26 = &v30;
  v25 = 0;
  v27 = &v28;
  v28 = 0;
  v31 = "CloseOrphanedShellViews";
  v29 = 0;
  v33 = 0;
  v30 = 0;
  v32 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(v35, 0, sizeof(v35));
  v38 = 0LL;
  v24[0] = &ViewManagerInteropTraceLogging::CloseOrphanedShellViews::`vftable';
  v39 = 0LL;
  ViewManagerInteropTraceLogging::CloseOrphanedShellViews::StartActivity((ViewManagerInteropTraceLogging::CloseOrphanedShellViews *)v24);
  v4 = *((_QWORD *)this + 14);
  v22 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 56LL))(v4, &v22);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 842LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_21;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 48LL))(v22, &v21);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 845LL;
    goto LABEL_5;
  }
  v8 = 0;
  if ( v21 <= 0 )
  {
LABEL_20:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v24);
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v20 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 56LL))(v22, v8, &v20);
      v6 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x352,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_29;
      }
      *(_QWORD *)v19 = 0LL;
      v10 = (**v20)(v20, &GUID_8b494dca_e0e9_479a_adf3_023a8da54cb7, v19);
      v6 = v10;
      if ( v10 < 0 )
        break;
      v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v19 + 24LL))(*(_QWORD *)v19, v23);
      v6 = v10;
      if ( v10 < 0 )
      {
        v16 = 864LL;
        goto LABEL_26;
      }
      for ( i = *a2; i != *a2 + 16 * a2[1]; i += 16LL )
      {
        if ( *(_DWORD *)(i + 12) == v23[0] )
          goto LABEL_15;
      }
      ViewManagerBridge::CloseServerWindow(this, v23[0]);
LABEL_15:
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
      if ( (int)++v8 >= v21 )
        goto LABEL_20;
    }
    v16 = 853LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v10);
    v17 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 )
    {
      *(_QWORD *)v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
LABEL_29:
    v18 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *)))(*v18)[2])(v18);
    }
  }
LABEL_21:
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v24[0] = &ViewManagerInteropTraceLogging::CloseOrphanedShellViews::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
  return v6;
}
