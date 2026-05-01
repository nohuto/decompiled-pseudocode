/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684
 * Callers:
 *     _lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_::operator() @ 0x1800665DC (_lambda_b20bc4ca5f99e8d5dec7059f6d0433d1_--operator().c)
 *     _lambda_1d725a211fae648eb22a29137fc16fd7_::operator() @ 0x180066A4C (_lambda_1d725a211fae648eb22a29137fc16fd7_--operator().c)
 *     _lambda_c4af78c0c8077c37e96163482dfb0569_::operator() @ 0x180066DD4 (_lambda_c4af78c0c8077c37e96163482dfb0569_--operator().c)
 *     CAsyncCallbackWithLambda__lambda_edabc7bfffa072f6dcb0170080417172___::Invoke @ 0x1800761C0 (CAsyncCallbackWithLambda__lambda_edabc7bfffa072f6dcb0170080417172___--Invoke.c)
 *     ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A2030 (-OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A2170 (-OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5aad080f89fc0f806acb3154381eca88___::Run @ 0x1800B09D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5aad080f89fc0f806acb3154381eca88___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e___::Run @ 0x1800B0A90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e17c3c341f54d35a13f5e5412be3822e___--Run.c)
 *     _lambda_f748ab983864a1d9251a0884a7c17331_::operator() @ 0x1800E8390 (_lambda_f748ab983864a1d9251a0884a7c17331_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f25f51c1118b73fb82a4cf2a862a275___::Run @ 0x18011A870 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7f25f51c1118b73fb82a4cf2a862a275___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a629fb13df2657ee8e744f2b26d8144___::Run @ 0x18011A940 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a629fb13df2657ee8e744f2b26d8144___--Run.c)
 *     _lambda_4d9498deded80cfab1ff9f78bf19bcab_::operator() @ 0x18012E08C (_lambda_4d9498deded80cfab1ff9f78bf19bcab_--operator().c)
 *     _lambda_00be1f95221eb842538ce67e0fb4e246_::operator() @ 0x1801827F8 (_lambda_00be1f95221eb842538ce67e0fb4e246_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run @ 0x1801858C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___--Run.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___::Run @ 0x18018CD70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_69e066523f5234eeae6ba20c33bcef6c___--Run.c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006DB38 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     memset @ 0x180194E50 (memset.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)a1 + 6);
  if ( *(_DWORD *)v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v2 + 40));
  }
  else
  {
    memset(this, 0, 0x20uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  return this;
}
