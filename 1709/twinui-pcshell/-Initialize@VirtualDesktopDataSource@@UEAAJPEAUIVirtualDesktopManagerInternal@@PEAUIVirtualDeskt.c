/*
 * XREFs of ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1801B4720
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IImmersiveApplicationNotificationService@@$BBI@AA @ 0x1800798CC (--_9IImmersiveApplicationNotificationService@@$BBI@AA.c)
 *     ??$_Buynode@AEAPEAUIImmersiveMonitor@@AEAV?$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@PEAX@1@PEAU21@0AEAPEAUIImmersiveMonitor@@AEAV?$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@Z @ 0x18014C508 (--$_Buynode@AEAPEAUIImmersiveMonitor@@AEAV-$ComPtr@UIXamlTaskbarProxyInternal@@@WRL@Microsoft@@@.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x1801B4EA0 (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ @ 0x1801B60E8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIVirtualDesktop@@@@AEAAXXZ.c)
 *     ??$_Insert@AEAU?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@1@@Z @ 0x1801B6C78 (--$_Insert@AEAU-$pair@$$CBV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDesktop.c)
 *     ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B86FC (-VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@PEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall VirtualDesktopDataSource::Initialize(
        VirtualDesktopDataSource *this,
        struct IVirtualDesktopManagerInternal *a2,
        struct IVirtualDesktopNotificationService *a3)
{
  RTL_SRWLOCK *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rbx
  _QWORD *v10; // r12
  int v11; // r14d
  int v12; // eax
  void *v13; // r14
  __int64 (__fastcall *v14)(__int64); // rdx
  _QWORD *v15; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  void *v19; // rcx
  void *v20; // rbx
  int v21; // eax
  const struct _GUID *v22; // r9
  struct IVirtualDesktopNotificationService *v23; // r12
  __int64 v24; // rcx
  struct IVirtualDesktop *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  struct IVirtualDesktop *v28; // rbx
  int v29; // eax
  __int64 v30; // rcx
  void *v31; // rcx
  __int64 v32; // rcx
  struct IVirtualDesktop *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  __int64 v36; // r14
  _QWORD *v37; // rdx
  __int64 v38; // rax
  const char *v39; // r9
  void *v40; // rcx
  void *v41; // rcx
  __int64 v42; // rcx
  struct IVirtualDesktop *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // [rsp+30h] [rbp-A8h] BYREF
  __int64 (__fastcall *v47)(__int64); // [rsp+38h] [rbp-A0h] BYREF
  int v48; // [rsp+40h] [rbp-98h] BYREF
  struct IVirtualDesktop *v49; // [rsp+48h] [rbp-90h]
  void **v50; // [rsp+50h] [rbp-88h]
  VirtualDesktopDataSource *v51; // [rsp+58h] [rbp-80h]
  char v52; // [rsp+60h] [rbp-78h]
  int v53; // [rsp+68h] [rbp-70h] BYREF
  __int64 v54; // [rsp+70h] [rbp-68h]
  void **v55; // [rsp+78h] [rbp-60h]
  PSRWLOCK SRWLock; // [rsp+80h] [rbp-58h]
  __int64 v57; // [rsp+88h] [rbp-50h]
  char v58[72]; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  void *v60; // [rsp+E0h] [rbp+8h] BYREF
  void *v61; // [rsp+E8h] [rbp+10h] BYREF
  struct IVirtualDesktopNotificationService *v62; // [rsp+F0h] [rbp+18h]
  struct IVirtualDesktop *v63; // [rsp+F8h] [rbp+20h] BYREF

  v62 = a3;
  v57 = -2LL;
  v6 = (RTL_SRWLOCK *)((char *)this + 296);
  AcquireSRWLockExclusive((PSRWLOCK)this + 37);
  SRWLock = v6;
  v51 = (VirtualDesktopDataSource *)((char *)this - 16);
  v52 = 1;
  if ( *((struct IVirtualDesktopManagerInternal **)this + 12) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IVirtualDesktopManagerInternal *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( *((struct IVirtualDesktopNotificationService **)this + 13) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IVirtualDesktopNotificationService *))(*(_QWORD *)a3 + 8LL))(a3);
    v8 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = a3;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (void *)*((_QWORD *)this + 13);
  v10 = (_QWORD *)((char *)this + 112);
  if ( *((_DWORD *)this + 56) )
  {
    v11 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
      (const char *)0x8007139FLL);
  }
  else
  {
    v12 =  IImmersiveApplicationNotificationService::`vcall'{24,{flat}}(*((_QWORD *)this + 13));
    v11 = v12;
    if ( v12 >= 0 )
    {
      v61 = v9;
      if ( v9 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
      v13 = v9;
      v46 = v9;
      if ( v9 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
      v14 =  IVirtualDesktopNotificationService::`vcall'{32,{flat}};
      v47 =  IVirtualDesktopNotificationService::`vcall'{32,{flat}};
      v15 = (_QWORD *)*((_QWORD *)this + 27);
      if ( v15 )
      {
        LOBYTE(v14) = v15 != v10;
        (*(void (__fastcall **)(_QWORD *, __int64 (__fastcall *)(__int64)))(*v15 + 24LL))(v15, v14);
        *((_QWORD *)this + 27) = 0LL;
      }
      *v10 = off_1801FF5F8;
      *((_QWORD *)this + 15) = 0LL;
      if ( (void **)((char *)this + 120) != &v46 )
      {
        *((_QWORD *)this + 15) = v9;
        v13 = 0LL;
      }
      *((_QWORD *)this + 16) =  IVirtualDesktopNotificationService::`vcall'{32,{flat}};
      *((_QWORD *)this + 27) = (char *)this + 112;
      if ( v13 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
      if ( v9 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
      v11 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x29,
        (__int64)"internal\\shell\\private\\inc\\SmartCookie.h",
        (const char *)(unsigned int)v12);
    }
    if ( v11 >= 0 )
    {
      v60 = 0LL;
      v17 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerInternal *, void **))(*(_QWORD *)a2 + 56LL))(
              a2,
              &v60);
      v18 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x6C,
          (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
          (const char *)(unsigned int)v17);
        v19 = v60;
        if ( v60 )
        {
          v60 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
        }
        VirtualDesktopDataSource::UninitializeInternal(v51);
        if ( v6 )
          ReleaseSRWLockExclusive(v6);
        return v18;
      }
      v20 = v60;
      v46 = v60;
      if ( v60 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v60 + 8LL))(v60);
      LODWORD(v47) = 0;
      v21 = (*(__int64 (__fastcall **)(void *, __int64 (__fastcall **)(__int64)))(*(_QWORD *)v20 + 24LL))(v20, &v47);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xD,
          (__int64)"internal\\shell\\private\\inc\\ObjectArrayAdapter.h",
          (const char *)(unsigned int)v21);
      v48 = 0;
      v49 = 0LL;
      v50 = &v46;
      ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v48);
      v53 = (int)v47;
      v54 = 0LL;
      v55 = &v46;
      ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v53);
      v23 = v62;
      while ( 1 )
      {
        if ( v48 == v53 && v50 == v55 )
        {
          v24 = v54;
          if ( v54 )
          {
            v54 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v25 = v49;
          if ( v49 )
          {
            v49 = 0LL;
            (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v25 + 16LL))(v25);
          }
          v26 = v46;
          if ( v46 )
          {
            v46 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
          }
          v52 = 0;
          v27 = v60;
          if ( v60 )
          {
            v60 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v27 + 16LL))(v27);
          }
          if ( v6 )
            ReleaseSRWLockExclusive(v6);
          return 0LL;
        }
        v28 = v49;
        v63 = v49;
        if ( v49 )
          (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v49 + 8LL))(v49);
        v61 = 0LL;
        v29 = VirtualDesktop_CreateInstance(v28, a2, v23, v22, &v61);
        v11 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x71,
            (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
            (const char *)(unsigned int)v29);
          v31 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 16LL))(v31);
          }
          if ( v28 )
            (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v28 + 16LL))(v28);
          v32 = v54;
          if ( v54 )
          {
            v54 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
          v33 = v49;
          if ( v49 )
          {
            v49 = 0LL;
            (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v33 + 16LL))(v33);
          }
          v34 = v46;
          if ( v46 )
          {
            v46 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 16LL))(v34);
          }
          v35 = v60;
          if ( v60 )
          {
            v60 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 16LL))(v35);
          }
          goto LABEL_30;
        }
        try
        {
          v36 = **((_QWORD **)this + 30);
          v37 = std::_List_buy<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>::_Buynode<IImmersiveMonitor * &,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal> &>(
                  v30,
                  (_QWORD *)v36,
                  *(_QWORD **)(v36 + 8),
                  (__int64 *)&v63,
                  (__int64 *)&v61);
          v38 = *((_QWORD *)this + 31);
          if ( v38 == 0x7FFFFFFFFFFFFFELL )
            std::_Xlength_error("list<T> too long");
          *((_QWORD *)this + 31) = v38 + 1;
          *(_QWORD *)(v36 + 8) = v37;
          *(_QWORD *)v37[1] = v37;
          std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Insert<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>(
            (char *)this + 232,
            v58,
            **((_QWORD **)this + 30) + 16LL);
        }
        catch ( ... )
        {
          LODWORD(v62) = wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x76,
                           (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                           v39);
          v41 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v41 + 16LL))(v41);
          }
          if ( v63 )
            (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v63 + 16LL))(v63);
          v42 = v54;
          if ( v54 )
          {
            v54 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          }
          v43 = v49;
          if ( v49 )
          {
            v49 = 0LL;
            (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v43 + 16LL))(v43);
          }
          v44 = v46;
          if ( v46 )
          {
            v46 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v44 + 16LL))(v44);
          }
          v45 = v60;
          if ( v60 )
          {
            v60 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v45 + 16LL))(v45);
          }
          if ( v52 )
            VirtualDesktopDataSource::UninitializeInternal(v51);
          if ( SRWLock )
            ReleaseSRWLockExclusive(SRWLock);
          return (unsigned int)v62;
        }
        v40 = v61;
        if ( v61 )
        {
          v61 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v40 + 16LL))(v40);
        }
        if ( v63 )
          (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v63 + 16LL))(v63);
        ++v48;
        ObjectArrayAdapter<IVirtualDesktop>::Iterator::GetCurrentObject(&v48);
      }
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x69,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
    (const char *)(unsigned int)v11);
LABEL_30:
  VirtualDesktopDataSource::UninitializeInternal(v51);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return (unsigned int)v11;
}
