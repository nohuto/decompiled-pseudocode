/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000585C
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800064C0 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004384 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180035AB6 (_invalid_parameter_noinfo.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  wil::details_abi::heap_buffer *v4; // rbx
  _QWORD *v5; // r11
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-18h]
  __int128 v16; // [rsp+20h] [rbp-18h]

  *a2 = 0LL;
  v4 = (wil::details_abi::SubscriptionList *)((char *)this + 40);
  v5 = (_QWORD *)*((_QWORD *)this + 5);
  v6 = 0LL;
  v8 = (*((_QWORD *)this + 6) - (_QWORD)v5) >> 4;
  if ( !v8 )
  {
LABEL_5:
    *(_QWORD *)&v15 = a3;
    *((_QWORD *)&v15 + 1) = a4;
    if ( !wil::details_abi::heap_buffer::ensure(v4, 0x10uLL) )
      return;
    v11 = (_OWORD *)*((_QWORD *)v4 + 1);
    v12 = *((_QWORD *)v4 + 2) - (_QWORD)v11;
    if ( v11 )
    {
      if ( (v12 & (unsigned __int64)-(__int64)((unsigned __int64)v11 < *((_QWORD *)v4 + 2))) >= 0x10 )
      {
        *v11 = v15;
LABEL_14:
        *((_QWORD *)v4 + 1) += 16LL;
        *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4);
        return;
      }
      memset_0(v11, 0, v12 & -(__int64)((unsigned __int64)v11 < *((_QWORD *)v4 + 2)));
      *(_DWORD *)_o__errno(v14, v13) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(0LL, v10) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_14;
  }
  v9 = v5;
  while ( *v9 )
  {
    ++v6;
    v9 += 2;
    if ( v6 >= v8 )
      goto LABEL_5;
  }
  *(_QWORD *)&v16 = a3;
  *((_QWORD *)&v16 + 1) = a4;
  *(_OWORD *)&v5[2 * v6] = v16;
  *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v6 + 1);
}
