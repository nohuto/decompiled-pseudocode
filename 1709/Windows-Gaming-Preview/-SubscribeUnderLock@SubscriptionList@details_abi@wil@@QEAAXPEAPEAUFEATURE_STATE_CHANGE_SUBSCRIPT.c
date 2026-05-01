/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180005B20
 * Callers:
 *     ?SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z@Z @ 0x180006208 (-SubscribeToUsageFlush@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRI.c)
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180006950 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800045A4 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     _invalid_parameter_noinfo @ 0x18004204C (_invalid_parameter_noinfo.c)
 *     memset @ 0x18004207E (memset.c)
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
  _QWORD *v8; // rax
  _OWORD *v9; // rcx
  size_t v10; // r8
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v11; // rax
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-18h]
  __int128 v14; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  v4 = (wil::details_abi::SubscriptionList *)((char *)this + 40);
  v5 = 0LL;
  v7 = (*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 4;
  if ( v7 )
  {
    v8 = *(_QWORD **)v4;
    while ( *v8 )
    {
      ++v5;
      v8 += 2;
      if ( v5 >= v7 )
        goto LABEL_5;
    }
    *(_QWORD *)&v14 = a3;
    *((_QWORD *)&v14 + 1) = a4;
    *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = v14;
    v11 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v5 + 1);
    goto LABEL_14;
  }
LABEL_5:
  *(_QWORD *)&v13 = a3;
  *((_QWORD *)&v13 + 1) = a4;
  if ( !wil::details_abi::heap_buffer::ensure(v4, 0x10uLL) )
    return;
  v9 = (_OWORD *)*((_QWORD *)v4 + 1);
  v10 = (*((_QWORD *)v4 + 2) - (_QWORD)v9) & -(__int64)((unsigned __int64)v9 < *((_QWORD *)v4 + 2));
  if ( !v9 )
  {
    *(_DWORD *)_o__errno(0LL) = 22;
LABEL_12:
    invalid_parameter_noinfo();
    goto LABEL_13;
  }
  if ( v10 < 0x10 )
  {
    memset(v9, 0, v10);
    *(_DWORD *)_o__errno(v12) = 34;
    goto LABEL_12;
  }
  *v9 = v13;
LABEL_13:
  *((_QWORD *)v4 + 1) += 16LL;
  v11 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4);
LABEL_14:
  *a2 = v11;
}
