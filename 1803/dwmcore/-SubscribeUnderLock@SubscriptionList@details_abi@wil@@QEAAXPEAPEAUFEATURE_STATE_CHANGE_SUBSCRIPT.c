/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800BB8CC
 * Callers:
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x1800BB94C (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x1800BBA58 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800BBAE8 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800BC1A0 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  wil::details_abi::heap_buffer *v4; // rbx
  _QWORD *v6; // rdx
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v9; // rax
  _QWORD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (wil::details_abi::SubscriptionList *)((char *)this + 40);
  v6 = (_QWORD *)*((_QWORD *)this + 5);
  v7 = 0LL;
  v8 = (*((_QWORD *)this + 6) - (_QWORD)v6) >> 4;
  if ( v8 )
  {
    v10 = v6;
    while ( *v10 )
    {
      ++v7;
      v10 += 2;
      if ( v7 >= v8 )
        goto LABEL_2;
    }
    *(_QWORD *)&v11 = a3;
    *((_QWORD *)&v11 + 1) = a4;
    *(_OWORD *)&v6[2 * v7] = v11;
    v9 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v7 + 1);
  }
  else
  {
LABEL_2:
    *(_QWORD *)&v11 = a3;
    *((_QWORD *)&v11 + 1) = a4;
    if ( !wil::details_abi::heap_buffer::push_back(v4, &v11, 0x10uLL) )
      return;
    v9 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4);
  }
  *a2 = v9;
}
