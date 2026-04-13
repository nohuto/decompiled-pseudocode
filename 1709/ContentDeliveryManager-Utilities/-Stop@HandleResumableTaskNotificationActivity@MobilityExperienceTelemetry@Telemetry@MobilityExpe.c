/*
 * XREFs of ?Stop@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXPEBD@Z @ 0x1800460B4
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x180047AE4 (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x1800458E8 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::Stop(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this,
        const char *a2)
{
  int *v2; // rbx
  int v5; // eax
  int *v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  const struct _TlgProvider_t *v8; // rax
  const struct _TlgProvider_t *v9; // r11
  const unsigned __int16 *v10; // r9
  const unsigned __int16 *v11; // rdx
  __int64 v12; // rax
  const unsigned __int16 *v13; // r8
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
  const struct _TlgProvider_t *v28; // rax
  const struct _TlgProvider_t *v29; // rbx
  int v30; // ecx
  DWORD CurrentThreadId; // eax
  const unsigned __int16 *v32; // r9
  __int64 v33; // rcx
  __int64 **v34; // rbx
  void *v35; // rdx
  __int64 v36; // r8
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  int v41; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+4Ch] [rbp-BCh] BYREF
  int v43; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v47; // [rsp+88h] [rbp-80h]
  int v48; // [rsp+90h] [rbp-78h]
  int v49; // [rsp+94h] [rbp-74h]
  int *v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v52; // [rsp+A8h] [rbp-60h]
  int v53; // [rsp+B0h] [rbp-58h]
  int v54; // [rsp+B4h] [rbp-54h]
  int *v55; // [rsp+B8h] [rbp-50h]
  __int64 v56; // [rsp+C0h] [rbp-48h]
  const WCHAR *v57; // [rsp+C8h] [rbp-40h]
  int v58; // [rsp+D0h] [rbp-38h]
  int v59; // [rsp+D4h] [rbp-34h]
  int *v60; // [rsp+D8h] [rbp-30h]
  __int64 v61; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v62; // [rsp+E8h] [rbp-20h]
  int v63; // [rsp+F0h] [rbp-18h]
  int v64; // [rsp+F4h] [rbp-14h]
  __int64 *v65; // [rsp+F8h] [rbp-10h]
  __int64 v66; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v67; // [rsp+108h] [rbp+0h]
  int v68; // [rsp+110h] [rbp+8h]
  int v69; // [rsp+114h] [rbp+Ch]
  const WCHAR *v70; // [rsp+118h] [rbp+10h]
  int v71; // [rsp+120h] [rbp+18h]
  int v72; // [rsp+124h] [rbp+1Ch]
  PSRWLOCK *p_SRWLock; // [rsp+128h] [rbp+20h]
  __int64 v74; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v75; // [rsp+138h] [rbp+30h]
  int v76; // [rsp+140h] [rbp+38h]
  int v77; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v78; // [rsp+148h] [rbp+40h]
  int v79; // [rsp+150h] [rbp+48h]
  int v80; // [rsp+154h] [rbp+4Ch]
  const unsigned __int16 *v81; // [rsp+158h] [rbp+50h]
  int v82; // [rsp+160h] [rbp+58h]
  int v83; // [rsp+164h] [rbp+5Ch]
  EVENT_DATA_DESCRIPTOR v84; // [rsp+168h] [rbp+60h] BYREF
  PSRWLOCK *v85; // [rsp+188h] [rbp+80h]
  __int64 v86; // [rsp+190h] [rbp+88h]
  __int64 *v87; // [rsp+198h] [rbp+90h]
  __int64 v88; // [rsp+1A0h] [rbp+98h]
  const unsigned __int16 *v89; // [rsp+1A8h] [rbp+A0h]
  int v90; // [rsp+1B0h] [rbp+A8h]
  int v91; // [rsp+1B4h] [rbp+ACh]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

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
    v8 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    v9 = v8;
    if ( *(_DWORD *)v8 > 5u
      && (*((_QWORD *)v8 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x800000000000LL) == *((_QWORD *)v8 + 3) )
    {
      v10 = &word_1800E10E4;
      v11 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
      v41 = v6[1];
      v45 = &v41;
      LODWORD(v12) = 0;
      v46 = 4LL;
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
      v48 = v12 + 1;
      v50 = v6 + 14;
      LODWORD(v12) = 0;
      v47 = v13;
      v15 = &word_1800E10E4;
      v49 = 0;
      v51 = 4LL;
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
      v52 = v15;
      v53 = v12 + 1;
      v18 = &Src;
      v42 = *v6;
      v55 = &v42;
      LODWORD(v12) = 0;
      v54 = 0;
      v56 = 4LL;
      if ( v16 )
      {
        v18 = v16;
        v12 = -1LL;
        do
          ++v12;
        while ( v16[v12] );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
      v58 = 2 * v12 + 2;
      v43 = v6[6];
      v60 = &v43;
      LODWORD(v12) = 0;
      v57 = v18;
      v20 = &word_1800E10E4;
      v59 = 0;
      v61 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v19 + v12) );
      }
      v21 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
      v63 = v12 + 1;
      LODWORD(v39) = v6[18];
      v65 = &v39;
      LODWORD(v12) = 0;
      v62 = v20;
      v22 = &word_1800E10E4;
      v64 = 0;
      v66 = 4LL;
      if ( v21 )
      {
        v22 = v21;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v21 + v12) );
      }
      v23 = (const WCHAR *)*((_QWORD *)v6 + 11);
      v68 = v12 + 1;
      LODWORD(v12) = 0;
      v67 = v22;
      v24 = &Src;
      v69 = 0;
      if ( v23 )
      {
        v24 = v23;
        v12 = -1LL;
        do
          ++v12;
        while ( v23[v12] );
      }
      v25 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
      v71 = 2 * v12 + 2;
      LODWORD(SRWLock) = v6[24];
      p_SRWLock = &SRWLock;
      LODWORD(v12) = 0;
      v70 = v24;
      v26 = &word_1800E10E4;
      v72 = 0;
      v74 = 4LL;
      if ( v25 )
      {
        v26 = v25;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_BYTE *)v25 + v12) );
      }
      v27 = (const WCHAR *)*((_QWORD *)v6 + 14);
      v76 = v12 + 1;
      LODWORD(v12) = 0;
      v75 = v26;
      v77 = 0;
      if ( v27 )
      {
        v17 = v27;
        v12 = -1LL;
        do
          ++v12;
        while ( v27[v12] );
      }
      v78 = v17;
      v79 = 2 * v12 + 2;
      LODWORD(v12) = 0;
      v80 = 0;
      if ( a2 )
      {
        v10 = (const unsigned __int16 *)a2;
        v12 = -1LL;
        do
          ++v12;
        while ( a2[v12] );
      }
      v81 = v10;
      v82 = v12 + 1;
      v83 = 0;
      TlgWrite(v9, &unk_18013C38C, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x11u, &pData);
    }
  }
  else
  {
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    v28 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
    v29 = v28;
    if ( *(_DWORD *)v28 > 5u
      && (*((_QWORD *)v28 + 2) & 0x800000000000LL) != 0
      && (*((_QWORD *)v28 + 3) & 0x800000000000LL) == *((_QWORD *)v28 + 3) )
    {
      v30 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v85 = &SRWLock;
      LODWORD(SRWLock) = v30;
      v86 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v88 = 4LL;
      v32 = &word_1800E10E4;
      LODWORD(v39) = CurrentThreadId;
      v87 = &v39;
      LODWORD(v33) = 0;
      if ( a2 )
      {
        v32 = (const unsigned __int16 *)a2;
        v33 = -1LL;
        do
          ++v33;
        while ( a2[v33] );
      }
      v89 = v32;
      v90 = v33 + 1;
      v91 = 0;
      TlgWrite(v29, &unk_18013C286, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 5u, &v84);
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
