/*
 * XREFs of ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x18010FE64
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801108F0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800AC01C (-Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800AF998 (-zInternalStart@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall CommonPeopleTelemetry::PeoplePaneAppLaunch::StartActivity(
        CommonPeopleTelemetry::PeoplePaneAppLaunch *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rsi
  __int64 v6; // rax
  const WCHAR *v7; // rcx
  __int64 v8; // r8
  const GUID *v9; // r9
  char *v10; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+68h] [rbp-30h]
  const WCHAR *v16; // [rsp+70h] [rbp-28h]
  int v17; // [rsp+78h] [rbp-20h]
  int v18; // [rsp+7Ch] [rbp-1Ch]

  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v5 = CommonPeopleTelemetryLogging::Provider();
  if ( *(_DWORD *)v5 > 5u && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0 )
  {
    v4 = *((_QWORD *)v5 + 3) & 0x400000000000LL;
    if ( v4 == *((_QWORD *)v5 + 3) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v15 = 4LL;
      p_CurrentThreadId = &CurrentThreadId;
      LODWORD(v6) = 0;
      v7 = &word_18021F3A8;
      if ( a2 )
      {
        v7 = a2;
        v6 = -1LL;
        do
          ++v6;
        while ( a2[v6] );
      }
      v16 = v7;
      v17 = 2 * v6 + 2;
      v18 = 0;
      v8 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v8 + 4)
        || (v9 = (const GUID *)(v8 + 24), !*(_DWORD *)(v8 + 24))
        && !*(_DWORD *)(v8 + 28)
        && !*(_DWORD *)(v8 + 32)
        && !*(_DWORD *)(v8 + 36) )
      {
        v9 = 0LL;
      }
      TlgWrite(v5, &unk_1802602AC, (LPCGUID)(v8 + 8), v9, 4u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v10 = (char *)this + 8;
    if ( *((_DWORD *)v10 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v4,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v10 = Local;
    if ( Local )
    {
      *((_QWORD *)v10 + 2) = *Local;
      *Local = v10;
      *((_DWORD *)v10 + 6) = GetCurrentThreadId();
    }
  }
}
