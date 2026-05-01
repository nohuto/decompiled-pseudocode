/*
 * XREFs of ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180002100
 * Callers:
 *     ?CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180002080 (-CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE.c)
 * Callees:
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x1800021D0 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ.c)
 *     ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AEA_K0@Z @ 0x1800023C0 (--$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800024D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64___ @ 0x18000B2A8 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Wind.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(__int64 a1, __int64 a2)
{
  Windows::System::AppMemoryUsageLimitChangingEventArgs **v2; // rax
  __int64 v3; // rdi
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v4; // rbx
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v5; // rcx
  unsigned int (__fastcall *v6)(Windows::System::AppMemoryUsageLimitChangingEventArgs *__hidden); // rax
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v11 = a2;
  v10 = a1;
  v2 = (Windows::System::AppMemoryUsageLimitChangingEventArgs **)Microsoft::WRL::Details::Make<Windows::System::AppMemoryUsageLimitChangingEventArgs,unsigned __int64 &,unsigned __int64 &>(
                                                                   &v12,
                                                                   &v10,
                                                                   &v11);
  v3 = 0LL;
  v4 = *v2;
  *v2 = 0LL;
  v5 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release(v5);
  }
  if ( v4 )
  {
    v7 = v4;
    *(_QWORD *)&v8 = &v13;
    v13 = 0LL;
    *((_QWORD *)&v8 + 1) = &v7;
    AcquireSRWLockExclusive(&SRWLock);
    if ( Windows::System::CMemoryManager::s_limitChangeEvent )
    {
      v3 = Windows::System::CMemoryManager::s_limitChangeEvent;
      _InterlockedIncrement((volatile signed __int32 *)(Windows::System::CMemoryManager::s_limitChangeEvent + 12));
    }
    ReleaseSRWLockExclusive(&SRWLock);
    if ( v3 )
    {
      v9 = v8;
      Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64___(
        &v9,
        v3);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3);
    }
    v6 = *(unsigned int (__fastcall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *__hidden))(*(_QWORD *)v4 + 16LL);
    if ( v6 == Windows::System::AppMemoryUsageLimitChangingEventArgs::Release )
      Windows::System::AppMemoryUsageLimitChangingEventArgs::Release(v4);
    else
      v6(v4);
  }
}
