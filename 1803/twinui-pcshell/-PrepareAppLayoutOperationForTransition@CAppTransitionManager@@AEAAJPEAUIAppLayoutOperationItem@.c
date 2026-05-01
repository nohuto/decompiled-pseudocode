/*
 * XREFs of ?PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@PEAUIAppLayout@@1@Z @ 0x1802AC65C
 * Callers:
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802AC7C0 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AD200 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801C541C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

__int64 __fastcall CAppTransitionManager::PrepareAppLayoutOperationForTransition(
        CAppTransitionManager *this,
        struct IAppLayoutOperationItem *a2,
        struct IAppLayout *a3,
        struct IAppLayout *a4)
{
  __int64 v8; // rax
  int v9; // esi
  void *v10; // r8
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // rdi
  CWinRTApplicationView *v15; // [rsp+20h] [rbp-10h] BYREF
  int v16; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CWinRTApplicationView *v18; // [rsp+58h] [rbp+28h] BYREF

  v18 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
  if ( (*(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, CWinRTApplicationView **))(*(_QWORD *)a2 + 32LL))(
         a2,
         &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
         &v18) < 0 )
  {
LABEL_14:
    v12 = 0;
    goto LABEL_15;
  }
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v15, &v18);
  v8 = *(_QWORD *)a2;
  v9 = 1;
  v16 = 1;
  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(v8 + 96))(a2) == 2
    && (*(unsigned int (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a3 + 80LL))(a3, 1LL) == 1 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a4 + 80LL))(a4, 1LL) )
      v9 = 3;
    v16 = v9;
  }
  v11 = *((_QWORD *)this + 30);
  if ( v11 != *((_QWORD *)this + 32)
    || (v12 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                (__int64)this + 232,
                v11 + 1,
                v10),
        v12 >= 0) )
  {
    ++*((_QWORD *)this + 30);
    v13 = 16LL * *((_QWORD *)this + 30) + *((_QWORD *)this + 29) - 16LL;
    if ( v13 )
    {
      *(_QWORD *)v13 = v15;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)v13);
      *(_DWORD *)(v13 + 8) = v9;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
LABEL_15:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
  return (unsigned int)v12;
}
