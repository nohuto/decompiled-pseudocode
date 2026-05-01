/*
 * XREFs of ?IsEqual@CAppLayout@@UEAAHPEAUIAppLayout@@W4APP_LAYOUT_COMPARE_FLAGS@@@Z @ 0x1803130D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180095670 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F60DC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180312360 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VF.c)
 */

__int64 __fastcall CAppLayout::IsEqual(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, CWinRTApplicationView **),
        char a3)
{
  unsigned int v4; // ebx
  CWinRTApplicationView *v7; // r9
  int CanCastTo; // esi
  RTL_SRWLOCK **v9; // rcx
  RTL_SRWLOCK *v10; // rax
  RTL_SRWLOCK **v11; // rcx
  RTL_SRWLOCK *v12; // rax
  RTL_SRWLOCK **v13; // rcx
  unsigned __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rbx
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 v26; // r14
  int v27; // eax
  unsigned __int64 i; // rsi
  __int64 v29; // rbx
  __int64 v30; // rcx
  struct IUnknown *v32; // [rsp+30h] [rbp-39h] BYREF
  __int64 v33; // [rsp+38h] [rbp-31h] BYREF
  CWinRTApplicationView *v34; // [rsp+40h] [rbp-29h] BYREF
  __int64 v35; // [rsp+48h] [rbp-21h] BYREF
  CWinRTApplicationView *v36; // [rsp+50h] [rbp-19h] BYREF
  RTL_SRWLOCK *v37; // [rsp+58h] [rbp-11h] BYREF
  RTL_SRWLOCK *v38; // [rsp+60h] [rbp-9h] BYREF
  struct IUnknown *v39; // [rsp+68h] [rbp-1h] BYREF
  RECT rc2; // [rsp+70h] [rbp+7h] BYREF
  int v41; // [rsp+80h] [rbp+17h]
  int v42; // [rsp+84h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v33 = 0LL;
  v4 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  if ( (**a2)(a2, &GUID_1ef1ecfa_786a_4d06_b024_4a61c7049b29, (CWinRTApplicationView **)&v33) >= 0 )
  {
    v38 = 0LL;
    v37 = 0LL;
    v34 = 0LL;
    v36 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
    v34 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v34 = v7;
      (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v7 + 8LL))(v7);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IAppLayoutInternal,Microsoft::WRL::ChainInterfaces<IAppLayoutBuilder,IAppLayout,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::CanCastTo(
                    v7,
                    &GUID_00000000_0000_0000_c000_000000000046,
                    (void **)&v34);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v34 + 8LL))(v34);
    }
    if ( CanCastTo < 0
      || (Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36),
          (**a2)(a2, &GUID_00000000_0000_0000_c000_000000000046, &v36) < 0) )
    {
LABEL_49:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v37);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v38);
      goto LABEL_50;
    }
    if ( v36 > v34 )
    {
      v12 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 56LL))(v33);
      v13 = Microsoft::WRL::Wrappers::SRWLock::LockShared(v12, (RTL_SRWLOCK **)&v32);
      if ( &v37 != v13 )
      {
        v37 = *v13;
        *v13 = 0LL;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v32);
      v11 = Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(a1 + 16), (RTL_SRWLOCK **)&v32);
      if ( &v38 == v11 )
        goto LABEL_19;
      v38 = *v11;
    }
    else
    {
      v9 = Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(a1 + 16), (RTL_SRWLOCK **)&v32);
      if ( &v38 != v9 )
      {
        v38 = *v9;
        *v9 = 0LL;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v32);
      if ( v36 == v34 )
      {
LABEL_20:
        (*(void (__fastcall **)(__int64, RECT *))(*(_QWORD *)v33 + 24LL))(v33, &rc2);
        if ( (a3 & 1) == 0
          || EqualRect((const RECT *)(a1 + 24), &rc2) && *(_DWORD *)(a1 + 40) == v41 && *(_DWORD *)(a1 + 44) == v42 )
        {
          v4 = 1;
          if ( (a3 & 4) != 0 )
          {
            v14 = *(_QWORD *)(a1 + 72);
            v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
            v4 = v14 == v15;
            if ( v14 == v15 )
            {
              v16 = 0LL;
              if ( v14 )
              {
                while ( 1 )
                {
                  if ( !v4 )
                    goto LABEL_49;
                  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v16);
                  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
                  v19 = v33;
                  v20 = v18;
                  v35 = 0LL;
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
                  if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v19 + 40LL))(
                         v19,
                         (unsigned int)v16,
                         &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                         &v35) < 0
                    || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v35 + 24LL))(v35) != v20 )
                  {
                    v4 = 0;
                    goto LABEL_39;
                  }
                  v4 = 1;
                  if ( v20 == 1 )
                    break;
LABEL_39:
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
                  if ( ++v16 >= v14 )
                    goto LABEL_49;
                }
                v21 = *(_QWORD *)(a1 + 64);
                v32 = 0LL;
                v39 = 0LL;
                v22 = *(_QWORD *)(v21 + 8 * v16);
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v32);
                v23 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v22 + 48LL))(
                        v22,
                        &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
                        &v32);
                if ( v23 >= 0 )
                {
                  v25 = v35;
                  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v39);
                  v23 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v25 + 48LL))(
                          v25,
                          &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
                          &v39);
                  if ( v23 >= 0 )
                  {
                    v4 = SHIsSameObject(v32, v39);
                    goto LABEL_37;
                  }
                  v24 = 787LL;
                }
                else
                {
                  v24 = 786LL;
                }
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  v24,
                  (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
                  (const char *)(unsigned int)v23);
                v4 = 0;
LABEL_37:
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v39);
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v32);
                goto LABEL_39;
              }
            }
          }
          else if ( (a3 & 2) != 0 )
          {
            v26 = *(_QWORD *)(a1 + 72);
            v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
            v4 = v26 == v27;
            if ( v26 == v27 )
            {
              for ( i = 0LL; i < v26; ++i )
              {
                if ( !v4 )
                  break;
                v29 = v33;
                v32 = 0LL;
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
                if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)v29 + 40LL))(
                       v29,
                       (unsigned int)i,
                       &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                       &v32) >= 0 )
                {
                  v30 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * i);
                  v4 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v30 + 96LL))(v30, v32);
                }
                else
                {
                  v4 = 0;
                }
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
              }
            }
          }
        }
        goto LABEL_49;
      }
      v10 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 56LL))(v33);
      v11 = Microsoft::WRL::Wrappers::SRWLock::LockShared(v10, (RTL_SRWLOCK **)&v32);
      if ( &v37 == v11 )
      {
LABEL_19:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v32);
        goto LABEL_20;
      }
      v37 = *v11;
    }
    *v11 = 0LL;
    goto LABEL_19;
  }
LABEL_50:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  return v4;
}
