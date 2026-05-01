/*
 * XREFs of ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x1800BC608
 * Callers:
 *     ?BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA?AVShowJumpViewActivity@JumpViewProvider@@PEAUIJumpViewParams@JumpView@Shell@Internal@Windows@@@Z @ 0x1800BF06C (-BeginTelemetryActivity@CJumpViewExperienceManager@@AEAA-AVShowJumpViewActivity@JumpViewProvider.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@JumpViewProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800BBE74 (-Provider@JumpViewProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall JumpViewProvider::ShowJumpViewActivity::StartActivity(
        __int64 a1,
        const WCHAR *a2,
        const WCHAR *a3,
        int a4,
        int a5)
{
  __int64 v9; // rbx
  const struct _TlgProvider_t *v10; // rax
  RTL_SRWLOCK *v11; // rcx
  const struct _TlgProvider_t *Local; // rax
  __int64 v13; // rcx
  const struct _TlgProvider_t *v14; // rbx
  DWORD CurrentThreadId; // eax
  LPWSTR FileNameW; // rax
  const WCHAR *v17; // rdi
  const WCHAR *v18; // rdx
  __int64 v19; // rcx
  LPWSTR v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  const GUID *v23; // r9
  const struct _TlgProvider_t **v24; // rbx
  const struct _TlgProvider_t *v25; // rcx
  DWORD v27; // [rsp+30h] [rbp-71h] BYREF
  int v28; // [rsp+34h] [rbp-6Dh] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-61h] BYREF
  DWORD *v31; // [rsp+60h] [rbp-41h]
  __int64 v32; // [rsp+68h] [rbp-39h]
  const WCHAR *v33; // [rsp+70h] [rbp-31h]
  int v34; // [rsp+78h] [rbp-29h]
  int v35; // [rsp+7Ch] [rbp-25h]
  const WCHAR *v36; // [rsp+80h] [rbp-21h]
  int v37; // [rsp+88h] [rbp-19h]
  int v38; // [rsp+8Ch] [rbp-15h]
  int *v39; // [rsp+90h] [rbp-11h]
  __int64 v40; // [rsp+98h] [rbp-9h]
  PSRWLOCK *p_SRWLock; // [rsp+A0h] [rbp-1h]
  __int64 v42; // [rsp+A8h] [rbp+7h]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v9 = *(_QWORD *)(a1 + 48);
  v10 = JumpViewProvider::Provider();
  if ( *(_DWORD *)v10 > 5u
    && (*((_QWORD *)v10 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v10 + 3) & 0x400000000000LL) == *((_QWORD *)v10 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v9 + 8));
  }
  else
  {
    *(_QWORD *)(v9 + 8) = 0LL;
  }
  v11 = SRWLock;
  *(_DWORD *)v9 = 1;
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  Local = JumpViewProvider::Provider();
  v14 = Local;
  if ( *(_DWORD *)Local > 5u && (*((_QWORD *)Local + 2) & 0x400000000000LL) != 0 )
  {
    v13 = *((_QWORD *)Local + 3) & 0x400000000000LL;
    if ( v13 == *((_QWORD *)Local + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v32 = 4LL;
      v27 = CurrentThreadId;
      v31 = &v27;
      FileNameW = 0LL;
      if ( a2 )
      {
        if ( PathIsFileSpecW(a2) )
          FileNameW = (LPWSTR)a2;
        else
          FileNameW = PathFindFileNameW(a2);
      }
      v17 = &word_18021F3A8;
      v18 = &word_18021F3A8;
      LODWORD(v19) = 0;
      if ( FileNameW )
      {
        v18 = FileNameW;
        v19 = -1LL;
        do
          ++v19;
        while ( FileNameW[v19] );
      }
      v33 = v18;
      v34 = 2 * v19 + 2;
      v20 = 0LL;
      v35 = 0;
      if ( a3 )
      {
        if ( PathIsFileSpecW(a3) )
          v20 = (LPWSTR)a3;
        else
          v20 = PathFindFileNameW(a3);
      }
      LODWORD(v21) = 0;
      if ( v20 )
      {
        v17 = v20;
        v21 = -1LL;
        do
          ++v21;
        while ( v20[v21] );
      }
      v36 = v17;
      v37 = 2 * v21 + 2;
      v39 = &v28;
      LODWORD(SRWLock) = a5;
      p_SRWLock = &SRWLock;
      v38 = 0;
      v28 = a4;
      v40 = 4LL;
      v42 = 4LL;
      v22 = *(_QWORD *)(a1 + 48);
      if ( !*(_BYTE *)(v22 + 4)
        || (v23 = (const GUID *)(v22 + 24), !*(_DWORD *)(v22 + 24))
        && !*(_DWORD *)(v22 + 28)
        && !*(_DWORD *)(v22 + 32)
        && !*(_DWORD *)(v22 + 36) )
      {
        v23 = 0LL;
      }
      LODWORD(Local) = TlgWrite(v14, &unk_18025BA7C, (LPCGUID)(v22 + 8), v23, 7u, &pData);
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v24 = (const struct _TlgProvider_t **)(a1 + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v13,
                                               1);
      v25 = Local;
    }
    else
    {
      v25 = 0LL;
    }
    *v24 = v25;
    if ( v25 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v25;
      *(_QWORD *)v25 = v24;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(a1 + 32) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
