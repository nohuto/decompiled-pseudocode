/*
 * XREFs of ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800463D8
 * Callers:
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800463C0 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 * Callees:
 *     ?EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU__WIL__WNF_USER_SUBSCRIPTION@@P6AXPEAU1@@Z$1?UnsubscribeWilWnf@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@U__WIL__WNF_STATE_NAME@@PEAX@Z @ 0x180046518 (-EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil@@CAXAEAV-$unique_any_t@.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18004A338 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::SubscribeToEnabledStateChanges(
        RTL_SRWLOCK *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  RTL_SRWLOCK *v8; // rdi
  unsigned __int64 Ptr; // r8
  unsigned __int64 v10; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v11; // rax
  _QWORD *v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  if ( LOBYTE(this->Ptr) )
  {
    v8 = this + 4;
    AcquireSRWLockExclusive(this + 4);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(&this[12], 0x418A073AA3BC7C75LL, this);
    wil::details::FeatureStateManager::EnsureSubscribedToStateChangesUnderLock(&this[13], 0x418A073AA3BC88F5LL, this);
    v10 = 0LL;
    if ( (((char *)this[15].Ptr - (char *)this[14].Ptr) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      Ptr = (unsigned __int64)this[14].Ptr;
      v12 = (_QWORD *)Ptr;
      while ( *v12 )
      {
        ++v10;
        v12 += 2;
        if ( v10 >= ((unsigned __int64)this[15].Ptr - Ptr) >> 4 )
          goto LABEL_3;
      }
      *(_QWORD *)&v13 = a3;
      *((_QWORD *)&v13 + 1) = a4;
      *(_OWORD *)(Ptr + 16 * v10) = v13;
      v11 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v10 + 1);
    }
    else
    {
LABEL_3:
      *(_QWORD *)&v13 = a3;
      *((_QWORD *)&v13 + 1) = a4;
      if ( !wil::details_abi::heap_buffer::push_back((wil::details_abi::heap_buffer *)&this[14], &v13, Ptr) )
        goto LABEL_6;
      v11 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)((char *)this[15].Ptr - (char *)this[14].Ptr) >> 4);
    }
    *a2 = v11;
LABEL_6:
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}
