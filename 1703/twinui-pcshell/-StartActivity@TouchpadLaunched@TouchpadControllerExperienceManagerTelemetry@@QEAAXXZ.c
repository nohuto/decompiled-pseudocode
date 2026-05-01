/*
 * XREFs of ?StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1800B5D74
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1800B7360 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@TouchpadControllerExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B55DC (-Provider@TouchpadControllerExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::StartActivity(
        TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *this)
{
  __int64 v2; // rbx
  const struct _TlgProvider_t *v3; // rax
  RTL_SRWLOCK *v4; // rcx
  const struct _TlgProvider_t *v5; // rax
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  const GUID *v10; // r9
  _QWORD *v11; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+64h] [rbp-24h]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  v3 = TouchpadControllerExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v3 > 5u
    && (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0LL;
  }
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v5 = TouchpadControllerExperienceManagerLogging::Provider();
  v7 = v5;
  if ( *(_DWORD *)v5 > 5u && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0 )
  {
    v6 = *((_QWORD *)v5 + 3) & 0x400000000000LL;
    if ( v6 == *((_QWORD *)v5 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v17 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v16 = 4;
      v9 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v9 + 4)
        || (v10 = (const GUID *)(v9 + 24), !*(_DWORD *)(v9 + 24))
        && !*(_DWORD *)(v9 + 28)
        && !*(_DWORD *)(v9 + 32)
        && !*(_DWORD *)(v9 + 36) )
      {
        v10 = 0LL;
      }
      TlgWrite(v7, &unk_1801FC3DA, (LPCGUID)(v9 + 8), v10, 3u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v11 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v6,
                          1);
    else
      Local = 0LL;
    *v11 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v11;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
