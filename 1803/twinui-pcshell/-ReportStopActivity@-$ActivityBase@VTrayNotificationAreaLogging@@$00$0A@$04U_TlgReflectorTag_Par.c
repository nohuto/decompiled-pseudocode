/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180263CD8
 * Callers:
 *     ?Destroy@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026322C (-Destroy@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802640C0 (-Stop@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLogging@@P6AXXZ@Z @ 0x180264444 (-get@-$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLoggi.c)
 */

__int64 __fastcall wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v4; // rdi
  int v5; // eax
  int *v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  int v11; // ecx
  const WCHAR *v12; // rdx
  int v13; // ecx
  const CHAR *v14; // rdx
  DWORD v15; // ecx
  const CHAR *v16; // rdx
  int v17; // ecx
  const CHAR *v18; // rdx
  TraceLoggingHProvider v19; // r10
  const struct _TlgProvider_t *v20; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v22; // rdx
  DWORD v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v30; // [rsp+78h] [rbp-90h]
  int v31; // [rsp+80h] [rbp-88h]
  int v32; // [rsp+84h] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  int *v34; // [rsp+98h] [rbp-70h]
  int v35; // [rsp+A0h] [rbp-68h]
  int v36; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+A8h] [rbp-60h] BYREF
  int *v38; // [rsp+B8h] [rbp-50h]
  int v39; // [rsp+C0h] [rbp-48h]
  int v40; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+C8h] [rbp-40h] BYREF
  int *v42; // [rsp+D8h] [rbp-30h]
  int v43; // [rsp+E0h] [rbp-28h]
  int v44; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+E8h] [rbp-20h] BYREF
  DWORD *v46; // [rsp+F8h] [rbp-10h]
  int v47; // [rsp+100h] [rbp-8h]
  int v48; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+118h] [rbp+10h] BYREF
  int *v51; // [rsp+128h] [rbp+20h]
  int v52; // [rsp+130h] [rbp+28h]
  int v53; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+148h] [rbp+40h] BYREF
  EVENT_DATA_DESCRIPTOR v56; // [rsp+158h] [rbp+50h] BYREF
  int *v57; // [rsp+178h] [rbp+70h]
  int v58; // [rsp+180h] [rbp+78h]
  int v59; // [rsp+184h] [rbp+7Ch]
  DWORD *v60; // [rsp+188h] [rbp+80h]
  int v61; // [rsp+190h] [rbp+88h]
  int v62; // [rsp+194h] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1A8h] [rbp+A0h] BYREF

  if ( a2 < 0 )
  {
    v4 = (int *)a1[6];
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    v7 = wil::details::static_lazy<TrayNotificationAreaLogging>::get(
           a1,
           lambda_0975fe2f1555e85eda3261a2a36018a8_::_lambda_invoker_cdecl_);
    if ( v6 )
    {
      if ( **(_DWORD **)(v7 + 8) > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x200000000000uLL) )
      {
        v8 = v6[1];
        v9 = (const CHAR *)*((_QWORD *)v6 + 6);
        v32 = 0;
        v26 = v8;
        v30 = &v26;
        v31 = 4;
        TlgCreateSz(&pDesc, v9);
        v10 = (const CHAR *)*((_QWORD *)v6 + 15);
        v36 = 0;
        v34 = v6 + 14;
        v35 = 4;
        TlgCreateSz(&v37, v10);
        v11 = *v6;
        v12 = (const WCHAR *)*((_QWORD *)v6 + 2);
        v40 = 0;
        v27 = v11;
        v38 = &v27;
        v39 = 4;
        TlgCreateWsz(&v41, v12);
        v13 = v6[6];
        v14 = (const CHAR *)*((_QWORD *)v6 + 8);
        v44 = 0;
        v28 = v13;
        v42 = &v28;
        v43 = 4;
        TlgCreateSz(&v45, v14);
        v15 = v6[18];
        v16 = (const CHAR *)*((_QWORD *)v6 + 10);
        v48 = 0;
        v24 = v15;
        v46 = &v24;
        v47 = 4;
        TlgCreateSz(&v49, v16);
        TlgCreateWsz(&v50, *((LPCWSTR *)v6 + 11));
        v17 = v6[24];
        v18 = (const CHAR *)*((_QWORD *)v6 + 13);
        v53 = 0;
        v25 = v17;
        v51 = &v25;
        v52 = 4;
        TlgCreateSz(&v54, v18);
        TlgCreateWsz(&v55, *((LPCWSTR *)v6 + 14));
        TlgWrite(v19, &unk_180389DAA, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
      }
    }
    else
    {
      v20 = *(const struct _TlgProvider_t **)(v7 + 8);
      if ( *(_DWORD *)v20 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x200000000000uLL) )
      {
        v59 = 0;
        v25 = a2;
        v58 = 4;
        v57 = &v25;
        CurrentThreadId = GetCurrentThreadId();
        v22 = a1[6];
        v62 = 0;
        v24 = CurrentThreadId;
        v60 = &v24;
        v61 = 4;
        TlgCreateSz(&v63, *(LPCSTR *)(v22 + 48));
        TlgCreateWsz(&v64, *(LPCWSTR *)(a1[6] + 56LL));
        TlgWrite(v20, &unk_18039BA24, (LPCGUID)(a1[6] + 8LL), 0LL, 6u, &v56);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
