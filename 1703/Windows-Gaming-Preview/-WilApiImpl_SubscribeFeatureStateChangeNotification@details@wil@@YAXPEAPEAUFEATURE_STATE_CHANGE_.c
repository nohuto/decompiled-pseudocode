/*
 * XREFs of ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180022900
 * Callers:
 *     <none>
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180020D68 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x1800222F0 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV-$unique_any_t@.c)
 *     memcpy_s_0 @ 0x180029C5E (memcpy_s_0.c)
 */

void __fastcall wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  rsize_t v4; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int128 Source; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  *(_QWORD *)this = 0LL;
  if ( wil::details::g_featureStateManager )
  {
    AcquireSRWLockExclusive(&SRWLock);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
      (__int64 *)&xmmword_18003B0B0,
      (const struct __WIL__WNF_TYPE_ID *)0x418A073AA3BC7C75LL,
      &wil::details::g_featureStateManager);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
      (__int64 *)&xmmword_18003B0B0 + 1,
      (const struct __WIL__WNF_TYPE_ID *)0x418A073AA3BC88F5LL,
      &wil::details::g_featureStateManager);
    v8 = 0LL;
    v9 = (*(&xmmword_18003B0C0 + 1) - xmmword_18003B0C0) >> 4;
    if ( v9 )
    {
      v10 = 0LL;
      while ( *(_QWORD *)(v10 + xmmword_18003B0C0) )
      {
        ++v8;
        v10 += 16LL;
        if ( v8 >= v9 )
          goto LABEL_6;
      }
      *(_QWORD *)&Source = a2;
      *((_QWORD *)&Source + 1) = a3;
      *(_OWORD *)(xmmword_18003B0C0 + 16 * v8) = Source;
      v11 = v8 + 1;
    }
    else
    {
LABEL_6:
      *(_QWORD *)&Source = a2;
      *((_QWORD *)&Source + 1) = a3;
      if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&xmmword_18003B0C0, 0x10uLL) )
      {
LABEL_11:
        ReleaseSRWLockExclusive(&SRWLock);
        return;
      }
      if ( *(&xmmword_18003B0C0 + 1) < (unsigned __int64)xmmword_18003B0D0 )
        v4 = xmmword_18003B0D0 - *(&xmmword_18003B0C0 + 1);
      memcpy_s_0(*(&xmmword_18003B0C0 + 1), v4, &Source, 0x10uLL);
      *(&xmmword_18003B0C0 + 1) += 16LL;
      v11 = (*(&xmmword_18003B0C0 + 1) - xmmword_18003B0C0) >> 4;
    }
    *(_QWORD *)this = v11;
    goto LABEL_11;
  }
}
