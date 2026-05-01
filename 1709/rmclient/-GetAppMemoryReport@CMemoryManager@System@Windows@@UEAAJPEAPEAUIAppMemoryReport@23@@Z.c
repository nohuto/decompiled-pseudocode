/*
 * XREFs of ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180002F80
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003C50 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180003D60 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x180003DEC (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     CempRpcBindToServer @ 0x1800041C0 (CempRpcBindToServer.c)
 *     ??3@YAXPEAX@Z @ 0x18000725C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180007780 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180007AA0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180008070 (--2@YAPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008120 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000A360 (--1-$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetAppMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IAppMemoryReport **a2)
{
  int InformationProcess; // eax
  ModernResourceManagerProxy *v4; // rdi
  int v5; // ebx
  ModernResourceManagerProxy *v6; // rsi
  signed int v7; // edi
  NTSTATUS v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall **v10)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rdi
  struct Windows::System::IAppMemoryReport *v11; // rcx
  __int64 (__fastcall **v12)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rsi
  __int64 (__fastcall ***v13)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rax
  __int64 (__fastcall ***v14)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rbx
  struct Microsoft::WRL::Details::ModuleBase *v15; // rcx
  void (*v16)(void); // rax
  __int64 (__fastcall *v17)(Windows::System::CAppMemoryReport *, __int64, __int64, __int64, unsigned __int64); // rax
  __int64 (__fastcall *v18)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // rax
  __int64 (__fastcall *v19)(Windows::System::CAppMemoryReport *); // rax
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int64 (__fastcall *v22)(Windows::System::CAppMemoryReport *); // rax
  signed __int64 v23; // rax
  signed __int32 v24; // ecx
  signed __int64 v25; // rtt
  Windows::System::CAppMemoryReport *(__fastcall *v26)(Windows::System::CAppMemoryReport *, char); // rax
  __int64 v27; // rcx
  struct Windows::System::IAppMemoryReport *v28; // rcx
  ModernResourceManagerProxy *v30; // rax
  int v31; // eax
  void (*v32)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v33)(unsigned __int64, unsigned __int64); // r8
  signed int v34; // eax
  signed int v35; // eax
  struct Windows::System::IAppMemoryReport *v36; // [rsp+38h] [rbp-79h] BYREF
  int v37; // [rsp+40h] [rbp-71h] BYREF
  __int64 v38; // [rsp+48h] [rbp-69h]
  char v39[4]; // [rsp+50h] [rbp-61h] BYREF
  ULONG v40; // [rsp+54h] [rbp-5Dh] BYREF
  __int64 (__fastcall ***v41)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **); // [rsp+58h] [rbp-59h] BYREF
  __int128 v42; // [rsp+60h] [rbp-51h]
  __int128 v43; // [rsp+70h] [rbp-41h]
  __int64 v44; // [rsp+80h] [rbp-31h]
  char v45[8]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v46; // [rsp+90h] [rbp-21h]
  _OWORD ProcessInformation[2]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v48; // [rsp+B8h] [rbp+7h]
  char SystemInformation[16]; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v50; // [rsp+D0h] [rbp+1Fh]

  v36 = 0LL;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess < 0 )
  {
LABEL_55:
    v34 = RtlNtStatusToDosError(InformationProcess);
    v7 = v34;
    if ( v34 > 0 )
      v7 = (unsigned __int16)v34 | 0x80070000;
    goto LABEL_15;
  }
  v4 = 0LL;
  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    v5 = 0;
  }
  else
  {
    v30 = (ModernResourceManagerProxy *)operator new(0x58uLL);
    if ( v30 && (v4 = ModernResourceManagerProxy::ModernResourceManagerProxy(v30)) != 0LL )
    {
      v31 = CempRpcBindToServer(&unk_180010900);
      v5 = v31 | 0x10000000;
      if ( v31 >= 0 )
      {
        v5 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v4, v32, v33);
        if ( v5 >= 0 )
        {
          if ( Windows::System::CMemoryManager::s_pProxy )
            (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                                 + 16LL))(Windows::System::CMemoryManager::s_pProxy);
          Windows::System::CMemoryManager::s_pProxy = v4;
          v5 = 0;
          v4 = 0LL;
        }
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( v4 )
    (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 < 0 )
  {
    v9 = v48;
LABEL_11:
    if ( ((v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
LABEL_14:
      v38 = v9;
      v7 = 0;
      v42 = ProcessInformation[0];
      v44 = v48;
      v43 = ProcessInformation[1];
      goto LABEL_15;
    }
    InformationProcess = NtQuerySystemInformation(
                           MaxSystemInfoClass|SystemFullMemoryInformation,
                           SystemInformation,
                           0x20u,
                           &v40);
    if ( InformationProcess >= 0 )
    {
      v9 = v50 * RmpPageSize;
      goto LABEL_14;
    }
    goto LABEL_55;
  }
  v6 = Windows::System::CMemoryManager::s_pProxy;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 72);
  *((_DWORD *)v6 + 20) = GetCurrentThreadId();
  v7 = ModernResourceManagerProxy::RegisterWithServer(v6);
  if ( v7 < 0 )
  {
    v9 = (__int64)v36;
  }
  else
  {
    v37 = 16;
    v8 = NtQueryWnfStateData((char *)v6 + 48, 0LL, 0LL, v39, v45, &v37);
    if ( v8 < 0 )
    {
      v35 = RtlNtStatusToDosError(v8);
      v9 = (__int64)v36;
      v7 = v35;
      if ( v35 > 0 )
        v7 = (unsigned __int16)v35 | 0x80070000;
    }
    else
    {
      v9 = v46;
      v7 = 0;
    }
  }
  *((_DWORD *)v6 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)v6 + 72);
  if ( v7 >= 0 )
    goto LABEL_11;
LABEL_15:
  if ( v7 < 0 )
    goto LABEL_62;
  v10 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))*((_QWORD *)&v42 + 1);
  v11 = v36;
  v12 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))(*((_QWORD *)&v42 + 1) + v42);
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v36 = 0LL;
  v13 = (__int64 (__fastcall ***)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( !v13 )
  {
    v7 = -2147024882;
    goto LABEL_62;
  }
  v15 = Microsoft::WRL::Details::ModuleBase::module_;
  v13[5] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))1;
  *v13 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Windows::System::IAppMemoryReport'};
  v13[1] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
  v13[2] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Windows::System::IAppMemoryReport2'};
  v13[3] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  if ( v15 )
  {
    v16 = *(void (**)(void))(*(_QWORD *)v15 + 8LL);
    if ( (char *)v16 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v10 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))*((_QWORD *)&v42 + 1);
    }
    else
    {
      v16();
    }
  }
  v14[6] = 0LL;
  v17 = (__int64 (__fastcall *)(Windows::System::CAppMemoryReport *, __int64, __int64, __int64, unsigned __int64))*(&Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport'} + 11);
  *v14 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport'};
  v14[1] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
  v14[2] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport2'};
  v14[3] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  v14[7] = 0LL;
  v14[8] = 0LL;
  v14[9] = 0LL;
  v41 = v14;
  if ( v17 == Windows::System::CAppMemoryReport::RuntimeClassInitialize )
  {
    v14[7] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))v43;
    v14[9] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))v38;
    v14[6] = v10;
    v14[8] = v12;
  }
  else
  {
    v7 = v17((Windows::System::CAppMemoryReport *)v14, (__int64)v10, v43, (__int64)v12, v38);
    if ( v7 < 0 )
    {
      Microsoft::WRL::ComPtr<Windows::System::CAppMemoryReport>::~ComPtr<Windows::System::CAppMemoryReport>(&v41);
      goto LABEL_42;
    }
  }
  v18 = **v14;
  if ( v18 == Windows::System::CAppMemoryReport::QueryInterface )
  {
    v36 = (struct Windows::System::IAppMemoryReport *)v14;
    v19 = (__int64 (__fastcall *)(Windows::System::CAppMemoryReport *))(*v14)[1];
    if ( v19 == Windows::System::CAppMemoryReport::AddRef )
    {
      v20 = (signed __int64)v14[5];
      while ( v20 >= 0 )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 5, v20 + 1, v20);
        if ( v21 == v20 )
          goto LABEL_29;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v20 + 16));
    }
    else
    {
      v19((Windows::System::CAppMemoryReport *)v14);
    }
LABEL_29:
    v7 = 0;
  }
  else
  {
    v7 = v18((Windows::System::CAppMemoryReport *)v14, &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d, (void **)&v36);
  }
  v22 = (__int64 (__fastcall *)(Windows::System::CAppMemoryReport *))(*v14)[2];
  if ( v22 != Windows::System::CAppMemoryReport::Release )
    goto LABEL_72;
  v23 = (signed __int64)v14[5];
  while ( v23 >= 0 )
  {
    v24 = v23 - 1;
    v25 = v23;
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v14 + 5, v23 - 1, v23);
    if ( v25 == v23 )
      goto LABEL_34;
  }
  v24 = _InterlockedDecrement((volatile signed __int32 *)(2 * v23 + 16));
LABEL_34:
  if ( !v24 )
  {
    v26 = (Windows::System::CAppMemoryReport *(__fastcall *)(Windows::System::CAppMemoryReport *, char))(*v14)[10];
    if ( v26 == Windows::System::CAppMemoryReport::`vector deleting destructor' )
    {
      v27 = (__int64)v14[5];
      *v14 = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport'};
      v14[1] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
      v14[2] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport2'};
      v14[3] = (__int64 (__fastcall **)(Windows::System::CAppMemoryReport *, const struct _GUID *, void **))&Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
      if ( v27 < 0 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v27);
      operator delete(v14);
    }
    else
    {
      v26((Windows::System::CAppMemoryReport *)v14, 1);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v22 = *(__int64 (__fastcall **)(Windows::System::CAppMemoryReport *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                          + 16LL);
      if ( (char *)v22 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        goto LABEL_42;
      }
LABEL_72:
      ((void (*)(void))v22)();
    }
  }
LABEL_42:
  if ( v7 >= 0 )
  {
    v28 = 0LL;
    *a2 = v36;
    goto LABEL_44;
  }
LABEL_62:
  v28 = v36;
LABEL_44:
  if ( v28 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return (unsigned int)v7;
}
