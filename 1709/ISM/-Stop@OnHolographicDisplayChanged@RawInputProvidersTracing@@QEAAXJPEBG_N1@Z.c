/*
 * XREFs of ?Stop@OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAAXJPEBG_N1@Z @ 0x18008EC20
 * Callers:
 *     _lambda_c90380767cc5ac01c309f72366d316c3_::operator() @ 0x18009537C (_lambda_c90380767cc5ac01c309f72366d316c3_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008CA50 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18008CCC0 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800979D8 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::OnHolographicDisplayChanged::Stop(
        RawInputProvidersTracing::OnHolographicDisplayChanged *this,
        int a2,
        const unsigned __int16 *a3,
        bool a4,
        bool a5)
{
  int *v5; // rbx
  int v9; // eax
  int *v10; // rbx
  RTL_SRWLOCK *v11; // rcx
  const struct _TlgProvider_t *v12; // r11
  const unsigned __int16 *v13; // r10
  const unsigned __int16 *v14; // rdx
  __int64 v15; // rax
  const unsigned __int16 *v16; // r8
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // r8
  const wchar_t *v19; // rdx
  const wchar_t *v20; // r9
  const wchar_t *v21; // r8
  const unsigned __int16 *v22; // rdx
  const unsigned __int16 *v23; // r8
  const unsigned __int16 *v24; // rdx
  const unsigned __int16 *v25; // r8
  const wchar_t *v26; // rdx
  const wchar_t *v27; // r8
  const unsigned __int16 *v28; // rdx
  const unsigned __int16 *v29; // r8
  const wchar_t *v30; // rdx
  const wchar_t *v31; // r8
  const unsigned __int16 *v32; // rdx
  const struct _TlgProvider_t *v33; // rbx
  int v34; // ecx
  DWORD CurrentThreadId; // eax
  const wchar_t *v36; // r9
  __int64 v37; // rcx
  __int64 **v38; // rbx
  __int64 *v39; // rax
  __int64 v40; // rax
  bool v41; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v42[3]; // [rsp+39h] [rbp-CFh] BYREF
  DWORD v43; // [rsp+3Ch] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v45; // [rsp+48h] [rbp-C0h] BYREF
  int v46; // [rsp+4Ch] [rbp-BCh] BYREF
  int v47; // [rsp+50h] [rbp-B8h] BYREF
  int v48; // [rsp+54h] [rbp-B4h] BYREF
  int v49; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h]
  const unsigned __int16 *v53; // [rsp+98h] [rbp-70h]
  int v54; // [rsp+A0h] [rbp-68h]
  int v55; // [rsp+A4h] [rbp-64h]
  int *v56; // [rsp+A8h] [rbp-60h]
  __int64 v57; // [rsp+B0h] [rbp-58h]
  const unsigned __int16 *v58; // [rsp+B8h] [rbp-50h]
  int v59; // [rsp+C0h] [rbp-48h]
  int v60; // [rsp+C4h] [rbp-44h]
  int *v61; // [rsp+C8h] [rbp-40h]
  __int64 v62; // [rsp+D0h] [rbp-38h]
  const wchar_t *v63; // [rsp+D8h] [rbp-30h]
  int v64; // [rsp+E0h] [rbp-28h]
  int v65; // [rsp+E4h] [rbp-24h]
  int *v66; // [rsp+E8h] [rbp-20h]
  __int64 v67; // [rsp+F0h] [rbp-18h]
  const unsigned __int16 *v68; // [rsp+F8h] [rbp-10h]
  int v69; // [rsp+100h] [rbp-8h]
  int v70; // [rsp+104h] [rbp-4h]
  int *v71; // [rsp+108h] [rbp+0h]
  __int64 v72; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v73; // [rsp+118h] [rbp+10h]
  int v74; // [rsp+120h] [rbp+18h]
  int v75; // [rsp+124h] [rbp+1Ch]
  const wchar_t *v76; // [rsp+128h] [rbp+20h]
  int v77; // [rsp+130h] [rbp+28h]
  int v78; // [rsp+134h] [rbp+2Ch]
  int *v79; // [rsp+138h] [rbp+30h]
  __int64 v80; // [rsp+140h] [rbp+38h]
  const unsigned __int16 *v81; // [rsp+148h] [rbp+40h]
  int v82; // [rsp+150h] [rbp+48h]
  int v83; // [rsp+154h] [rbp+4Ch]
  const wchar_t *v84; // [rsp+158h] [rbp+50h]
  int v85; // [rsp+160h] [rbp+58h]
  int v86; // [rsp+164h] [rbp+5Ch]
  DWORD *v87; // [rsp+168h] [rbp+60h]
  __int64 v88; // [rsp+170h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+178h] [rbp+70h]
  __int64 v90; // [rsp+180h] [rbp+78h]
  const unsigned __int16 *v91; // [rsp+188h] [rbp+80h]
  int v92; // [rsp+190h] [rbp+88h]
  int v93; // [rsp+194h] [rbp+8Ch]
  const wchar_t *v94; // [rsp+198h] [rbp+90h]
  int v95; // [rsp+1A0h] [rbp+98h]
  int v96; // [rsp+1A4h] [rbp+9Ch]
  bool *v97; // [rsp+1A8h] [rbp+A0h]
  __int64 v98; // [rsp+1B0h] [rbp+A8h]
  _BYTE *v99; // [rsp+1B8h] [rbp+B0h]
  __int64 v100; // [rsp+1C0h] [rbp+B8h]
  int *v101; // [rsp+1C8h] [rbp+C0h]
  __int64 v102; // [rsp+1D0h] [rbp+C8h]
  EVENT_DATA_DESCRIPTOR v103; // [rsp+1D8h] [rbp+D0h] BYREF
  PSRWLOCK *v104; // [rsp+1F8h] [rbp+F0h]
  __int64 v105; // [rsp+200h] [rbp+F8h]
  DWORD *v106; // [rsp+208h] [rbp+100h]
  __int64 v107; // [rsp+210h] [rbp+108h]
  const wchar_t *v108; // [rsp+218h] [rbp+110h]
  int v109; // [rsp+220h] [rbp+118h]
  int v110; // [rsp+224h] [rbp+11Ch]
  _BYTE *v111; // [rsp+228h] [rbp+120h]
  __int64 v112; // [rsp+230h] [rbp+128h]
  bool *v113; // [rsp+238h] [rbp+130h]
  __int64 v114; // [rsp+240h] [rbp+138h]
  int *v115; // [rsp+248h] [rbp+140h]
  __int64 v116; // [rsp+250h] [rbp+148h]
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]
  int v118; // [rsp+2A0h] [rbp+198h] BYREF

  v118 = a2;
  v5 = (int *)*((_QWORD *)this + 6);
  v9 = v5[19];
  if ( v9 < 0 && v9 == v5[21] )
    v10 = v5 + 20;
  else
    v10 = 0LL;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v11 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v10 )
  {
    if ( v11 )
      ReleaseSRWLockExclusive(v11);
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v12 > 4u )
    {
      v13 = &word_1800DD4CA;
      v14 = (const unsigned __int16 *)*((_QWORD *)v10 + 6);
      v45 = v10[1];
      v51 = &v45;
      LODWORD(v15) = 0;
      v52 = 4LL;
      v16 = &word_1800DD4CA;
      if ( v14 )
      {
        v16 = v14;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v14 + v15) );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v10 + 15);
      v54 = v15 + 1;
      v56 = v10 + 14;
      LODWORD(v15) = 0;
      v53 = v16;
      v18 = &word_1800DD4CA;
      v55 = 0;
      v57 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v17 + v15) );
      }
      v19 = (const wchar_t *)*((_QWORD *)v10 + 2);
      v20 = &word_1800DF514;
      v58 = v18;
      v59 = v15 + 1;
      v21 = &word_1800DF514;
      v46 = *v10;
      v61 = &v46;
      LODWORD(v15) = 0;
      v60 = 0;
      v62 = 4LL;
      if ( v19 )
      {
        v21 = v19;
        v15 = -1LL;
        do
          ++v15;
        while ( v19[v15] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v10 + 8);
      v64 = 2 * v15 + 2;
      v47 = v10[6];
      v66 = &v47;
      LODWORD(v15) = 0;
      v63 = v21;
      v23 = &word_1800DD4CA;
      v65 = 0;
      v67 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v22 + v15) );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)v10 + 10);
      v69 = v15 + 1;
      v48 = v10[18];
      v71 = &v48;
      LODWORD(v15) = 0;
      v68 = v23;
      v25 = &word_1800DD4CA;
      v70 = 0;
      v72 = 4LL;
      if ( v24 )
      {
        v25 = v24;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v24 + v15) );
      }
      v26 = (const wchar_t *)*((_QWORD *)v10 + 11);
      v74 = v15 + 1;
      LODWORD(v15) = 0;
      v73 = v25;
      v27 = &word_1800DF514;
      v75 = 0;
      if ( v26 )
      {
        v27 = v26;
        v15 = -1LL;
        do
          ++v15;
        while ( v26[v15] );
      }
      v28 = (const unsigned __int16 *)*((_QWORD *)v10 + 13);
      v77 = 2 * v15 + 2;
      v49 = v10[24];
      v79 = &v49;
      LODWORD(v15) = 0;
      v76 = v27;
      v29 = &word_1800DD4CA;
      v78 = 0;
      v80 = 4LL;
      if ( v28 )
      {
        v29 = v28;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v28 + v15) );
      }
      v30 = (const wchar_t *)*((_QWORD *)v10 + 14);
      v82 = v15 + 1;
      LODWORD(v15) = 0;
      v81 = v29;
      v31 = &word_1800DF514;
      v83 = 0;
      if ( v30 )
      {
        v31 = v30;
        v15 = -1LL;
        do
          ++v15;
        while ( v30[v15] );
      }
      v32 = (const unsigned __int16 *)*((_QWORD *)v10 + 5);
      v85 = 2 * v15 + 2;
      v43 = v10[2];
      v87 = &v43;
      LODWORD(SRWLock) = v10[15];
      p_SRWLock = &SRWLock;
      LODWORD(v15) = 0;
      v84 = v31;
      v86 = 0;
      v88 = 4LL;
      v90 = 4LL;
      if ( v32 )
      {
        v13 = v32;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v32 + v15) );
      }
      v91 = v13;
      v92 = v15 + 1;
      LODWORD(v15) = 0;
      v93 = 0;
      if ( a3 )
      {
        v20 = a3;
        v15 = -1LL;
        do
          ++v15;
        while ( a3[v15] );
      }
      v94 = v20;
      v95 = 2 * v15 + 2;
      v96 = 0;
      v97 = &v41;
      v42[0] = a5;
      v99 = v42;
      v101 = &v118;
      v41 = a4;
      v98 = 1LL;
      v100 = 1LL;
      v102 = 4LL;
      TlgWrite(v12, &unk_1800EFCCE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x17u, &pData);
    }
  }
  else
  {
    if ( v11 )
      ReleaseSRWLockExclusive(v11);
    v33 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v33 > 4u )
    {
      v34 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v104 = &SRWLock;
      LODWORD(SRWLock) = v34;
      v105 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v107 = 4LL;
      v36 = &word_1800DF514;
      v43 = CurrentThreadId;
      v106 = &v43;
      LODWORD(v37) = 0;
      if ( a3 )
      {
        v36 = a3;
        v37 = -1LL;
        do
          ++v37;
        while ( a3[v37] );
      }
      v108 = v36;
      v109 = 2 * v37 + 2;
      v110 = 0;
      v111 = v42;
      v41 = a5;
      v113 = &v41;
      v115 = &v118;
      v42[0] = a4;
      v112 = 1LL;
      v114 = 1LL;
      v116 = 4LL;
      TlgWrite(v33, &unk_1800EFC20, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &v103);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v38 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    v39 = *v38;
    *((_DWORD *)this + 8) = 0;
    while ( *v39 )
    {
      v40 = **v38;
      if ( (__int64 **)v40 == v38 )
      {
        **v38 = *((_QWORD *)this + 3);
        break;
      }
      v39 = (__int64 *)(v40 + 16);
      *v38 = v39;
    }
    *v38 = 0LL;
  }
}
