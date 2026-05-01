/*
 * XREFs of ?IsEqual@CAppLayoutItem@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180315330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x1800170E0 (-AreAppViewDataEqual@ImmersiveApplicationLayout@@YA_NPEBUAPPLICATION_VIEW_DATA@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180095670 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F60DC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 */

__int64 __fastcall CAppLayoutItem::IsEqual(CAppLayoutItem *this, struct IAppLayoutItem *a2)
{
  unsigned int v3; // edi
  RTL_SRWLOCK **v5; // rcx
  RTL_SRWLOCK *v6; // rax
  RTL_SRWLOCK **v7; // rcx
  RTL_SRWLOCK *v8; // rax
  RTL_SRWLOCK **v9; // rcx
  __int64 v10; // rbx
  const struct APPLICATION_VIEW_DATA *v11; // r8
  __int64 v13; // [rsp+20h] [rbp-29h] BYREF
  RTL_SRWLOCK *v14; // [rsp+28h] [rbp-21h] BYREF
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-19h] BYREF
  CWinRTApplicationView *v16; // [rsp+38h] [rbp-11h] BYREF
  CWinRTApplicationView *v17; // [rsp+40h] [rbp-9h] BYREF
  RECT rc2; // [rsp+48h] [rbp-1h] BYREF
  _BYTE v19[40]; // [rsp+58h] [rbp+Fh] BYREF

  v13 = 0LL;
  v3 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  if ( (**(int (__fastcall ***)(struct IAppLayoutItem *, GUID *, __int64 *))a2)(
         a2,
         &GUID_972224dc_7815_4df5_9adc_96bd3e7902fd,
         &v13) >= 0 )
  {
    v17 = 0LL;
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    if ( (**((int (__fastcall ***)(char *, GUID *, CWinRTApplicationView **))this - 1))(
           (char *)this - 8,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v17) < 0
      || (Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16),
          (**(int (__fastcall ***)(struct IAppLayoutItem *, GUID *, CWinRTApplicationView **))a2)(
            a2,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v16) < 0) )
    {
LABEL_26:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      goto LABEL_27;
    }
    v15 = 0LL;
    v14 = 0LL;
    if ( v16 > v17 )
    {
      v8 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
      v9 = Microsoft::WRL::Wrappers::SRWLock::LockShared(v8, (RTL_SRWLOCK **)&rc2);
      if ( &v14 != v9 )
      {
        v14 = *v9;
        *v9 = 0LL;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&rc2);
      v7 = Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 3, (RTL_SRWLOCK **)&rc2);
      if ( &v15 == v7 )
        goto LABEL_15;
      v15 = *v7;
    }
    else
    {
      v5 = Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 3, (RTL_SRWLOCK **)&rc2);
      if ( &v15 != v5 )
      {
        v15 = *v5;
        *v5 = 0LL;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&rc2);
      if ( v17 == v16 )
        goto LABEL_16;
      v6 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
      v7 = Microsoft::WRL::Wrappers::SRWLock::LockShared(v6, (RTL_SRWLOCK **)&rc2);
      if ( &v14 == v7 )
      {
LABEL_15:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&rc2);
LABEL_16:
        if ( *((_DWORD *)this + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13)
          && *((_DWORD *)this + 4) == (*(unsigned int (__fastcall **)(struct IAppLayoutItem *))(*(_QWORD *)a2 + 32LL))(a2) )
        {
          v3 = 1;
          if ( *((_DWORD *)this + 8) != 1 )
            goto LABEL_22;
          v10 = v13;
          *(_QWORD *)&rc2.left = 0LL;
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&rc2);
          if ( (*(int (__fastcall **)(__int64, GUID *, RECT *))(*(_QWORD *)v10 + 32LL))(
                 v10,
                 &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
                 &rc2) >= 0 )
            v3 = SHIsSameObject(*(struct IUnknown **)&rc2.left, *((struct IUnknown **)this + 5));
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&rc2);
          if ( v3 )
          {
LABEL_22:
            *(_QWORD *)&rc2.left = 0LL;
            *(_QWORD *)&rc2.right = 0LL;
            (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v13 + 40LL))(v13, 0LL, &rc2);
            v3 = EqualRect((const RECT *)this + 3, &rc2);
            if ( v3 )
            {
              *(_QWORD *)&rc2.left = 0LL;
              *(_QWORD *)&rc2.right = 0LL;
              (*(void (__fastcall **)(__int64, __int64, RECT *))(*(_QWORD *)v13 + 40LL))(v13, 1LL, &rc2);
              v3 = EqualRect((const RECT *)this + 4, &rc2);
              if ( v3 )
              {
                (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 48LL))(v13, v19);
                v3 = ImmersiveApplicationLayout::AreAppViewDataEqual(
                       (CAppLayoutItem *)((char *)this + 80),
                       (const struct APPLICATION_VIEW_DATA *)v19,
                       v11);
              }
            }
          }
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v14);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
        goto LABEL_26;
      }
      v14 = *v7;
    }
    *v7 = 0LL;
    goto LABEL_15;
  }
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v3;
}
