/*
 * XREFs of ?GetViewClientExtensionMapPropertyAsUInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAI@Z @ 0x180134CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@GetViewClientExtensionMapPropertyAsUInt@ViewManagerInteropTraceLogging@@QEAAXPEAXPEBG@Z @ 0x18012E7FC (-StartActivity@GetViewClientExtensionMapPropertyAsUInt@ViewManagerInteropTraceLogging@@QEAAXPEAX.c)
 *     ??$Value@AEAI@GetViewClientExtensionMapPropertyAsUInt@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z @ 0x180138808 (--$Value@AEAI@GetViewClientExtensionMapPropertyAsUInt@ViewManagerInteropTraceLogging@@QEAAXAEAI@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewManagerBridge::GetViewClientExtensionMapPropertyAsUInt(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        HSTRING a3,
        unsigned int *a4)
{
  int v7; // ebx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v9; // rax
  int v10; // eax
  const unsigned __int16 *StringRawBuffer; // rbx
  int v12; // eax
  __int64 v13; // rdx
  PCWSTR v14; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // rcx
  __int64 v22; // [rsp+28h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D8h] BYREF
  void *v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v29[4]; // [rsp+78h] [rbp-90h] BYREF
  int v30; // [rsp+98h] [rbp-70h]
  int *v31; // [rsp+A0h] [rbp-68h]
  int *v32; // [rsp+A8h] [rbp-60h]
  int v33; // [rsp+B0h] [rbp-58h] BYREF
  char v34; // [rsp+B4h] [rbp-54h]
  int v35; // [rsp+D8h] [rbp-30h] BYREF
  const char *v36; // [rsp+E0h] [rbp-28h]
  __int64 v37; // [rsp+E8h] [rbp-20h]
  char v38; // [rsp+F0h] [rbp-18h]
  __int64 v39; // [rsp+F8h] [rbp-10h]
  _BYTE v40[144]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v41; // [rsp+190h] [rbp+88h]
  __int64 v42; // [rsp+198h] [rbp+90h]
  __int64 v43; // [rsp+1A0h] [rbp+98h]
  __int64 v44; // [rsp+1A8h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v27[1] = -2LL;
  *a4 = 0;
  if ( *((_BYTE *)this + 153) )
  {
    v7 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27E,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x80010108LL);
    return (unsigned int)v7;
  }
  v24 = 0LL;
  lpVtbl = a2->lpVtbl;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v24);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
          a2,
          &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
          v9);
  v7 = v10;
  if ( v10 >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    v29[1] = 0LL;
    v29[2] = v29;
    v29[3] = 0LL;
    v30 = 0;
    v31 = &v35;
    v32 = &v33;
    v33 = 0;
    v34 = 0;
    v38 = 0;
    v35 = 0;
    v36 = "GetViewClientExtensionMapPropertyAsUInt";
    v37 = 0LL;
    v39 = 1LL;
    v41 = 0LL;
    v42 = 0LL;
    memset(v40, 0, sizeof(v40));
    v43 = 0LL;
    v44 = 0LL;
    v29[0] = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::`vftable';
    ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::StartActivity(
      (ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt *)v29,
      v24,
      StringRawBuffer);
    v26 = 0LL;
    v12 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v24 + 104LL))(v24, &v26);
    v7 = v12;
    if ( v12 < 0 )
    {
      v13 = 646LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
LABEL_24:
      v19 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v29[0] = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
      goto LABEL_27;
    }
    v14 = WindowsGetStringRawBuffer(a3, 0LL);
    v12 = MsgStringCreateStack(v14, 0xFFFFFFFFLL, &v28, v27);
    v7 = v12;
    if ( v12 < 0 )
    {
      v13 = 651LL;
      goto LABEL_9;
    }
    v23 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v26 + 48LL))(v26, v27[0], &v23);
    v15 = v23;
    if ( v7 < 0 )
    {
LABEL_22:
      if ( v15 )
      {
        v23 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
      }
      goto LABEL_24;
    }
    if ( !v23 )
    {
      v7 = -2147023728;
      goto LABEL_22;
    }
    v25 = 0LL;
    v16 = (**v23)(v23, &GUID_636d7eb3_e062_45f3_9b1f_78bd16c6134a, &v25);
    v7 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 24LL))(v25, &v22);
      v7 = v16;
      if ( v16 >= 0 )
      {
        ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::Value<unsigned int &>(v29, &v22);
        *a4 = v22;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v29);
        v7 = 0;
        goto LABEL_19;
      }
      v17 = 661LL;
    }
    else
    {
      v17 = 658LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v16);
LABEL_19:
    v18 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v15 = v23;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x281,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v10);
LABEL_27:
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v7;
}
