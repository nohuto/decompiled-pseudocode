/*
 * XREFs of ?StopActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@MEAAXXZ @ 0x180038350
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180004FC8 (_TlgWrite.c)
 *     ?zInternalStop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000ADC4 (-zInternalStop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvi.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000B030 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000B120 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18007AAF4 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x18007AB24 (_TlgCreateWsz.c)
 */

void __fastcall AnimationClockLoggingTelemetry::CreateAnimationClock::StopActivity(
        AnimationClockLoggingTelemetry::CreateAnimationClock *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  const struct _TlgProvider_t *v7; // rsi
  int v8; // ecx
  DWORD CurrentThreadId; // eax
  int v10; // eax
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  int v13; // ecx
  const WCHAR *v14; // rdx
  int v15; // ecx
  const CHAR *v16; // rdx
  int v17; // ecx
  const CHAR *v18; // rdx
  int v19; // ecx
  const CHAR *v20; // rdx
  DWORD v21; // ecx
  const CHAR *v22; // rdx
  TraceLoggingHProvider v23; // r10
  DWORD v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v31; // [rsp+58h] [rbp-B0h] BYREF
  int *v32; // [rsp+78h] [rbp-90h]
  int v33; // [rsp+80h] [rbp-88h]
  int v34; // [rsp+84h] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  int *v36; // [rsp+98h] [rbp-70h]
  int v37; // [rsp+A0h] [rbp-68h]
  int v38; // [rsp+A4h] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+A8h] [rbp-60h] BYREF
  int *v40; // [rsp+B8h] [rbp-50h]
  int v41; // [rsp+C0h] [rbp-48h]
  int v42; // [rsp+C4h] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+C8h] [rbp-40h] BYREF
  int *v44; // [rsp+D8h] [rbp-30h]
  int v45; // [rsp+E0h] [rbp-28h]
  int v46; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+E8h] [rbp-20h] BYREF
  int *v48; // [rsp+F8h] [rbp-10h]
  int v49; // [rsp+100h] [rbp-8h]
  int v50; // [rsp+104h] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+118h] [rbp+10h] BYREF
  int *v53; // [rsp+128h] [rbp+20h]
  int v54; // [rsp+130h] [rbp+28h]
  int v55; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+138h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+148h] [rbp+40h] BYREF
  DWORD *v58; // [rsp+158h] [rbp+50h]
  int v59; // [rsp+160h] [rbp+58h]
  int v60; // [rsp+164h] [rbp+5Ch]
  int *v61; // [rsp+168h] [rbp+60h]
  int v62; // [rsp+170h] [rbp+68h]
  int v63; // [rsp+174h] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+178h] [rbp+70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+188h] [rbp+80h] BYREF
  int *v66; // [rsp+1A8h] [rbp+A0h]
  int v67; // [rsp+1B0h] [rbp+A8h]
  int v68; // [rsp+1B4h] [rbp+ACh]
  DWORD *v69; // [rsp+1B8h] [rbp+B0h]
  int v70; // [rsp+1C0h] [rbp+B8h]
  int v71; // [rsp+1C4h] [rbp+BCh]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v6 = wil::details::static_lazy<AnimationClockLogging>::get(
         v5,
         (void (__cdecl *)())lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_);
  if ( v4 )
  {
    if ( *(_DWORD *)v6[1] > 4u )
    {
      v10 = v4[1];
      v11 = (const CHAR *)*((_QWORD *)v4 + 6);
      v34 = 0;
      v26 = v10;
      v32 = &v26;
      v33 = 4;
      TlgCreateSz(&pDesc, v11);
      v12 = (const CHAR *)*((_QWORD *)v4 + 15);
      v38 = 0;
      v36 = v4 + 14;
      v37 = 4;
      TlgCreateSz(&v39, v12);
      v13 = *v4;
      v14 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v42 = 0;
      v27 = v13;
      v40 = &v27;
      v41 = 4;
      TlgCreateWsz(&v43, v14);
      v15 = v4[6];
      v16 = (const CHAR *)*((_QWORD *)v4 + 8);
      v46 = 0;
      v28 = v15;
      v44 = &v28;
      v45 = 4;
      TlgCreateSz(&v47, v16);
      v17 = v4[18];
      v18 = (const CHAR *)*((_QWORD *)v4 + 10);
      v50 = 0;
      v29 = v17;
      v48 = &v29;
      v49 = 4;
      TlgCreateSz(&v51, v18);
      TlgCreateWsz(&v52, *((LPCWSTR *)v4 + 11));
      v19 = v4[24];
      v20 = (const CHAR *)*((_QWORD *)v4 + 13);
      v55 = 0;
      v30 = v19;
      v53 = &v30;
      v54 = 4;
      TlgCreateSz(&v56, v20);
      TlgCreateWsz(&v57, *((LPCWSTR *)v4 + 14));
      v21 = v4[2];
      v60 = 0;
      v63 = 0;
      v22 = (const CHAR *)*((_QWORD *)v4 + 5);
      v58 = &v24;
      v25 = v4[15];
      v24 = v21;
      v61 = &v25;
      v59 = 4;
      v62 = 4;
      TlgCreateSz(&v64, v22);
      TlgWrite(v23, &unk_1800B858F, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &v31);
    }
  }
  else
  {
    v7 = (const struct _TlgProvider_t *)v6[1];
    if ( *(_DWORD *)v7 > 4u )
    {
      v8 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v68 = 0;
      v66 = &v25;
      v25 = v8;
      v67 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v71 = 0;
      v24 = CurrentThreadId;
      v70 = 4;
      v69 = &v24;
      TlgWrite(v7, &unk_1800B86BE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((AnimationClockLoggingTelemetry::CreateAnimationClock *)((char *)this + 8));
}
