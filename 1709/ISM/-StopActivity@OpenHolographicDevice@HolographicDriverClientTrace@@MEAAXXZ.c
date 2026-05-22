/*
 * XREFs of ?StopActivity@OpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x1800AFF20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008CA50 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800979D8 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
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
  const unsigned __int16 *v23; // rdx
  const wchar_t *v24; // rcx
  const unsigned __int16 *v25; // rcx
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
  int v37; // [rsp+4Ch] [rbp-B4h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v42; // [rsp+90h] [rbp-70h]
  int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+9Ch] [rbp-64h]
  int *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  int v49; // [rsp+BCh] [rbp-44h]
  int *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  const wchar_t *v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  int *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v57; // [rsp+F0h] [rbp-10h]
  int v58; // [rsp+F8h] [rbp-8h]
  int v59; // [rsp+FCh] [rbp-4h]
  int *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v62; // [rsp+110h] [rbp+10h]
  int v63; // [rsp+118h] [rbp+18h]
  int v64; // [rsp+11Ch] [rbp+1Ch]
  const wchar_t *v65; // [rsp+120h] [rbp+20h]
  int v66; // [rsp+128h] [rbp+28h]
  int v67; // [rsp+12Ch] [rbp+2Ch]
  int *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v70; // [rsp+140h] [rbp+40h]
  int v71; // [rsp+148h] [rbp+48h]
  int v72; // [rsp+14Ch] [rbp+4Ch]
  const wchar_t *v73; // [rsp+150h] [rbp+50h]
  int v74; // [rsp+158h] [rbp+58h]
  int v75; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v80; // [rsp+180h] [rbp+80h]
  int v81; // [rsp+188h] [rbp+88h]
  int v82; // [rsp+18Ch] [rbp+8Ch]
  EVENT_DATA_DESCRIPTOR v83; // [rsp+190h] [rbp+90h] BYREF
  PSRWLOCK *v84; // [rsp+1B0h] [rbp+B0h]
  __int64 v85; // [rsp+1B8h] [rbp+B8h]
  DWORD *v86; // [rsp+1C0h] [rbp+C0h]
  __int64 v87; // [rsp+1C8h] [rbp+C8h]
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
      v7 = &word_1800DD4CA;
      v8 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v34 = v4[1];
      v40 = &v34;
      LODWORD(v9) = 0;
      v41 = 4LL;
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
      v43 = v9 + 1;
      v45 = v4 + 14;
      LODWORD(v9) = 0;
      v42 = v10;
      v12 = &word_1800DD4CA;
      v44 = 0;
      v46 = 4LL;
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
      v47 = v12;
      v48 = v9 + 1;
      v15 = &word_1800DF514;
      v35 = *v4;
      v50 = &v35;
      LODWORD(v9) = 0;
      v49 = 0;
      v51 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v9 = -1LL;
        do
          ++v9;
        while ( v13[v9] );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v53 = 2 * v9 + 2;
      v36 = v4[6];
      v55 = &v36;
      LODWORD(v9) = 0;
      v52 = v15;
      v17 = &word_1800DD4CA;
      v54 = 0;
      v56 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v16 + v9) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v58 = v9 + 1;
      v37 = v4[18];
      v60 = &v37;
      LODWORD(v9) = 0;
      v57 = v17;
      v19 = &word_1800DD4CA;
      v59 = 0;
      v61 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v18 + v9) );
      }
      v20 = (const wchar_t *)*((_QWORD *)v4 + 11);
      v63 = v9 + 1;
      LODWORD(v9) = 0;
      v62 = v19;
      v21 = &word_1800DF514;
      v64 = 0;
      if ( v20 )
      {
        v21 = v20;
        v9 = -1LL;
        do
          ++v9;
        while ( v20[v9] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v66 = 2 * v9 + 2;
      v38 = v4[24];
      v68 = &v38;
      LODWORD(v9) = 0;
      v65 = v21;
      v23 = &word_1800DD4CA;
      v67 = 0;
      v69 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v22 + v9) );
      }
      v24 = (const wchar_t *)*((_QWORD *)v4 + 14);
      v71 = v9 + 1;
      LODWORD(v9) = 0;
      v70 = v23;
      v72 = 0;
      if ( v24 )
      {
        v14 = v24;
        v9 = -1LL;
        do
          ++v9;
        while ( v24[v9] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v4 + 5);
      v74 = 2 * v9 + 2;
      v32 = v4[2];
      v76 = &v32;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v9) = 0;
      v73 = v14;
      v75 = 0;
      v77 = 4LL;
      v79 = 4LL;
      if ( v25 )
      {
        v7 = v25;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v25 + v9) );
      }
      v80 = v7;
      v81 = v9 + 1;
      v82 = 0;
      TlgWrite(v6, &unk_1800F2007, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
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
      v84 = &SRWLock;
      LODWORD(SRWLock) = v27;
      v85 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v87 = 4LL;
      v32 = CurrentThreadId;
      v86 = &v32;
      TlgWrite(v26, &unk_1800F23D0, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v83);
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
