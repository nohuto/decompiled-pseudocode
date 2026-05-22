/*
 * XREFs of ?StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1800BB298
 * Callers:
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800C6AB4 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180004788 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180072220 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::TelemetryOpenHolographicDevice::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // r8
  RTL_SRWLOCK *v10; // rcx
  struct HolographicDriverClientTrace *Local; // rax
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // rdi
  DWORD CurrentThreadId; // eax
  const char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  const GUID *v18; // r9
  struct HolographicDriverClientTrace **v19; // rbx
  struct HolographicDriverClientTrace *v20; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  PSRWLOCK *v24; // [rsp+68h] [rbp-19h]
  __int64 v25; // [rsp+70h] [rbp-11h]
  const char *v26; // [rsp+78h] [rbp-9h]
  int v27; // [rsp+80h] [rbp-1h]
  int v28; // [rsp+84h] [rbp+3h]
  const WCHAR *v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+90h] [rbp+Fh]
  int v31; // [rsp+94h] [rbp+13h]
  __int64 v32; // [rsp+98h] [rbp+17h]
  __int64 v33; // [rsp+A0h] [rbp+1Fh]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    SRWLock);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v9 > 5u
    && (*(_QWORD *)(v9 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v9 + 24) & 0x400000000000LL) == *(_QWORD *)(v9 + 24) )
  {
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  }
  else
  {
    *(_QWORD *)(v8 + 8) = 0LL;
  }
  v10 = SRWLock[0];
  *(_DWORD *)v8 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  Local = HolographicDriverClientTrace::Instance();
  v13 = (const struct _TlgProvider_t *)*((_QWORD *)Local + 1);
  if ( *(_DWORD *)v13 > 5u && (*((_QWORD *)v13 + 2) & 0x400000000000LL) != 0 )
  {
    Local = (struct HolographicDriverClientTrace *)(*((_QWORD *)v13 + 3) & 0x400000000000LL);
    if ( Local == *((struct HolographicDriverClientTrace **)v13 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v25 = 4LL;
      LODWORD(SRWLock[0]) = CurrentThreadId;
      v24 = SRWLock;
      if ( a3 )
      {
        if ( a3 == 1 )
          v15 = "SpatialGraph";
        else
          v15 = "(unknown)";
      }
      else
      {
        v15 = "Display";
      }
      v16 = -1LL;
      do
        ++v16;
      while ( v15[v16] );
      v26 = v15;
      v27 = v16 + 1;
      LODWORD(v15) = 0;
      v28 = 0;
      if ( a2 )
      {
        v15 = (const char *)-1LL;
        do
          ++v15;
        while ( a2[(_QWORD)v15] );
      }
      v31 = 0;
      v32 = a4;
      if ( !a2 )
        a2 = &sourceString;
      v33 = 16LL;
      v29 = a2;
      v30 = 2 * (_DWORD)v15 + 2;
      v17 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v17 + 4)
        || (v18 = (const GUID *)(v17 + 24), !*(_DWORD *)(v17 + 24))
        && !*(_DWORD *)(v17 + 28)
        && !*(_DWORD *)(v17 + 32)
        && !*(_DWORD *)(v17 + 36) )
      {
        v18 = 0LL;
      }
      LODWORD(Local) = TlgWrite(v13, &unk_180112042, (LPCGUID)(v17 + 8), v18, 6u, &pData);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v19 = (struct HolographicDriverClientTrace **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (struct HolographicDriverClientTrace *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                                       v12,
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
