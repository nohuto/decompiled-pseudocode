/*
 * XREFs of ?HandleApplicationViewChangeSync@ApplicationViewManagerVisibilityDebouncer@@UEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180078F50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x18007472C (-Add@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@.c)
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x180079428 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync(
        RTL_SRWLOCK *a1,
        struct IApplicationView *a2,
        int a3)
{
  RTL_SRWLOCK *v5; // rbx
  void *v6; // r8
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v9; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v5 = a1 + 22;
      AcquireSRWLockExclusive(a1 + 22);
      v9 = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::Add(
             (__int64)&a1[23],
             &v9,
             v6);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xFC,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
          (const char *)(unsigned int)v7);
      if ( v9 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
    }
  }
  else
  {
    ApplicationViewManagerVisibilityDebouncer::ClearCachedAppView((ApplicationViewManagerVisibilityDebouncer *)a1, a2);
  }
}
