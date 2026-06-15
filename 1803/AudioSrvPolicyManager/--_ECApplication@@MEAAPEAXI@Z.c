/*
 * XREFs of ??_ECApplication@@MEAAPEAXI@Z @ 0x1800107A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F7F4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180012108 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180012DE8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180016E40 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
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
  std::_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<IApplicationSpecificEndpointInfo,wil::err_returncode_policy>>>,0>>((char *)this + 600);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 456));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 344));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 296));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 6);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 120);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
    CoTaskMemFree(v5);
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x270);
  return this;
}
