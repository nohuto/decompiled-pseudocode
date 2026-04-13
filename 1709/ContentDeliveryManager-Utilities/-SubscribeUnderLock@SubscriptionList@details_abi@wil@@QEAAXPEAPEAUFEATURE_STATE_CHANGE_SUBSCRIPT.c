/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180009E60
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x18000A518 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000AE20 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000828C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
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
  __int128 Source; // [rsp+20h] [rbp-18h] BYREF

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
    *(_QWORD *)&Source = a3;
    *((_QWORD *)&Source + 1) = a4;
    v8[v5] = Source;
    v10 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v5 + 1);
  }
  else
  {
LABEL_5:
    *(_QWORD *)&Source = a3;
    *((_QWORD *)&Source + 1) = a4;
    if ( !wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v4, 0x10uLL) )
      return;
    memcpy_s(v4[1], ((_BYTE *)v4[2] - (_BYTE *)v4[1]) & -(__int64)(v4[1] < v4[2]), &Source, 0x10uLL);
    v4[1] = (char *)v4[1] + 16;
    v10 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)((_BYTE *)v4[1] - (_BYTE *)*v4) >> 4);
  }
  *a2 = v10;
}
