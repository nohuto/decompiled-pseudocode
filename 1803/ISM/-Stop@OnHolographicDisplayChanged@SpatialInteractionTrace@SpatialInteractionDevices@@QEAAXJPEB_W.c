/*
 * XREFs of ?Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W_N1@Z @ 0x1800A4020
 * Callers:
 *     _lambda_df3ea2b2c6b3ab40825ce20637938084_::operator() @ 0x1800A7930 (_lambda_df3ea2b2c6b3ab40825ce20637938084_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180072220 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800727A0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::Stop(
        SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged *this,
        int a2,
        const wchar_t *a3,
        bool a4,
        bool a5)
{
  int *v5; // rbx
  int v9; // eax
  int *v10; // rbx
  RTL_SRWLOCK *v11; // rcx
  const struct _TlgProvider_t *v12; // r11
  const unsigned __int16 *v13; // r9
  const unsigned __int16 *v14; // rdx
  __int64 v15; // rax
  const unsigned __int16 *v16; // r8
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // r8
  const WCHAR *v19; // rdx
  const WCHAR *v20; // r8
  const unsigned __int16 *v21; // rdx
  const unsigned __int16 *v22; // r8
  const unsigned __int16 *v23; // rdx
  const unsigned __int16 *v24; // r8
  const WCHAR *v25; // rdx
  const WCHAR *v26; // r8
  const unsigned __int16 *v27; // rdx
  const unsigned __int16 *v28; // r8
  const WCHAR *v29; // rdx
  const WCHAR *v30; // r8
  const unsigned __int16 *v31; // rdx
  bool v32; // zf
  const struct _TlgProvider_t *v33; // rbx
  int v34; // ecx
  DWORD CurrentThreadId; // eax
  __int64 v36; // rcx
  __int64 **v37; // rbx
  void *v38; // rdx
  __int64 v39; // r8
  __int64 *v40; // rcx
  __int64 v41; // rax
  bool v42; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v43[3]; // [rsp+39h] [rbp-CFh] BYREF
  DWORD v44; // [rsp+3Ch] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v46; // [rsp+48h] [rbp-C0h] BYREF
  int v47; // [rsp+4Ch] [rbp-BCh] BYREF
  int v48; // [rsp+50h] [rbp-B8h] BYREF
  int v49; // [rsp+54h] [rbp-B4h] BYREF
  int v50; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v52; // [rsp+88h] [rbp-80h]
  __int64 v53; // [rsp+90h] [rbp-78h]
  const unsigned __int16 *v54; // [rsp+98h] [rbp-70h]
  int v55; // [rsp+A0h] [rbp-68h]
  int v56; // [rsp+A4h] [rbp-64h]
  int *v57; // [rsp+A8h] [rbp-60h]
  __int64 v58; // [rsp+B0h] [rbp-58h]
  const unsigned __int16 *v59; // [rsp+B8h] [rbp-50h]
  int v60; // [rsp+C0h] [rbp-48h]
  int v61; // [rsp+C4h] [rbp-44h]
  int *v62; // [rsp+C8h] [rbp-40h]
  __int64 v63; // [rsp+D0h] [rbp-38h]
  const WCHAR *v64; // [rsp+D8h] [rbp-30h]
  int v65; // [rsp+E0h] [rbp-28h]
  int v66; // [rsp+E4h] [rbp-24h]
  int *v67; // [rsp+E8h] [rbp-20h]
  __int64 v68; // [rsp+F0h] [rbp-18h]
  const unsigned __int16 *v69; // [rsp+F8h] [rbp-10h]
  int v70; // [rsp+100h] [rbp-8h]
  int v71; // [rsp+104h] [rbp-4h]
  int *v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v74; // [rsp+118h] [rbp+10h]
  int v75; // [rsp+120h] [rbp+18h]
  int v76; // [rsp+124h] [rbp+1Ch]
  const WCHAR *v77; // [rsp+128h] [rbp+20h]
  int v78; // [rsp+130h] [rbp+28h]
  int v79; // [rsp+134h] [rbp+2Ch]
  int *v80; // [rsp+138h] [rbp+30h]
  __int64 v81; // [rsp+140h] [rbp+38h]
  const unsigned __int16 *v82; // [rsp+148h] [rbp+40h]
  int v83; // [rsp+150h] [rbp+48h]
  int v84; // [rsp+154h] [rbp+4Ch]
  const WCHAR *v85; // [rsp+158h] [rbp+50h]
  int v86; // [rsp+160h] [rbp+58h]
  int v87; // [rsp+164h] [rbp+5Ch]
  DWORD *v88; // [rsp+168h] [rbp+60h]
  __int64 v89; // [rsp+170h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+178h] [rbp+70h]
  __int64 v91; // [rsp+180h] [rbp+78h]
  const unsigned __int16 *v92; // [rsp+188h] [rbp+80h]
  int v93; // [rsp+190h] [rbp+88h]
  int v94; // [rsp+194h] [rbp+8Ch]
  const wchar_t *v95; // [rsp+198h] [rbp+90h]
  int v96; // [rsp+1A0h] [rbp+98h]
  int v97; // [rsp+1A4h] [rbp+9Ch]
  bool *v98; // [rsp+1A8h] [rbp+A0h]
  __int64 v99; // [rsp+1B0h] [rbp+A8h]
  _BYTE *v100; // [rsp+1B8h] [rbp+B0h]
  __int64 v101; // [rsp+1C0h] [rbp+B8h]
  int *v102; // [rsp+1C8h] [rbp+C0h]
  __int64 v103; // [rsp+1D0h] [rbp+C8h]
  EVENT_DATA_DESCRIPTOR v104; // [rsp+1D8h] [rbp+D0h] BYREF
  PSRWLOCK *v105; // [rsp+1F8h] [rbp+F0h]
  __int64 v106; // [rsp+200h] [rbp+F8h]
  DWORD *v107; // [rsp+208h] [rbp+100h]
  __int64 v108; // [rsp+210h] [rbp+108h]
  const wchar_t *v109; // [rsp+218h] [rbp+110h]
  int v110; // [rsp+220h] [rbp+118h]
  int v111; // [rsp+224h] [rbp+11Ch]
  _BYTE *v112; // [rsp+228h] [rbp+120h]
  __int64 v113; // [rsp+230h] [rbp+128h]
  bool *v114; // [rsp+238h] [rbp+130h]
  __int64 v115; // [rsp+240h] [rbp+138h]
  int *v116; // [rsp+248h] [rbp+140h]
  __int64 v117; // [rsp+250h] [rbp+148h]
  wil::details::in1diag3 *retaddr; // [rsp+290h] [rbp+188h]
  int v119; // [rsp+2A0h] [rbp+198h] BYREF

  v119 = a2;
  v5 = (int *)*((_QWORD *)this + 6);
  v9 = v5[19];
  if ( v9 < 0 && v9 == v5[21] )
    v10 = v5 + 20;
  else
    v10 = 0LL;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v11 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v10 )
  {
    if ( v11 )
      ReleaseSRWLockExclusive(v11);
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( *(_DWORD *)v12 > 4u )
    {
      v13 = &word_1800F8432;
      v14 = (const unsigned __int16 *)*((_QWORD *)v10 + 6);
      v46 = v10[1];
      v52 = &v46;
      LODWORD(v15) = 0;
      v53 = 4LL;
      v16 = &word_1800F8432;
      if ( v14 )
      {
        v16 = v14;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v14 + v15) );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v10 + 15);
      v55 = v15 + 1;
      v57 = v10 + 14;
      LODWORD(v15) = 0;
      v54 = v16;
      v18 = &word_1800F8432;
      v56 = 0;
      v58 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v17 + v15) );
      }
      v19 = (const WCHAR *)*((_QWORD *)v10 + 2);
      v59 = v18;
      v60 = v15 + 1;
      v20 = &sourceString;
      v47 = *v10;
      v62 = &v47;
      LODWORD(v15) = 0;
      v61 = 0;
      v63 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v15 = -1LL;
        do
          ++v15;
        while ( v19[v15] );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v10 + 8);
      v65 = 2 * v15 + 2;
      v48 = v10[6];
      v67 = &v48;
      LODWORD(v15) = 0;
      v64 = v20;
      v22 = &word_1800F8432;
      v66 = 0;
      v68 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v21 + v15) );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v10 + 10);
      v70 = v15 + 1;
      v49 = v10[18];
      v72 = &v49;
      LODWORD(v15) = 0;
      v69 = v22;
      v24 = &word_1800F8432;
      v71 = 0;
      v73 = 4LL;
      if ( v23 )
      {
        v24 = v23;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v23 + v15) );
      }
      v25 = (const WCHAR *)*((_QWORD *)v10 + 11);
      v75 = v15 + 1;
      LODWORD(v15) = 0;
      v74 = v24;
      v26 = &sourceString;
      v76 = 0;
      if ( v25 )
      {
        v26 = v25;
        v15 = -1LL;
        do
          ++v15;
        while ( v25[v15] );
      }
      v27 = (const unsigned __int16 *)*((_QWORD *)v10 + 13);
      v78 = 2 * v15 + 2;
      v50 = v10[24];
      v80 = &v50;
      LODWORD(v15) = 0;
      v77 = v26;
      v28 = &word_1800F8432;
      v79 = 0;
      v81 = 4LL;
      if ( v27 )
      {
        v28 = v27;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v27 + v15) );
      }
      v29 = (const WCHAR *)*((_QWORD *)v10 + 14);
      v83 = v15 + 1;
      LODWORD(v15) = 0;
      v82 = v28;
      v30 = &sourceString;
      v84 = 0;
      if ( v29 )
      {
        v30 = v29;
        v15 = -1LL;
        do
          ++v15;
        while ( v29[v15] );
      }
      v31 = (const unsigned __int16 *)*((_QWORD *)v10 + 5);
      v86 = 2 * v15 + 2;
      v44 = v10[2];
      v88 = &v44;
      LODWORD(SRWLock) = v10[15];
      p_SRWLock = &SRWLock;
      LODWORD(v15) = 0;
      v85 = v30;
      v87 = 0;
      v89 = 4LL;
      v91 = 4LL;
      if ( v31 )
      {
        v13 = v31;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)v31 + v15) );
      }
      v92 = v13;
      v93 = v15 + 1;
      LODWORD(v15) = 0;
      v94 = 0;
      v32 = a3 == 0LL;
      if ( a3 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( a3[v15] );
        v32 = a3 == 0LL;
      }
      v97 = 0;
      v96 = 2 * v15 + 2;
      v42 = a4;
      v98 = &v42;
      if ( v32 )
        a3 = &sourceString;
      v43[0] = a5;
      v100 = v43;
      v102 = &v119;
      v95 = a3;
      v99 = 1LL;
      v101 = 1LL;
      v103 = 4LL;
      TlgWrite(v12, &unk_18010FED3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x17u, &pData);
    }
  }
  else
  {
    if ( v11 )
      ReleaseSRWLockExclusive(v11);
    v33 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( *(_DWORD *)v33 > 4u )
    {
      v34 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v105 = &SRWLock;
      LODWORD(SRWLock) = v34;
      v106 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v108 = 4LL;
      LODWORD(v36) = 0;
      v44 = CurrentThreadId;
      v107 = &v44;
      if ( a3 )
      {
        v36 = -1LL;
        do
          ++v36;
        while ( a3[v36] );
      }
      v111 = 0;
      v110 = 2 * v36 + 2;
      v43[0] = a4;
      v112 = v43;
      v42 = a5;
      v113 = 1LL;
      v114 = &v42;
      if ( !a3 )
        a3 = &sourceString;
      v109 = a3;
      v116 = &v119;
      v115 = 1LL;
      v117 = 4LL;
      TlgWrite(v33, &unk_180110439, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &v104);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v37 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v38, v39, (const char *)0x8007029CLL);
    v40 = *v37;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v41 = *v40;
      if ( !*v40 )
        break;
      if ( (__int64 **)v41 == v37 )
      {
        *v40 = *((_QWORD *)this + 3);
        break;
      }
      v40 = (__int64 *)(v41 + 16);
      *v37 = (__int64 *)(v41 + 16);
    }
    *v37 = 0LL;
  }
}
