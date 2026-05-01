/*
 * XREFs of ?StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAAXIUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010CCD8
 * Callers:
 *     ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010DCD0 (-ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Inter.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800F8A60 (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::StartActivity(
        __int64 a1,
        int a2,
        _DWORD *a3)
{
  __int64 v6; // rdi
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *Local; // rax
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rdi
  __int64 v11; // r8
  const GUID *v12; // r9
  __int64 v13; // rbx
  const struct _TlgProvider_t *v14; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  int *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  _DWORD *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  _DWORD *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  _DWORD *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  _DWORD *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  _DWORD *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  int *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  PSRWLOCK *p_SRWLock; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v6 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)HolographicPositionerProvider::Provider() <= 4u )
    *(_QWORD *)(v6 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  v7 = SRWLock;
  *(_DWORD *)v6 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  Local = HolographicPositionerProvider::Provider();
  v10 = Local;
  if ( *(_DWORD *)Local > 4u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v25 = &v17;
    v27 = a3 + 4;
    v29 = a3 + 5;
    v33 = a3 + 1;
    v18 = a3[2];
    v35 = &v18;
    v19 = a3[3];
    v37 = &v19;
    v39 = a3 + 7;
    v20 = a3[8];
    v41 = &v20;
    LODWORD(SRWLock) = a3[6];
    p_SRWLock = &SRWLock;
    v24 = 4LL;
    v17 = a2;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    v31 = a3;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v11 = *(_QWORD *)(a1 + 48);
    if ( !*(_BYTE *)(v11 + 4)
      || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
      && !*(_DWORD *)(v11 + 28)
      && !*(_DWORD *)(v11 + 32)
      && !*(_DWORD *)(v11 + 36) )
    {
      v12 = 0LL;
    }
    LODWORD(Local) = TlgWrite(v10, &unk_18025FA15, (LPCGUID)(v11 + 8), v12, 0xDu, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v13 = a1 + 8;
    if ( *(_DWORD *)(v13 + 24) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v9,
                                               1);
      v14 = Local;
    }
    else
    {
      v14 = 0LL;
    }
    *(_QWORD *)v13 = v14;
    if ( v14 )
    {
      *(_QWORD *)(v13 + 16) = *(_QWORD *)v14;
      *(_QWORD *)v14 = v13;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(v13 + 24) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
