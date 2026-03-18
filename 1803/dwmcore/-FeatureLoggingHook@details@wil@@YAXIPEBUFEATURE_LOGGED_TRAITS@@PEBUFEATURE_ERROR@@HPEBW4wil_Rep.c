/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800BAF00
 * Callers:
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x180052D60 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800C6E88 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800D4258 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     atexit @ 0x1800DB0AC (atexit.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x180140BBC (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        char a8)
{
  int v8; // esi
  __int64 v11; // rcx
  _DWORD *v12; // rax
  int *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  const struct _TlgProvider_t *v17; // r10
  __int16 v18; // ax
  int v19; // ecx
  int v20; // ecx
  const struct _TlgProvider_t *v21; // rcx
  const struct _TlgProvider_t *v22; // rcx
  const enum wil_ReportingKind *v23; // r14
  const struct _TlgProvider_t *v24; // rcx
  __int64 v25; // rdx
  const struct _TlgProvider_t *v26; // rcx
  __int16 v27; // ax
  int v28; // edx
  int v29; // edx
  __int64 v30; // rax
  __int16 v31; // ax
  int v32; // ecx
  int v33; // ecx
  const CHAR *v34; // rdx
  const CHAR *v35; // rdx
  const CHAR *v36; // rdx
  const CHAR *v37; // rdx
  TraceLoggingHProvider v38; // r10
  _BYTE v39[4]; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  int v41; // [rsp+38h] [rbp-C8h] BYREF
  int v42; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context[2]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]
  LPVOID *v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  int *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  WINBOOL *p_fPending; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  const struct FEATURE_LOGGED_TRAITS *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  char *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+100h] [rbp+0h] BYREF
  char *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+150h] [rbp+50h] BYREF
  char *v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+170h] [rbp+70h] BYREF
  char *v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  int v72; // [rsp+1D0h] [rbp+D0h] BYREF

  v72 = (int)this;
  v8 = (int)a4;
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_1802D6BB8;
    qword_1802D6BB8[0] = &CompositorTracing::`vftable';
    qword_1802D6BD0 = (struct _TlgProvider_t *)&`wil::details::FeatureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1802D6BB8, qword_1802D6BD0);
    InitOnceComplete(&`wil::details::FeatureLogging::Instance'::`2'::wrapper, 0, qword_1802D6BB8);
  }
  v12 = (_DWORD *)*((_QWORD *)Context[0] + 1);
  if ( v12 && *v12 )
  {
    v13 = a5;
    if ( a5 )
    {
      v14 = wil::details::static_lazy<wil::details::FeatureLogging>::get(
              v11,
              lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v14 + 8) > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v14 + 8), 2uLL) )
      {
        v46 = 4LL;
        v45 = &v72;
        v18 = -1;
        if ( a2 )
          v19 = *a2;
        else
          v19 = -1;
        v42 = v19;
        v47 = (LPVOID *)&v42;
        v48 = 4LL;
        if ( a2 )
          v20 = a2[1];
        else
          v20 = -1;
        v41 = v20;
        v49 = &v41;
        v50 = 4LL;
        if ( a2 )
          v18 = *((unsigned __int8 *)a2 + 4);
        LOWORD(fPending) = v18;
        v52 = v16;
        p_fPending = &fPending;
        v39[0] = v8 != 0;
        v54 = 1LL;
        v53 = (const struct FEATURE_LOGGED_TRAITS *)v39;
        LODWORD(Context[0]) = *v13;
        pDesc.Ptr = (ULONGLONG)Context;
        v56 = &a8;
        *(_QWORD *)&pDesc.Size = 4LL;
        v57 = 8LL;
        TlgWrite(v17, &unk_1802AB451, 0LL, 0LL, 9u, &pData);
      }
      if ( *((_BYTE *)a2 + 4) == 1 )
      {
        if ( v8 )
        {
          v21 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                                    v15,
                                                    lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                                                + 8);
          if ( *(_DWORD *)v21 > 5u )
          {
            if ( TlgKeywordOn(v21, 0xAuLL) )
            {
              v46 = 4LL;
              v45 = &v72;
              LODWORD(Context[0]) = *a2;
              v47 = Context;
              v41 = a2[1];
              v49 = &v41;
              LOWORD(fPending) = *((unsigned __int8 *)a2 + 4);
              p_fPending = &fPending;
              v53 = (const struct FEATURE_LOGGED_TRAITS *)v39;
              v42 = *v13;
              pDesc.Ptr = (ULONGLONG)&v42;
              v56 = &a8;
              v48 = 4LL;
              v50 = 4LL;
              v52 = 2LL;
              v39[0] = 1;
              v54 = 1LL;
              *(_QWORD *)&pDesc.Size = 4LL;
              v57 = 8LL;
              TlgWrite(v22, &unk_1802AB3D9, 0LL, 0LL, 9u, &pData);
            }
          }
        }
      }
    }
    else
    {
      v23 = a6;
      if ( a6 )
      {
        v24 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                                  v11,
                                                  lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_)
                                              + 8);
        if ( *(_DWORD *)v24 > 5u && TlgKeywordOn(v24, 4uLL) )
        {
          v46 = v25;
          v45 = &v72;
          v27 = -1;
          if ( a2 )
            v28 = *a2;
          else
            v28 = -1;
          LODWORD(Context[0]) = v28;
          v47 = Context;
          v48 = 4LL;
          if ( a2 )
            v29 = a2[1];
          else
            v29 = -1;
          v41 = v29;
          v49 = &v41;
          v50 = 4LL;
          if ( a2 )
            v27 = *((unsigned __int8 *)a2 + 4);
          LOWORD(fPending) = v27;
          v52 = 2LL;
          p_fPending = &fPending;
          v39[0] = v8 != 0;
          v54 = 1LL;
          v53 = (const struct FEATURE_LOGGED_TRAITS *)v39;
          v42 = *(_DWORD *)v23;
          pDesc.Ptr = (ULONGLONG)&v42;
          v56 = (char *)&a7;
          v58.Ptr = (ULONGLONG)&a8;
          *(_QWORD *)&pDesc.Size = 4LL;
          v57 = 1LL;
          *(_QWORD *)&v58.Size = 8LL;
          TlgWrite(v26, &unk_1802AB351, 0LL, 0LL, 0xAu, &pData);
        }
      }
      else if ( a3 )
      {
        v30 = wil::details::static_lazy<wil::details::FeatureLogging>::get(
                v11,
                lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
        if ( **(_DWORD **)(v30 + 8) > 2u )
        {
          if ( TlgKeywordOn(*(TraceLoggingHProvider *)(v30 + 8), 1uLL) )
          {
            v46 = 4LL;
            v45 = &v72;
            v31 = -1;
            if ( a2 )
              v32 = *a2;
            else
              v32 = -1;
            LODWORD(Context[0]) = v32;
            v47 = Context;
            v48 = 4LL;
            if ( a2 )
              v33 = a2[1];
            else
              v33 = -1;
            v41 = v33;
            v49 = &v41;
            v50 = 4LL;
            if ( a2 )
              v31 = *((unsigned __int8 *)a2 + 4);
            v34 = (const CHAR *)*((_QWORD *)a3 + 1);
            LOWORD(fPending) = v31;
            p_fPending = &fPending;
            v52 = 2LL;
            v53 = a3;
            v54 = 4LL;
            TlgCreateSz(&pDesc, v34);
            v35 = (const CHAR *)*((_QWORD *)a3 + 3);
            v56 = (char *)a3 + 4;
            v57 = 2LL;
            TlgCreateSz(&v58, v35);
            TlgCreateSz(&v59, *((LPCSTR *)a3 + 2));
            TlgCreateSz(&v60, *((LPCSTR *)a3 + 8));
            v36 = (const CHAR *)*((_QWORD *)a3 + 9);
            v61 = (char *)a3 + 56;
            v62 = 2LL;
            TlgCreateSz(&v63, v36);
            TlgCreateSz(&v64, *((LPCSTR *)a3 + 12));
            TlgCreateSz(&v65, *((LPCSTR *)a3 + 6));
            TlgCreateSz(&v66, *((LPCSTR *)a3 + 5));
            v37 = (const CHAR *)*((_QWORD *)a3 + 11);
            v67 = (char *)a3 + 32;
            v68 = 4LL;
            TlgCreateSz(&v69, v37);
            v71 = 4LL;
            v70 = (char *)a3 + 80;
            TlgWrite(v38, &unk_1802AB231, 0LL, 0LL, 0x14u, &pData);
          }
        }
      }
    }
  }
}
