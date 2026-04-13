/*
 * XREFs of ?Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18005E0EC
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180060AF0 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002982C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity *this,
        const char *a2)
{
  int *v2; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // r11
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // r8
  __int64 v11; // rax
  const unsigned __int16 *v12; // rdx
  const unsigned __int16 *v13; // r8
  const WCHAR *v14; // rdx
  const WCHAR *v15; // r9
  const WCHAR *v16; // r8
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // r8
  const unsigned __int16 *v19; // rdx
  const unsigned __int16 *v20; // r8
  const WCHAR *v21; // rdx
  const WCHAR *v22; // r8
  const unsigned __int16 *v23; // rdx
  const unsigned __int16 *v24; // r8
  const WCHAR *v25; // rdx
  const unsigned __int16 *v26; // rdx
  const unsigned __int16 *v27; // r8
  bool v28; // zf
  const struct _TlgProvider_t *v29; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v31; // rcx
  __int64 **v32; // rbx
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v37; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+4Ch] [rbp-BCh] BYREF
  int v39; // [rsp+50h] [rbp-B8h] BYREF
  int v40; // [rsp+54h] [rbp-B4h] BYREF
  int v41; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v43; // [rsp+88h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-78h]
  const unsigned __int16 *v45; // [rsp+98h] [rbp-70h]
  int v46; // [rsp+A0h] [rbp-68h]
  int v47; // [rsp+A4h] [rbp-64h]
  int *v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  const unsigned __int16 *v50; // [rsp+B8h] [rbp-50h]
  int v51; // [rsp+C0h] [rbp-48h]
  int v52; // [rsp+C4h] [rbp-44h]
  int *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  const WCHAR *v55; // [rsp+D8h] [rbp-30h]
  int v56; // [rsp+E0h] [rbp-28h]
  int v57; // [rsp+E4h] [rbp-24h]
  int *v58; // [rsp+E8h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-18h]
  const unsigned __int16 *v60; // [rsp+F8h] [rbp-10h]
  int v61; // [rsp+100h] [rbp-8h]
  int v62; // [rsp+104h] [rbp-4h]
  int *v63; // [rsp+108h] [rbp+0h]
  __int64 v64; // [rsp+110h] [rbp+8h]
  const unsigned __int16 *v65; // [rsp+118h] [rbp+10h]
  int v66; // [rsp+120h] [rbp+18h]
  int v67; // [rsp+124h] [rbp+1Ch]
  const WCHAR *v68; // [rsp+128h] [rbp+20h]
  int v69; // [rsp+130h] [rbp+28h]
  int v70; // [rsp+134h] [rbp+2Ch]
  int *v71; // [rsp+138h] [rbp+30h]
  __int64 v72; // [rsp+140h] [rbp+38h]
  const unsigned __int16 *v73; // [rsp+148h] [rbp+40h]
  int v74; // [rsp+150h] [rbp+48h]
  int v75; // [rsp+154h] [rbp+4Ch]
  const WCHAR *v76; // [rsp+158h] [rbp+50h]
  int v77; // [rsp+160h] [rbp+58h]
  int v78; // [rsp+164h] [rbp+5Ch]
  __int64 *v79; // [rsp+168h] [rbp+60h]
  __int64 v80; // [rsp+170h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+178h] [rbp+70h]
  __int64 v82; // [rsp+180h] [rbp+78h]
  const unsigned __int16 *v83; // [rsp+188h] [rbp+80h]
  int v84; // [rsp+190h] [rbp+88h]
  int v85; // [rsp+194h] [rbp+8Ch]
  const char *v86; // [rsp+198h] [rbp+90h]
  int v87; // [rsp+1A0h] [rbp+98h]
  int v88; // [rsp+1A4h] [rbp+9Ch]
  EVENT_DATA_DESCRIPTOR v89; // [rsp+1A8h] [rbp+A0h] BYREF
  PSRWLOCK *v90; // [rsp+1C8h] [rbp+C0h]
  __int64 v91; // [rsp+1D0h] [rbp+C8h]
  __int64 *v92; // [rsp+1D8h] [rbp+D0h]
  __int64 v93; // [rsp+1E0h] [rbp+D8h]
  const char *v94; // [rsp+1E8h] [rbp+E0h]
  int v95; // [rsp+1F0h] [rbp+E8h]
  int v96; // [rsp+1F4h] [rbp+ECh]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 < 0 && v5 == v2[21] )
    v6 = v2 + 20;
  else
    v6 = 0LL;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v7 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v6 )
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v8 > 5u )
    {
      v9 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v37 = v6[1];
      v10 = &word_1800F144C;
      v43 = &v37;
      v44 = 4LL;
      LODWORD(v11) = 0;
      if ( v9 )
      {
        v10 = v9;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v9 + v11) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v46 = v11 + 1;
      v48 = v6 + 14;
      LODWORD(v11) = 0;
      v45 = v10;
      v13 = &word_1800F144C;
      v47 = 0;
      v49 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v12 + v11) );
      }
      v14 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v15 = &Src;
      v50 = v13;
      v51 = v11 + 1;
      v16 = &Src;
      v38 = *v6;
      v53 = &v38;
      LODWORD(v11) = 0;
      v52 = 0;
      v54 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v11 = -1LL;
        do
          ++v11;
        while ( v14[v11] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v56 = 2 * v11 + 2;
      v39 = v6[6];
      v58 = &v39;
      LODWORD(v11) = 0;
      v55 = v16;
      v18 = &word_1800F144C;
      v57 = 0;
      v59 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v17 + v11) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v61 = v11 + 1;
      v40 = v6[18];
      v63 = &v40;
      LODWORD(v11) = 0;
      v60 = v18;
      v20 = &word_1800F144C;
      v62 = 0;
      v64 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v19 + v11) );
      }
      v21 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v66 = v11 + 1;
      LODWORD(v11) = 0;
      v65 = v20;
      v22 = &Src;
      v67 = 0;
      if ( v21 )
      {
        v22 = v21;
        v11 = -1LL;
        do
          ++v11;
        while ( v21[v11] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v69 = 2 * v11 + 2;
      v41 = v6[24];
      v71 = &v41;
      LODWORD(v11) = 0;
      v68 = v22;
      v24 = &word_1800F144C;
      v70 = 0;
      v72 = 4LL;
      if ( v23 )
      {
        v24 = v23;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v23 + v11) );
      }
      v25 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v74 = v11 + 1;
      LODWORD(v11) = 0;
      v73 = v24;
      v75 = 0;
      if ( v25 )
      {
        v15 = v25;
        v11 = -1LL;
        do
          ++v11;
        while ( v25[v11] );
      }
      v26 = (const unsigned __int16 *)*((_QWORD *)v6 + 5);
      v77 = 2 * v11 + 2;
      v27 = &word_1800F144C;
      LODWORD(v35) = v6[2];
      v79 = &v35;
      LODWORD(SRWLock) = v6[15];
      p_SRWLock = &SRWLock;
      LODWORD(v11) = 0;
      v76 = v15;
      v78 = 0;
      v80 = 4LL;
      v82 = 4LL;
      if ( v26 )
      {
        v27 = v26;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v26 + v11) );
      }
      v83 = v27;
      v84 = v11 + 1;
      LODWORD(v11) = 0;
      v85 = 0;
      v28 = a2 == 0LL;
      if ( a2 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( a2[v11] );
        v28 = a2 == 0LL;
      }
      if ( v28 )
        a2 = (const char *)&word_1800F144C;
      v88 = 0;
      v86 = a2;
      v87 = v11 + 1;
      TlgWrite(v8, &unk_180157E0A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v29 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v29 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v90 = &SRWLock;
      v91 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v93 = 4LL;
      LODWORD(v31) = 0;
      LODWORD(v35) = CurrentThreadId;
      v92 = &v35;
      if ( a2 )
      {
        v31 = -1LL;
        do
          ++v31;
        while ( a2[v31] );
      }
      v96 = 0;
      v95 = v31 + 1;
      if ( !a2 )
        a2 = (const char *)&word_1800F144C;
      v94 = a2;
      TlgWrite(v29, &unk_180157DBB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v89);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v32 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    v33 = *v32;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v34 = *v33;
      if ( !*v33 )
        break;
      if ( (__int64 **)v34 == v32 )
      {
        *v33 = *((_QWORD *)this + 3);
        break;
      }
      v33 = (__int64 *)(v34 + 16);
      *v32 = (__int64 *)(v34 + 16);
    }
    *v32 = 0LL;
  }
}
