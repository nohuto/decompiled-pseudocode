/*
 * XREFs of ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D6340
 * Callers:
 *     ??$Start@PEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@AEAPEAUIUnknown@@@ControlGained@HolographicPositionerTelemetry@@SA?AV01@$$QEAPEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@AEAPEAUIUnknown@@@Z @ 0x1800DE638 (--$Start@PEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@AEAPEAUIUnknown@@@ControlGained@Holog.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800D578C (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     GetViewId @ 0x1800D5884 (GetViewId.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800DD4A8 (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflect.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HolographicPositionerTelemetry::ControlGained::StartActivity(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        __int64 a4)
{
  int ViewId; // eax
  void *v8; // rbx
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rdi
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  const GUID *v14; // r9
  _QWORD *v15; // rdi
  _QWORD *v16; // rcx
  LPVOID pv; // [rsp+38h] [rbp-69h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-61h] BYREF
  int v19; // [rsp+44h] [rbp-5Dh] BYREF
  __int64 v20; // [rsp+48h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp-29h]
  __int64 v23; // [rsp+80h] [rbp-21h]
  void *v24; // [rsp+88h] [rbp-19h]
  int v25; // [rsp+90h] [rbp-11h]
  int v26; // [rsp+94h] [rbp-Dh]
  int *v27; // [rsp+98h] [rbp-9h]
  __int64 v28; // [rsp+A0h] [rbp-1h]
  LPVOID *p_pv; // [rsp+A8h] [rbp+7h]
  __int64 v30; // [rsp+B0h] [rbp+Fh]

  v20 = -2LL;
  pv = 0LL;
  ViewId = GetViewId(a2, &pv);
  v8 = pv;
  if ( ViewId >= 0 )
  {
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
    v10 = HolographicPositionerProvider::Provider();
    if ( *(_DWORD *)v10 > 5u && (*((_QWORD *)v10 + 2) & 0x200000000000LL) != 0 )
    {
      v9 = *((_QWORD *)v10 + 3) & 0x200000000000LL;
      if ( v9 == *((_QWORD *)v10 + 3) )
      {
        CurrentThreadId = GetCurrentThreadId();
        p_CurrentThreadId = &CurrentThreadId;
        v23 = 4LL;
        v11 = &unk_1801C6ABC;
        LODWORD(v12) = 0;
        if ( v8 )
        {
          v11 = v8;
          v12 = -1LL;
          do
            ++v12;
          while ( *((_WORD *)v8 + v12) );
        }
        v24 = v11;
        v25 = 2 * v12 + 2;
        v26 = 0;
        v19 = a3;
        v27 = &v19;
        v28 = 4LL;
        LODWORD(pv) = a4 == 0;
        p_pv = &pv;
        v30 = 4LL;
        v13 = *(_QWORD *)(a1 + 48);
        if ( !*(_BYTE *)(v13 + 4)
          || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
          && !*(_DWORD *)(v13 + 28)
          && !*(_DWORD *)(v13 + 32)
          && !*(_DWORD *)(v13 + 36) )
        {
          v14 = 0LL;
        }
        TlgWrite(v10, &unk_1801FCA9C, (LPCGUID)(v13 + 8), v14, 6u, &pData);
      }
    }
    if ( !*(_DWORD *)(a1 + 32) )
    {
      v15 = (_QWORD *)(a1 + 8);
      v16 = wil::details::g_pThreadFailureCallbacks
          ? (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(v9, 1)
          : 0LL;
      *v15 = v16;
      if ( v16 )
      {
        *(_QWORD *)(a1 + 24) = *v16;
        *v16 = v15;
        *(_DWORD *)(a1 + 32) = GetCurrentThreadId();
      }
    }
  }
  if ( v8 )
    CoTaskMemFree(v8);
}
