/*
 * XREFs of ?StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z @ 0x1800A14F0
 * Callers:
 *     ??$Start@AEAW4PeopleFlyoutAction@@@HidePeopleBarFlyout@CommonPeopleTelemetry@@SA?AV01@AEAW4PeopleFlyoutAction@@@Z @ 0x1800A3E38 (--$Start@AEAW4PeopleFlyoutAction@@@HidePeopleBarFlyout@CommonPeopleTelemetry@@SA-AV01@AEAW4Peopl.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005588 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A087C (-Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800A3380 (-zInternalStart@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall CommonPeopleTelemetry::HidePeopleBarFlyout::StartActivity(__int64 a1, int a2)
{
  const struct _TlgProvider_t *Local; // rax
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rdi
  __int64 v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rbx
  const struct _TlgProvider_t *v10; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-78h] BYREF
  int v13; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-48h]
  int v16; // [rsp+68h] [rbp-40h]
  int v17; // [rsp+6Ch] [rbp-3Ch]
  int *v18; // [rsp+70h] [rbp-38h]
  int v19; // [rsp+78h] [rbp-30h]
  int v20; // [rsp+7Ch] [rbp-2Ch]

  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  Local = CommonPeopleTelemetryLogging::Provider();
  v6 = Local;
  if ( *(_DWORD *)Local > 5u )
  {
    LODWORD(Local) = 0;
    if ( (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0 )
    {
      v5 = *((_QWORD *)v6 + 3) & 0x400000000000LL;
      if ( v5 == *((_QWORD *)v6 + 3) )
      {
        v17 = 0;
        v20 = 0;
        CurrentThreadId = GetCurrentThreadId();
        p_CurrentThreadId = &CurrentThreadId;
        v18 = &v13;
        v16 = 4;
        v13 = a2;
        v19 = 4;
        v7 = *(_QWORD *)(a1 + 48);
        if ( !*(_BYTE *)(v7 + 4)
          || (v8 = (const GUID *)(v7 + 24), !*(_DWORD *)(v7 + 24))
          && !*(_DWORD *)(v7 + 28)
          && !*(_DWORD *)(v7 + 32)
          && !*(_DWORD *)(v7 + 36) )
        {
          v8 = 0LL;
        }
        LODWORD(Local) = TlgWrite(v6, &unk_1801F9BCA, (LPCGUID)(v7 + 8), v8, 4u, &pData);
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v9 = a1 + 8;
    if ( *(_DWORD *)(v9 + 24) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v5,
                                               1);
      v10 = Local;
    }
    else
    {
      v10 = 0LL;
    }
    *(_QWORD *)v9 = v10;
    if ( v10 )
    {
      *(_QWORD *)(v9 + 16) = *(_QWORD *)v10;
      *(_QWORD *)v10 = v9;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(v9 + 24) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
