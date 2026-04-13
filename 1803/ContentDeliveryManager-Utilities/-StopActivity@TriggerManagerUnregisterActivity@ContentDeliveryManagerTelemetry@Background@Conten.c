/*
 * XREFs of ?StopActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x18005DB20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002982C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::StopActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity *this)
{
  int *v1; // rbx
  int v3; // eax
  int *v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  const struct _TlgProvider_t *v6; // r10
  const unsigned __int16 *v7; // r8
  const unsigned __int16 *v8; // rcx
  const unsigned __int16 *v9; // rdx
  __int64 v10; // rax
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
  DWORD CurrentThreadId; // eax
  __int64 **v28; // rbx
  __int64 *v29; // rcx
  __int64 v30; // rax
  DWORD v31; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+44h] [rbp-BCh] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+4Ch] [rbp-B4h] BYREF
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v41; // [rsp+90h] [rbp-70h]
  int v42; // [rsp+98h] [rbp-68h]
  int v43; // [rsp+9Ch] [rbp-64h]
  int *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  int *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  const WCHAR *v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  int *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v56; // [rsp+F0h] [rbp-10h]
  int v57; // [rsp+F8h] [rbp-8h]
  int v58; // [rsp+FCh] [rbp-4h]
  int *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v61; // [rsp+110h] [rbp+10h]
  int v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v64; // [rsp+120h] [rbp+20h]
  int v65; // [rsp+128h] [rbp+28h]
  int v66; // [rsp+12Ch] [rbp+2Ch]
  int *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v69; // [rsp+140h] [rbp+40h]
  int v70; // [rsp+148h] [rbp+48h]
  int v71; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v72; // [rsp+150h] [rbp+50h]
  int v73; // [rsp+158h] [rbp+58h]
  int v74; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v79; // [rsp+180h] [rbp+80h]
  int v80; // [rsp+188h] [rbp+88h]
  int v81; // [rsp+18Ch] [rbp+8Ch]
  EVENT_DATA_DESCRIPTOR v82; // [rsp+190h] [rbp+90h] BYREF
  PSRWLOCK *v83; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  DWORD *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v5 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v4 )
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      v33 = v4[1];
      v7 = &word_1800F144C;
      v8 = (const unsigned __int16 *)*((_QWORD *)v4 + 6);
      v39 = &v33;
      v9 = &word_1800F144C;
      v40 = 4LL;
      LODWORD(v10) = 0;
      if ( v8 )
      {
        v9 = v8;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v8 + v10) );
      }
      v11 = (const unsigned __int16 *)*((_QWORD *)v4 + 15);
      v42 = v10 + 1;
      v44 = v4 + 14;
      LODWORD(v10) = 0;
      v41 = v9;
      v12 = &word_1800F144C;
      v43 = 0;
      v45 = 4LL;
      if ( v11 )
      {
        v12 = v11;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v11 + v10) );
      }
      v13 = (const WCHAR *)*((_QWORD *)v4 + 2);
      v14 = &Src;
      v46 = v12;
      v47 = v10 + 1;
      v15 = &Src;
      v34 = *v4;
      v49 = &v34;
      LODWORD(v10) = 0;
      v48 = 0;
      v50 = 4LL;
      if ( v13 )
      {
        v15 = v13;
        v10 = -1LL;
        do
          ++v10;
        while ( v13[v10] );
      }
      v16 = (const unsigned __int16 *)*((_QWORD *)v4 + 8);
      v52 = 2 * v10 + 2;
      v35 = v4[6];
      v54 = &v35;
      LODWORD(v10) = 0;
      v51 = v15;
      v17 = &word_1800F144C;
      v53 = 0;
      v55 = 4LL;
      if ( v16 )
      {
        v17 = v16;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v16 + v10) );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v4 + 10);
      v57 = v10 + 1;
      v36 = v4[18];
      v59 = &v36;
      LODWORD(v10) = 0;
      v56 = v17;
      v19 = &word_1800F144C;
      v58 = 0;
      v60 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v18 + v10) );
      }
      v20 = (const WCHAR *)*((_QWORD *)v4 + 11);
      v62 = v10 + 1;
      LODWORD(v10) = 0;
      v61 = v19;
      v21 = &Src;
      v63 = 0;
      if ( v20 )
      {
        v21 = v20;
        v10 = -1LL;
        do
          ++v10;
        while ( v20[v10] );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v4 + 13);
      v65 = 2 * v10 + 2;
      v37 = v4[24];
      v67 = &v37;
      LODWORD(v10) = 0;
      v64 = v21;
      v23 = &word_1800F144C;
      v66 = 0;
      v68 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v22 + v10) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v4 + 14);
      v70 = v10 + 1;
      LODWORD(v10) = 0;
      v69 = v23;
      v71 = 0;
      if ( v24 )
      {
        v14 = v24;
        v10 = -1LL;
        do
          ++v10;
        while ( v24[v10] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v4 + 5);
      v73 = 2 * v10 + 2;
      v31 = v4[2];
      v75 = &v31;
      LODWORD(SRWLock) = v4[15];
      p_SRWLock = &SRWLock;
      LODWORD(v10) = 0;
      v72 = v14;
      v74 = 0;
      v76 = 4LL;
      v78 = 4LL;
      if ( v25 )
      {
        v7 = v25;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v25 + v10) );
      }
      v79 = v7;
      v80 = v10 + 1;
      v81 = 0;
      TlgWrite(v6, &unk_18015727A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v26 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v26 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v83 = &SRWLock;
      v84 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v86 = 4LL;
      v31 = CurrentThreadId;
      v85 = &v31;
      TlgWrite(v26, &unk_180157F96, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &v82);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v28 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    v29 = *v28;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v30 = *v29;
      if ( !*v29 )
        break;
      if ( (__int64 **)v30 == v28 )
      {
        *v29 = *((_QWORD *)this + 3);
        break;
      }
      v29 = (__int64 *)(v30 + 16);
      *v28 = (__int64 *)(v30 + 16);
    }
    *v28 = 0LL;
  }
}
