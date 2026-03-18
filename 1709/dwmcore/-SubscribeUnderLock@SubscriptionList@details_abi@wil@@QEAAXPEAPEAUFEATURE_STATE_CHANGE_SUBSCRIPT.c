/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180134B6C
 * Callers:
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x1801338A4 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180134A40 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180134ADC (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18007AD20 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  void **v4; // rbx
  unsigned __int64 v5; // r10
  unsigned __int64 v7; // rcx
  _OWORD *v8; // rdx
  _QWORD *v9; // rax
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  v4 = (void **)((char *)this + 40);
  v5 = 0LL;
  v7 = (*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 4;
  if ( v7 )
  {
    v8 = *v4;
    v9 = *v4;
    while ( *v9 )
    {
      ++v5;
      v9 += 2;
      if ( v5 >= v7 )
        goto LABEL_5;
    }
    *(_QWORD *)&v11 = a3;
    *((_QWORD *)&v11 + 1) = a4;
    v8[v5] = v11;
    v10 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v5 + 1);
  }
  else
  {
LABEL_5:
    *(_QWORD *)&v11 = a3;
    *((_QWORD *)&v11 + 1) = a4;
    if ( !wil::details_abi::heap_buffer::push_back(v4, &v11) )
      return;
    v10 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)((_BYTE *)v4[1] - (_BYTE *)*v4) >> 4);
  }
  *a2 = v10;
}
