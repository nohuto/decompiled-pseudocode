/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180154640
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800FF1BC (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

char __fastcall wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  void *v4; // r8
  int v5; // eax
  const CHAR *v6; // rdx
  const CHAR *v7; // rdx
  int v8; // r11d
  int v9; // ecx
  const WCHAR *v10; // rdx
  int v11; // r11d
  int v12; // ecx
  const CHAR *v13; // rdx
  int v14; // r11d
  int v15; // ecx
  const CHAR *v16; // rdx
  int v17; // r11d
  int v18; // ecx
  const CHAR *v19; // rdx
  int v20; // r11d
  int v21; // ecx
  const CHAR *v22; // rdx
  int v23; // r11d
  TraceLoggingHProvider v24; // r10
  _DWORD *v25; // rcx
  int v26; // eax
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34; // [rsp+4Ch] [rbp-B4h] BYREF
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+54h] [rbp-ACh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v42; // [rsp+A0h] [rbp-60h]
  int v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+B0h] [rbp-50h] BYREF
  int *v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+D0h] [rbp-30h] BYREF
  int *v50; // [rsp+E0h] [rbp-20h]
  int v51; // [rsp+E8h] [rbp-18h]
  int v52; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+F0h] [rbp-10h] BYREF
  int *v54; // [rsp+100h] [rbp+0h]
  int v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+120h] [rbp+20h] BYREF
  int *v59; // [rsp+130h] [rbp+30h]
  int v60; // [rsp+138h] [rbp+38h]
  int v61; // [rsp+13Ch] [rbp+3Ch]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+150h] [rbp+50h] BYREF
  int *v64; // [rsp+160h] [rbp+60h]
  int v65; // [rsp+168h] [rbp+68h]
  int v66; // [rsp+16Ch] [rbp+6Ch]
  int *v67; // [rsp+170h] [rbp+70h]
  int v68; // [rsp+178h] [rbp+78h]
  int v69; // [rsp+17Ch] [rbp+7Ch]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+180h] [rbp+80h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1804387D8;
    qword_1804387D8[0] = &LockScreenServiceLogging::`vftable';
    qword_1804387F0 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387D8, qword_1804387F0, v4);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1804387D8);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    v5 = a2[1];
    v6 = (const CHAR *)*((_QWORD *)a2 + 6);
    v40 = 0;
    v30 = v5;
    v38 = &v30;
    v39 = 4;
    TlgCreateSz(&pDesc, v6);
    v7 = (const CHAR *)*((_QWORD *)a2 + 15);
    v44 = 0;
    v42 = a2 + 14;
    v43 = v8;
    TlgCreateSz(&v45, v7);
    v9 = *a2;
    v10 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v48 = 0;
    v31 = v9;
    v46 = &v31;
    v47 = v11;
    TlgCreateWsz(&v49, v10);
    v12 = a2[6];
    v13 = (const CHAR *)*((_QWORD *)a2 + 8);
    v52 = 0;
    v32 = v12;
    v50 = &v32;
    v51 = v14;
    TlgCreateSz(&v53, v13);
    v15 = a2[18];
    v16 = (const CHAR *)*((_QWORD *)a2 + 10);
    v56 = 0;
    v33 = v15;
    v54 = &v33;
    v55 = v17;
    TlgCreateSz(&v57, v16);
    TlgCreateWsz(&v58, *((LPCWSTR *)a2 + 11));
    v18 = a2[24];
    v19 = (const CHAR *)*((_QWORD *)a2 + 13);
    v61 = 0;
    v34 = v18;
    v59 = &v34;
    v60 = v20;
    TlgCreateSz(&v62, v19);
    TlgCreateWsz(&v63, *((LPCWSTR *)a2 + 14));
    v21 = a2[2];
    v66 = 0;
    v69 = 0;
    v22 = (const CHAR *)*((_QWORD *)a2 + 5);
    v64 = &v35;
    v36 = a2[15];
    v35 = v21;
    v67 = &v36;
    v65 = v23;
    v68 = v23;
    TlgCreateSz(&v70, v22);
    TlgWrite(v24, &unk_18039A9C4, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &pData);
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    (RTL_SRWLOCK **)&Context);
  v25 = *(_DWORD **)(a1 + 48);
  v26 = a2[1];
  if ( v26 != v25[21] && (v26 != v25[19] || (int)v25[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v25 + 20), (const struct wil::FailureInfo *)a2);
  if ( Context )
    ReleaseSRWLockExclusive((PSRWLOCK)Context);
  return 1;
}
