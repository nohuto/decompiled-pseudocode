/*
 * XREFs of ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x180041B9C
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180044A44 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180045A44 (-IgnoreCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMan.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
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
  DWORD v31; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+54h] [rbp-ACh] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
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
  DWORD *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  const unsigned __int16 *v61; // [rsp+110h] [rbp+10h]
  int v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  const WCHAR *v64; // [rsp+120h] [rbp+20h]
  int v65; // [rsp+128h] [rbp+28h]
  int v66; // [rsp+12Ch] [rbp+2Ch]
  PSRWLOCK *p_SRWLock; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  const unsigned __int16 *v69; // [rsp+140h] [rbp+40h]
  int v70; // [rsp+148h] [rbp+48h]
  int v71; // [rsp+14Ch] [rbp+4Ch]
  const WCHAR *v72; // [rsp+150h] [rbp+50h]
  int v73; // [rsp+158h] [rbp+58h]
  int v74; // [rsp+15Ch] [rbp+5Ch]
  int *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  int *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  int *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  int *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v83; // [rsp+1A0h] [rbp+A0h] BYREF
  PSRWLOCK *v84; // [rsp+1C0h] [rbp+C0h]
  __int64 v85; // [rsp+1C8h] [rbp+C8h]
  DWORD *v86; // [rsp+1D0h] [rbp+D0h]
  __int64 v87; // [rsp+1D8h] [rbp+D8h]
  int *v88; // [rsp+1E0h] [rbp+E0h]
  __int64 v89; // [rsp+1E8h] [rbp+E8h]
  int *v90; // [rsp+1F0h] [rbp+F0h]
  __int64 v91; // [rsp+1F8h] [rbp+F8h]
  int *v92; // [rsp+200h] [rbp+100h]
  __int64 v93; // [rsp+208h] [rbp+108h]
  int *v94; // [rsp+210h] [rbp+110h]
  __int64 v95; // [rsp+218h] [rbp+118h]
  int v96; // [rsp+268h] [rbp+168h] BYREF
  int v97; // [rsp+270h] [rbp+170h] BYREF

  v97 = a3;
  v96 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v34 = 0;
  v33 = 0;
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
      v10 = &word_1800F144C;
      v11 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v35 = v6[1];
      v39 = &v35;
      LODWORD(v12) = 0;
      v40 = 4LL;
      v13 = &word_1800F144C;
      if ( v11 )
      {
        v13 = v11;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v11 + v12) );
      }
      v14 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
      v42 = v12 + 1;
      v44 = v6 + 14;
      LODWORD(v12) = 0;
      v41 = v13;
      v15 = &word_1800F144C;
      v43 = 0;
      v45 = 4LL;
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
      v46 = v15;
      v47 = v12 + 1;
      v18 = &Src;
      v36 = *v6;
      v49 = &v36;
      LODWORD(v12) = 0;
      v48 = 0;
      v50 = 4LL;
      if ( v16 )
      {
        v18 = v16;
        v12 = -1LL;
        do
          ++v12;
        while ( v16[v12] );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v52 = 2 * v12 + 2;
      v37 = v6[6];
      v54 = &v37;
      LODWORD(v12) = 0;
      v51 = v18;
      v20 = &word_1800F144C;
      v53 = 0;
      v55 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v19 + v12) );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v57 = v12 + 1;
      v31 = v6[18];
      v59 = &v31;
      LODWORD(v12) = 0;
      v56 = v20;
      v22 = &word_1800F144C;
      v58 = 0;
      v60 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v21 + v12) );
      }
      v23 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v62 = v12 + 1;
      LODWORD(v12) = 0;
      v61 = v22;
      v24 = &Src;
      v63 = 0;
      if ( v23 )
      {
        v24 = v23;
        v12 = -1LL;
        do
          ++v12;
        while ( v23[v12] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v65 = 2 * v12 + 2;
      LODWORD(SRWLock) = v6[24];
      p_SRWLock = &SRWLock;
      LODWORD(v12) = 0;
      v64 = v24;
      v66 = 0;
      v68 = 4LL;
      if ( v25 )
      {
        v10 = v25;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v25 + v12) );
      }
      v26 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v70 = v12 + 1;
      LODWORD(v12) = 0;
      v69 = v10;
      v71 = 0;
      if ( v26 )
      {
        v17 = v26;
        v12 = -1LL;
        do
          ++v12;
        while ( v26[v12] );
      }
      v72 = v17;
      v73 = 2 * v12 + 2;
      v74 = 0;
      v75 = &v96;
      v76 = 4LL;
      v77 = &v97;
      v79 = &v33;
      v81 = &v34;
      v78 = 4LL;
      v80 = 4LL;
      v82 = 4LL;
      TlgWrite(v9, &unk_180155CD3, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x14u, &pData);
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
      v84 = &SRWLock;
      LODWORD(SRWLock) = v29;
      v85 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v87 = 4LL;
      v31 = CurrentThreadId;
      v89 = 4LL;
      v86 = &v31;
      v88 = &v96;
      v90 = &v97;
      v92 = &v33;
      v94 = &v34;
      v91 = 4LL;
      v93 = 4LL;
      v95 = 4LL;
      TlgWrite(v28, &unk_180155FFD, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 8u, &v83);
    }
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}
