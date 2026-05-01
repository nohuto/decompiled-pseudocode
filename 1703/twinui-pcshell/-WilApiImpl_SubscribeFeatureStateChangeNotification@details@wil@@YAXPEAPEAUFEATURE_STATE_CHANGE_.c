/*
 * XREFs of ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180029870
 * Callers:
 *     <none>
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18001D74C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x180029114 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV-$unique_any_t@.c)
 */

void __fastcall wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  if ( wil::details::g_featureStateManager )
  {
    wil::srwlock::lock_exclusive(&stru_180242600, &SRWLock);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
      (__int64 *)&xmmword_180242640,
      (const struct __WIL__WNF_TYPE_ID *)0x418A073AA3BC7C75LL,
      &wil::details::g_featureStateManager);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
      (__int64 *)&xmmword_180242640 + 1,
      (const struct __WIL__WNF_TYPE_ID *)0x418A073AA3BC88F5LL,
      &wil::details::g_featureStateManager);
    v7 = 0LL;
    v8 = (*(&xmmword_180242650 + 1) - xmmword_180242650) >> 4;
    if ( v8 )
    {
      v9 = 0LL;
      while ( *(_QWORD *)(v9 + xmmword_180242650) )
      {
        ++v7;
        v9 += 16LL;
        if ( v7 >= v8 )
          goto LABEL_6;
      }
      *(_QWORD *)&v11 = a2;
      *((_QWORD *)&v11 + 1) = a3;
      *(_OWORD *)(xmmword_180242650 + 16 * v7) = v11;
      v10 = v7 + 1;
    }
    else
    {
LABEL_6:
      *(_QWORD *)&v11 = a2;
      *((_QWORD *)&v11 + 1) = a3;
      if ( !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&xmmword_180242650, &v11) )
        goto LABEL_9;
      v10 = (*(&xmmword_180242650 + 1) - xmmword_180242650) >> 4;
    }
    *(_QWORD *)this = v10;
LABEL_9:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
}
