/*
 * XREFs of ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1800D1EAC
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1800D1B38 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedArrangementOperati.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005130 (-Release@-$RuntimeClass@U-$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U-$InterfaceList.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1800D2110 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOper.c)
 *     ??$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCPrivilegedTabletModeOperations@@@WRL@Microsoft@@@012@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1800D2B08 (--$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microso.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations>::InitializePrivilegedOperations(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  int v5; // ebx
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rbp
  char *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // r15
  bool i; // zf
  signed __int32 v12; // eax
  volatile signed __int32 *v13; // rcx
  __int64 v14; // rcx
  signed __int32 v15; // eax
  __int64 v16; // rcx
  void (*v17)(void); // rax
  int v18; // eax
  __int64 v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF
  __int64 v23; // [rsp+60h] [rbp+18h] BYREF
  __int64 v24; // [rsp+68h] [rbp+20h]

  v2 = *a2;
  v24 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v22 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v5 = PrivilegedOperationsServiceBase<PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations>::InitializePrivilegedOperations(
         a1,
         &v22);
  if ( v5 >= 0 )
  {
    v6 = (volatile signed __int32 *)a1[3];
    v7 = *a1;
    if ( v6 )
    {
      a1[3] = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IPrivilegedWindowOwnershipOperations,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
    }
    a1[3] = 0LL;
    v8 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = (__int64)v8;
    if ( v8 )
    {
      v10 = v8 + 8;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 8));
      *(_DWORD *)(v9 + 36) = 1;
      *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IPrivilegedSizeConstraintsOperations'};
      *v10 = &CPrivilegedSizeConstraintsOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *(_QWORD *)(v9 + 40) = 0LL;
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_QWORD *)v9 = &CPrivilegedSizeConstraintsOperations::`vftable'{for `IPrivilegedSizeConstraintsOperations'};
      *v10 = &CPrivilegedSizeConstraintsOperations::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      if ( *(_QWORD *)(v9 + 40) != v7 )
      {
        for ( i = v7 == 0; !i; i = v12 == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)(v7 + 28),
                                            v12 + 1,
                                            v12) )
        {
          v12 = *(_DWORD *)(v7 + 28);
          if ( v12 == 0x7FFFFFFF )
            break;
        }
        v13 = *(volatile signed __int32 **)(v9 + 40);
        *(_QWORD *)(v9 + 40) = v7;
        if ( v13 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v13);
      }
      if ( *(_QWORD *)(v9 + 48) != v2 )
      {
        if ( v2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
        v14 = *(_QWORD *)(v9 + 48);
        *(_QWORD *)(v9 + 48) = v2;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      do
        v15 = *(_DWORD *)(v9 + 36);
      while ( v15 != 0x7FFFFFFF
           && v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 36), v15 + 1, v15) );
      a1[3] = v9;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IPrivilegedWindowOwnershipOperations,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v9);
      v5 = 0;
    }
    else
    {
      v5 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24F,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)0x8007000ELL);
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v5 >= 0 )
  {
    v23 = *a1;
    v18 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedTabletModeOperations,CPrivilegedTabletModeOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
            a1 + 4,
            &v23,
            a2);
    v5 = v18;
    if ( v18 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24F,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v18);
    v19 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      v17 = *(void (**)(void))(*(_QWORD *)v19 + 16LL);
      goto LABEL_40;
    }
  }
  else
  {
    v16 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      v17 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
LABEL_40:
      v17();
    }
  }
  return (unsigned int)v5;
}
