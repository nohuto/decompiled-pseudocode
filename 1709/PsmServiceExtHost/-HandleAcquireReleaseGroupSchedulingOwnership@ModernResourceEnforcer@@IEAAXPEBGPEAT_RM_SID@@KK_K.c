/*
 * XREFs of ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000C694
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000BCB0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 * Callees:
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000CAA0 (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000CB94 (-FindApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x1800179B4 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
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
  int v9; // esi
  struct EnforcerApplicationState *ApplicationState; // r15
  int v13; // eax
  int v14; // r10d
  int v15; // r9d
  const WCHAR *v16; // r13
  int v17; // r10d
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  const WCHAR *v20; // rsi
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  LPCGUID v23; // r8
  LPCGUID v24; // r9
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  LPCWSTR pwsz; // [rsp+38h] [rbp-C8h]
  int v27; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+50h] [rbp-B0h]
  unsigned int v30; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v31; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-A4h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+68h] [rbp-98h] BYREF
  SID *pSid; // [rsp+70h] [rbp-90h] BYREF
  ModernResourceEnforcer *v37; // [rsp+78h] [rbp-88h]
  void *v38; // [rsp+80h] [rbp-80h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  int v40; // [rsp+98h] [rbp-68h] BYREF
  int v41; // [rsp+9Ch] [rbp-64h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v43; // [rsp+E0h] [rbp-20h]
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+F0h] [rbp-10h] BYREF
  SID **p_pSid; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v50; // [rsp+110h] [rbp+10h]
  int v51; // [rsp+118h] [rbp+18h]
  int v52; // [rsp+11Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  int *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]
  int *v61; // [rsp+180h] [rbp+80h]
  __int64 v62; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR v63; // [rsp+190h] [rbp+90h] BYREF
  int *v64; // [rsp+1B0h] [rbp+B0h]
  __int64 v65; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int *v67; // [rsp+1D0h] [rbp+D0h]
  __int64 v68; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 *v69; // [rsp+1E0h] [rbp+E0h]
  __int64 v70; // [rsp+1E8h] [rbp+E8h]
  int *v71; // [rsp+1F0h] [rbp+F0h]
  __int64 v72; // [rsp+1F8h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR v73; // [rsp+200h] [rbp+100h] BYREF
  int *v74; // [rsp+220h] [rbp+120h]
  __int64 v75; // [rsp+228h] [rbp+128h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+230h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+240h] [rbp+140h] BYREF
  unsigned int *v78; // [rsp+250h] [rbp+150h]
  __int64 v79; // [rsp+258h] [rbp+158h]
  unsigned int *v80; // [rsp+260h] [rbp+160h]
  __int64 v81; // [rsp+268h] [rbp+168h]
  unsigned __int64 *v82; // [rsp+270h] [rbp+170h]
  __int64 v83; // [rsp+278h] [rbp+178h]

  v37 = this;
  v9 = -1;
  v38 = a7;
  pSid = a3;
  pwsz = a2;
  v28 = a6;
  v27 = -1;
  ApplicationState = ModernResourceEnforcer::FindApplicationState(this, a2, (union _RM_SID *)a3, a4, a5, a6);
  if ( ApplicationState
    || (ApplicationState = ModernResourceEnforcer::CreateApplicationState(v37, a2, (union _RM_SID *)a3, a4, a5, a6)) != 0LL )
  {
    if ( a8 )
    {
      memset_0(&v40, 0, 0x30uLL);
      v40 |= 1u;
      v13 = (*((__int64 (__fastcall **)(void *, _QWORD, unsigned __int64, int *))v37 + 15))(v38, a5, v28, &v40);
      v14 = v29;
      v15 = v13;
      v25 = v13;
      if ( v13 >= 0 )
        v14 = v41;
      v29 = v14;
      if ( hProvider <= 4u )
      {
        v16 = pwsz;
      }
      else
      {
        v16 = pwsz;
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        {
          v55 = 4LL;
          v54 = &v25;
          TlgCreateWsz(&pDesc, pwsz);
          v32 = a5;
          v57 = &v32;
          v59 = &v28;
          v61 = &v33;
          v58 = 4LL;
          v60 = 8LL;
          v33 = v17;
          v62 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005580F, v18, v19, 7u, &pData);
          v15 = v25;
          v14 = v29;
        }
      }
      if ( v15 < 0 )
        goto LABEL_14;
      if ( v14 != -1 )
        goto LABEL_21;
    }
    else if ( *(char *)ApplicationState < 0 )
    {
      if ( *((_WORD *)ApplicationState + 1) == 0xFFFF )
      {
        v27 = -1;
        goto LABEL_13;
      }
      v9 = *((unsigned __int16 *)ApplicationState + 1);
      v16 = pwsz;
LABEL_21:
      v27 = v9;
      memset_0(&v40, 0, 0x30uLL);
      v40 |= 1u;
      v41 = v9;
      v25 = (*((__int64 (__fastcall **)(void *, _QWORD, unsigned __int64, int *))v37 + 14))(v38, a5, v28, &v40);
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v65 = 4LL;
        v64 = &v25;
        TlgCreateWsz(&v66, v16);
        v34 = a5;
        v67 = &v34;
        v69 = &v28;
        v71 = &v35;
        v68 = 4LL;
        v70 = 8LL;
        v35 = v9;
        v72 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005564F, v21, v22, 7u, &v63);
      }
    }
LABEL_13:
    *(_BYTE *)ApplicationState = a8 | *(_BYTE *)ApplicationState & 0xFE;
LABEL_14:
    v20 = pwsz;
    goto LABEL_15;
  }
  if ( hProvider <= 4u )
    return;
  v20 = pwsz;
  if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v75 = 4LL;
    v74 = &v25;
    TlgCreateWsz(&v76, pwsz);
    TlgCreateSid(&v77, pSid);
    v30 = a4;
    v78 = &v30;
    v80 = &v31;
    v82 = &v28;
    v79 = 4LL;
    v31 = a5;
    v81 = 4LL;
    v83 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800556B3, v23, v24, 8u, &v73);
  }
LABEL_15:
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    TlgCreateWsz(&v46, v20);
    v49 = 0;
    v52 = 0;
    p_pSid = &pSid;
    v50 = &v28;
    LODWORD(pSid) = a5;
    v48 = 4;
    v51 = 8;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180055879 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v43 = &unk_180055884;
    UserData.Reserved = 2;
    v44 = 62;
    v45 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
}
