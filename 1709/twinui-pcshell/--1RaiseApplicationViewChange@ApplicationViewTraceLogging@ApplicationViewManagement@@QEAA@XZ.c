/*
 * XREFs of ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x18007A370
 * Callers:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     _lambda_794533bae2653f5a8c11b3eb7b48e533_::__lambda_794533bae2653f5a8c11b3eb7b48e533_ @ 0x1800767D8 (_lambda_794533bae2653f5a8c11b3eb7b48e533_--__lambda_794533bae2653f5a8c11b3eb7b48e533_.c)
 *     NotificationDispatcher::RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533___ @ 0x180077D4C (NotificationDispatcher--RunAsync__lambda_794533bae2653f5a8c11b3eb7b48e533___.c)
 *     ??_E?$CAsyncCallbackWithLambda@V_lambda_3a8de745e4864761b0fe42eebb248ca2_@@@@UEAAPEAXI@Z @ 0x180079550 (--_E-$CAsyncCallbackWithLambda@V_lambda_3a8de745e4864761b0fe42eebb248ca2_@@@@UEAAPEAXI@Z.c)
 *     _CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor$0 @ 0x1801E97EF (_CApplicationViewManager--RaiseApplicationViewChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007A834 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x18007AC00 (-StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  bool v1; // zf
  char v3; // si
  volatile signed __int32 *v4; // rax
  char *v5; // rdi
  _DWORD *v6; // rdx
  int v7; // r8d
  int v8; // eax
  volatile signed __int32 *v9; // rcx
  char *v10; // rdi
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-10h] BYREF

  v1 = *((_QWORD *)this + 38) == 0LL;
  *(_QWORD *)this = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  v3 = 1;
  if ( v1 )
    goto LABEL_12;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( !v4 || *v4 != 1 )
  {
    v3 = 0;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        v5 = (char *)*((_QWORD *)this + 38);
        if ( v5 )
        {
          wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>(v5 + 8);
          operator delete(v5);
        }
      }
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_12:
    v6 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v6 == 1 )
    {
      v7 = -2147024322;
      if ( (int)v6[21] < 0 )
        v7 = v6[21];
      v8 = v6[18];
      if ( v8 < 1 )
        __fastfail(7u);
      if ( (int)v6[19] >= 0 )
        v6[19] = v7;
      v6[18] = v8 - 1;
      ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity(this);
    }
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
    {
      v10 = (char *)*((_QWORD *)this + 38);
      if ( v10 )
      {
        wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>(v10 + 8);
        operator delete(v10);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)((char *)this + 8));
}
