/*
 * XREFs of ?StartActivity@OpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1800B03B4
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800B6D94 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4Handle.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180004B38 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800979D8 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::OpenHolographicDevice::StartActivity(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int64 a4)
{
  __int64 v8; // rdi
  RTL_SRWLOCK *v9; // rcx
  struct HolographicDriverClientTrace *Local; // rax
  __int64 v11; // rcx
  const struct _TlgProvider_t *v12; // rdi
  DWORD CurrentThreadId; // eax
  const char *v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  __int64 v17; // r8
  const GUID *v18; // r9
  struct HolographicDriverClientTrace **v19; // rbx
  struct HolographicDriverClientTrace *v20; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK *v24; // [rsp+60h] [rbp-19h]
  __int64 v25; // [rsp+68h] [rbp-11h]
  const char *v26; // [rsp+70h] [rbp-9h]
  int v27; // [rsp+78h] [rbp-1h]
  int v28; // [rsp+7Ch] [rbp+3h]
  const wchar_t *v29; // [rsp+80h] [rbp+7h]
  int v30; // [rsp+88h] [rbp+Fh]
  int v31; // [rsp+8Ch] [rbp+13h]
  __int64 v32; // [rsp+90h] [rbp+17h]
  __int64 v33; // [rsp+98h] [rbp+1Fh]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    SRWLock);
  v8 = *(_QWORD *)(a1 + 48);
  if ( **((_DWORD **)HolographicDriverClientTrace::Instance() + 1) <= 5u )
    *(_QWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  v9 = SRWLock[0];
  *(_DWORD *)v8 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  Local = HolographicDriverClientTrace::Instance();
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)Local + 1);
  if ( *(_DWORD *)v12 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v25 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v24 = SRWLock;
    if ( a3 )
    {
      if ( a3 == 1 )
        v14 = "SpatialGraph";
      else
        v14 = "(unknown)";
    }
    else
    {
      v14 = "Display";
    }
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v26 = v14;
    v27 = v15 + 1;
    LODWORD(v14) = 0;
    v28 = 0;
    v16 = &word_1800DF514;
    if ( a2 )
    {
      v16 = a2;
      v14 = (const char *)-1LL;
      do
        ++v14;
      while ( a2[(_QWORD)v14] );
    }
    v29 = v16;
    v30 = 2 * (_DWORD)v14 + 2;
    v31 = 0;
    v32 = a4;
    v33 = 16LL;
    v17 = *(_QWORD *)(a1 + 48);
    if ( !*(_BYTE *)(v17 + 4)
      || (v18 = (const GUID *)(v17 + 24), !*(_DWORD *)(v17 + 24))
      && !*(_DWORD *)(v17 + 28)
      && !*(_DWORD *)(v17 + 32)
      && !*(_DWORD *)(v17 + 36) )
    {
      v18 = 0LL;
    }
    LODWORD(Local) = TlgWrite(v12, &unk_1800F1C78, (LPCGUID)(v17 + 8), v18, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v19 = (struct HolographicDriverClientTrace **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (struct HolographicDriverClientTrace *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                                       v11,
                                                       1);
      v20 = Local;
    }
    else
    {
      v20 = 0LL;
    }
    *v19 = v20;
    if ( v20 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v20;
      *(_QWORD *)v20 = v19;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
