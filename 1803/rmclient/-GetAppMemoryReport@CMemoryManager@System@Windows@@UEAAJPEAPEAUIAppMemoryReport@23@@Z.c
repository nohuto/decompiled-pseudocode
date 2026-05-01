/*
 * XREFs of ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180002BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003390 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x18000355C (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x1800035E4 (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     CempRpcBindToServer @ 0x180003DDC (CempRpcBindToServer.c)
 *     __security_check_cookie @ 0x180006FE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800070E4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180007550 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180009528 (--1-$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18000B450 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetAppMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IAppMemoryReport **a2)
{
  int InformationProcess; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  signed int v6; // eax
  signed int v7; // edi
  ModernResourceManagerProxy *v8; // rbx
  int v9; // edi
  ModernResourceManagerProxy *v10; // rax
  int v11; // eax
  void (*v12)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v13)(unsigned __int64, unsigned __int64); // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  ModernResourceManagerProxy *v16; // rsi
  NTSTATUS v17; // eax
  signed int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdi
  struct Windows::System::IAppMemoryReport *v21; // rcx
  __int64 v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  struct Windows::System::IAppMemoryReport *v25; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v27; // rcx
  void (*v28)(void); // rax
  int (*v29)(Windows::System::CAppMemoryReport *__hidden, const struct _GUID *, void **); // rax
  unsigned int (__fastcall *v30)(Windows::System::CAppMemoryReport *__hidden); // rax
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  struct Windows::System::IAppMemoryReport *v33; // [rsp+38h] [rbp-79h] BYREF
  int v34; // [rsp+40h] [rbp-71h] BYREF
  __int64 v35; // [rsp+48h] [rbp-69h]
  char v36[4]; // [rsp+50h] [rbp-61h] BYREF
  ULONG v37; // [rsp+54h] [rbp-5Dh] BYREF
  _QWORD *v38; // [rsp+58h] [rbp-59h]
  __int128 v39; // [rsp+60h] [rbp-51h]
  __int128 v40; // [rsp+70h] [rbp-41h]
  __int64 v41; // [rsp+80h] [rbp-31h]
  char v42[8]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v43; // [rsp+90h] [rbp-21h]
  _OWORD ProcessInformation[2]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v45; // [rsp+B8h] [rbp+7h]
  char SystemInformation[16]; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v47; // [rsp+D0h] [rbp+1Fh]

  v33 = 0LL;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess < 0 )
  {
LABEL_2:
    v6 = RtlNtStatusToDosError(InformationProcess);
    v7 = v6;
    if ( v6 > 0 )
      v7 = (unsigned __int16)v6 | 0x80070000;
    goto LABEL_30;
  }
  v8 = 0LL;
  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock, v4, v5);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    v9 = 0;
  }
  else
  {
    v10 = (ModernResourceManagerProxy *)operator new(0x58uLL);
    if ( v10 && (v8 = ModernResourceManagerProxy::ModernResourceManagerProxy(v10)) != 0LL )
    {
      v11 = CempRpcBindToServer(&unk_180010810);
      v9 = v11 | 0x10000000;
      if ( v11 >= 0 )
      {
        v9 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v8, v12, v13);
        if ( v9 >= 0 )
        {
          if ( Windows::System::CMemoryManager::s_pProxy )
            (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                                 + 16LL))(Windows::System::CMemoryManager::s_pProxy);
          Windows::System::CMemoryManager::s_pProxy = v8;
          v9 = 0;
          v8 = 0LL;
        }
      }
    }
    else
    {
      v9 = -2147024882;
    }
  }
  RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( v8 )
    (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 < 0 )
  {
    v19 = v45;
    goto LABEL_26;
  }
  v16 = Windows::System::CMemoryManager::s_pProxy;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 72, v14, v15);
  *((_DWORD *)v16 + 20) = GetCurrentThreadId();
  v7 = ModernResourceManagerProxy::RegisterWithServer(v16);
  if ( v7 < 0 )
  {
    v19 = (__int64)v33;
  }
  else
  {
    v34 = 16;
    v17 = NtQueryWnfStateData((char *)v16 + 48, 0LL, 0LL, v36, v42, &v34);
    if ( v17 >= 0 )
    {
      v19 = v43;
      v7 = 0;
    }
    else
    {
      v18 = RtlNtStatusToDosError(v17);
      v19 = (__int64)v33;
      v7 = v18;
      if ( v18 > 0 )
        v7 = (unsigned __int16)v18 | 0x80070000;
    }
  }
  *((_DWORD *)v16 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)v16 + 72);
  if ( v7 >= 0 )
  {
LABEL_26:
    if ( ((v19 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      InformationProcess = NtQuerySystemInformation(
                             MaxSystemInfoClass|SystemFullMemoryInformation,
                             SystemInformation,
                             0x20u,
                             &v37);
      if ( InformationProcess < 0 )
        goto LABEL_2;
      v19 = v47 * RmpPageSize;
    }
    v35 = v19;
    v7 = 0;
    v39 = ProcessInformation[0];
    v41 = v45;
    v40 = ProcessInformation[1];
  }
LABEL_30:
  if ( v7 < 0 )
  {
LABEL_35:
    v25 = v33;
    goto LABEL_36;
  }
  v20 = *((_QWORD *)&v39 + 1);
  v21 = v33;
  v22 = *((_QWORD *)&v39 + 1) + v39;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v33 = 0LL;
  v23 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v24 = v23;
  if ( !v23 )
  {
    v7 = -2147024882;
    goto LABEL_35;
  }
  v27 = Microsoft::WRL::Details::ModuleBase::module_;
  v23[5] = 1LL;
  *v23 = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Windows::System::IAppMemoryReport'};
  v23[1] = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
  v23[2] = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Windows::System::IAppMemoryReport2'};
  v23[3] = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  if ( v27 )
  {
    v28 = *(void (**)(void))(*(_QWORD *)v27 + 8LL);
    if ( (char *)v28 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v20 = *((_QWORD *)&v39 + 1);
    }
    else
    {
      v28();
    }
  }
  v24[6] = 0LL;
  *v24 = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport'};
  v24[7] = 0LL;
  v24[1] = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
  v24[2] = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport2'};
  v24[3] = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  v24[8] = 0LL;
  v24[9] = 0LL;
  v38 = v24;
  v24[7] = v40;
  v24[9] = v35;
  v24[6] = v20;
  v24[8] = v22;
  v29 = *(int (**)(Windows::System::CAppMemoryReport *__hidden, const struct _GUID *, void **))*v24;
  if ( v29 == Windows::System::CAppMemoryReport::QueryInterface )
  {
    v33 = (struct Windows::System::IAppMemoryReport *)v24;
    v30 = *(unsigned int (__fastcall **)(Windows::System::CAppMemoryReport *__hidden))(*v24 + 8LL);
    if ( v30 == Windows::System::CAppMemoryReport::AddRef )
    {
      v31 = v24[5];
      while ( v31 >= 0 )
      {
        if ( (_DWORD)v31 == 0x7FFFFFFF )
          goto LABEL_52;
        v32 = v31;
        v31 = _InterlockedCompareExchange64(v24 + 5, v31 + 1, v31);
        if ( v32 == v31 )
        {
          v7 = 0;
          goto LABEL_54;
        }
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v31 + 16));
      v7 = 0;
    }
    else
    {
      v30((Windows::System::CAppMemoryReport *)v24);
LABEL_52:
      v7 = 0;
    }
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(_QWORD *, GUID *, struct Windows::System::IAppMemoryReport **))v29)(
           v24,
           &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d,
           &v33);
  }
LABEL_54:
  (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
  if ( v7 < 0 )
    goto LABEL_35;
  v25 = 0LL;
  *a2 = v33;
LABEL_36:
  if ( v25 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return (unsigned int)v7;
}
