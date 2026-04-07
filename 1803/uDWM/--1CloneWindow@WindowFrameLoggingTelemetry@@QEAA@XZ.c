/*
 * XREFs of ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180037824
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18001FB40 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000ACDC (-LockExclusive@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvi.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18000AFBC (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000B120 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800375FC (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180037AE8 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800396A0 (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  _DWORD *v4; // rcx
  char v5; // si
  int v6; // edx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 304);
  v3 = *((_QWORD *)this + 38) == 0LL;
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  if ( v3 )
    goto LABEL_2;
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  if ( *v1 && *(_DWORD *)*v1 == 1 )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    wil::details::shared_object<wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v5 )
  {
LABEL_2:
    v4 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v4 == 1 )
    {
      LODWORD(SRWLock) = v4[21];
      v6 = -2147024322;
      if ( (int)SRWLock < 0 )
        v6 = (int)SRWLock;
      wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        (__int64)v4,
        v6,
        (int *)&SRWLock);
      wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        this,
        (int)SRWLock);
    }
  }
  wil::details::shared_object<wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8));
}
