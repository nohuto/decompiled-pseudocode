/*
 * XREFs of ?StopActivity@OpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x1800BB4D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180072220 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800727A0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::OpenHolographicDevice::StopActivity(
        HolographicDriverClientTrace::OpenHolographicDevice *this)
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
  const unsigned __int16 *v23; // rdx
  const WCHAR *v24; // rcx
  const unsigned __int16 *v25; // rcx
  const struct _TlgProvider_t *v26; // rbx
  int v27; // ecx
  DWORD CurrentThreadId; // eax
  __int64 **v29; // rbx
  void *v30; // rdx
  __int64 v31; // r8
  __int64 *v32; // rcx
  __int64 v33; // rax
  DWORD v34; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+44h] [rbp-BCh] BYREF
  int v38; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+4Ch] [rbp-B4h] BYREF
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+9Ch] [rbp-64h]
  int *v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  int *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  const WCHAR *v54; // [rsp+D0h] [rbp-30h]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  int *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v59; // [rsp+F0h] [rbp-10h]
  int v60; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+FCh] [rbp-4h]
  int *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+118h] [rbp+18h]
  int v66; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v67; // [rsp+120h] [rbp+20h]
  int v68; // [rsp+128h] [rbp+28h]
  int v69; // [rsp+12Ch] [rbp+2Ch]
  int *v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v72; // [rsp+140h] [rbp+40h]
  int v73; // [rsp+148h] [rbp+48h]
  int v74; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v75; // [rsp+150h] [rbp+50h]
  int v76; // [rsp+158h] [rbp+58h]
  int v77; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v81; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v82; // [rsp+180h] [rbp+80h]
  int v83; // [rsp+188h] [rbp+88h]
  int v84; // [rsp+18Ch] [rbp+8Ch]
  EVENT_DATA_DESCRIPTOR v85; // [rsp+190h] [rbp+90h] BYREF
  PSRWLOCK *v86; // [rsp+1B0h] [rbp+B0h]
  __int64 v87; // [rsp+1B8h] [rbp+B8h]
  DWORD *v88; // [rsp+1C0h] [rbp+C0h]
  __int64 v89; // [rsp+1C8h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      v7 = &word_1800F8432;
      v8 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v36 = v4[1];
      v42 = &v36;
      LODWORD(v9) = 0;
      v43 = 4LL;
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
      v45 = v9 + 1;
      v47 = v4 + 14;
      LODWORD(v9) = 0;
      v44 = v10;
      v12 = &word_1800F8432;
      v46 = 0;
      v48 = 4LL;
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
      v49 = v12;
      v50 = v9 + 1;
      v15 = &sourceString;
      v37 = *v4;
      v52 = &v37;
      LODWORD(v9) = 0;
      v51 = 0;
      v53 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v9 = -1LL;
        do
          ++v9;
        while ( v13[v9] );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v55 = 2 * v9 + 2;
      v38 = v4[6];
      v57 = &v38;
      LODWORD(v9) = 0;
      v54 = v15;
      v17 = &word_1800F8432;
      v56 = 0;
      v58 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v16 + v9) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v60 = v9 + 1;
      v39 = v4[18];
      v62 = &v39;
      LODWORD(v9) = 0;
      v59 = v17;
      v19 = &word_1800F8432;
      v61 = 0;
      v63 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v18 + v9) );
      }
      v20 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v65 = v9 + 1;
      LODWORD(v9) = 0;
      v64 = v19;
      v21 = &sourceString;
      v66 = 0;
      if ( v20 )
      {
        v21 = v20;
        v9 = -1LL;
        do
          ++v9;
        while ( v20[v9] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v68 = 2 * v9 + 2;
      v40 = v4[24];
      v70 = &v40;
      LODWORD(v9) = 0;
      v67 = v21;
      v23 = &word_1800F8432;
      v69 = 0;
      v71 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v22 + v9) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v73 = v9 + 1;
      LODWORD(v9) = 0;
      v72 = v23;
      v74 = 0;
      if ( v24 )
      {
        v14 = v24;
        v9 = -1LL;
        do
          ++v9;
        while ( v24[v9] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v4 + 5);
      v76 = 2 * v9 + 2;
      v34 = v4[2];
      v78 = &v34;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v9) = 0;
      v75 = v14;
      v77 = 0;
      v79 = 4LL;
      v81 = 4LL;
      if ( v25 )
      {
        v7 = v25;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v25 + v9) );
      }
      v82 = v7;
      v83 = v9 + 1;
      v84 = 0;
      TlgWrite(v6, &unk_180110FB1, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v26 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( *(_DWORD *)v26 > 5u )
    {
      v27 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v86 = &SRWLock;
      LODWORD(SRWLock) = v27;
      v87 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v89 = 4LL;
      v34 = CurrentThreadId;
      v88 = &v34;
      TlgWrite(v26, &unk_1801112B2, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v85);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v29 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v30, v31, (const char *)0x8007029CLL);
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
