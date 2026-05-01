/*
 * XREFs of ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@@012@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x180074DB4
 * Callers:
 *     ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x180072EC0 (-RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListe.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1800789B0 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x18007AEB0 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AgileApplicationViewChangeListenerConverter,IApplicationViewChangeListener,IApplicationViewChangeListener * &>(
        __int64 *a1,
        struct IApplicationViewChangeListener **a2)
{
  __int64 v4; // rcx
  char *v5; // rax
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // esi
  _QWORD *v8; // rsi

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a1 = 0LL;
  v5 = (char *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (struct _RTL_CRITICAL_SECTION *)v5;
  if ( v5 )
  {
    v8 = v5 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 8));
    HIDWORD(v6->SpinCount) = 1;
    v6->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewChangeListener,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IApplicationViewChangeListener'};
    *v8 = &AgileApplicationViewChangeListenerConverter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    LODWORD(v6[2].DebugInfo) = -2;
    HIDWORD(v6[2].DebugInfo) = 2;
    InitializeCriticalSection(v6 + 1);
    v6->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&AgileApplicationViewChangeListenerConverter::`vftable'{for `IApplicationViewChangeListener'};
    *v8 = &AgileApplicationViewChangeListenerConverter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *(_QWORD *)&v6[2].LockCount = 0LL;
    v6[2].OwningThread = 0LL;
    v7 = AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize(
           (AgileApplicationViewChangeListenerConverter *)v6,
           *a2);
    if ( v7 >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, GUID *, __int64 *))v6->DebugInfo->Type)(
             v6,
             &GUID_727f9e97_76ee_497b_a942_b6371328485c,
             a1);
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v6->DebugInfo->ProcessLocksList.Flink)(v6);
    }
    else if ( v6 )
    {
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v6->DebugInfo->ProcessLocksList.Flink)(v6);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
