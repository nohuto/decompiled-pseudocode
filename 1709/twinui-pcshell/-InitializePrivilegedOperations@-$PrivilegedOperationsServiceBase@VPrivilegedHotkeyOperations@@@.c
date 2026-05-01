/*
 * XREFs of ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1800F5304
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1800F5090 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperatio.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedHotkeyOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1800F6700 (--$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations>::InitializePrivilegedOperations(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  volatile signed __int32 *v5; // rcx
  Microsoft::WRL::FtmBase *v6; // rax
  Microsoft::WRL::FtmBase *v7; // rbx
  int LastError; // esi
  const char *v9; // r9
  __int64 v10; // rcx
  volatile signed __int32 *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+68h] [rbp+10h]
  volatile signed __int32 *v18; // [rsp+70h] [rbp+18h] BYREF

  v2 = *a2;
  v17 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v5 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v5 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 72LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v2 = v17;
  }
  *a1 = 0LL;
  v6 = (Microsoft::WRL::FtmBase *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    LastError = -2147024882;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x210,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)LastError);
    goto LABEL_25;
  }
  Microsoft::WRL::FtmBase::FtmBase(v6);
  *((_DWORD *)v7 + 11) = 1;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)v7 + 7) = 0LL;
  *(_QWORD *)v7 = &IamAccess::`vftable';
  *((_QWORD *)v7 + 6) = 0LL;
  if ( (unsigned int)AcquireIAMKey() )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x3B,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v9);
  if ( LastError >= 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)v7 + 11, 1u);
    *a1 = (volatile signed __int32 *)v7;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::FtmBase *, __int64))(*(_QWORD *)v7 + 72LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    LastError = 0;
  }
  else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 11, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(Microsoft::WRL::FtmBase *, __int64))(*(_QWORD *)v7 + 72LL))(v7, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  v2 = v17;
  if ( LastError < 0 )
    goto LABEL_24;
LABEL_25:
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( LastError >= 0 )
  {
    v12 = a1[1];
    v18 = *a1;
    if ( v12 )
    {
      a1[1] = 0LL;
      if ( !_InterlockedDecrement(v12 + 13) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 40LL))(v12, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    v13 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedHotkeyOperations,PrivilegedHotkeyOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
            a1 + 1,
            &v18,
            a2);
    v14 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x238,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v13);
    v15 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return v14;
  }
  else
  {
    v10 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return (unsigned int)LastError;
  }
}
