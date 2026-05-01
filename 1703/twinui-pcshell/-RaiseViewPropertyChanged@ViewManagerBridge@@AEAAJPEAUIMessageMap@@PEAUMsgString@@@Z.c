/*
 * XREFs of ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x18010CB38
 * Callers:
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x18010BA10 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z.c)
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x18010BA50 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z.c)
 *     ?OnReplaced@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@2@Z @ 0x18010BA90 (-OnReplaced@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@2@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x1800F3B34 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@$$V@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@SA?AV01@XZ @ 0x18010E748 (--$Start@$$V@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@SA-AV01@XZ.c)
 *     ??$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$QEAPEBG@Z @ 0x18010E7F4 (--$PropertyChange@AEAIPEBG@RaiseViewPropertyChanged@ViewManagerInteropTraceLogging@@QEAAXAEAI$$Q.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, int *); // rcx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, int *); // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 (__fastcall ***v25)(_QWORD, GUID *, int *); // rcx
  char *v26; // rax
  unsigned int v27; // eax
  const unsigned __int16 *v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v33[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D8h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, int *); // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v36[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  char *v39; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v41[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v40[1] = -2LL;
  ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::Start<>((ViewManagerInteropTraceLogging::RaiseViewPropertyChanged *)v41);
  v6 = (*(__int64 (__fastcall **)(struct IMessageMap *, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v40);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5D3,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_63;
  }
  v37 = 0LL;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 14))(
         *((_QWORD *)this + 14),
         &GUID_17d276d3_f5ad_4668_9d53_1ef0996b8363,
         &v37);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v38 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v37 + 48LL))(v37, v36);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v11 = 0;
      if ( (int)v36[0] > 0 )
      {
        while ( 1 )
        {
          v35 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v37 + 80LL))(v37, v11, &v35);
          v7 = v12;
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x5E0,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v12);
            goto LABEL_37;
          }
          *(_QWORD *)v33 = 0LL;
          v13 = (**v35)(v35, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, v33);
          v7 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x5E3,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v13);
            goto LABEL_34;
          }
          v34 = 0LL;
          v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v33 + 104LL))(*(_QWORD *)v33, &v34);
          v7 = v14;
          if ( v14 < 0 )
          {
            v19 = 1510LL;
            goto LABEL_31;
          }
          v14 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)v34 + 24LL))(v34, &v39);
          v7 = v14;
          if ( v14 < 0 )
          {
            v19 = 1513LL;
            goto LABEL_31;
          }
          if ( v39 == (char *)v40[0] )
            break;
          v15 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          v16 = *(_QWORD *)v33;
          if ( *(_QWORD *)v33 )
          {
            *(_QWORD *)v33 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          v17 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *)))(*v17)[2])(v17);
          }
          if ( (int)++v11 >= (int)v36[0] )
            goto LABEL_39;
        }
        v18 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v38);
        v14 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v33)(
                *(_QWORD *)v33,
                &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
                v18);
        v7 = v14;
        if ( v14 < 0 )
        {
          v19 = 1516LL;
LABEL_31:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v19,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v14);
          v23 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
LABEL_34:
          v24 = *(_QWORD *)v33;
          if ( *(_QWORD *)v33 )
          {
            *(_QWORD *)v33 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
LABEL_37:
          v25 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *)))(*v25)[2])(v25);
          }
          goto LABEL_59;
        }
        v20 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
        v21 = *(_QWORD *)v33;
        if ( *(_QWORD *)v33 )
        {
          *(_QWORD *)v33 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = v35;
        if ( v35 )
        {
          v35 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, int *)))(*v22)[2])(v22);
        }
      }
LABEL_39:
      if ( !v38 )
      {
        v7 = -2147023728;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5F1,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)0x80070490LL);
        goto LABEL_59;
      }
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 152LL))(v38, &v36[1]);
      v7 = v9;
      if ( v9 >= 0 )
      {
        if ( a3 )
        {
          v27 = *(_DWORD *)a3 & 0xE0000000;
          if ( v27 == 0x40000000 )
          {
            v26 = (char *)a3 + 8;
          }
          else
          {
            if ( v27 != 0x80000000 )
              __debugbreak();
            v26 = (char *)*((_QWORD *)a3 + 1);
          }
        }
        else
        {
          v26 = 0LL;
        }
        v39 = v26;
        ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::PropertyChange<unsigned int &,unsigned short const *>(
          v41,
          &v36[1],
          &v39);
        if ( a3 )
        {
          v29 = *(_DWORD *)a3 & 0xE0000000;
          if ( v29 == 0x40000000 )
          {
            v28 = (const unsigned __int16 *)((char *)a3 + 8);
          }
          else
          {
            if ( v29 != 0x80000000 )
              __debugbreak();
            v28 = (const unsigned __int16 *)*((_QWORD *)a3 + 1);
          }
        }
        else
        {
          v28 = 0LL;
        }
        ViewEventDispatcher::ViewPropertyChanged(*((RTL_SRWLOCK **)this + 9), v36[1], v28);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v41);
        v7 = 0;
        goto LABEL_59;
      }
      v10 = 1524LL;
    }
    else
    {
      v10 = 1500LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v9);
LABEL_59:
    v30 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    goto LABEL_61;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5D6,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v8);
LABEL_61:
  v31 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
LABEL_63:
  v41[0] = &ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v41);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v41);
  return v7;
}
