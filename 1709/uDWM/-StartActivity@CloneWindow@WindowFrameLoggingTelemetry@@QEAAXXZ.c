/*
 * XREFs of ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18000A474
 * Callers:
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18000A570 (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000A130 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000A61C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000A6B0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x1800364F4 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1800451F0 (-zInternalRelatedId@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 */

void __fastcall WindowFrameLoggingTelemetry::CloneWindow::StartActivity(WindowFrameLoggingTelemetry::CloneWindow *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // rcx
  const struct _TlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v7; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
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
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<WindowFrameLogging>::get(
                                           v4,
                                           lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v12 = 0;
    LODWORD(SRWLock) = CurrentThreadId;
    p_SRWLock = &SRWLock;
    v11 = 4;
    v7 = (const GUID *)wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    TlgWrite(v5, &unk_1800ADE73, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v7, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((WindowFrameLoggingTelemetry::CloneWindow *)((char *)this + 8));
}
