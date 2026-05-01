/*
 * XREFs of ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180001E30
 * Callers:
 *     ?CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180001DB0 (-CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE.c)
 * Callees:
 *     sub_1800010E0 @ 0x1800010E0 (sub_1800010E0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180001A10 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003AA0 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x180004040 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800077D0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(__int64 a1, __int64 a2)
{
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v4; // rbx
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rcx
  LPUNKNOWN v7; // rcx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  void (*v9)(void); // rax
  __int64 v10; // r8
  unsigned int (__fastcall *v11)(Windows::System::AppMemoryUsageLimitChangingEventArgs *__hidden); // rax
  __int128 v12; // [rsp+20h] [rbp-38h]
  __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+70h] [rbp+18h] BYREF

  v4 = (Windows::System::AppMemoryUsageLimitChangingEventArgs *)operator new(
                                                                  0x48uLL,
                                                                  (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *((_QWORD *)v4 + 2) = &Microsoft::WRL::FtmBase::`vftable';
    v5 = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v6 = *((_QWORD *)v4 + 4);
      if ( v6 )
      {
        *((_QWORD *)v4 + 4) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        (char *)v4 + 32);
    }
    v7 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v7->lpVtbl->Release)(v7);
    }
    v8 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v4 + 2) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_QWORD *)v4 + 6) = 1LL;
    if ( v8 )
    {
      v9 = *(void (**)(void))(*(_QWORD *)v8 + 8LL);
      if ( (char *)v9 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
      else
        v9();
    }
    *((_QWORD *)v4 + 7) = a1;
    *(_QWORD *)v4 = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable';
    *((_QWORD *)v4 + 8) = a2;
    *((_QWORD *)v4 + 1) = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v4 + 2) = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *(_QWORD *)&v12 = 0LL;
    *((_QWORD *)&v12 + 1) = v4;
    AcquireSRWLockExclusive(&stru_1800186B8);
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      v5 = (volatile signed __int32 *)Windows::System::CMemoryManager::s_limitChangeEvent;
      _InterlockedIncrement((volatile signed __int32 *)(Windows::System::CMemoryManager::s_limitChangeEvent + 12));
    }
    ReleaseSRWLockExclusive(&stru_1800186B8);
    if ( v5 )
    {
      *(_OWORD *)v13 = v12;
      sub_1800010E0(v13, (__int64)v5, v10);
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
    }
    v11 = *(unsigned int (__fastcall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *__hidden))(*(_QWORD *)v4 + 16LL);
    if ( v11 == Windows::System::AppMemoryUsageLimitChangingEventArgs::Release )
      Windows::System::AppMemoryUsageLimitChangingEventArgs::Release(v4);
    else
      v11(v4);
  }
}
