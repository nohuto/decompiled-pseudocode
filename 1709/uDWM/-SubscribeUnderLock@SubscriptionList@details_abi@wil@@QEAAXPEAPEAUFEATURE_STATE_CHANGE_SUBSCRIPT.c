/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800402B4
 * Callers:
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18003FF40 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18003FFC4 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180040054 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180044C5C (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  wil::details_abi::heap_buffer *v4; // rbx
  unsigned __int64 v5; // r10
  unsigned __int64 v7; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (wil::details_abi::SubscriptionList *)((char *)this + 40);
  v5 = 0LL;
  v7 = (*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 4;
  if ( v7 )
  {
    v9 = *(_QWORD **)v4;
    v10 = *(_QWORD **)v4;
    while ( *v10 )
    {
      ++v5;
      v10 += 2;
      if ( v5 >= v7 )
        goto LABEL_2;
    }
    *(_QWORD *)&v11 = a3;
    *((_QWORD *)&v11 + 1) = a4;
    *(_OWORD *)&v9[2 * v5] = v11;
    v8 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v5 + 1);
  }
  else
  {
LABEL_2:
    *(_QWORD *)&v11 = a3;
    *((_QWORD *)&v11 + 1) = a4;
    if ( !wil::details_abi::heap_buffer::push_back(v4, &v11, (unsigned __int64)a3) )
      return;
    v8 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4);
  }
  *a2 = v8;
}
