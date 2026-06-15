/*
 * XREFs of ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800453B8
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800453A0 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800289F4 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180028F44 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x180045480 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV-$unique_any_t@.c)
 */

void __fastcall wil::details::FeatureStateManager::SubscribeToEnabledStateChanges(
        wil::details::FeatureStateManager *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  unsigned __int64 v8; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v9; // rax
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( *(_BYTE *)this )
  {
    wil::srwlock::lock_exclusive((__int64)this + 32, (__int64)&SRWLock);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
      (char *)this + 96,
      0x418A073AA3BC7C75LL,
      this);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(
      (char *)this + 104,
      0x418A073AA3BC88F5LL,
      this);
    v8 = 0LL;
    if ( ((*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v10 = (_QWORD *)*((_QWORD *)this + 14);
      v11 = v10;
      while ( *v11 )
      {
        ++v8;
        v11 += 2;
        if ( v8 >= (*((_QWORD *)this + 15) - (_QWORD)v10) >> 4 )
          goto LABEL_3;
      }
      *(_QWORD *)&v12 = a3;
      *((_QWORD *)&v12 + 1) = a4;
      *(_OWORD *)&v10[2 * v8] = v12;
      v9 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v8 + 1);
    }
    else
    {
LABEL_3:
      *(_QWORD *)&v12 = a3;
      *((_QWORD *)&v12 + 1) = a4;
      if ( !wil::details_abi::heap_buffer::push_back((wil::details::FeatureStateManager *)((char *)this + 112), &v12) )
        goto LABEL_6;
      v9 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 4);
    }
    *a2 = v9;
LABEL_6:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
}
