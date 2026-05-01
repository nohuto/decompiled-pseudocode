/*
 * XREFs of ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1800F4D0C
 * Callers:
 *     ?RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ @ 0x1800F3328 (-RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1800F5090 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperatio.c)
 *     ??$MakeAndInitialize@VCPrivilegedNotificationOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedNotificationOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1800F5C08 (--$MakeAndInitialize@VCPrivilegedNotificationOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micro.c)
 *     ??$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedArrangementOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1800F5DDC (--$MakeAndInitialize@VCPrivilegedArrangementOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micros.c)
 *     ??$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedForegroundOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1800F5FB0 (--$MakeAndInitialize@VCPrivilegedForegroundOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microso.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations>::InitializePrivilegedOperations(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  int v5; // edi
  volatile signed __int32 *v6; // rcx
  int v7; // eax
  volatile signed __int32 *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  volatile signed __int32 *v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF

  v2 = *a2;
  v21 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v16 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v22 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v5 = PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations>::InitializePrivilegedOperations(
         a1,
         &v22);
  if ( v5 >= 0 )
  {
    v6 = (volatile signed __int32 *)a1[5];
    v17 = *a1;
    if ( v6 )
    {
      a1[5] = 0LL;
      if ( _InterlockedExchangeAdd(v6 + 13, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 32LL))(v6, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v2 = v21;
    }
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedForegroundOperations,CPrivilegedForegroundOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
           a1 + 5,
           &v17,
           &v16);
    v5 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x238,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v7);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v5 >= 0 )
  {
    v8 = (volatile signed __int32 *)a1[6];
    v18 = *a1;
    if ( v8 )
    {
      a1[6] = 0LL;
      if ( _InterlockedExchangeAdd(v8 + 13, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 64LL))(v8, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v2 = v21;
    }
    v9 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedArrangementOperations,CPrivilegedArrangementOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
           a1 + 6,
           &v18,
           &v21);
    v5 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x238,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v9);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v5 >= 0 )
  {
    v12 = (volatile signed __int32 *)a1[7];
    v19 = *a1;
    if ( v12 )
    {
      a1[7] = 0LL;
      if ( _InterlockedExchangeAdd(v12 + 13, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 32LL))(v12, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedNotificationOperations,CPrivilegedNotificationOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
            a1 + 7,
            &v19,
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
    return (unsigned int)v5;
  }
}
