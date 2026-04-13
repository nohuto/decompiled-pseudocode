/*
 * XREFs of ?Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBD@Z @ 0x18005ECB4
 * Callers:
 *     _lambda_3b51b811795083c8866600a62beaf61a_::operator() @ 0x180061440 (_lambda_3b51b811795083c8866600a62beaf61a_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002982C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        int a2,
        const char *a3)
{
  int *v3; // rbx
  int v6; // eax
  int *v7; // rbx
  RTL_SRWLOCK *v8; // rcx
  const struct _TlgProvider_t *v9; // r11
  const unsigned __int16 *v10; // rdx
  const unsigned __int16 *v11; // r8
  __int64 v12; // rax
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // r8
  const WCHAR *v15; // rdx
  const WCHAR *v16; // r9
  const WCHAR *v17; // r8
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // r8
  const unsigned __int16 *v20; // rdx
  const unsigned __int16 *v21; // r8
  const WCHAR *v22; // rdx
  const WCHAR *v23; // r8
  const unsigned __int16 *v24; // rdx
  const unsigned __int16 *v25; // r8
  const WCHAR *v26; // rdx
  const unsigned __int16 *v27; // rdx
  const unsigned __int16 *v28; // r8
  bool v29; // zf
  const struct _TlgProvider_t *v30; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v32; // rcx
  __int64 **v33; // rbx
  __int64 *v34; // rcx
  __int64 v35; // rax
  DWORD v36; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  int v42; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+98h] [rbp-68h]
  int v48; // [rsp+9Ch] [rbp-64h]
  int *v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  int *v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  const WCHAR *v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  int *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v61; // [rsp+F0h] [rbp-10h]
  int v62; // [rsp+F8h] [rbp-8h]
  int v63; // [rsp+FCh] [rbp-4h]
  int *v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v66; // [rsp+110h] [rbp+10h]
  int v67; // [rsp+118h] [rbp+18h]
  int v68; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v69; // [rsp+120h] [rbp+20h]
  int v70; // [rsp+128h] [rbp+28h]
  int v71; // [rsp+12Ch] [rbp+2Ch]
  int *v72; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+148h] [rbp+48h]
  int v76; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v77; // [rsp+150h] [rbp+50h]
  int v78; // [rsp+158h] [rbp+58h]
  int v79; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v84; // [rsp+180h] [rbp+80h]
  int v85; // [rsp+188h] [rbp+88h]
  int v86; // [rsp+18Ch] [rbp+8Ch]
  int *v87; // [rsp+190h] [rbp+90h]
  __int64 v88; // [rsp+198h] [rbp+98h]
  const char *v89; // [rsp+1A0h] [rbp+A0h]
  int v90; // [rsp+1A8h] [rbp+A8h]
  int v91; // [rsp+1ACh] [rbp+ACh]
  EVENT_DATA_DESCRIPTOR v92; // [rsp+1B0h] [rbp+B0h] BYREF
  PSRWLOCK *v93; // [rsp+1D0h] [rbp+D0h]
  __int64 v94; // [rsp+1D8h] [rbp+D8h]
  DWORD *v95; // [rsp+1E0h] [rbp+E0h]
  __int64 v96; // [rsp+1E8h] [rbp+E8h]
  int *v97; // [rsp+1F0h] [rbp+F0h]
  __int64 v98; // [rsp+1F8h] [rbp+F8h]
  const char *v99; // [rsp+200h] [rbp+100h]
  int v100; // [rsp+208h] [rbp+108h]
  int v101; // [rsp+20Ch] [rbp+10Ch]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]
  int v103; // [rsp+258h] [rbp+158h] BYREF

  v103 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v6 = v3[19];
  if ( v6 < 0 && v6 == v3[21] )
    v7 = v3 + 20;
  else
    v7 = 0LL;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v8 = SRWLock;
  **((_DWORD **)this + 6) = 2;
  if ( v7 )
  {
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v9 > 5u )
    {
      v10 = (const unsigned __int16 *)*((_QWORD *)v7 + 6);
      v38 = v7[1];
      v11 = &word_1800F144C;
      v44 = &v38;
      v45 = 4LL;
      LODWORD(v12) = 0;
      if ( v10 )
      {
        v11 = v10;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v10 + v12) );
      }
      v13 = (const unsigned __int16 *)*((_QWORD *)v7 + 15);
      v47 = v12 + 1;
      v49 = v7 + 14;
      LODWORD(v12) = 0;
      v46 = v11;
      v14 = &word_1800F144C;
      v48 = 0;
      v50 = 4LL;
      if ( v13 )
      {
        v14 = v13;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v13 + v12) );
      }
      v15 = (const WCHAR *)*((_QWORD *)v7 + 2);
      v16 = &Src;
      v51 = v14;
      v52 = v12 + 1;
      v17 = &Src;
      v39 = *v7;
      v54 = &v39;
      LODWORD(v12) = 0;
      v53 = 0;
      v55 = 4LL;
      if ( v15 )
      {
        v17 = v15;
        v12 = -1LL;
        do
          ++v12;
        while ( v15[v12] );
      }
      v18 = (const unsigned __int16 *)*((_QWORD *)v7 + 8);
      v57 = 2 * v12 + 2;
      v40 = v7[6];
      v59 = &v40;
      LODWORD(v12) = 0;
      v56 = v17;
      v19 = &word_1800F144C;
      v58 = 0;
      v60 = 4LL;
      if ( v18 )
      {
        v19 = v18;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v18 + v12) );
      }
      v20 = (const unsigned __int16 *)*((_QWORD *)v7 + 10);
      v62 = v12 + 1;
      v41 = v7[18];
      v64 = &v41;
      LODWORD(v12) = 0;
      v61 = v19;
      v21 = &word_1800F144C;
      v63 = 0;
      v65 = 4LL;
      if ( v20 )
      {
        v21 = v20;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v20 + v12) );
      }
      v22 = (const WCHAR *)*((_QWORD *)v7 + 11);
      v67 = v12 + 1;
      LODWORD(v12) = 0;
      v66 = v21;
      v23 = &Src;
      v68 = 0;
      if ( v22 )
      {
        v23 = v22;
        v12 = -1LL;
        do
          ++v12;
        while ( v22[v12] );
      }
      v24 = (const unsigned __int16 *)*((_QWORD *)v7 + 13);
      v70 = 2 * v12 + 2;
      v42 = v7[24];
      v72 = &v42;
      LODWORD(v12) = 0;
      v69 = v23;
      v25 = &word_1800F144C;
      v71 = 0;
      v73 = 4LL;
      if ( v24 )
      {
        v25 = v24;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v24 + v12) );
      }
      v26 = (const WCHAR *)*((_QWORD *)v7 + 14);
      v75 = v12 + 1;
      LODWORD(v12) = 0;
      v74 = v25;
      v76 = 0;
      if ( v26 )
      {
        v16 = v26;
        v12 = -1LL;
        do
          ++v12;
        while ( v26[v12] );
      }
      v27 = (const unsigned __int16 *)*((_QWORD *)v7 + 5);
      v78 = 2 * v12 + 2;
      v28 = &word_1800F144C;
      v36 = v7[2];
      v80 = &v36;
      LODWORD(SRWLock) = v7[15];
      p_SRWLock = &SRWLock;
      LODWORD(v12) = 0;
      v77 = v16;
      v79 = 0;
      v81 = 4LL;
      v83 = 4LL;
      if ( v27 )
      {
        v28 = v27;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v27 + v12) );
      }
      v84 = v28;
      v85 = v12 + 1;
      v87 = &v103;
      LODWORD(v12) = 0;
      v86 = 0;
      v88 = 4LL;
      v29 = a3 == 0LL;
      if ( a3 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( a3[v12] );
        v29 = a3 == 0LL;
      }
      if ( v29 )
        a3 = (const char *)&word_1800F144C;
      v91 = 0;
      v89 = a3;
      v90 = v12 + 1;
      TlgWrite(v9, &unk_1801575FC, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v30 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( *(_DWORD *)v30 > 5u )
    {
      LODWORD(SRWLock) = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v93 = &SRWLock;
      v94 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v96 = 4LL;
      LODWORD(v32) = 0;
      v36 = CurrentThreadId;
      v95 = &v36;
      v97 = &v103;
      v98 = 4LL;
      if ( a3 )
      {
        v32 = -1LL;
        do
          ++v32;
        while ( a3[v32] );
      }
      v101 = 0;
      v100 = v32 + 1;
      if ( !a3 )
        a3 = (const char *)&word_1800F144C;
      v99 = a3;
      TlgWrite(v30, &unk_18015742A, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v92);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v33 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    v34 = *v33;
    *((_DWORD *)this + 8) = 0;
    while ( 1 )
    {
      v35 = *v34;
      if ( !*v34 )
        break;
      if ( (__int64 **)v35 == v33 )
      {
        *v34 = *((_QWORD *)this + 3);
        break;
      }
      v34 = (__int64 *)(v35 + 16);
      *v33 = (__int64 *)(v35 + 16);
    }
    *v33 = 0LL;
  }
}
