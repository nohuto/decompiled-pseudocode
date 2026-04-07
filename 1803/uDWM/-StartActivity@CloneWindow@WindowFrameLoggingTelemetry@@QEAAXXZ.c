/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180037890
 * Callers:
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180037998 (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004FC8 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000ACDC (-LockExclusive@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000B0D4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180037A44 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180048EB8 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0Is.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(wil::details::static_lazy<WindowFrameLogging>::get(
                       v3,
                       lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                   + 8) <= 5u )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    EtwEventActivityIdControl(3LL, v2 + 8);
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v6 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<WindowFrameLogging>::get(
                                           v4,
                                           lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v13 = 0;
    LODWORD(SRWLock) = CurrentThreadId;
    p_SRWLock = &SRWLock;
    v12 = 4;
    v8 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v6, &unk_1800B807D, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v8, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8),
      v5);
}
