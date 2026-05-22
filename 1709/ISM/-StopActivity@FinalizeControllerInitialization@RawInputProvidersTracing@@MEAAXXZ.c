/*
 * XREFs of ?StopActivity@FinalizeControllerInitialization@RawInputProvidersTracing@@MEAAXXZ @ 0x18008D8E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008CA50 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800979D8 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::FinalizeControllerInitialization::StopActivity(
        RawInputProvidersTracing::FinalizeControllerInitialization *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // r10
  const unsigned __int16 *v7; // r8
  const unsigned __int16 *v8; // rcx
  __int64 v9; // rax
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v11; // rcx
  const unsigned __int16 *v12; // rdx
  const wchar_t *v13; // rcx
  const wchar_t *v14; // r9
  const wchar_t *v15; // rdx
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // rdx
  const wchar_t *v20; // rcx
  const wchar_t *v21; // rdx
  const unsigned __int16 *v22; // rcx
  const wchar_t *v23; // rcx
  const struct _TlgProvider_t *v24; // rbx
  int v25; // ecx
  DWORD CurrentThreadId; // eax
  __int64 **v27; // rbx
  __int64 *v28; // rax
  __int64 v29; // rax
  DWORD v30; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h]
  int *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  int *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  const wchar_t *v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C8h] [rbp-38h]
  int v50; // [rsp+CCh] [rbp-34h]
  int *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+ECh] [rbp-14h]
  DWORD *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v58; // [rsp+100h] [rbp+0h]
  int v59; // [rsp+108h] [rbp+8h]
  int v60; // [rsp+10Ch] [rbp+Ch]
  const wchar_t *v61; // [rsp+110h] [rbp+10h]
  int v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v66; // [rsp+130h] [rbp+30h]
  int v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+13Ch] [rbp+3Ch]
  const wchar_t *v69; // [rsp+140h] [rbp+40h]
  int v70; // [rsp+148h] [rbp+48h]
  int v71; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v72; // [rsp+150h] [rbp+50h] BYREF
  PSRWLOCK *v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  DWORD *v75; // [rsp+180h] [rbp+80h]
  __int64 v76; // [rsp+188h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x400000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v7 = &word_1800DD4CA;
      v8 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v32 = v4[1];
      v36 = &v32;
      LODWORD(v9) = 0;
      v37 = 4LL;
      v10 = &word_1800DD4CA;
      if ( v8 )
      {
        v10 = v8;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v8 + v9) );
      }
      v11 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v39 = v9 + 1;
      v41 = v4 + 14;
      LODWORD(v9) = 0;
      v38 = v10;
      v12 = &word_1800DD4CA;
      v40 = 0;
      v42 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v11 + v9) );
      }
      v13 = (const wchar_t *)*((_QWORD *)v4 + 2);
      v14 = &word_1800DF514;
      v43 = v12;
      v44 = v9 + 1;
      v15 = &word_1800DF514;
      v33 = *v4;
      v46 = &v33;
      LODWORD(v9) = 0;
      v45 = 0;
      v47 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v9 = -1LL;
        do
          ++v9;
        while ( v13[v9] );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v49 = 2 * v9 + 2;
      v34 = v4[6];
      v51 = &v34;
      LODWORD(v9) = 0;
      v48 = v15;
      v17 = &word_1800DD4CA;
      v50 = 0;
      v52 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v16 + v9) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v54 = v9 + 1;
      v30 = v4[18];
      v56 = &v30;
      LODWORD(v9) = 0;
      v53 = v17;
      v19 = &word_1800DD4CA;
      v55 = 0;
      v57 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v18 + v9) );
      }
      v20 = (const wchar_t *)*((_QWORD *)v4 + 11);
      v59 = v9 + 1;
      LODWORD(v9) = 0;
      v58 = v19;
      v21 = &word_1800DF514;
      v60 = 0;
      if ( v20 )
      {
        v21 = v20;
        v9 = -1LL;
        do
          ++v9;
        while ( v20[v9] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v62 = 2 * v9 + 2;
      LODWORD(SRWLock) = v4[24];
      p_SRWLock = &SRWLock;
      LODWORD(v9) = 0;
      v61 = v21;
      v63 = 0;
      v65 = 4LL;
      if ( v22 )
      {
        v7 = v22;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v22 + v9) );
      }
      v23 = (const wchar_t *)*((_QWORD *)v4 + 14);
      v67 = v9 + 1;
      LODWORD(v9) = 0;
      v66 = v7;
      v68 = 0;
      if ( v23 )
      {
        v14 = v23;
        v9 = -1LL;
        do
          ++v9;
        while ( v23[v9] );
      }
      v69 = v14;
      v70 = 2 * v9 + 2;
      v71 = 0;
      TlgWrite(v6, &unk_1800F0252, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v24 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v24 > 5u
      && (*((_QWORD *)v24 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v24 + 3) & 0x400000000000LL) == *((_QWORD *)v24 + 3) )
    {
      v25 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v73 = &SRWLock;
      LODWORD(SRWLock) = v25;
      v74 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v76 = 4LL;
      v30 = CurrentThreadId;
      v75 = &v30;
      TlgWrite(v24, &unk_1800F0201, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v72);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v27 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    v28 = *v27;
    *((_DWORD *)this + 8) = 0;
    while ( *v28 )
    {
      v29 = **v27;
      if ( (__int64 **)v29 == v27 )
      {
        **v27 = *((_QWORD *)this + 3);
        break;
      }
      v28 = (__int64 *)(v29 + 16);
      *v27 = v28;
    }
    *v27 = 0LL;
  }
}
