/*
 * XREFs of ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x180056694
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *this,
        unsigned __int8 a2,
        const char *a3)
{
  int *v3; // rbx
  int v7; // eax
  int *v8; // rbx
  RTL_SRWLOCK *v9; // rcx
  const struct _TlgProvider_t *v10; // r11
  const unsigned __int16 *v11; // rdx
  const unsigned __int16 *v12; // r9
  const unsigned __int16 *v13; // r8
  __int64 v14; // rax
  const unsigned __int16 *v15; // rdx
  const unsigned __int16 *v16; // r8
  const WCHAR *v17; // rdx
  const WCHAR *v18; // r10
  const WCHAR *v19; // r8
  const unsigned __int16 *v20; // rdx
  const unsigned __int16 *v21; // r8
  const unsigned __int16 *v22; // rdx
  const unsigned __int16 *v23; // r8
  const WCHAR *v24; // rdx
  const WCHAR *v25; // r8
  const unsigned __int16 *v26; // rdx
  const unsigned __int16 *v27; // r8
  const WCHAR *v28; // rdx
  const unsigned __int16 *v29; // rdx
  const unsigned __int16 *v30; // r8
  const struct _TlgProvider_t *v31; // rbx
  DWORD CurrentThreadId; // eax
  const unsigned __int16 *v33; // r9
  __int64 v34; // rcx
  __int64 **v35; // rbx
  void *v36; // rdx
  __int64 v37; // r8
  __int64 *v38; // rax
  __int64 v39; // rax
  int v40; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v41; // [rsp+34h] [rbp-CCh] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v43; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+44h] [rbp-BCh] BYREF
  int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v51; // [rsp+90h] [rbp-70h]
  int v52; // [rsp+98h] [rbp-68h]
  int v53; // [rsp+9Ch] [rbp-64h]
  int *v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v56; // [rsp+B0h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp-48h]
  int v58; // [rsp+BCh] [rbp-44h]
  int *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  const WCHAR *v61; // [rsp+D0h] [rbp-30h]
  int v62; // [rsp+D8h] [rbp-28h]
  int v63; // [rsp+DCh] [rbp-24h]
  int *v64; // [rsp+E0h] [rbp-20h]
  __int64 v65; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v66; // [rsp+F0h] [rbp-10h]
  int v67; // [rsp+F8h] [rbp-8h]
  int v68; // [rsp+FCh] [rbp-4h]
  int *v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v71; // [rsp+110h] [rbp+10h]
  int v72; // [rsp+118h] [rbp+18h]
  int v73; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v74; // [rsp+120h] [rbp+20h]
  int v75; // [rsp+128h] [rbp+28h]
  int v76; // [rsp+12Ch] [rbp+2Ch]
  int *v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v79; // [rsp+140h] [rbp+40h]
  int v80; // [rsp+148h] [rbp+48h]
  int v81; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v82; // [rsp+150h] [rbp+50h]
  int v83; // [rsp+158h] [rbp+58h]
  int v84; // [rsp+15Ch] [rbp+5Ch]
  int *v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  DWORD *v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v89; // [rsp+180h] [rbp+80h]
  int v90; // [rsp+188h] [rbp+88h]
  int v91; // [rsp+18Ch] [rbp+8Ch]
  PSRWLOCK *p_SRWLock; // [rsp+190h] [rbp+90h]
  __int64 v93; // [rsp+198h] [rbp+98h]
  const unsigned __int16 *v94; // [rsp+1A0h] [rbp+A0h]
  int v95; // [rsp+1A8h] [rbp+A8h]
  int v96; // [rsp+1ACh] [rbp+ACh]
  EVENT_DATA_DESCRIPTOR v97; // [rsp+1B0h] [rbp+B0h] BYREF
  PSRWLOCK *v98; // [rsp+1D0h] [rbp+D0h]
  __int64 v99; // [rsp+1D8h] [rbp+D8h]
  DWORD *v100; // [rsp+1E0h] [rbp+E0h]
  __int64 v101; // [rsp+1E8h] [rbp+E8h]
  int *v102; // [rsp+1F0h] [rbp+F0h]
  __int64 v103; // [rsp+1F8h] [rbp+F8h]
  const unsigned __int16 *v104; // [rsp+200h] [rbp+100h]
  int v105; // [rsp+208h] [rbp+108h]
  int v106; // [rsp+20Ch] [rbp+10Ch]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v9 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v8 )
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v10 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v10 > 5u )
    {
      v11 = (const unsigned __int16 *)*((_QWORD *)v8 + 6);
      v12 = &word_1800E10E4;
      v43 = v8[1];
      v13 = &word_1800E10E4;
      v49 = &v43;
      v50 = 4LL;
      LODWORD(v14) = 0;
      if ( v11 )
      {
        v13 = v11;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v11 + v14) );
      }
      v15 = (const unsigned __int16 *)*((_QWORD *)v8 + 15);
      v52 = v14 + 1;
      v54 = v8 + 14;
      LODWORD(v14) = 0;
      v51 = v13;
      v16 = &word_1800E10E4;
      v53 = 0;
      v55 = 4LL;
      if ( v15 )
      {
        v16 = v15;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v15 + v14) );
      }
      v17 = (const WCHAR *)*((_QWORD *)v8 + 2);
      v18 = &Src;
      v56 = v16;
      v57 = v14 + 1;
      v19 = &Src;
      v44 = *v8;
      v59 = &v44;
      LODWORD(v14) = 0;
      v58 = 0;
      v60 = 4LL;
      if ( v17 )
      {
        v19 = v17;
        v14 = -1LL;
        do
          ++v14;
        while ( v17[v14] );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)v8 + 8);
      v62 = 2 * v14 + 2;
      v45 = v8[6];
      v64 = &v45;
      LODWORD(v14) = 0;
      v61 = v19;
      v21 = &word_1800E10E4;
      v63 = 0;
      v65 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v20 + v14) );
      }
      v22 = (const unsigned __int16 *)*((_QWORD *)v8 + 10);
      v67 = v14 + 1;
      v46 = v8[18];
      v69 = &v46;
      LODWORD(v14) = 0;
      v66 = v21;
      v23 = &word_1800E10E4;
      v68 = 0;
      v70 = 4LL;
      if ( v22 )
      {
        v23 = v22;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v22 + v14) );
      }
      v24 = (const WCHAR *)*((_QWORD *)v8 + 11);
      v72 = v14 + 1;
      LODWORD(v14) = 0;
      v71 = v23;
      v25 = &Src;
      v73 = 0;
      if ( v24 )
      {
        v25 = v24;
        v14 = -1LL;
        do
          ++v14;
        while ( v24[v14] );
      }
      v26 = (const unsigned __int16 *)*((_QWORD *)v8 + 13);
      v75 = 2 * v14 + 2;
      v47 = v8[24];
      v77 = &v47;
      LODWORD(v14) = 0;
      v74 = v25;
      v27 = &word_1800E10E4;
      v76 = 0;
      v78 = 4LL;
      if ( v26 )
      {
        v27 = v26;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v26 + v14) );
      }
      v28 = (const WCHAR *)*((_QWORD *)v8 + 14);
      v80 = v14 + 1;
      LODWORD(v14) = 0;
      v79 = v27;
      v81 = 0;
      if ( v28 )
      {
        v18 = v28;
        v14 = -1LL;
        do
          ++v14;
        while ( v28[v14] );
      }
      v29 = (const unsigned __int16 *)*((_QWORD *)v8 + 5);
      v83 = 2 * v14 + 2;
      v30 = &word_1800E10E4;
      v40 = v8[2];
      v85 = &v40;
      v41 = v8[15];
      v87 = &v41;
      LODWORD(v14) = 0;
      v82 = v18;
      v84 = 0;
      v86 = 4LL;
      v88 = 4LL;
      if ( v29 )
      {
        v30 = v29;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)v29 + v14) );
      }
      v89 = v30;
      v90 = v14 + 1;
      LODWORD(SRWLock) = a2;
      p_SRWLock = &SRWLock;
      LODWORD(v14) = 0;
      v91 = 0;
      v93 = 4LL;
      if ( a3 )
      {
        v12 = (const unsigned __int16 *)a3;
        v14 = -1LL;
        do
          ++v14;
        while ( a3[v14] );
      }
      v94 = v12;
      v95 = v14 + 1;
      v96 = 0;
      TlgWrite(v10, &unk_18013DD60, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    if ( v9 )
      ReleaseSRWLockExclusive(v9);
    v31 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v31 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v98 = &SRWLock;
      v99 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v101 = 4LL;
      v33 = &word_1800E10E4;
      v41 = CurrentThreadId;
      v100 = &v41;
      LODWORD(v34) = 0;
      v40 = a2;
      v102 = &v40;
      v103 = 4LL;
      if ( a3 )
      {
        v33 = (const unsigned __int16 *)a3;
        v34 = -1LL;
        do
          ++v34;
        while ( a3[v34] );
      }
      v104 = v33;
      v105 = v34 + 1;
      v106 = 0;
      TlgWrite(v31, &unk_18013DBB9, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v97);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v35 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v36, v37, (const char *)0x8007029CLL);
    v38 = *v35;
    *((_DWORD *)this + 8) = 0;
    while ( *v38 )
    {
      v39 = **v35;
      if ( (__int64 **)v39 == v35 )
      {
        **v35 = *((_QWORD *)this + 3);
        break;
      }
      v38 = (__int64 *)(v39 + 16);
      *v35 = v38;
    }
    *v35 = 0LL;
  }
}
