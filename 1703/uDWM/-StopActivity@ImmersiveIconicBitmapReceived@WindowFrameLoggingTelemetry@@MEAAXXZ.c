/*
 * XREFs of ?StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18007BDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000C34C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000C42C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180016430 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x180074CB0 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180074CDC (_TlgCreateWsz.c)
 *     ?zInternalStop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007B4A0 (-zInternalStop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 */

void __fastcall WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::StopActivity(
        WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // r10
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
  int v21; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  int v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+44h] [rbp-C4h] BYREF
  int v27; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v29; // [rsp+78h] [rbp-90h]
  int v30; // [rsp+80h] [rbp-88h]
  int v31; // [rsp+84h] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  int *v33; // [rsp+98h] [rbp-70h]
  int v34; // [rsp+A0h] [rbp-68h]
  int v35; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+A8h] [rbp-60h] BYREF
  int *v37; // [rsp+B8h] [rbp-50h]
  int v38; // [rsp+C0h] [rbp-48h]
  int v39; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C8h] [rbp-40h] BYREF
  int *v41; // [rsp+D8h] [rbp-30h]
  int v42; // [rsp+E0h] [rbp-28h]
  int v43; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E8h] [rbp-20h] BYREF
  DWORD *v45; // [rsp+F8h] [rbp-10h]
  int v46; // [rsp+100h] [rbp-8h]
  int v47; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+118h] [rbp+10h] BYREF
  int *v50; // [rsp+128h] [rbp+20h]
  int v51; // [rsp+130h] [rbp+28h]
  int v52; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+148h] [rbp+40h] BYREF
  EVENT_DATA_DESCRIPTOR v55; // [rsp+158h] [rbp+50h] BYREF
  int *v56; // [rsp+178h] [rbp+70h]
  int v57; // [rsp+180h] [rbp+78h]
  int v58; // [rsp+184h] [rbp+7Ch]
  DWORD *v59; // [rsp+188h] [rbp+80h]
  int v60; // [rsp+190h] [rbp+88h]
  int v61; // [rsp+194h] [rbp+8Ch]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v6 = wil::details::static_lazy<WindowFrameLogging>::get(
         v5,
         (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    v7 = v6[1];
    if ( *(_DWORD *)v7 > 5u
      && (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x200000000000LL) == *(_QWORD *)(v7 + 24) )
    {
      v8 = v4[1];
      v9 = (const CHAR *)*((_QWORD *)v4 + 6);
      v31 = 0;
      v25 = v8;
      v29 = &v25;
      v30 = 4;
      TlgCreateSz(&pDesc, v9);
      v10 = (const CHAR *)*((_QWORD *)v4 + 15);
      v35 = 0;
      v33 = v4 + 14;
      v34 = 4;
      TlgCreateSz(&v36, v10);
      v11 = *v4;
      v12 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v39 = 0;
      v26 = v11;
      v37 = &v26;
      v38 = 4;
      TlgCreateWsz(&v40, v12);
      v13 = v4[6];
      v14 = (const CHAR *)*((_QWORD *)v4 + 8);
      v43 = 0;
      v27 = v13;
      v41 = &v27;
      v42 = 4;
      TlgCreateSz(&v44, v14);
      v15 = v4[18];
      v16 = (const CHAR *)*((_QWORD *)v4 + 10);
      v47 = 0;
      v23 = v15;
      v45 = &v23;
      v46 = 4;
      TlgCreateSz(&v48, v16);
      TlgCreateWsz(&v49, *((LPCWSTR *)v4 + 11));
      v17 = v4[24];
      v18 = (const CHAR *)*((_QWORD *)v4 + 13);
      v52 = 0;
      v24 = v17;
      v50 = &v24;
      v51 = 4;
      TlgCreateSz(&v53, v18);
      TlgCreateWsz(&v54, *((LPCWSTR *)v4 + 14));
      TlgWrite(v19, &unk_1800AF45E, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    v20 = (const struct _TlgProvider_t *)v6[1];
    if ( *(_DWORD *)v20 > 5u
      && (*((_QWORD *)v20 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v20 + 3) & 0x200000000000LL) == *((_QWORD *)v20 + 3) )
    {
      v21 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v58 = 0;
      v56 = &v24;
      v24 = v21;
      v57 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v61 = 0;
      v23 = CurrentThreadId;
      v60 = 4;
      v59 = &v23;
      TlgWrite(v20, &unk_1800AF573, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v55);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *)((char *)this + 8));
}
