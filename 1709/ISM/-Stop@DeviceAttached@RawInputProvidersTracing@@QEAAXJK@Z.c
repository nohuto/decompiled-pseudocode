/*
 * XREFs of ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18008D47C
 * Callers:
 *     ?DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092FFC (-DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     wil::details::lambda_call__lambda_bb2651da56f9f08f65b49af7120852db___::_lambda_call__lambda_bb2651da56f9f08f65b49af7120852db___ @ 0x1800963D4 (wil--details--lambda_call__lambda_bb2651da56f9f08f65b49af7120852db___--_lambda_call__lambda_bb26.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008CA50 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800979D8 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::DeviceAttached::Stop(
        RawInputProvidersTracing::DeviceAttached *this,
        int a2,
        int a3)
{
  int *v3; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // r10
  const unsigned __int16 *v9; // r8
  const unsigned __int16 *v10; // rcx
  __int64 v11; // rax
  const unsigned __int16 *v12; // rdx
  const unsigned __int16 *v13; // rcx
  const unsigned __int16 *v14; // rdx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // r9
  const wchar_t *v17; // rdx
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // rdx
  const unsigned __int16 *v20; // rcx
  const unsigned __int16 *v21; // rdx
  const wchar_t *v22; // rcx
  const wchar_t *v23; // rdx
  const unsigned __int16 *v24; // rcx
  const wchar_t *v25; // rcx
  const struct _TlgProvider_t *v26; // rbx
  int v27; // ecx
  DWORD CurrentThreadId; // eax
  __int64 **v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rax
  DWORD v32; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v40; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+8Ch] [rbp-74h]
  int *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v45; // [rsp+A0h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+ACh] [rbp-54h]
  int *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  const wchar_t *v50; // [rsp+C0h] [rbp-40h]
  int v51; // [rsp+C8h] [rbp-38h]
  int v52; // [rsp+CCh] [rbp-34h]
  int *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  DWORD *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+10Ch] [rbp+Ch]
  const wchar_t *v63; // [rsp+110h] [rbp+10h]
  int v64; // [rsp+118h] [rbp+18h]
  int v65; // [rsp+11Ch] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v68; // [rsp+130h] [rbp+30h]
  int v69; // [rsp+138h] [rbp+38h]
  int v70; // [rsp+13Ch] [rbp+3Ch]
  const wchar_t *v71; // [rsp+140h] [rbp+40h]
  int v72; // [rsp+148h] [rbp+48h]
  int v73; // [rsp+14Ch] [rbp+4Ch]
  int *v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  int *v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v78; // [rsp+170h] [rbp+70h] BYREF
  PSRWLOCK *v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  DWORD *v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  int *v83; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  int *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]
  int v88; // [rsp+218h] [rbp+118h] BYREF
  int v89; // [rsp+220h] [rbp+120h] BYREF

  v89 = a3;
  v88 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v5 = v3[19];
  if ( v5 < 0 && v5 == v3[21] )
    v6 = v3 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v7 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v6 )
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v8 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x400000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v9 = &word_1800DD4CA;
      v10 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v34 = v6[1];
      v38 = &v34;
      LODWORD(v11) = 0;
      v39 = 4LL;
      v12 = &word_1800DD4CA;
      if ( v10 )
      {
        v12 = v10;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v10 + v11) );
      }
      v13 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v41 = v11 + 1;
      v43 = v6 + 14;
      LODWORD(v11) = 0;
      v40 = v12;
      v14 = &word_1800DD4CA;
      v42 = 0;
      v44 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v13 + v11) );
      }
      v15 = (const wchar_t *)*((_QWORD *)v6 + 2);
      v16 = &word_1800DF514;
      v45 = v14;
      v46 = v11 + 1;
      v17 = &word_1800DF514;
      v35 = *v6;
      v48 = &v35;
      LODWORD(v11) = 0;
      v47 = 0;
      v49 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v11 = -1LL;
        do
          ++v11;
        while ( v15[v11] );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v51 = 2 * v11 + 2;
      v36 = v6[6];
      v53 = &v36;
      LODWORD(v11) = 0;
      v50 = v17;
      v19 = &word_1800DD4CA;
      v52 = 0;
      v54 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v18 + v11) );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v56 = v11 + 1;
      v32 = v6[18];
      v58 = &v32;
      LODWORD(v11) = 0;
      v55 = v19;
      v21 = &word_1800DD4CA;
      v57 = 0;
      v59 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v20 + v11) );
      }
      v22 = (const wchar_t *)*((_QWORD *)v6 + 11);
      v61 = v11 + 1;
      LODWORD(v11) = 0;
      v60 = v21;
      v23 = &word_1800DF514;
      v62 = 0;
      if ( v22 )
      {
        v23 = v22;
        v11 = -1LL;
        do
          ++v11;
        while ( v22[v11] );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v64 = 2 * v11 + 2;
      LODWORD(SRWLock) = v6[24];
      p_SRWLock = &SRWLock;
      LODWORD(v11) = 0;
      v63 = v23;
      v65 = 0;
      v67 = 4LL;
      if ( v24 )
      {
        v9 = v24;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v24 + v11) );
      }
      v25 = (const wchar_t *)*((_QWORD *)v6 + 14);
      v69 = v11 + 1;
      LODWORD(v11) = 0;
      v68 = v9;
      v70 = 0;
      if ( v25 )
      {
        v16 = v25;
        v11 = -1LL;
        do
          ++v11;
        while ( v25[v11] );
      }
      v71 = v16;
      v72 = 2 * v11 + 2;
      v73 = 0;
      v74 = &v88;
      v75 = 4LL;
      v76 = &v89;
      v77 = 4LL;
      TlgWrite(v8, &unk_1800F03FC, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v26 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v26 > 5u
      && (*((_QWORD *)v26 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v26 + 3) & 0x400000000000LL) == *((_QWORD *)v26 + 3) )
    {
      v27 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v79 = &SRWLock;
      LODWORD(SRWLock) = v27;
      v80 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v82 = 4LL;
      v32 = CurrentThreadId;
      v84 = 4LL;
      v81 = &v32;
      v83 = &v88;
      v85 = &v89;
      v86 = 4LL;
      TlgWrite(v26, &unk_1800F0515, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v78);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v29 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    v30 = *v29;
    *((_DWORD *)this + 8) = 0;
    while ( *v30 )
    {
      v31 = **v29;
      if ( (__int64 **)v31 == v29 )
      {
        **v29 = *((_QWORD *)this + 3);
        break;
      }
      v30 = (__int64 *)(v31 + 16);
      *v29 = v30;
    }
    *v29 = 0LL;
  }
}
