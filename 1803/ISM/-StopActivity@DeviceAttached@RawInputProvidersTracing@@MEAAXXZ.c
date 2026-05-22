/*
 * XREFs of ?StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ @ 0x18006E7A0
 * Callers:
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x18006EB84 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180072220 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800727A0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::DeviceAttached::StopActivity(RawInputProvidersTracing::DeviceAttached *this)
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
  const WCHAR *v13; // rcx
  const WCHAR *v14; // r9
  const WCHAR *v15; // rdx
  const unsigned __int16 *v16; // rcx
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // rdx
  const WCHAR *v20; // rcx
  const WCHAR *v21; // rdx
  const unsigned __int16 *v22; // rcx
  const WCHAR *v23; // rcx
  const struct _TlgProvider_t *v24; // rbx
  int v25; // ecx
  DWORD CurrentThreadId; // eax
  __int64 **v27; // rbx
  void *v28; // rdx
  unsigned int v29; // r8d
  __int64 *v30; // rcx
  __int64 v31; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  DWORD v33; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+8Ch] [rbp-74h]
  int *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+ACh] [rbp-54h]
  int *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  const WCHAR *v51; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+CCh] [rbp-34h]
  int *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E8h] [rbp-18h]
  int v58; // [rsp+ECh] [rbp-14h]
  DWORD *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v61; // [rsp+100h] [rbp+0h]
  int v62; // [rsp+108h] [rbp+8h]
  int v63; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+118h] [rbp+18h]
  int v66; // [rsp+11Ch] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v69; // [rsp+130h] [rbp+30h]
  int v70; // [rsp+138h] [rbp+38h]
  int v71; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v72; // [rsp+140h] [rbp+40h]
  int v73; // [rsp+148h] [rbp+48h]
  int v74; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v75; // [rsp+150h] [rbp+50h] BYREF
  PSRWLOCK *v76; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  DWORD *v78; // [rsp+180h] [rbp+80h]
  __int64 v79; // [rsp+188h] [rbp+88h]
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
    if ( *(_DWORD *)v6 > 4u
      && (*((_QWORD *)v6 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x400000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v7 = &word_1800F8432;
      v8 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v35 = v4[1];
      v39 = &v35;
      LODWORD(v9) = 0;
      v40 = 4LL;
      v10 = &word_1800F8432;
      if ( v8 )
      {
        v10 = v8;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v8 + v9) );
      }
      v11 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v42 = v9 + 1;
      v44 = v4 + 14;
      LODWORD(v9) = 0;
      v41 = v10;
      v12 = &word_1800F8432;
      v43 = 0;
      v45 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v11 + v9) );
      }
      v13 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v14 = &sourceString;
      v46 = v12;
      v47 = v9 + 1;
      v15 = &sourceString;
      v36 = *v4;
      v49 = &v36;
      LODWORD(v9) = 0;
      v48 = 0;
      v50 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v9 = -1LL;
        do
          ++v9;
        while ( v13[v9] );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v52 = 2 * v9 + 2;
      v37 = v4[6];
      v54 = &v37;
      LODWORD(v9) = 0;
      v51 = v15;
      v17 = &word_1800F8432;
      v53 = 0;
      v55 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v16 + v9) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v57 = v9 + 1;
      v33 = v4[18];
      v59 = &v33;
      LODWORD(v9) = 0;
      v56 = v17;
      v19 = &word_1800F8432;
      v58 = 0;
      v60 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v18 + v9) );
      }
      v20 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v62 = v9 + 1;
      LODWORD(v9) = 0;
      v61 = v19;
      v21 = &sourceString;
      v63 = 0;
      if ( v20 )
      {
        v21 = v20;
        v9 = -1LL;
        do
          ++v9;
        while ( v20[v9] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v65 = 2 * v9 + 2;
      LODWORD(SRWLock) = v4[24];
      p_SRWLock = &SRWLock;
      LODWORD(v9) = 0;
      v64 = v21;
      v66 = 0;
      v68 = 4LL;
      if ( v22 )
      {
        v7 = v22;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v22 + v9) );
      }
      v23 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v70 = v9 + 1;
      LODWORD(v9) = 0;
      v69 = v7;
      v71 = 0;
      if ( v23 )
      {
        v14 = v23;
        v9 = -1LL;
        do
          ++v9;
        while ( v23[v9] );
      }
      v72 = v14;
      v73 = 2 * v9 + 2;
      v74 = 0;
      TlgWrite(v6, &unk_18010F364, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v24 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v24 > 4u
      && (*((_QWORD *)v24 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v24 + 3) & 0x400000000000LL) == *((_QWORD *)v24 + 3) )
    {
      v25 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v76 = &SRWLock;
      LODWORD(SRWLock) = v25;
      v77 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v79 = 4LL;
      v33 = CurrentThreadId;
      v78 = &v33;
      TlgWrite(v24, &unk_18010F2EC, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v75);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v27 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v28, v29, (const char *)0x8007029CLL, cData);
    v30 = *v27;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v31 = *v30;
      if ( !*v30 )
        break;
      if ( (__int64 **)v31 == v27 )
      {
        *v30 = *((_QWORD *)this + 3);
        break;
      }
      v30 = (__int64 *)(v31 + 16);
      *v27 = (__int64 *)(v31 + 16);
    }
    *v27 = 0LL;
  }
}
