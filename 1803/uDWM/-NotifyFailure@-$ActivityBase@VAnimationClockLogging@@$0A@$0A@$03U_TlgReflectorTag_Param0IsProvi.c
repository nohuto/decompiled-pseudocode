/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800A7B00
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180004FC8 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000ACDC (-LockExclusive@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvi.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000B030 (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x18007AAF4 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x18007AB24 (_TlgCreateWsz.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18007BBC4 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

char __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  int v4; // eax
  const CHAR *v5; // rdx
  const CHAR *v6; // rdx
  int v7; // r11d
  int v8; // ecx
  const WCHAR *v9; // rdx
  int v10; // r11d
  int v11; // ecx
  const CHAR *v12; // rdx
  int v13; // r11d
  int v14; // ecx
  const CHAR *v15; // rdx
  int v16; // r11d
  int v17; // ecx
  const CHAR *v18; // rdx
  int v19; // r11d
  int v20; // ecx
  const CHAR *v21; // rdx
  int v22; // r11d
  TraceLoggingHProvider v23; // r10
  _DWORD *v24; // rcx
  int v25; // eax
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  int v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+3Ch] [rbp-C4h] BYREF
  int v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+44h] [rbp-BCh] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v35; // [rsp+70h] [rbp-90h]
  int v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  int *v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h]
  int v41; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+A0h] [rbp-60h] BYREF
  int *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+C0h] [rbp-40h] BYREF
  int *v47; // [rsp+D0h] [rbp-30h]
  int v48; // [rsp+D8h] [rbp-28h]
  int v49; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+E0h] [rbp-20h] BYREF
  int *v51; // [rsp+F0h] [rbp-10h]
  int v52; // [rsp+F8h] [rbp-8h]
  int v53; // [rsp+FCh] [rbp-4h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+110h] [rbp+10h] BYREF
  int *v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+140h] [rbp+40h] BYREF
  int *v61; // [rsp+150h] [rbp+50h]
  int v62; // [rsp+158h] [rbp+58h]
  int v63; // [rsp+15Ch] [rbp+5Ch]
  PSRWLOCK *p_SRWLock; // [rsp+160h] [rbp+60h]
  int v65; // [rsp+168h] [rbp+68h]
  int v66; // [rsp+16Ch] [rbp+6Ch]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+170h] [rbp+70h] BYREF

  if ( *(_DWORD *)wil::details::static_lazy<AnimationClockLogging>::get(
                    a1,
                    (void (__cdecl *)())lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_)[1] > 5u )
  {
    v4 = a2[1];
    v5 = (const CHAR *)*((_QWORD *)a2 + 6);
    v37 = 0;
    v27 = v4;
    v35 = &v27;
    v36 = 4;
    TlgCreateSz(&pDesc, v5);
    v6 = (const CHAR *)*((_QWORD *)a2 + 15);
    v41 = 0;
    v39 = a2 + 14;
    v40 = v7;
    TlgCreateSz(&v42, v6);
    v8 = *a2;
    v9 = (const WCHAR *)*((_QWORD *)a2 + 2);
    v45 = 0;
    v28 = v8;
    v43 = &v28;
    v44 = v10;
    TlgCreateWsz(&v46, v9);
    v11 = a2[6];
    v12 = (const CHAR *)*((_QWORD *)a2 + 8);
    v49 = 0;
    v29 = v11;
    v47 = &v29;
    v48 = v13;
    TlgCreateSz(&v50, v12);
    v14 = a2[18];
    v15 = (const CHAR *)*((_QWORD *)a2 + 10);
    v53 = 0;
    v30 = v14;
    v51 = &v30;
    v52 = v16;
    TlgCreateSz(&v54, v15);
    TlgCreateWsz(&v55, *((LPCWSTR *)a2 + 11));
    v17 = a2[24];
    v18 = (const CHAR *)*((_QWORD *)a2 + 13);
    v58 = 0;
    v31 = v17;
    v56 = &v31;
    v57 = v19;
    TlgCreateSz(&v59, v18);
    TlgCreateWsz(&v60, *((LPCWSTR *)a2 + 14));
    v20 = a2[2];
    v63 = 0;
    v66 = 0;
    v21 = (const CHAR *)*((_QWORD *)a2 + 5);
    v61 = &v32;
    LODWORD(SRWLock) = a2[15];
    v32 = v20;
    p_SRWLock = &SRWLock;
    v62 = v22;
    v65 = v22;
    TlgCreateSz(&v67, v21);
    TlgWrite(v23, &unk_1800B8CCB, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &pData);
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v24 = *(_DWORD **)(a1 + 48);
  v25 = a2[1];
  if ( v25 != v24[21] && (v25 != v24[19] || (int)v24[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v24 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
