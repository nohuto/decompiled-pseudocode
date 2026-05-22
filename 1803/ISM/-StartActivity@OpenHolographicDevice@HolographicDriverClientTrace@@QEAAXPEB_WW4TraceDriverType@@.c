/*
 * XREFs of ?StartActivity@OpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1800BB900
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800C6AB4 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180004788 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180072220 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::OpenHolographicDevice::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4)
{
  _DWORD *v8; // r14
  struct HolographicDriverClientTrace *v9; // rax
  GUID *v10; // rdx
  RTL_SRWLOCK *v11; // rcx
  struct HolographicDriverClientTrace *Local; // rax
  __int64 v13; // rcx
  const struct _TlgProvider_t *v14; // r14
  DWORD CurrentThreadId; // eax
  const char *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  const GUID *v19; // r9
  struct HolographicDriverClientTrace **v20; // rbx
  struct HolographicDriverClientTrace *v21; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK *v25; // [rsp+60h] [rbp-19h]
  __int64 v26; // [rsp+68h] [rbp-11h]
  const char *v27; // [rsp+70h] [rbp-9h]
  int v28; // [rsp+78h] [rbp-1h]
  int v29; // [rsp+7Ch] [rbp+3h]
  const WCHAR *v30; // [rsp+80h] [rbp+7h]
  int v31; // [rsp+88h] [rbp+Fh]
  int v32; // [rsp+8Ch] [rbp+13h]
  __int64 v33; // [rsp+90h] [rbp+17h]
  __int64 v34; // [rsp+98h] [rbp+1Fh]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    SRWLock);
  v8 = *(_DWORD **)(a1 + 48);
  v9 = HolographicDriverClientTrace::Instance();
  v10 = (GUID *)(v8 + 2);
  if ( **((_DWORD **)v9 + 1) <= 5u )
    *(_QWORD *)&v10->Data1 = 0LL;
  else
    EventActivityIdControl(3u, v10);
  v11 = SRWLock[0];
  *v8 = 1;
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  Local = HolographicDriverClientTrace::Instance();
  v14 = (const struct _TlgProvider_t *)*((_QWORD *)Local + 1);
  if ( *(_DWORD *)v14 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v26 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v25 = SRWLock;
    if ( a3 )
    {
      if ( a3 == 1 )
        v16 = "SpatialGraph";
      else
        v16 = "(unknown)";
    }
    else
    {
      v16 = "Display";
    }
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v27 = v16;
    v28 = v17 + 1;
    LODWORD(v16) = 0;
    v29 = 0;
    if ( a2 )
    {
      v16 = (const char *)-1LL;
      do
        ++v16;
      while ( a2[(_QWORD)v16] );
    }
    v32 = 0;
    v33 = a4;
    if ( !a2 )
      a2 = &sourceString;
    v34 = 16LL;
    v30 = a2;
    v31 = 2 * (_DWORD)v16 + 2;
    v18 = *(_QWORD *)(a1 + 48);
    if ( !*(_BYTE *)(v18 + 4)
      || (v19 = (const GUID *)(v18 + 24), !*(_DWORD *)(v18 + 24))
      && !*(_DWORD *)(v18 + 28)
      && !*(_DWORD *)(v18 + 32)
      && !*(_DWORD *)(v18 + 36) )
    {
      v19 = 0LL;
    }
    LODWORD(Local) = TlgWrite(v14, &unk_180110886, (LPCGUID)(v18 + 8), v19, 6u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v20 = (struct HolographicDriverClientTrace **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (struct HolographicDriverClientTrace *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                                       v13,
                                                       1);
      v21 = Local;
    }
    else
    {
      v21 = 0LL;
    }
    *v20 = v21;
    if ( v21 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v21;
      *(_QWORD *)v21 = v20;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
