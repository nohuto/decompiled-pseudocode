/*
 * XREFs of ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180015E74
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180015570 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?FindOrCreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x180016110 (-FindOrCreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        void *a7,
        bool a8)
{
  const WCHAR *v8; // r13
  int v9; // esi
  struct EnforcerApplicationState *ApplicationState; // rax
  struct EnforcerApplicationState *v11; // r15
  int v12; // r13d
  int v13; // r9d
  __int64 cData; // r9
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh]
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  LPCWSTR pwsz; // [rsp+48h] [rbp-B8h]
  unsigned int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh]
  unsigned int v22; // [rsp+58h] [rbp-A8h] BYREF
  int v23; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+64h] [rbp-9Ch] BYREF
  SID *pSid; // [rsp+68h] [rbp-98h] BYREF
  void *v27; // [rsp+70h] [rbp-90h]
  ModernResourceEnforcer *v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+84h] [rbp-7Ch]
  EVENT_DATA_DESCRIPTOR v31; // [rsp+B0h] [rbp-50h] BYREF
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  int *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v41; // [rsp+120h] [rbp+20h] BYREF
  int *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  int *v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+190h] [rbp+90h] BYREF
  int *v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int *v56; // [rsp+1E0h] [rbp+E0h]
  __int64 v57; // [rsp+1E8h] [rbp+E8h]
  unsigned int *v58; // [rsp+1F0h] [rbp+F0h]
  __int64 v59; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *v60; // [rsp+200h] [rbp+100h]
  __int64 v61; // [rsp+208h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+230h] [rbp+130h] BYREF
  SID **p_pSid; // [rsp+240h] [rbp+140h]
  int v65; // [rsp+248h] [rbp+148h]
  int v66; // [rsp+24Ch] [rbp+14Ch]
  unsigned __int64 *v67; // [rsp+250h] [rbp+150h]
  int v68; // [rsp+258h] [rbp+158h]
  int v69; // [rsp+25Ch] [rbp+15Ch]

  v8 = a2;
  v9 = -1;
  pwsz = a2;
  v27 = a7;
  v17 = a4;
  pSid = a3;
  v28 = this;
  v18 = a6;
  v16 = -1;
  ApplicationState = ModernResourceEnforcer::FindOrCreateApplicationState(this, a2, (union _RM_SID *)a3, a4, a5, a6);
  v11 = ApplicationState;
  if ( ApplicationState )
  {
    if ( a8 )
    {
      memset_0(&v29, 0, 0x30uLL);
      v29 = 1;
      v12 = v21;
      v13 = (*((__int64 (__fastcall **)(void *, _QWORD, unsigned __int64, int *))v28 + 5))(v27, a5, v18, &v29);
      v15 = v13;
      if ( v13 >= 0 )
        v12 = v30;
      v21 = v12;
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v32 = &v15;
        v33 = 4LL;
        TlgCreateWsz(&v34, pwsz);
        v22 = a5;
        v35 = &v22;
        v37 = &v18;
        v39 = &v23;
        v36 = 4LL;
        v38 = 8LL;
        v23 = v12;
        v40 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007BE03, 0LL, 0LL, 7u, &v31);
        v13 = v15;
      }
      if ( v13 < 0 )
        goto LABEL_7;
      if ( v12 != -1 )
      {
        v8 = pwsz;
        goto LABEL_25;
      }
    }
    else if ( *(char *)ApplicationState < 0 )
    {
      if ( *((_WORD *)ApplicationState + 1) == 0xFFFF )
      {
        v16 = -1;
        goto LABEL_6;
      }
      v9 = *((unsigned __int16 *)ApplicationState + 1);
LABEL_25:
      v16 = v9;
      memset_0(&v29, 0, 0x30uLL);
      v29 = 1;
      v30 = v9;
      v15 = (*((__int64 (__fastcall **)(void *, _QWORD, unsigned __int64, int *))v28 + 4))(v27, a5, v18, &v29);
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v43 = 4LL;
        v42 = &v15;
        TlgCreateWsz(&v44, v8);
        v24 = a5;
        v45 = &v24;
        v47 = &v18;
        v49 = &v25;
        v46 = 4LL;
        v48 = 8LL;
        v25 = v9;
        v50 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007BC43, 0LL, 0LL, 7u, &v41);
      }
    }
LABEL_6:
    *(_BYTE *)v11 = a8 | *(_BYTE *)v11 & 0xFE;
LABEL_7:
    v8 = pwsz;
    goto LABEL_8;
  }
  if ( hProvider <= 4u )
    return;
  if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v53 = 4LL;
    v52 = &v15;
    TlgCreateWsz(&v54, v8);
    TlgCreateSid(&v55, pSid);
    v56 = &v17;
    v58 = &v20;
    v60 = &v18;
    v57 = 4LL;
    v20 = a5;
    v59 = 4LL;
    v61 = cData;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007BCA7, 0LL, 0LL, cData, &v51);
  }
LABEL_8:
  if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
  {
    TlgCreateWsz(&pDesc, v8);
    v66 = 0;
    v69 = 0;
    p_pSid = &pSid;
    v67 = &v18;
    LODWORD(pSid) = a5;
    v65 = 4;
    v68 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007BE6D, 0LL, 0LL, 5u, &pData);
  }
}
