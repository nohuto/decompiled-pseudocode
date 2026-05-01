/*
 * XREFs of ?StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C12A4
 * Callers:
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1800C49A0 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800C0D60 (-Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800C777C (-zInternalStart@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflector.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_ShowContactCard::StartActivity(
        QuickConnectTelemetry::ExperienceManager_ShowContactCard *this)
{
  __int64 v2; // rcx
  const struct _TlgProvider_t *v3; // rdi
  __int64 v4; // r8
  const GUID *v5; // r9
  char *v6; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v3 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v3 > 5u && (*((_QWORD *)v3 + 2) & 0x200000000000LL) != 0 )
  {
    v2 = *((_QWORD *)v3 + 3) & 0x200000000000LL;
    if ( v2 == *((_QWORD *)v3 + 3) )
    {
      v12 = 0;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v11 = 4;
      v4 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v4 + 4)
        || (v5 = (const GUID *)(v4 + 24), !*(_DWORD *)(v4 + 24))
        && !*(_DWORD *)(v4 + 28)
        && !*(_DWORD *)(v4 + 32)
        && !*(_DWORD *)(v4 + 36) )
      {
        v5 = 0LL;
      }
      TlgWrite(v3, &unk_18025D596, (LPCGUID)(v4 + 8), v5, 3u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v6 = (char *)this + 8;
    if ( *((_DWORD *)v6 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v2,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v6 = Local;
    if ( Local )
    {
      *((_QWORD *)v6 + 2) = *Local;
      *Local = v6;
      *((_DWORD *)v6 + 6) = GetCurrentThreadId();
    }
  }
}
