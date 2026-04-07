/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18000BEA8
 * Callers:
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000BF6C (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18000C124 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18000C010 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000C34C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x180016430 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x180074CB0 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180074CDC (_TlgCreateWsz.c)
 */

void __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        WindowFrameLoggingTelemetry::CloneWindow *this,
        int a2)
{
  void (__fastcall *v4)(WindowFrameLoggingTelemetry::CloneWindow *__hidden); // rax
  int *v5; // rdi
  int v6; // eax
  int *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r10
  int v10; // eax
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  int v13; // ecx
  const WCHAR *v14; // rdx
  int v15; // ecx
  const CHAR *v16; // rdx
  DWORD v17; // ecx
  const CHAR *v18; // rdx
  int v19; // ecx
  const CHAR *v20; // rdx
  TraceLoggingHProvider v21; // r10
  const struct _TlgProvider_t *v22; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v24; // rdx
  DWORD v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  int v27; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+44h] [rbp-C4h] BYREF
  int v29; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v31; // [rsp+78h] [rbp-90h]
  int v32; // [rsp+80h] [rbp-88h]
  int v33; // [rsp+84h] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  int *v35; // [rsp+98h] [rbp-70h]
  int v36; // [rsp+A0h] [rbp-68h]
  int v37; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+A8h] [rbp-60h] BYREF
  int *v39; // [rsp+B8h] [rbp-50h]
  int v40; // [rsp+C0h] [rbp-48h]
  int v41; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+C8h] [rbp-40h] BYREF
  int *v43; // [rsp+D8h] [rbp-30h]
  int v44; // [rsp+E0h] [rbp-28h]
  int v45; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+E8h] [rbp-20h] BYREF
  DWORD *v47; // [rsp+F8h] [rbp-10h]
  int v48; // [rsp+100h] [rbp-8h]
  int v49; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+118h] [rbp+10h] BYREF
  int *v52; // [rsp+128h] [rbp+20h]
  int v53; // [rsp+130h] [rbp+28h]
  int v54; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+148h] [rbp+40h] BYREF
  EVENT_DATA_DESCRIPTOR v57; // [rsp+158h] [rbp+50h] BYREF
  int *v58; // [rsp+178h] [rbp+70h]
  int v59; // [rsp+180h] [rbp+78h]
  int v60; // [rsp+184h] [rbp+7Ch]
  DWORD *v61; // [rsp+188h] [rbp+80h]
  int v62; // [rsp+190h] [rbp+88h]
  int v63; // [rsp+194h] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1A8h] [rbp+A0h] BYREF

  if ( a2 < 0 )
  {
    v5 = (int *)*((_QWORD *)this + 6);
    v6 = v5[19];
    if ( v6 < 0 && v6 == v5[21] )
      v7 = v5 + 20;
    else
      v7 = 0LL;
    v8 = wil::details::static_lazy<WindowFrameLogging>::get(
           this,
           lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
    if ( v7 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      if ( *(_DWORD *)v9 > 5u
        && (*(_QWORD *)(v9 + 16) & 0x200000000000LL) != 0
        && (*(_QWORD *)(v9 + 24) & 0x200000000000LL) == *(_QWORD *)(v9 + 24) )
      {
        v10 = v7[1];
        v11 = (const CHAR *)*((_QWORD *)v7 + 6);
        v33 = 0;
        v27 = v10;
        v31 = &v27;
        v32 = 4;
        TlgCreateSz(&pDesc, v11);
        v12 = (const CHAR *)*((_QWORD *)v7 + 15);
        v37 = 0;
        v35 = v7 + 14;
        v36 = 4;
        TlgCreateSz(&v38, v12);
        v13 = *v7;
        v14 = (const WCHAR *)*((_QWORD *)v7 + 2);
        v41 = 0;
        v28 = v13;
        v39 = &v28;
        v40 = 4;
        TlgCreateWsz(&v42, v14);
        v15 = v7[6];
        v16 = (const CHAR *)*((_QWORD *)v7 + 8);
        v45 = 0;
        v29 = v15;
        v43 = &v29;
        v44 = 4;
        TlgCreateSz(&v46, v16);
        v17 = v7[18];
        v18 = (const CHAR *)*((_QWORD *)v7 + 10);
        v49 = 0;
        v25 = v17;
        v47 = &v25;
        v48 = 4;
        TlgCreateSz(&v50, v18);
        TlgCreateWsz(&v51, *((LPCWSTR *)v7 + 11));
        v19 = v7[24];
        v20 = (const CHAR *)*((_QWORD *)v7 + 13);
        v54 = 0;
        v26 = v19;
        v52 = &v26;
        v53 = 4;
        TlgCreateSz(&v55, v20);
        TlgCreateWsz(&v56, *((LPCWSTR *)v7 + 14));
        TlgWrite(v21, &unk_1800AFAB1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
      }
    }
    else
    {
      v22 = *(const struct _TlgProvider_t **)(v8 + 8);
      if ( *(_DWORD *)v22 > 5u
        && (*((_QWORD *)v22 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v22 + 3) & 0x200000000000LL) == *((_QWORD *)v22 + 3) )
      {
        v60 = 0;
        v26 = a2;
        v59 = 4;
        v58 = &v26;
        CurrentThreadId = GetCurrentThreadId();
        v24 = *((_QWORD *)this + 6);
        v63 = 0;
        v25 = CurrentThreadId;
        v61 = &v25;
        v62 = 4;
        TlgCreateSz(&v64, *(LPCSTR *)(v24 + 48));
        TlgCreateWsz(&v65, *(LPCWSTR *)(*((_QWORD *)this + 6) + 56LL));
        TlgWrite(v22, &unk_1800AFBB8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v57);
      }
    }
  }
  v4 = *(void (__fastcall **)(WindowFrameLoggingTelemetry::CloneWindow *__hidden))(*(_QWORD *)this + 8LL);
  if ( v4 == WindowFrameLoggingTelemetry::CloneWindow::StopActivity )
    WindowFrameLoggingTelemetry::CloneWindow::StopActivity(this);
  else
    v4(this);
}
