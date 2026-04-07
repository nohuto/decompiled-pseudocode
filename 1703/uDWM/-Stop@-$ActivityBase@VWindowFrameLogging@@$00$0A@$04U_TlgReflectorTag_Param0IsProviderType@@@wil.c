/*
 * XREFs of ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000BF6C
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000B6E8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000BE3C (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18000BEA8 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000C34C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000C42C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18000C528 (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     _TlgWrite @ 0x180016430 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

void __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        unsigned int a2)
{
  char v4; // al
  PSRWLOCK v5; // rcx
  char v6; // di
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v9; // [rsp+38h] [rbp-19h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v12; // [rsp+68h] [rbp+17h]
  int v13; // [rsp+70h] [rbp+1Fh]
  int v14; // [rsp+74h] [rbp+23h]
  PSRWLOCK *p_SRWLock; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]

  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v4 = wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         a2,
         &v9);
  v5 = SRWLock;
  v6 = v4;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6 )
  {
    wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      (WindowFrameLoggingTelemetry::CloneWindow *)a1,
      v9);
  }
  else
  {
    v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<WindowFrameLogging>::get(
                                             v5,
                                             lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                                         + 8);
    if ( *(_DWORD *)v7 > 5u )
    {
      v14 = 0;
      v9 = a2;
      v13 = 4;
      v12 = (int *)&v9;
      CurrentThreadId = GetCurrentThreadId();
      v17 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v16 = 4;
      TlgWrite(v7, &unk_1800AF6AD, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
