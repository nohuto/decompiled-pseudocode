/*
 * XREFs of ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180001CD0
 * Callers:
 *     ?CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180001C50 (-CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE.c)
 * Callees:
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x1800019E0 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ.c)
 *     ??0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z @ 0x180001A20 (--0AppMemoryUsageLimitChangingEventArgs@System@Windows@@QEAA@_K0@Z.c)
 *     ??$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJ$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x180001EA8 (--$InvokeAll@$$TPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@-$EventSource@U-$IEve.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800070E4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(__int64 a1, __int64 a2)
{
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v4; // rax
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v8; // rbx
  __int64 (__fastcall *v9)(Windows::System::AppMemoryUsageLimitChangingEventArgs *); // rax

  v4 = (Windows::System::AppMemoryUsageLimitChangingEventArgs *)operator new(
                                                                  0x50uLL,
                                                                  (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Windows::System::AppMemoryUsageLimitChangingEventArgs::AppMemoryUsageLimitChangingEventArgs(v4, a1, a2);
    v8 = v5;
    if ( v5 )
    {
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<std::nullptr_t,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>(
        v7,
        v6,
        v5);
      v9 = *(__int64 (__fastcall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *))(*(_QWORD *)v8 + 16LL);
      if ( v9 == Windows::System::AppMemoryUsageLimitChangingEventArgs::Release )
        Windows::System::AppMemoryUsageLimitChangingEventArgs::Release(v8);
      else
        v9(v8);
    }
  }
}
