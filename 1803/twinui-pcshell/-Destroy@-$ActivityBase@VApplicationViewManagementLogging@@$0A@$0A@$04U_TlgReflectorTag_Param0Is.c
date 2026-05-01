/*
 * XREFs of ?Destroy@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180017E60
 * Callers:
 *     ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180013820 (-QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 *     ??_E?$CAsyncCallbackWithLambda@V_lambda_fe83376184101c6f34c22c2b5aa5bb70_@@@@UEAAPEAXI@Z @ 0x180017330 (--_E-$CAsyncCallbackWithLambda@V_lambda_fe83376184101c6f34c22c2b5aa5bb70_@@@@UEAAPEAXI@Z.c)
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180017610 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x1800F6910 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 * Callees:
 *     ?StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@MEAAXXZ @ 0x1800180D0 (-StopActivity@RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@.c)
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180095244 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  RTL_SRWLOCK *v1; // rax
  char v3; // di
  RTL_SRWLOCK *v4; // rsi
  volatile signed __int32 *v5; // rcx
  _DWORD *v6; // rcx
  char *v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  void (__fastcall *v10)(ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *__hidden); // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (RTL_SRWLOCK *)*((_QWORD *)this + 38);
  v3 = 1;
  if ( !v1 )
    goto LABEL_10;
  v4 = v1 + 31;
  AcquireSRWLockExclusive(v1 + 31);
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( !v5 || *v5 != 1 )
  {
    v3 = 0;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5, 0xFFFFFFFF) == 1 )
      {
        v7 = (char *)*((_QWORD *)this + 38);
        if ( v7 )
        {
          wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>(v7 + 8);
          operator delete(v7, (const struct std::nothrow_t *)0x100);
        }
      }
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v3 )
  {
LABEL_10:
    v6 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v6 == 1 )
    {
      v8 = v6[21];
      v9 = 2147942974LL;
      if ( v8 < 0 )
        v9 = (unsigned int)v8;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v6,
        v9,
        v11);
      v10 = *(void (__fastcall **)(ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *__hidden))(*(_QWORD *)this + 8LL);
      if ( v10 == ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity )
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StopActivity(this);
      else
        v10(this);
    }
  }
}
