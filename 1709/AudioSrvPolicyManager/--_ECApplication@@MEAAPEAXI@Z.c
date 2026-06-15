/*
 * XREFs of ??_ECApplication@@MEAAPEAXI@Z @ 0x18000B950
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AB14 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18000D188 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DD9C (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
CApplication *__fastcall CApplication::`vector deleting destructor'(CApplication *this, char a2)
{
  __int64 v4; // rdx
  void *v5; // rcx

  *(_QWORD *)this = &CApplication::`vftable';
  v4 = *((_QWORD *)this + 28);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      v4,
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      *((_QWORD *)this + 28));
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod(this);
  CApplication::CleanupDelayedInteractivityNotification(this);
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    CoTaskMemFree(v5);
    *((_QWORD *)this + 3) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 456));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 296));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 120);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x248);
  return this;
}
