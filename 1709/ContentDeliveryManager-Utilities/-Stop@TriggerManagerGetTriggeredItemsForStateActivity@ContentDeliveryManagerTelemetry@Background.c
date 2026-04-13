/*
 * XREFs of ?Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBD@Z @ 0x180057CC4
 * Callers:
 *     _lambda_14acc09073ccfc16760233ebaab8e057_::operator() @ 0x18005A03C (_lambda_14acc09073ccfc16760233ebaab8e057_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
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
  const unsigned __int16 *v11; // r9
  const unsigned __int16 *v12; // r8
  __int64 v13; // rax
  const unsigned __int16 *v14; // rdx
  const unsigned __int16 *v15; // r8
  const WCHAR *v16; // rdx
  const WCHAR *v17; // r10
  const WCHAR *v18; // r8
  const unsigned __int16 *v19; // rdx
  const unsigned __int16 *v20; // r8
  const unsigned __int16 *v21; // rdx
  const unsigned __int16 *v22; // r8
  const WCHAR *v23; // rdx
  const WCHAR *v24; // r8
  const unsigned __int16 *v25; // rdx
  const unsigned __int16 *v26; // r8
  const WCHAR *v27; // rdx
  const unsigned __int16 *v28; // rdx
  const unsigned __int16 *v29; // r8
  const struct _TlgProvider_t *v30; // rbx
  DWORD CurrentThreadId; // eax
  const unsigned __int16 *v32; // r9
  __int64 v33; // rcx
  __int64 **v34; // rbx
  void *v35; // rdx
  __int64 v36; // r8
  __int64 *v37; // rax
  __int64 v38; // rax
  DWORD v39; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v41; // [rsp+40h] [rbp-C0h] BYREF
  int v42; // [rsp+44h] [rbp-BCh] BYREF
  int v43; // [rsp+48h] [rbp-B8h] BYREF
  int v44; // [rsp+4Ch] [rbp-B4h] BYREF
  int v45; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  const unsigned __int16 *v49; // [rsp+90h] [rbp-70h]
  int v50; // [rsp+98h] [rbp-68h]
  int v51; // [rsp+9Ch] [rbp-64h]
  int *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v54; // [rsp+B0h] [rbp-50h]
  int v55; // [rsp+B8h] [rbp-48h]
  int v56; // [rsp+BCh] [rbp-44h]
  int *v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  const WCHAR *v59; // [rsp+D0h] [rbp-30h]
  int v60; // [rsp+D8h] [rbp-28h]
  int v61; // [rsp+DCh] [rbp-24h]
  int *v62; // [rsp+E0h] [rbp-20h]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  const unsigned __int16 *v64; // [rsp+F0h] [rbp-10h]
  int v65; // [rsp+F8h] [rbp-8h]
  int v66; // [rsp+FCh] [rbp-4h]
  int *v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v69; // [rsp+110h] [rbp+10h]
  int v70; // [rsp+118h] [rbp+18h]
  int v71; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v72; // [rsp+120h] [rbp+20h]
  int v73; // [rsp+128h] [rbp+28h]
  int v74; // [rsp+12Ch] [rbp+2Ch]
  int *v75; // [rsp+130h] [rbp+30h]
  __int64 v76; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v77; // [rsp+140h] [rbp+40h]
  int v78; // [rsp+148h] [rbp+48h]
  int v79; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v80; // [rsp+150h] [rbp+50h]
  int v81; // [rsp+158h] [rbp+58h]
  int v82; // [rsp+15Ch] [rbp+5Ch]
  DWORD *v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  PSRWLOCK *p_SRWLock; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  const unsigned __int16 *v87; // [rsp+180h] [rbp+80h]
  int v88; // [rsp+188h] [rbp+88h]
  int v89; // [rsp+18Ch] [rbp+8Ch]
  int *v90; // [rsp+190h] [rbp+90h]
  __int64 v91; // [rsp+198h] [rbp+98h]
  const unsigned __int16 *v92; // [rsp+1A0h] [rbp+A0h]
  int v93; // [rsp+1A8h] [rbp+A8h]
  int v94; // [rsp+1ACh] [rbp+ACh]
  EVENT_DATA_DESCRIPTOR v95; // [rsp+1B0h] [rbp+B0h] BYREF
  PSRWLOCK *v96; // [rsp+1D0h] [rbp+D0h]
  __int64 v97; // [rsp+1D8h] [rbp+D8h]
  DWORD *v98; // [rsp+1E0h] [rbp+E0h]
  __int64 v99; // [rsp+1E8h] [rbp+E8h]
  int *v100; // [rsp+1F0h] [rbp+F0h]
  __int64 v101; // [rsp+1F8h] [rbp+F8h]
  const unsigned __int16 *v102; // [rsp+200h] [rbp+100h]
  int v103; // [rsp+208h] [rbp+108h]
  int v104; // [rsp+20Ch] [rbp+10Ch]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]
  int v106; // [rsp+258h] [rbp+158h] BYREF

  v106 = a2;
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
      v11 = &word_1800E10E4;
      v41 = v7[1];
      v12 = &word_1800E10E4;
      v47 = &v41;
      v48 = 4LL;
      LODWORD(v13) = 0;
      if ( v10 )
      {
        v12 = v10;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v10 + v13) );
      }
      v14 = (const unsigned __int16 *)*((_QWORD *)v7 + 15);
      v50 = v13 + 1;
      v52 = v7 + 14;
      LODWORD(v13) = 0;
      v49 = v12;
      v15 = &word_1800E10E4;
      v51 = 0;
      v53 = 4LL;
      if ( v14 )
      {
        v15 = v14;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v14 + v13) );
      }
      v16 = (const WCHAR *)*((_QWORD *)v7 + 2);
      v17 = &Src;
      v54 = v15;
      v55 = v13 + 1;
      v18 = &Src;
      v42 = *v7;
      v57 = &v42;
      LODWORD(v13) = 0;
      v56 = 0;
      v58 = 4LL;
      if ( v16 )
      {
        v18 = v16;
        v13 = -1LL;
        do
          ++v13;
        while ( v16[v13] );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v7 + 8);
      v60 = 2 * v13 + 2;
      v43 = v7[6];
      v62 = &v43;
      LODWORD(v13) = 0;
      v59 = v18;
      v20 = &word_1800E10E4;
      v61 = 0;
      v63 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v19 + v13) );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v7 + 10);
      v65 = v13 + 1;
      v44 = v7[18];
      v67 = &v44;
      LODWORD(v13) = 0;
      v64 = v20;
      v22 = &word_1800E10E4;
      v66 = 0;
      v68 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v21 + v13) );
      }
      v23 = (const WCHAR *)*((_QWORD *)v7 + 11);
      v70 = v13 + 1;
      LODWORD(v13) = 0;
      v69 = v22;
      v24 = &Src;
      v71 = 0;
      if ( v23 )
      {
        v24 = v23;
        v13 = -1LL;
        do
          ++v13;
        while ( v23[v13] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v7 + 13);
      v73 = 2 * v13 + 2;
      v45 = v7[24];
      v75 = &v45;
      LODWORD(v13) = 0;
      v72 = v24;
      v26 = &word_1800E10E4;
      v74 = 0;
      v76 = 4LL;
      if ( v25 )
      {
        v26 = v25;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v25 + v13) );
      }
      v27 = (const WCHAR *)*((_QWORD *)v7 + 14);
      v78 = v13 + 1;
      LODWORD(v13) = 0;
      v77 = v26;
      v79 = 0;
      if ( v27 )
      {
        v17 = v27;
        v13 = -1LL;
        do
          ++v13;
        while ( v27[v13] );
      }
      v28 = (const unsigned __int16 *)*((_QWORD *)v7 + 5);
      v81 = 2 * v13 + 2;
      v29 = &word_1800E10E4;
      v39 = v7[2];
      v83 = &v39;
      LODWORD(SRWLock) = v7[15];
      p_SRWLock = &SRWLock;
      LODWORD(v13) = 0;
      v80 = v17;
      v82 = 0;
      v84 = 4LL;
      v86 = 4LL;
      if ( v28 )
      {
        v29 = v28;
        v13 = -1LL;
        do
          ++v13;
        while ( *((_BYTE *)v28 + v13) );
      }
      v87 = v29;
      v88 = v13 + 1;
      v90 = &v106;
      LODWORD(v13) = 0;
      v89 = 0;
      v91 = 4LL;
      if ( a3 )
      {
        v11 = (const unsigned __int16 *)a3;
        v13 = -1LL;
        do
          ++v13;
        while ( a3[v13] );
      }
      v92 = v11;
      v93 = v13 + 1;
      v94 = 0;
      TlgWrite(v9, &unk_18013D90B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
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
      v96 = &SRWLock;
      v97 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v99 = 4LL;
      v32 = &word_1800E10E4;
      v39 = CurrentThreadId;
      v98 = &v39;
      v100 = &v106;
      LODWORD(v33) = 0;
      v101 = 4LL;
      if ( a3 )
      {
        v32 = (const unsigned __int16 *)a3;
        v33 = -1LL;
        do
          ++v33;
        while ( a3[v33] );
      }
      v102 = v32;
      v103 = v33 + 1;
      v104 = 0;
      TlgWrite(v30, &unk_18013D6AA, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 6u, &v95);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v34 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v35, v36, (const char *)0x8007029CLL);
    v37 = *v34;
    *((_DWORD *)this + 8) = 0;
    while ( *v37 )
    {
      v38 = **v34;
      if ( (__int64 **)v38 == v34 )
      {
        **v34 = *((_QWORD *)this + 3);
        break;
      }
      v37 = (__int64 *)(v38 + 16);
      *v34 = v37;
    }
    *v34 = 0LL;
  }
}
