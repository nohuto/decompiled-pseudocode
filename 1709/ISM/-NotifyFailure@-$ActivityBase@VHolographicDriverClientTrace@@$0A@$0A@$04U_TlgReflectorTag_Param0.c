/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800BA440
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180002574 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800979D8 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<HolographicDriverClientTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  const struct _TlgProvider_t *v4; // r10
  const unsigned __int16 *v5; // r8
  const unsigned __int16 *v6; // rcx
  __int64 v7; // rax
  const unsigned __int16 *v8; // rdx
  const unsigned __int16 *v9; // rcx
  const unsigned __int16 *v10; // rdx
  const wchar_t *v11; // rcx
  const wchar_t *v12; // r9
  const wchar_t *v13; // rdx
  const unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // rdx
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // rdx
  const wchar_t *v18; // rcx
  const wchar_t *v19; // rdx
  const unsigned __int16 *v20; // rcx
  const unsigned __int16 *v21; // rdx
  const wchar_t *v22; // rcx
  const unsigned __int16 *v23; // rcx
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
  __int64 v36; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+8Ch] [rbp-74h]
  int *v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v42; // [rsp+A0h] [rbp-60h]
  int v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+ACh] [rbp-54h]
  int *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  const wchar_t *v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  int *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v52; // [rsp+E0h] [rbp-20h]
  int v53; // [rsp+E8h] [rbp-18h]
  int v54; // [rsp+ECh] [rbp-14h]
  int *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+108h] [rbp+8h]
  int v59; // [rsp+10Ch] [rbp+Ch]
  const wchar_t *v60; // [rsp+110h] [rbp+10h]
  int v61; // [rsp+118h] [rbp+18h]
  int v62; // [rsp+11Ch] [rbp+1Ch]
  int *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v65; // [rsp+130h] [rbp+30h]
  int v66; // [rsp+138h] [rbp+38h]
  int v67; // [rsp+13Ch] [rbp+3Ch]
  const wchar_t *v68; // [rsp+140h] [rbp+40h]
  int v69; // [rsp+148h] [rbp+48h]
  int v70; // [rsp+14Ch] [rbp+4Ch]
  int *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  PSRWLOCK *p_SRWLock; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  const unsigned __int16 *v75; // [rsp+170h] [rbp+70h]
  int v76; // [rsp+178h] [rbp+78h]
  int v77; // [rsp+17Ch] [rbp+7Ch]

  v4 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = &word_1800DD4CA;
    v6 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
    v27 = a2[1];
    v35 = &v27;
    LODWORD(v7) = 0;
    v36 = 4LL;
    v8 = &word_1800DD4CA;
    if ( v6 )
    {
      v8 = v6;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v6 + v7) );
    }
    v9 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
    v38 = v7 + 1;
    v40 = a2 + 14;
    LODWORD(v7) = 0;
    v37 = v8;
    v10 = &word_1800DD4CA;
    v39 = 0;
    v41 = 4LL;
    if ( v9 )
    {
      v10 = v9;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v9 + v7) );
    }
    v11 = (const wchar_t *)*((_QWORD *)a2 + 2);
    v12 = &word_1800DF514;
    v42 = v10;
    v43 = v7 + 1;
    v13 = &word_1800DF514;
    v28 = *a2;
    v45 = &v28;
    LODWORD(v7) = 0;
    v44 = 0;
    v46 = 4LL;
    if ( v11 )
    {
      v13 = v11;
      v7 = -1LL;
      do
        ++v7;
      while ( v11[v7] );
    }
    v14 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
    v48 = 2 * v7 + 2;
    v29 = a2[6];
    v50 = &v29;
    LODWORD(v7) = 0;
    v47 = v13;
    v15 = &word_1800DD4CA;
    v49 = 0;
    v51 = 4LL;
    if ( v14 )
    {
      v15 = v14;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v14 + v7) );
    }
    v16 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
    v53 = v7 + 1;
    v30 = a2[18];
    v55 = &v30;
    LODWORD(v7) = 0;
    v52 = v15;
    v17 = &word_1800DD4CA;
    v54 = 0;
    v56 = 4LL;
    if ( v16 )
    {
      v17 = v16;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v16 + v7) );
    }
    v18 = (const wchar_t *)*((_QWORD *)a2 + 11);
    v58 = v7 + 1;
    LODWORD(v7) = 0;
    v57 = v17;
    v19 = &word_1800DF514;
    v59 = 0;
    if ( v18 )
    {
      v19 = v18;
      v7 = -1LL;
      do
        ++v7;
      while ( v18[v7] );
    }
    v20 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
    v61 = 2 * v7 + 2;
    v31 = a2[24];
    v63 = &v31;
    LODWORD(v7) = 0;
    v60 = v19;
    v21 = &word_1800DD4CA;
    v62 = 0;
    v64 = 4LL;
    if ( v20 )
    {
      v21 = v20;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v20 + v7) );
    }
    v22 = (const wchar_t *)*((_QWORD *)a2 + 14);
    v66 = v7 + 1;
    LODWORD(v7) = 0;
    v65 = v21;
    v67 = 0;
    if ( v22 )
    {
      v12 = v22;
      v7 = -1LL;
      do
        ++v7;
      while ( v22[v7] );
    }
    v23 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
    v69 = 2 * v7 + 2;
    v32 = a2[2];
    v71 = &v32;
    LODWORD(SRWLock) = a2[15];
    p_SRWLock = &SRWLock;
    LODWORD(v7) = 0;
    v68 = v12;
    v70 = 0;
    v72 = 4LL;
    v74 = 4LL;
    if ( v23 )
    {
      v5 = v23;
      v7 = -1LL;
      do
        ++v7;
      while ( *((_BYTE *)v23 + v7) );
    }
    v75 = v5;
    v76 = v7 + 1;
    v77 = 0;
    TlgWrite(v4, &unk_1800F19FB, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &pData);
  }
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v24 = *(_DWORD **)(a1 + 48);
  v25 = a2[1];
  if ( v25 != v24[21] && (v25 != v24[19] || (int)v24[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v24 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 1;
}
