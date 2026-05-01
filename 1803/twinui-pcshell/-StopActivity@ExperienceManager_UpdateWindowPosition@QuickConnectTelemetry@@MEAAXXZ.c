/*
 * XREFs of ?StopActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@MEAAXXZ @ 0x18017F430
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x18017FAD4 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801B41C8 (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::StopActivity(
        QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  const CHAR *v8; // rdx
  const CHAR *v9; // rdx
  int v10; // ecx
  const WCHAR *v11; // rdx
  int v12; // ecx
  const CHAR *v13; // rdx
  DWORD v14; // ecx
  const CHAR *v15; // rdx
  int v16; // ecx
  const CHAR *v17; // rdx
  TraceLoggingHProvider v18; // r10
  const struct _TlgProvider_t *v19; // rdi
  int v20; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+58h] [rbp-B0h] BYREF
  int *v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+80h] [rbp-88h]
  int v30; // [rsp+84h] [rbp-84h]
  DWORD *v31; // [rsp+88h] [rbp-80h]
  int v32; // [rsp+90h] [rbp-78h]
  int v33; // [rsp+94h] [rbp-74h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  int *v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+C0h] [rbp-48h]
  int v37; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp-40h] BYREF
  int *v39; // [rsp+D8h] [rbp-30h]
  int v40; // [rsp+E0h] [rbp-28h]
  int v41; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+E8h] [rbp-20h] BYREF
  int *v43; // [rsp+F8h] [rbp-10h]
  int v44; // [rsp+100h] [rbp-8h]
  int v45; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+108h] [rbp+0h] BYREF
  int *v47; // [rsp+118h] [rbp+10h]
  int v48; // [rsp+120h] [rbp+18h]
  int v49; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+128h] [rbp+20h] BYREF
  DWORD *v51; // [rsp+138h] [rbp+30h]
  int v52; // [rsp+140h] [rbp+38h]
  int v53; // [rsp+144h] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+158h] [rbp+50h] BYREF
  int *v56; // [rsp+168h] [rbp+60h]
  int v57; // [rsp+170h] [rbp+68h]
  int v58; // [rsp+174h] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+188h] [rbp+80h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  v6 = wil::details::static_lazy<QuickConnectLoggingProvider>::get(
         v5,
         lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    if ( **(_DWORD **)(v6 + 8) > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0x200000000000uLL) )
    {
      v7 = v4[1];
      v8 = (const CHAR *)*((_QWORD *)v4 + 6);
      v37 = 0;
      v24 = v7;
      v35 = &v24;
      v36 = 4;
      TlgCreateSz(&pDesc, v8);
      v9 = (const CHAR *)*((_QWORD *)v4 + 15);
      v41 = 0;
      v39 = v4 + 14;
      v40 = 4;
      TlgCreateSz(&v42, v9);
      v10 = *v4;
      v11 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v45 = 0;
      v25 = v10;
      v43 = &v25;
      v44 = 4;
      TlgCreateWsz(&v46, v11);
      v12 = v4[6];
      v13 = (const CHAR *)*((_QWORD *)v4 + 8);
      v49 = 0;
      v26 = v12;
      v47 = &v26;
      v48 = 4;
      TlgCreateSz(&v50, v13);
      v14 = v4[18];
      v15 = (const CHAR *)*((_QWORD *)v4 + 10);
      v53 = 0;
      v22 = v14;
      v51 = &v22;
      v52 = 4;
      TlgCreateSz(&v54, v15);
      TlgCreateWsz(&v55, *((LPCWSTR *)v4 + 11));
      v16 = v4[24];
      v17 = (const CHAR *)*((_QWORD *)v4 + 13);
      v58 = 0;
      v23 = v16;
      v56 = &v23;
      v57 = 4;
      TlgCreateSz(&v59, v17);
      TlgCreateWsz(&v60, *((LPCWSTR *)v4 + 14));
      TlgWrite(v18, &unk_18038F88F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    v19 = *(const struct _TlgProvider_t **)(v6 + 8);
    if ( *(_DWORD *)v19 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v6 + 8), 0x200000000000uLL) )
    {
      v20 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v30 = 0;
      v28 = &v23;
      v23 = v20;
      v29 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v33 = 0;
      v22 = CurrentThreadId;
      v32 = 4;
      v31 = &v22;
      TlgWrite(v19, &unk_18038F9AD, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition *)((char *)this + 8));
}
