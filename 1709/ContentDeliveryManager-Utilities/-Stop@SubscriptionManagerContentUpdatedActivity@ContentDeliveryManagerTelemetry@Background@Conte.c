/*
 * XREFs of ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x18003E274
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180041174 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *this,
        int a2,
        int a3)
{
  int *v3; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // r10
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // rcx
  __int64 v12; // rax
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // rdx
  const WCHAR *v16; // rcx
  const WCHAR *v17; // r9
  const WCHAR *v18; // rdx
  const unsigned __int16 *v19; // rcx
  const unsigned __int16 *v20; // rdx
  const unsigned __int16 *v21; // rcx
  const unsigned __int16 *v22; // rdx
  const WCHAR *v23; // rcx
  const WCHAR *v24; // rdx
  const unsigned __int16 *v25; // rcx
  const WCHAR *v26; // rcx
  const struct _TlgProvider_t *v27; // rax
  const struct _TlgProvider_t *v28; // rbx
  int v29; // ecx
  DWORD CurrentThreadId; // eax
  __int64 **v31; // rbx
  void *v32; // rdx
  __int64 v33; // r8
  __int64 *v34; // rax
  __int64 v35; // rax
  DWORD v36; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+54h] [rbp-ACh] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
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
  DWORD *v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v66; // [rsp+110h] [rbp+10h]
  int v67; // [rsp+118h] [rbp+18h]
  int v68; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v69; // [rsp+120h] [rbp+20h]
  int v70; // [rsp+128h] [rbp+28h]
  int v71; // [rsp+12Ch] [rbp+2Ch]
  PSRWLOCK *p_SRWLock; // [rsp+130h] [rbp+30h]
  __int64 v73; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+148h] [rbp+48h]
  int v76; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v77; // [rsp+150h] [rbp+50h]
  int v78; // [rsp+158h] [rbp+58h]
  int v79; // [rsp+15Ch] [rbp+5Ch]
  int *v80; // [rsp+160h] [rbp+60h]
  __int64 v81; // [rsp+168h] [rbp+68h]
  int *v82; // [rsp+170h] [rbp+70h]
  __int64 v83; // [rsp+178h] [rbp+78h]
  int *v84; // [rsp+180h] [rbp+80h]
  __int64 v85; // [rsp+188h] [rbp+88h]
  int *v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+198h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v88; // [rsp+1A0h] [rbp+A0h] BYREF
  PSRWLOCK *v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  DWORD *v91; // [rsp+1D0h] [rbp+D0h]
  __int64 v92; // [rsp+1D8h] [rbp+D8h]
  int *v93; // [rsp+1E0h] [rbp+E0h]
  __int64 v94; // [rsp+1E8h] [rbp+E8h]
  int *v95; // [rsp+1F0h] [rbp+F0h]
  __int64 v96; // [rsp+1F8h] [rbp+F8h]
  int *v97; // [rsp+200h] [rbp+100h]
  __int64 v98; // [rsp+208h] [rbp+108h]
  int *v99; // [rsp+210h] [rbp+110h]
  __int64 v100; // [rsp+218h] [rbp+118h]
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]
  int v102; // [rsp+268h] [rbp+168h] BYREF
  int v103; // [rsp+270h] [rbp+170h] BYREF

  v103 = a3;
  v102 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v39 = 0;
  v38 = 0;
  v5 = v3[19];
  if ( v5 < 0 && v5 == v3[21] )
    v6 = v3 + 20;
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
    v9 = v8;
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v10 = &word_1800E10E4;
      v11 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v40 = v6[1];
      v44 = &v40;
      LODWORD(v12) = 0;
      v45 = 4LL;
      v13 = &word_1800E10E4;
      if ( v11 )
      {
        v13 = v11;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v11 + v12) );
      }
      v14 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v47 = v12 + 1;
      v49 = v6 + 14;
      LODWORD(v12) = 0;
      v46 = v13;
      v15 = &word_1800E10E4;
      v48 = 0;
      v50 = 4LL;
      if ( v14 )
      {
        v15 = v14;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v14 + v12) );
      }
      v16 = (const WCHAR *)*((_QWORD *)v6 + 2);
      v17 = &Src;
      v51 = v15;
      v52 = v12 + 1;
      v18 = &Src;
      v41 = *v6;
      v54 = &v41;
      LODWORD(v12) = 0;
      v53 = 0;
      v55 = 4LL;
      if ( v16 )
      {
        v18 = v16;
        v12 = -1LL;
        do
          ++v12;
        while ( v16[v12] );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v57 = 2 * v12 + 2;
      v42 = v6[6];
      v59 = &v42;
      LODWORD(v12) = 0;
      v56 = v18;
      v20 = &word_1800E10E4;
      v58 = 0;
      v60 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v19 + v12) );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v62 = v12 + 1;
      v36 = v6[18];
      v64 = &v36;
      LODWORD(v12) = 0;
      v61 = v20;
      v22 = &word_1800E10E4;
      v63 = 0;
      v65 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v21 + v12) );
      }
      v23 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v67 = v12 + 1;
      LODWORD(v12) = 0;
      v66 = v22;
      v24 = &Src;
      v68 = 0;
      if ( v23 )
      {
        v24 = v23;
        v12 = -1LL;
        do
          ++v12;
        while ( v23[v12] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v70 = 2 * v12 + 2;
      LODWORD(SRWLock) = v6[24];
      p_SRWLock = &SRWLock;
      LODWORD(v12) = 0;
      v69 = v24;
      v71 = 0;
      v73 = 4LL;
      if ( v25 )
      {
        v10 = v25;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v25 + v12) );
      }
      v26 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v75 = v12 + 1;
      LODWORD(v12) = 0;
      v74 = v10;
      v76 = 0;
      if ( v26 )
      {
        v17 = v26;
        v12 = -1LL;
        do
          ++v12;
        while ( v26[v12] );
      }
      v77 = v17;
      v78 = 2 * v12 + 2;
      v79 = 0;
      v80 = &v102;
      v81 = 4LL;
      v82 = &v103;
      v84 = &v38;
      v86 = &v39;
      v83 = 4LL;
      v85 = 4LL;
      v87 = 4LL;
      TlgWrite(v9, &unk_18013BCFB, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v27 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v28 = v27;
    if ( *(_DWORD *)v27 > 5u
      && (*((_QWORD *)v27 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v27 + 3) & 0x200000000000LL) == *((_QWORD *)v27 + 3) )
    {
      v29 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v89 = &SRWLock;
      LODWORD(SRWLock) = v29;
      v90 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v92 = 4LL;
      v36 = CurrentThreadId;
      v94 = 4LL;
      v91 = &v36;
      v93 = &v102;
      v95 = &v103;
      v97 = &v38;
      v99 = &v39;
      v96 = 4LL;
      v98 = 4LL;
      v100 = 4LL;
      TlgWrite(v28, &unk_18013C025, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &v88);
    }
  }
  if ( *((_DWORD *)this + 8) )
  {
    v31 = (__int64 **)((char *)this + 8);
    if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v32, v33, (const char *)0x8007029CLL);
    v34 = *v31;
    *((_DWORD *)this + 8) = 0;
    while ( *v34 )
    {
      v35 = **v31;
      if ( (__int64 **)v35 == v31 )
      {
        **v31 = *((_QWORD *)this + 3);
        break;
      }
      v34 = (__int64 *)(v35 + 16);
      *v31 = v34;
    }
    *v31 = 0LL;
  }
}
