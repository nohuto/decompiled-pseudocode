/*
 * XREFs of ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x18010A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800040A4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?EnsureCapacity@?$CTSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredViewInfo@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredViewInfo@@@@@@QEAAJ_K@Z @ 0x18002B57C (-EnsureCapacity@-$CTSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@URecoveredVi.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?GetShellWindowIdForView@ViewManagerBridge@@AEAAJPEAUIShellView@Server@Navigation@@PEAI@Z @ 0x18010AD10 (-GetShellWindowIdForView@ViewManagerBridge@@AEAAJPEAUIShellView@Server@Navigation@@PEAI@Z.c)
 *     ?CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@@Z @ 0x18010AFB8 (-CloseOrphanedShellWindows@ViewManagerBridge@@AEAAJAEBV-$CCoSimpleArray@URecoveredViewInfo@@$0PP.c)
 *     ??$Start@$$V@OnConnected@ViewManagerInteropTraceLogging@@SA?AV01@XZ @ 0x18010D9B8 (--$Start@$$V@OnConnected@ViewManagerInteropTraceLogging@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnConnected(ViewManagerBridge *this, struct IMessageProxy *a2)
{
  ViewManagerBridge *v3; // rsi
  int v4; // eax
  __int64 v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int i; // r15d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  ViewManagerBridge *v16; // rcx
  __int64 v17; // rbx
  const char *v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct IShellView *v23; // rcx
  __int64 v24; // rcx
  wil *v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // r8
  const char *v28; // r9
  __int64 v30; // [rsp+0h] [rbp-1D8h] BYREF
  int v31; // [rsp+20h] [rbp-1B8h] BYREF
  struct IShellView *v32; // [rsp+28h] [rbp-1B0h] BYREF
  __int64 v33; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v34; // [rsp+38h] [rbp-1A0h] BYREF
  int v35; // [rsp+40h] [rbp-198h]
  unsigned int v36[3]; // [rsp+44h] [rbp-194h] BYREF
  int v37; // [rsp+50h] [rbp-188h] BYREF
  ViewManagerBridge *v38; // [rsp+58h] [rbp-180h]
  __int64 v39; // [rsp+60h] [rbp-178h]
  _QWORD v40[40]; // [rsp+70h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v39 = -2LL;
  v3 = this;
  v38 = this;
  if ( (unsigned int)SHIsSameObject(
                       (int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
                       *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 11)) )
  {
    try
    {
      ViewManagerInteropTraceLogging::OnConnected::Start<>((ViewManagerInteropTraceLogging::OnConnected *)v40);
      v4 = (*(__int64 (__fastcall **)(struct IMessageProxy *, _QWORD, _QWORD))(*(_QWORD *)a2 + 72LL))(
             a2,
             ((unsigned __int64)v3 + 24) & ((unsigned __int128)-(__int128)((unsigned __int64)v3 - 8) >> 64),
             *((unsigned int *)v3 + 20));
      if ( v4 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2E0,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v4);
      v5 = *((_QWORD *)v3 + 11);
      v6 = (_QWORD *)((char *)v3 + 104);
      v7 = *((_QWORD *)v3 + 13);
      if ( v7 )
      {
        *v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, (__int64)v3 + 104);
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
      v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v6 + 48LL))(*v6, &v31);
      if ( v10 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2EA,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v10);
      v11 = CTSimpleArray<RecoveredViewInfo,4294967294,CTPolicyCoTaskMem<RecoveredViewInfo>,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>,CSimpleArrayStandardMergeHelper<RecoveredViewInfo>>::EnsureCapacity(
              (__int64)v3 + 136,
              v31);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x2EB,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v11);
      for ( i = 0; (int)i < v31; ++i )
      {
        v33 = 0LL;
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v6 + 56LL))(*v6, i, &v33);
        if ( v13 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x2F0,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v13);
        v32 = 0LL;
        v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IShellView **))v33)(
                v33,
                &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
                &v32);
        if ( v14 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x2F2,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v14);
        v15 = ((__int64 (__fastcall *)(struct IShellView *, int *))v32->lpVtbl[1].GetWindow)(v32, &v37);
        v16 = retaddr;
        if ( v15 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x2F5,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v15);
        v34 = 0LL;
        v35 = 0;
        v36[0] = 0;
        v17 = v33;
        if ( v33 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
          v34 = v17;
        }
        v35 = v37;
        ViewManagerBridge::GetShellWindowIdForView(v16, v32, v36);
        v18 = 0LL;
        v19 = *((_QWORD *)v3 + 18);
        if ( v19 == *((_QWORD *)v3 + 20)
          && (v20 = CTSimpleArray<RecoveredViewInfo,4294967294,CTPolicyCoTaskMem<RecoveredViewInfo>,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>,CSimpleArrayStandardMergeHelper<RecoveredViewInfo>>::EnsureCapacity(
                      (__int64)v3 + 136,
                      v19 + 1),
              v18 = (const char *)(unsigned int)v20,
              v20 < 0)
          || (++*((_QWORD *)v3 + 18), (v21 = *((_QWORD *)v3 + 17) + 16 * (*((_QWORD *)v3 + 18) - 1LL)) == 0) )
        {
          v22 = v34;
        }
        else
        {
          *(_QWORD *)v21 = 0LL;
          if ( (__int64 *)v21 == &v34 )
          {
            v22 = v34;
          }
          else
          {
            *(_QWORD *)v21 = v34;
            v22 = 0LL;
            v34 = 0LL;
          }
          *(_DWORD *)(v21 + 8) = v35;
          *(_DWORD *)(v21 + 12) = v36[0];
        }
        if ( (int)v18 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x2FF,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            v18);
        if ( v22 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v23 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          ((void (__fastcall *)(struct IShellView *))v23->lpVtbl->Release)(v23);
        }
        v24 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
      ViewManagerBridge::CloseOrphanedShellWindows((ViewManagerBridge *)((char *)v3 - 8));
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v40);
      *((_BYTE *)v3 + 129) = 0;
      v40[0] = &ViewManagerInteropTraceLogging::OnConnected::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v40);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v40);
    }
    catch ( ... )
    {
      *((_DWORD *)v38 + 33) = wil::ResultFromCaughtException(v25, &v30, v26);
      v3 = v38;
    }
    if ( !SetEvent(*((HANDLE *)v3 + 14)) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x86F, v27, v28);
      __debugbreak();
    }
  }
  return 0LL;
}
