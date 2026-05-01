/*
 * XREFs of ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801353A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredViewInfo@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredViewInfo@@@@@@QEAAJ_K@Z @ 0x18002CD54 (-EnsureCapacity@-$CTSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@URecoveredVi.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@OnConnected@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x18012D26C (-StartActivity@OnConnected@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?GetShellWindowIdForView@ViewManagerBridge@@AEAAJPEAUIShellView@Server@Navigation@@PEAI@Z @ 0x180135888 (-GetShellWindowIdForView@ViewManagerBridge@@AEAAJPEAUIShellView@Server@Navigation@@PEAI@Z.c)
 *     ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x180135BA8 (-CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV-$CCoSimpleArray@URecoveredViewInfo@@$0PP.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnConnected(ViewManagerBridge *this, struct IMessageProxy *a2)
{
  ViewManagerBridge *v3; // rsi
  int v4; // eax
  __int64 v5; // rbx
  _QWORD *v6; // r15
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int i; // r12d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  ViewManagerBridge *v16; // rcx
  __int64 v17; // rbx
  const char *v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  int *v21; // rcx
  __int64 v22; // rdx
  struct IShellView *v23; // rcx
  __int64 v24; // rcx
  wil *v25; // rcx
  unsigned int v26; // r8d
  const char *v27; // r9
  __int64 v29; // [rsp+0h] [rbp-1D8h] BYREF
  int v30[2]; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned int v31[2]; // [rsp+28h] [rbp-1B0h] BYREF
  int v32; // [rsp+30h] [rbp-1A8h] BYREF
  struct IShellView *v33; // [rsp+38h] [rbp-1A0h] BYREF
  int v34[2]; // [rsp+40h] [rbp-198h] BYREF
  unsigned int v35; // [rsp+48h] [rbp-190h] BYREF
  ViewManagerBridge *v36; // [rsp+50h] [rbp-188h]
  __int64 v37; // [rsp+58h] [rbp-180h]
  _QWORD v38[4]; // [rsp+60h] [rbp-178h] BYREF
  int v39; // [rsp+80h] [rbp-158h]
  int *v40; // [rsp+88h] [rbp-150h]
  int *v41; // [rsp+90h] [rbp-148h]
  int v42; // [rsp+98h] [rbp-140h] BYREF
  char v43; // [rsp+9Ch] [rbp-13Ch]
  int v44; // [rsp+C0h] [rbp-118h] BYREF
  const char *v45; // [rsp+C8h] [rbp-110h]
  __int64 v46; // [rsp+D0h] [rbp-108h]
  char v47; // [rsp+D8h] [rbp-100h]
  __int64 v48; // [rsp+E0h] [rbp-F8h]
  _BYTE v49[144]; // [rsp+E8h] [rbp-F0h] BYREF
  __int64 v50; // [rsp+178h] [rbp-60h]
  __int64 v51; // [rsp+180h] [rbp-58h]
  __int64 v52; // [rsp+188h] [rbp-50h]
  __int64 v53; // [rsp+190h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v37 = -2LL;
  v3 = this;
  v36 = this;
  if ( (unsigned int)SHIsSameObject(
                       (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
                       *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 13)) )
  {
    try
    {
      v38[1] = 0LL;
      v38[2] = v38;
      v38[3] = 0LL;
      v39 = 0;
      v40 = &v44;
      v41 = &v42;
      v42 = 0;
      v43 = 0;
      v47 = 0;
      v44 = 0;
      v45 = "OnConnected";
      v46 = 0LL;
      v48 = 1LL;
      v50 = 0LL;
      v51 = 0LL;
      memset(v49, 0, sizeof(v49));
      v52 = 0LL;
      v53 = 0LL;
      v38[0] = &ViewManagerInteropTraceLogging::OnConnected::`vftable';
      ViewManagerInteropTraceLogging::OnConnected::StartActivity((ViewManagerInteropTraceLogging::OnConnected *)v38);
      v4 = (*(__int64 (__fastcall **)(struct IMessageProxy *, _QWORD, _QWORD))(*(_QWORD *)a2 + 72LL))(
             a2,
             ((unsigned __int64)v3 + 24) & ((unsigned __int128)-(__int128)((unsigned __int64)v3 - 8) >> 64),
             *((unsigned int *)v3 + 24));
      if ( v4 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2E0,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v4);
      v5 = *((_QWORD *)v3 + 13);
      v6 = (_QWORD *)((char *)v3 + 120);
      v7 = *((_QWORD *)v3 + 15);
      if ( v7 )
      {
        *v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, (__int64)v3 + 120);
      if ( v8 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2E2,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*v6 + 64LL))(
             *v6,
             ((unsigned __int64)v3 + 8) & -(__int64)(v3 != (ViewManagerBridge *)8));
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2E3,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v9);
      v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v6 + 48LL))(*v6, &v32);
      if ( v10 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2EA,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v10);
      v11 = CTSimpleArray<RecoveredViewInfo,4294967294,CTPolicyCoTaskMem<RecoveredViewInfo>,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>,CSimpleArrayStandardMergeHelper<RecoveredViewInfo>>::EnsureCapacity(
              (__int64)v3 + 152,
              v32);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2EB,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v11);
      for ( i = 0; (int)i < v32; ++i )
      {
        *(_QWORD *)v34 = 0LL;
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)*v6 + 56LL))(*v6, i, v34);
        if ( v13 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x2F0,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v13);
        v33 = 0LL;
        v14 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IShellView **))v34)(
                *(_QWORD *)v34,
                &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
                &v33);
        if ( v14 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x2F2,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v14);
        v15 = ((__int64 (__fastcall *)(struct IShellView *, unsigned int *))v33->lpVtbl[1].GetWindow)(v33, &v35);
        v16 = retaddr;
        if ( v15 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x2F5,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v15);
        *(_QWORD *)v30 = 0LL;
        *(_QWORD *)v31 = 0LL;
        v17 = *(_QWORD *)v34;
        if ( *(_QWORD *)v34 )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 8LL))(*(_QWORD *)v34);
          *(_QWORD *)v30 = v17;
        }
        v31[0] = v35;
        ViewManagerBridge::GetShellWindowIdForView(v16, v33, &v31[1]);
        v18 = 0LL;
        v19 = *((_QWORD *)v3 + 20);
        if ( v19 == *((_QWORD *)v3 + 22)
          && (v20 = CTSimpleArray<RecoveredViewInfo,4294967294,CTPolicyCoTaskMem<RecoveredViewInfo>,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>,CSimpleArrayStandardMergeHelper<RecoveredViewInfo>>::EnsureCapacity(
                      (__int64)v3 + 152,
                      v19 + 1),
              v18 = (const char *)(unsigned int)v20,
              v20 < 0)
          || (++*((_QWORD *)v3 + 20), (v21 = (int *)(*((_QWORD *)v3 + 19) + 16 * (*((_QWORD *)v3 + 20) - 1LL))) == 0LL) )
        {
          v22 = *(_QWORD *)v30;
        }
        else
        {
          *(_QWORD *)v21 = 0LL;
          if ( v21 == v30 )
          {
            v22 = *(_QWORD *)v30;
          }
          else
          {
            *(_QWORD *)v21 = *(_QWORD *)v30;
            v22 = 0LL;
            *(_QWORD *)v30 = 0LL;
          }
          v21[2] = v31[0];
          v21[3] = v31[1];
        }
        if ( (int)v18 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x2FF,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            v18);
        if ( v22 )
        {
          *(_QWORD *)v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v23 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          ((void (__fastcall *)(struct IShellView *))v23->lpVtbl->Release)(v23);
        }
        v24 = *(_QWORD *)v34;
        if ( *(_QWORD *)v34 )
        {
          *(_QWORD *)v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
      ViewManagerBridge::CloseOrphanedShellWindows((ViewManagerBridge *)((char *)v3 - 8));
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v38);
      *((_BYTE *)v3 + 145) = 0;
      v38[0] = &ViewManagerInteropTraceLogging::OnConnected::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v38);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v38);
    }
    catch ( ... )
    {
      *((_DWORD *)v36 + 37) = wil::ResultFromCaughtException(v25, &v29, v26);
      v3 = v36;
    }
    if ( !SetEvent(*((HANDLE *)v3 + 16)) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x86E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v27);
      __debugbreak();
    }
  }
  return 0LL;
}
