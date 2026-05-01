/*
 * XREFs of ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x180137D58
 * Callers:
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x1801367E0 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z.c)
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x180136820 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z.c)
 *     ?OnReplaced@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@2@Z @ 0x180136860 (-OnReplaced@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@2@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x18011E7B4 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x18013281C (-StartActivity@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ??$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$QEAPEBG@Z @ 0x180138CC0 (--$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$Q.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewManagerBridge::RaiseViewPropertyChanged(
        ViewManagerBridge *this,
        struct IMessageMap *a2,
        struct MsgString *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char *v27; // rax
  unsigned int v28; // eax
  const unsigned __int16 *v29; // r8
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v34[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v38; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h]
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  _QWORD v46[4]; // [rsp+80h] [rbp-80h] BYREF
  int v47; // [rsp+A0h] [rbp-60h]
  int *v48; // [rsp+A8h] [rbp-58h]
  int *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h] BYREF
  char v51; // [rsp+BCh] [rbp-44h]
  int v52; // [rsp+E0h] [rbp-20h] BYREF
  const char *v53; // [rsp+E8h] [rbp-18h]
  __int64 v54; // [rsp+F0h] [rbp-10h]
  char v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  _BYTE v57[144]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v58; // [rsp+198h] [rbp+98h]
  __int64 v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  __int64 v61; // [rsp+1B0h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v45 = -2LL;
  v46[1] = 0LL;
  v46[2] = v46;
  v46[3] = 0LL;
  v47 = 0;
  v48 = &v52;
  v49 = &v50;
  v50 = 0;
  v51 = 0;
  v55 = 0;
  v52 = 0;
  v53 = "RaiseViewPropertyChanged";
  v54 = 0LL;
  v56 = 1LL;
  v58 = 0LL;
  v59 = 0LL;
  memset(v57, 0, sizeof(v57));
  v60 = 0LL;
  v61 = 0LL;
  v46[0] = &ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::`vftable';
  ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::StartActivity((ViewManagerInteropTraceLogging::RaiseViewPropertyChanged *)v46);
  v41 = 0LL;
  v42 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IMessageMap *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v41);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5D6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_66;
  }
  v39 = 0LL;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 16))(
         *((_QWORD *)this + 16),
         &GUID_17d276d3_f5ad_4668_9d53_1ef0996b8363,
         &v39);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v40 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 48LL))(v39, &v37);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v11 = 0;
      if ( v37 > 0 )
      {
        while ( 1 )
        {
          *(_QWORD *)v34 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v39 + 80LL))(v39, v11, v34);
          v7 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x5E3,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v12);
            goto LABEL_40;
          }
          v35 = 0LL;
          v13 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v34)(
                  *(_QWORD *)v34,
                  &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
                  &v35);
          v7 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x5E6,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v13);
            goto LABEL_37;
          }
          v36 = 0LL;
          v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 104LL))(v35, &v36);
          v7 = v14;
          if ( v14 < 0 )
          {
            v20 = 1513LL;
            goto LABEL_34;
          }
          v43 = 0LL;
          v44 = 0;
          v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 24LL))(v36, &v43);
          v7 = v14;
          if ( v14 < 0 )
          {
            v20 = 1516LL;
            goto LABEL_34;
          }
          if ( v43 != v41 || (v15 = 1, v44 != v42) )
            v15 = 0;
          if ( v15 )
            break;
          v16 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          v17 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          v18 = *(_QWORD *)v34;
          if ( *(_QWORD *)v34 )
          {
            *(_QWORD *)v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          if ( (int)++v11 >= v37 )
            goto LABEL_42;
        }
        v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v40);
        v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v35)(
                v35,
                &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
                v19);
        v7 = v14;
        if ( v14 < 0 )
        {
          v20 = 1519LL;
LABEL_34:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v20,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v14);
          v24 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
LABEL_37:
          v25 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
LABEL_40:
          v26 = *(_QWORD *)v34;
          if ( *(_QWORD *)v34 )
          {
            *(_QWORD *)v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
          goto LABEL_62;
        }
        v21 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = v35;
        if ( v35 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v23 = *(_QWORD *)v34;
        if ( *(_QWORD *)v34 )
        {
          *(_QWORD *)v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
LABEL_42:
      if ( !v40 )
      {
        v7 = -2147023728;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5F4,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)0x80070490LL);
        goto LABEL_62;
      }
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v40 + 152LL))(v40, &v38);
      v7 = v9;
      if ( v9 >= 0 )
      {
        if ( a3 )
        {
          v28 = *(_DWORD *)a3 & 0xE0000000;
          if ( v28 == 0x40000000 )
          {
            v27 = (char *)a3 + 8;
          }
          else
          {
            if ( v28 != 0x80000000 )
              __debugbreak();
            v27 = (char *)*((_QWORD *)a3 + 1);
          }
        }
        else
        {
          v27 = 0LL;
        }
        *(_QWORD *)v34 = v27;
        ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::PropertyChange<unsigned int &,unsigned short const *>(
          v46,
          &v38,
          v34);
        if ( a3 )
        {
          v30 = *(_DWORD *)a3 & 0xE0000000;
          if ( v30 == 0x40000000 )
          {
            v29 = (const unsigned __int16 *)((char *)a3 + 8);
          }
          else
          {
            if ( v30 != 0x80000000 )
              __debugbreak();
            v29 = (const unsigned __int16 *)*((_QWORD *)a3 + 1);
          }
        }
        else
        {
          v29 = 0LL;
        }
        ViewEventDispatcher::ViewPropertyChanged(*((RTL_SRWLOCK **)this + 11), v38, v29);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v46);
        v7 = 0;
        goto LABEL_62;
      }
      v10 = 1527LL;
    }
    else
    {
      v10 = 1503LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v9);
LABEL_62:
    v31 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    goto LABEL_64;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5D9,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v8);
LABEL_64:
  v32 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
LABEL_66:
  v46[0] = &ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v46);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v46);
  return v7;
}
