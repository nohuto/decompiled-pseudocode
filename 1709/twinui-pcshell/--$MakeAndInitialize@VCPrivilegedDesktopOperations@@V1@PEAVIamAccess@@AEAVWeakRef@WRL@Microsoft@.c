/*
 * XREFs of ??$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedDesktopOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1800F5860
 * Callers:
 *     ?RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ @ 0x1800F3328 (-RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedDesktopOperations,CPrivilegedDesktopOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
        char **a1,
        __int64 *a2,
        __int64 *a3)
{
  char *v6; // rax
  char *v7; // rbx
  __int64 result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
    return 2147942414LL;
  v9 = v6 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 8));
  *((_DWORD *)v7 + 13) = 1;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPrivilegedDesktopOperations,Microsoft::WRL::FtmBase>::`vftable'{for `IPrivilegedDesktopOperations'};
  *v9 = &CPrivilegedDesktopOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 8) = 0LL;
  *(_QWORD *)v7 = &CPrivilegedDesktopOperations::`vftable'{for `IPrivilegedDesktopOperations'};
  *v9 = &CPrivilegedDesktopOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  v10 = *a3;
  v14 = *a3;
  if ( *a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = *a2;
  if ( *((_QWORD *)v7 + 7) != *a2 )
  {
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 44));
      v10 = v14;
    }
    v12 = (volatile signed __int32 *)*((_QWORD *)v7 + 7);
    *((_QWORD *)v7 + 7) = v11;
    if ( v12 )
    {
      if ( _InterlockedExchangeAdd(v12 + 11, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 72LL))(v12, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v10 = v14;
    }
  }
  if ( *((_QWORD *)v7 + 8) != v10 )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v13 = *((_QWORD *)v7 + 8);
    *((_QWORD *)v7 + 8) = v10;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)v7 + 13);
  result = 0LL;
  *a1 = v7;
  if ( v7 )
  {
    result = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 13, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 1LL);
      result = 0LL;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        return 0LL;
      }
    }
  }
  return result;
}
