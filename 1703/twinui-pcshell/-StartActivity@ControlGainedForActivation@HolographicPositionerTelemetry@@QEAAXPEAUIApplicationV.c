/*
 * XREFs of ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800D5DA0
 * Callers:
 *     ??$Start@AEAPEAUIApplicationView@@AEAPEAUIUnknown@@@ControlGainedForActivation@HolographicPositionerTelemetry@@SA?AV01@AEAPEAUIApplicationView@@AEAPEAUIUnknown@@@Z @ 0x1800DE4A0 (--$Start@AEAPEAUIApplicationView@@AEAPEAUIUnknown@@@ControlGainedForActivation@HolographicPositi.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800D578C (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     GetViewId @ 0x1800D5884 (GetViewId.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800DD4A8 (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflect.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity(
        HolographicPositionerTelemetry::ControlGainedForActivation *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  int ViewId; // eax
  void *v6; // rbx
  __int64 v7; // rcx
  const struct _TlgProvider_t *v8; // rsi
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  const GUID *v12; // r9
  char *v13; // rdi
  _QWORD *Local; // rcx
  LPVOID pv; // [rsp+38h] [rbp-59h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-51h] BYREF
  __int64 v17; // [rsp+48h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp-19h]
  __int64 v20; // [rsp+80h] [rbp-11h]
  void *v21; // [rsp+88h] [rbp-9h]
  int v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+94h] [rbp+3h]
  LPVOID *p_pv; // [rsp+98h] [rbp+7h]
  __int64 v25; // [rsp+A0h] [rbp+Fh]

  v17 = -2LL;
  pv = 0LL;
  ViewId = GetViewId((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2, &pv);
  v6 = pv;
  if ( ViewId >= 0 )
  {
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(this);
    v8 = HolographicPositionerProvider::Provider();
    if ( *(_DWORD *)v8 > 5u && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0 )
    {
      v7 = *((_QWORD *)v8 + 3) & 0x200000000000LL;
      if ( v7 == *((_QWORD *)v8 + 3) )
      {
        CurrentThreadId = GetCurrentThreadId();
        p_CurrentThreadId = &CurrentThreadId;
        v20 = 4LL;
        v9 = &unk_1801C6ABC;
        LODWORD(v10) = 0;
        if ( v6 )
        {
          v9 = v6;
          v10 = -1LL;
          do
            ++v10;
          while ( *((_WORD *)v6 + v10) );
        }
        v21 = v9;
        v22 = 2 * v10 + 2;
        v23 = 0;
        LODWORD(pv) = a3 == 0LL;
        p_pv = &pv;
        v25 = 4LL;
        v11 = *((_QWORD *)this + 6);
        if ( !*(_BYTE *)(v11 + 4)
          || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
          && !*(_DWORD *)(v11 + 28)
          && !*(_DWORD *)(v11 + 32)
          && !*(_DWORD *)(v11 + 36) )
        {
          v12 = 0LL;
        }
        TlgWrite(v8, &unk_1801FCC3E, (LPCGUID)(v11 + 8), v12, 5u, &pData);
      }
    }
    if ( !*((_DWORD *)this + 8) )
    {
      v13 = (char *)this + 8;
      if ( *((_DWORD *)v13 + 6) )
        __fastfail(7u);
      if ( wil::details::g_pThreadFailureCallbacks )
        Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                            v7,
                            1);
      else
        Local = 0LL;
      *(_QWORD *)v13 = Local;
      if ( Local )
      {
        *((_QWORD *)v13 + 2) = *Local;
        *Local = v13;
        *((_DWORD *)v13 + 6) = GetCurrentThreadId();
      }
    }
  }
  if ( v6 )
    CoTaskMemFree(v6);
}
