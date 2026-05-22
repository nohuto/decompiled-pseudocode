/*
 * XREFs of ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18006EE1C
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x18007124C (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     wil::details::lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___::_lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___ @ 0x180071914 (wil--details--lambda_call__lambda_aa67300acd5065abc23a85a7f508fe1a___--_lambda_call__lambda_aa67.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180072220 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800727A0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
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
  const WCHAR *v15; // rcx
  const WCHAR *v16; // r9
  const WCHAR *v17; // rdx
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // rdx
  const unsigned __int16 *v20; // rcx
  const unsigned __int16 *v21; // rdx
  const WCHAR *v22; // rcx
  const WCHAR *v23; // rdx
  const unsigned __int16 *v24; // rcx
  const WCHAR *v25; // rcx
  const struct _TlgProvider_t *v26; // rbx
  int v27; // ecx
  DWORD CurrentThreadId; // eax
  __int64 **v29; // rbx
  void *v30; // rdx
  unsigned int v31; // r8d
  __int64 *v32; // rcx
  __int64 v33; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  DWORD v35; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h]
  int v45; // [rsp+8Ch] [rbp-74h]
  int *v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v48; // [rsp+A0h] [rbp-60h]
  int v49; // [rsp+A8h] [rbp-58h]
  int v50; // [rsp+ACh] [rbp-54h]
  int *v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  const WCHAR *v53; // [rsp+C0h] [rbp-40h]
  int v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+CCh] [rbp-34h]
  int *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v58; // [rsp+E0h] [rbp-20h]
  int v59; // [rsp+E8h] [rbp-18h]
  int v60; // [rsp+ECh] [rbp-14h]
  DWORD *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v63; // [rsp+100h] [rbp+0h]
  int v64; // [rsp+108h] [rbp+8h]
  int v65; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v66; // [rsp+110h] [rbp+10h]
  int v67; // [rsp+118h] [rbp+18h]
  int v68; // [rsp+11Ch] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v71; // [rsp+130h] [rbp+30h]
  int v72; // [rsp+138h] [rbp+38h]
  int v73; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+148h] [rbp+48h]
  int v76; // [rsp+14Ch] [rbp+4Ch]
  int *v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]
  int *v79; // [rsp+160h] [rbp+60h]
  __int64 v80; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v81; // [rsp+170h] [rbp+70h] BYREF
  PSRWLOCK *v82; // [rsp+190h] [rbp+90h]
  __int64 v83; // [rsp+198h] [rbp+98h]
  DWORD *v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1A8h] [rbp+A8h]
  int *v86; // [rsp+1B0h] [rbp+B0h]
  __int64 v87; // [rsp+1B8h] [rbp+B8h]
  int *v88; // [rsp+1C0h] [rbp+C0h]
  __int64 v89; // [rsp+1C8h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]
  int v91; // [rsp+218h] [rbp+118h] BYREF
  int v92; // [rsp+220h] [rbp+120h] BYREF

  v92 = a3;
  v91 = a2;
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
    if ( *(_DWORD *)v8 > 4u
      && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x400000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v9 = &word_1800F8432;
      v10 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v37 = v6[1];
      v41 = &v37;
      LODWORD(v11) = 0;
      v42 = 4LL;
      v12 = &word_1800F8432;
      if ( v10 )
      {
        v12 = v10;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v10 + v11) );
      }
      v13 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v44 = v11 + 1;
      v46 = v6 + 14;
      LODWORD(v11) = 0;
      v43 = v12;
      v14 = &word_1800F8432;
      v45 = 0;
      v47 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v13 + v11) );
      }
      v15 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v16 = &sourceString;
      v48 = v14;
      v49 = v11 + 1;
      v17 = &sourceString;
      v38 = *v6;
      v51 = &v38;
      LODWORD(v11) = 0;
      v50 = 0;
      v52 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v11 = -1LL;
        do
          ++v11;
        while ( v15[v11] );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v54 = 2 * v11 + 2;
      v39 = v6[6];
      v56 = &v39;
      LODWORD(v11) = 0;
      v53 = v17;
      v19 = &word_1800F8432;
      v55 = 0;
      v57 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v18 + v11) );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v59 = v11 + 1;
      v35 = v6[18];
      v61 = &v35;
      LODWORD(v11) = 0;
      v58 = v19;
      v21 = &word_1800F8432;
      v60 = 0;
      v62 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v20 + v11) );
      }
      v22 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v64 = v11 + 1;
      LODWORD(v11) = 0;
      v63 = v21;
      v23 = &sourceString;
      v65 = 0;
      if ( v22 )
      {
        v23 = v22;
        v11 = -1LL;
        do
          ++v11;
        while ( v22[v11] );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v67 = 2 * v11 + 2;
      LODWORD(SRWLock) = v6[24];
      p_SRWLock = &SRWLock;
      LODWORD(v11) = 0;
      v66 = v23;
      v68 = 0;
      v70 = 4LL;
      if ( v24 )
      {
        v9 = v24;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v24 + v11) );
      }
      v25 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v72 = v11 + 1;
      LODWORD(v11) = 0;
      v71 = v9;
      v73 = 0;
      if ( v25 )
      {
        v16 = v25;
        v11 = -1LL;
        do
          ++v11;
        while ( v25[v11] );
      }
      v74 = v16;
      v75 = 2 * v11 + 2;
      v76 = 0;
      v77 = &v91;
      v78 = 4LL;
      v79 = &v92;
      v80 = 4LL;
      TlgWrite(v8, &unk_18010F141, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x12u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v26 = (const struct _TlgProvider_t *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( *(_DWORD *)v26 > 4u
      && (*((_QWORD *)v26 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v26 + 3) & 0x400000000000LL) == *((_QWORD *)v26 + 3) )
    {
      v27 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v82 = &SRWLock;
      LODWORD(SRWLock) = v27;
      v83 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v85 = 4LL;
      v35 = CurrentThreadId;
      v87 = 4LL;
      v84 = &v35;
      v86 = &v91;
      v88 = &v92;
      v89 = 4LL;
      TlgWrite(v26, &unk_18010F25A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v81);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v29 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v30, v31, (const char *)0x8007029CLL, cData);
    v32 = *v29;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v33 = *v32;
      if ( !*v32 )
        break;
      if ( (__int64 **)v33 == v29 )
      {
        *v32 = *((_QWORD *)this + 3);
        break;
      }
      v32 = (__int64 *)(v33 + 16);
      *v29 = (__int64 *)(v33 + 16);
    }
    *v29 = 0LL;
  }
}
