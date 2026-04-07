/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180078AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000A130 (-LockExclusive@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000A61C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800364F4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x180074CA8 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x180074CD4 (_TlgCreateWsz.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180079100 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        _QWORD *a1,
        int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  const CHAR *v6; // rdx
  const CHAR *v7; // rdx
  const WCHAR *v8; // rdx
  const CHAR *v9; // rdx
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  TraceLoggingHProvider v12; // r10
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const WCHAR *v15; // rdx
  const CHAR *v16; // rdx
  const CHAR *v17; // rdx
  const CHAR *v18; // rdx
  int v19; // ecx
  const CHAR *v20; // rdx
  TraceLoggingHProvider v21; // r10
  _DWORD *v22; // rcx
  int v23; // eax
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+3Ch] [rbp-C4h] BYREF
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  int *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+A0h] [rbp-60h] BYREF
  int *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+C0h] [rbp-40h] BYREF
  int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E0h] [rbp-20h] BYREF
  int *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+110h] [rbp+10h] BYREF
  int *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+140h] [rbp+40h] BYREF
  int *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  PSRWLOCK *p_SRWLock; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+170h] [rbp+70h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 16LL))(a1, (unsigned int)a2[2]) )
  {
    if ( **((_DWORD **)wil::details::static_lazy<WindowFrameLogging>::get(
                         v4,
                         (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
          + 1) > 5u )
    {
      v13 = (const CHAR *)*((_QWORD *)a2 + 6);
      v29 = a2[1];
      v33 = &v29;
      v34 = 4LL;
      TlgCreateSz(&pDesc, v13);
      v14 = (const CHAR *)*((_QWORD *)a2 + 15);
      v36 = a2 + 14;
      v37 = 4LL;
      TlgCreateSz(&v38, v14);
      v15 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v28 = *a2;
      v39 = &v28;
      v40 = 4LL;
      TlgCreateWsz(&v41, v15);
      v16 = (const CHAR *)*((_QWORD *)a2 + 8);
      v27 = a2[6];
      v42 = &v27;
      v43 = 4LL;
      TlgCreateSz(&v44, v16);
      v17 = (const CHAR *)*((_QWORD *)a2 + 10);
      v26 = a2[18];
      v45 = &v26;
      v46 = 4LL;
      TlgCreateSz(&v47, v17);
      TlgCreateWsz(&v48, *((LPCWSTR *)a2 + 11));
      v18 = (const CHAR *)*((_QWORD *)a2 + 13);
      v25 = a2[24];
      v49 = &v25;
      v50 = 4LL;
      TlgCreateSz(&v51, v18);
      TlgCreateWsz(&v52, *((LPCWSTR *)a2 + 14));
      v19 = a2[2];
      v20 = (const CHAR *)*((_QWORD *)a2 + 5);
      v53 = &v30;
      LODWORD(SRWLock) = a2[15];
      v30 = v19;
      p_SRWLock = &SRWLock;
      v54 = 4LL;
      v56 = 4LL;
      TlgCreateSz(&v57, v20);
      TlgWrite(v21, &unk_1800ADFF4, (LPCGUID)(a1[6] + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v5 = *((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                       v4,
                       (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
         + 1);
    if ( *(_DWORD *)v5 > 5u
      && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v5 + 24) & 0x200000000000LL) == *(_QWORD *)(v5 + 24) )
    {
      v6 = (const CHAR *)*((_QWORD *)a2 + 6);
      v25 = a2[1];
      v33 = &v25;
      v34 = 4LL;
      TlgCreateSz(&pDesc, v6);
      v7 = (const CHAR *)*((_QWORD *)a2 + 15);
      v36 = a2 + 14;
      v37 = 4LL;
      TlgCreateSz(&v38, v7);
      v8 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v26 = *a2;
      v39 = &v26;
      v40 = 4LL;
      TlgCreateWsz(&v41, v8);
      v9 = (const CHAR *)*((_QWORD *)a2 + 8);
      v27 = a2[6];
      v42 = &v27;
      v43 = 4LL;
      TlgCreateSz(&v44, v9);
      v10 = (const CHAR *)*((_QWORD *)a2 + 10);
      v28 = a2[18];
      v45 = &v28;
      v46 = 4LL;
      TlgCreateSz(&v47, v10);
      TlgCreateWsz(&v48, *((LPCWSTR *)a2 + 11));
      v11 = (const CHAR *)*((_QWORD *)a2 + 13);
      v29 = a2[24];
      v49 = &v29;
      v50 = 4LL;
      TlgCreateSz(&v51, v11);
      TlgCreateWsz(&v52, *((LPCWSTR *)a2 + 14));
      TlgWrite(v12, &unk_1800ADEEF, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v22 = (_DWORD *)a1[6];
  v23 = a2[1];
  if ( v23 != v22[21] && (v23 != v22[19] || (int)v22[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v22 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
