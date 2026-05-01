/*
 * XREFs of ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x1800AC6FC
 * Callers:
 *     ?ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z @ 0x1800AD7F0 (-ShowFlyout@CPeopleBarFlyoutExperienceManager@@UEAAJUPoint@Foundation@Windows@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800AC01C (-Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800AF998 (-zInternalStart@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall CommonPeopleTelemetry::ShowPeopleBarFlyout::StartActivity(__int64 a1, __int64 a2)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  const struct _TlgProvider_t *Local; // rax
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rbx
  const struct _TlgProvider_t *v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-39h] BYREF
  DWORD v15; // [rsp+40h] [rbp-31h] BYREF
  int v16; // [rsp+44h] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  DWORD *v18; // [rsp+68h] [rbp-9h]
  int v19; // [rsp+70h] [rbp-1h]
  int v20; // [rsp+74h] [rbp+3h]
  int *v21; // [rsp+78h] [rbp+7h]
  int v22; // [rsp+80h] [rbp+Fh]
  int v23; // [rsp+84h] [rbp+13h]
  __int64 *v24; // [rsp+88h] [rbp+17h]
  int v25; // [rsp+90h] [rbp+1Fh]
  int v26; // [rsp+94h] [rbp+23h]

  v14 = a2;
  v3 = *(float *)&a2;
  v4 = *((float *)&a2 + 1);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  Local = CommonPeopleTelemetryLogging::Provider();
  v7 = Local;
  if ( *(_DWORD *)Local > 5u )
  {
    LODWORD(Local) = 0;
    if ( (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0 )
    {
      v6 = *((_QWORD *)v7 + 3) & 0x400000000000LL;
      if ( v6 == *((_QWORD *)v7 + 3) )
      {
        CurrentThreadId = GetCurrentThreadId();
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v15 = CurrentThreadId;
        v18 = &v15;
        v19 = 4;
        v22 = 4;
        v25 = 4;
        v16 = (int)v3;
        v21 = &v16;
        LODWORD(v14) = (int)v4;
        v24 = &v14;
        v9 = *(_QWORD *)(a1 + 48);
        if ( !*(_BYTE *)(v9 + 4)
          || (v10 = (const GUID *)(v9 + 24), !*(_DWORD *)(v9 + 24))
          && !*(_DWORD *)(v9 + 28)
          && !*(_DWORD *)(v9 + 32)
          && !*(_DWORD *)(v9 + 36) )
        {
          v10 = 0LL;
        }
        LODWORD(Local) = TlgWrite(v7, &unk_18025B3CE, (LPCGUID)(v9 + 8), v10, 5u, &pData);
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v11 = a1 + 8;
    if ( *(_DWORD *)(v11 + 24) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
    {
      Local = (const struct _TlgProvider_t *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                               v6,
                                               1);
      v12 = Local;
    }
    else
    {
      v12 = 0LL;
    }
    *(_QWORD *)v11 = v12;
    if ( v12 )
    {
      *(_QWORD *)(v11 + 16) = *(_QWORD *)v12;
      *(_QWORD *)v12 = v11;
      LODWORD(Local) = GetCurrentThreadId();
      *(_DWORD *)(v11 + 24) = (_DWORD)Local;
    }
  }
  return (int)Local;
}
