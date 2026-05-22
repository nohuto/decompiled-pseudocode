/*
 * XREFs of ?StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800BF510
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x1800C6824 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180004788 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180072220 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::StartActivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v8; // rdi
  RTL_SRWLOCK *v9; // rcx
  struct HolographicDriverClientContinuousTrace *Local; // rax
  __int64 v11; // rcx
  const struct _TlgProvider_t *v12; // rdi
  __int64 v13; // r8
  const GUID *v14; // r9
  __int64 v15; // rbx
  struct HolographicDriverClientContinuousTrace *v16; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-49h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-19h]
  __int64 v22; // [rsp+68h] [rbp-11h]
  __int64 v23; // [rsp+70h] [rbp-9h]
  __int64 v24; // [rsp+78h] [rbp-1h]
  __int64 v25; // [rsp+80h] [rbp+7h]
  __int64 v26; // [rsp+88h] [rbp+Fh]
  PSRWLOCK *p_SRWLock; // [rsp+90h] [rbp+17h]
  __int64 v28; // [rsp+98h] [rbp+1Fh]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v8 = *(_QWORD *)(a1 + 48);
  if ( **((_DWORD **)HolographicDriverClientContinuousTrace::Instance() + 1) <= 5u )
    *(_QWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  v9 = SRWLock;
  *(_DWORD *)v8 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  Local = HolographicDriverClientContinuousTrace::Instance();
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)Local + 1);
  if ( *(_DWORD *)v12 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    p_SRWLock = &SRWLock;
    v22 = 4LL;
    v23 = a2;
    v24 = 16LL;
    v25 = a3;
    v26 = 16LL;
    LODWORD(SRWLock) = a4;
    v28 = 4LL;
    v13 = *(_QWORD *)(a1 + 48);
    if ( !*(_BYTE *)(v13 + 4)
      || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
      && !*(_DWORD *)(v13 + 28)
      && !*(_DWORD *)(v13 + 32)
      && !*(_DWORD *)(v13 + 36) )
    {
      v14 = 0LL;
    }
    LODWORD(Local) = TlgWrite(v12, &unk_180111DB3, (LPCGUID)(v13 + 8), v14, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v15 = a1 + 8;
    if ( *(_DWORD *)(v15 + 24) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (struct HolographicDriverClientContinuousTrace *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                                                 v11,
                                                                 1);
      v16 = Local;
    }
    else
    {
      v16 = 0LL;
    }
    *(_QWORD *)v15 = v16;
    if ( v16 )
    {
      *(_QWORD *)(v15 + 16) = *(_QWORD *)v16;
      *(_QWORD *)v16 = v15;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(v15 + 24) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
