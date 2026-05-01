/*
 * XREFs of ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800030C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003AC0 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180003D40 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x180003DCC (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     RmpBindToRmRpcServer @ 0x180004120 (RmpBindToRmRpcServer.c)
 *     ??3@YAXPEAX@Z @ 0x18000728C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800077D0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180007C40 (--2@YAPEAX_K@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007D40 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000A1A4 (--1-$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetAppMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IAppMemoryReport **a2)
{
  int InformationProcess; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  ModernResourceManagerProxy *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  ModernResourceManagerProxy *v10; // rsi
  signed int v11; // edi
  NTSTATUS v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall **v14)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rdi
  struct Windows::System::IAppMemoryReport *v15; // rcx
  __int64 (__fastcall **v16)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rsi
  __int64 (__fastcall ***v17)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rax
  __int64 (__fastcall ***v18)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rbx
  struct Microsoft::WRL::Details::ModuleBase *v19; // rcx
  void (*v20)(void); // rax
  __int64 (__fastcall *v21)(Windows::System::CAppMemoryReport *, __int64, __int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v22)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rax
  __int64 (__fastcall *v23)(Windows::System::CAppMemoryReport *); // rax
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  __int64 (__fastcall *v26)(Windows::System::CAppMemoryReport *); // rax
  signed __int64 v27; // rax
  signed __int32 v28; // ecx
  signed __int64 v29; // rtt
  struct Windows::System::IAppMemoryReport *v30; // rcx
  Windows::System::CAppMemoryReport *(__fastcall *v32)(Windows::System::CAppMemoryReport *, char); // rax
  __int64 v33; // rcx
  ModernResourceManagerProxy *v34; // rax
  void (*v35)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v36)(unsigned __int64, unsigned __int64); // r8
  signed int v37; // eax
  signed int v38; // eax
  struct Windows::System::IAppMemoryReport *v39; // [rsp+38h] [rbp-79h] BYREF
  __int64 (__fastcall ***v40)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // [rsp+40h] [rbp-71h] BYREF
  int v41; // [rsp+48h] [rbp-69h] BYREF
  __int64 v42; // [rsp+50h] [rbp-61h]
  char v43[4]; // [rsp+58h] [rbp-59h] BYREF
  ULONG v44; // [rsp+5Ch] [rbp-55h] BYREF
  __int128 v45; // [rsp+60h] [rbp-51h]
  __int128 v46; // [rsp+70h] [rbp-41h]
  __int64 v47; // [rsp+80h] [rbp-31h]
  char v48[8]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v49; // [rsp+90h] [rbp-21h]
  _OWORD ProcessInformation[2]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v51; // [rsp+B8h] [rbp+7h]
  char SystemInformation[16]; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v53; // [rsp+D0h] [rbp+1Fh]

  v39 = 0LL;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess < 0 )
  {
LABEL_55:
    v37 = RtlNtStatusToDosError(InformationProcess);
    v11 = v37;
    if ( v37 > 0 )
      v11 = (unsigned __int16)v37 | 0x80070000;
    goto LABEL_15;
  }
  v6 = 0LL;
  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock, v4, v5);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    v7 = 0;
  }
  else
  {
    v34 = (ModernResourceManagerProxy *)operator new(0x58uLL);
    if ( v34 && (v6 = ModernResourceManagerProxy::ModernResourceManagerProxy(v34)) != 0LL )
    {
      v7 = RmpBindToRmRpcServer(&unk_18000F790);
      if ( v7 >= 0 )
      {
        v7 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v6, v35, v36);
        if ( v7 >= 0 )
        {
          if ( Windows::System::CMemoryManager::s_pProxy )
            (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                                 + 16LL))(Windows::System::CMemoryManager::s_pProxy);
          Windows::System::CMemoryManager::s_pProxy = v6;
          v7 = 0;
          v6 = 0LL;
        }
      }
    }
    else
    {
      v7 = -2147024882;
    }
  }
  RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( v6 )
    (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 < 0 )
  {
    v13 = v51;
LABEL_11:
    if ( ((v13 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
LABEL_14:
      v42 = v13;
      v11 = 0;
      v45 = ProcessInformation[0];
      v47 = v51;
      v46 = ProcessInformation[1];
      goto LABEL_15;
    }
    InformationProcess = NtQuerySystemInformation(
                           MaxSystemInfoClass|SystemFullMemoryInformation,
                           SystemInformation,
                           0x20u,
                           &v44);
    if ( InformationProcess >= 0 )
    {
      v13 = v53 * RmpPageSize;
      goto LABEL_14;
    }
    goto LABEL_55;
  }
  v10 = Windows::System::CMemoryManager::s_pProxy;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 72, v8, v9);
  *((_DWORD *)v10 + 20) = GetCurrentThreadId();
  v11 = ModernResourceManagerProxy::RegisterWithServer(v10);
  if ( v11 < 0 )
  {
    v13 = (__int64)v40;
  }
  else
  {
    v41 = 16;
    v12 = NtQueryWnfStateData((char *)v10 + 48, 0LL, 0LL, v43, v48, &v41);
    if ( v12 < 0 )
    {
      v38 = RtlNtStatusToDosError(v12);
      v13 = (__int64)v40;
      v11 = v38;
      if ( v38 > 0 )
        v11 = (unsigned __int16)v38 | 0x80070000;
    }
    else
    {
      v13 = v49;
      v11 = 0;
    }
  }
  *((_DWORD *)v10 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)v10 + 72);
  if ( v11 >= 0 )
    goto LABEL_11;
LABEL_15:
  if ( v11 < 0 )
    goto LABEL_62;
  v14 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))*((_QWORD *)&v45 + 1);
  v15 = v39;
  v16 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))(*((_QWORD *)&v45 + 1) + v45);
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v39 = 0LL;
  v40 = 0LL;
  v17 = (__int64 (__fastcall ***)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v17;
  if ( !v17 )
  {
    Microsoft::WRL::ComPtr<Windows::System::CAppMemoryReport>::~ComPtr<Windows::System::CAppMemoryReport>(&v40);
    v11 = -2147024882;
    goto LABEL_62;
  }
  v19 = Microsoft::WRL::Details::ModuleBase::module_;
  v17[4] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))1;
  *v17 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  v17[1] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  v17[2] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( v19 )
  {
    v20 = *(void (**)(void))(*(_QWORD *)v19 + 8LL);
    if ( (char *)v20 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v14 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))*((_QWORD *)&v45 + 1);
    }
    else
    {
      v20();
    }
  }
  v18[5] = 0LL;
  v21 = (__int64 (__fastcall *)(Windows::System::CAppMemoryReport *, __int64, __int64, __int64, unsigned __int64))*(&Windows::System::CAppMemoryReport::`vftable' + 11);
  *v18 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable';
  v18[1] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `IWeakReferenceSource'};
  v18[2] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  v18[6] = 0LL;
  v18[7] = 0LL;
  v18[8] = 0LL;
  v40 = v18;
  if ( v21 == Windows::System::CAppMemoryReport::RuntimeClassInitialize )
  {
    v18[6] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))v46;
    v18[8] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))v42;
    v18[5] = v14;
    v18[7] = v16;
  }
  else
  {
    v11 = v21((Windows::System::CAppMemoryReport *)v18, (__int64)v14, v46, (__int64)v16, v42);
    if ( v11 < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::System::CAppMemoryReport>::~ComPtr<Windows::System::CAppMemoryReport>(&v40);
      goto LABEL_35;
    }
  }
  v22 = **v18;
  if ( v22 == Windows::System::CAppMemoryReport::QueryInterface )
  {
    v39 = (struct Windows::System::IAppMemoryReport *)v18;
    v23 = (__int64 (__fastcall *)(Windows::System::CAppMemoryReport *))(*v18)[1];
    if ( v23 == Windows::System::CAppMemoryReport::AddRef )
    {
      v24 = (signed __int64)v18[4];
      while ( v24 >= 0 )
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 4, v24 + 1, v24);
        if ( v25 == v24 )
          goto LABEL_29;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v24 + 16));
    }
    else
    {
      v23((Windows::System::CAppMemoryReport *)v18);
    }
LABEL_29:
    v11 = 0;
  }
  else
  {
    v11 = v22((Windows::System::CAppMemoryReport *)v18, &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d, (void **)&v39);
  }
  v26 = (__int64 (__fastcall *)(Windows::System::CAppMemoryReport *))(*v18)[2];
  if ( v26 != Windows::System::CAppMemoryReport::Release )
    goto LABEL_72;
  v27 = (signed __int64)v18[4];
  while ( v27 >= 0 )
  {
    v28 = v27 - 1;
    v29 = v27;
    v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 4, v27 - 1, v27);
    if ( v29 == v27 )
      goto LABEL_34;
  }
  v28 = _InterlockedDecrement((volatile signed __int32 *)(2 * v27 + 16));
LABEL_34:
  if ( !v28 )
  {
    v32 = (Windows::System::CAppMemoryReport *(__fastcall *)(Windows::System::CAppMemoryReport *, char))(*v18)[10];
    if ( v32 == Windows::System::CAppMemoryReport::`vector deleting destructor' )
    {
      v33 = (__int64)v18[4];
      *v18 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable';
      v18[1] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `IWeakReferenceSource'};
      v18[2] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
      if ( v33 < 0 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v33);
      operator delete(v18);
    }
    else
    {
      v32((Windows::System::CAppMemoryReport *)v18, 1);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v26 = *(__int64 (__fastcall **)(Windows::System::CAppMemoryReport *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                          + 16LL);
      if ( (char *)v26 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        goto LABEL_35;
      }
LABEL_72:
      ((void (*)(void))v26)();
    }
  }
LABEL_35:
  if ( v11 >= 0 )
  {
    v30 = 0LL;
    *a2 = v39;
    goto LABEL_37;
  }
LABEL_62:
  v30 = v39;
LABEL_37:
  if ( v30 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v30 + 16LL))(v30);
  }
  return (unsigned int)v11;
}
