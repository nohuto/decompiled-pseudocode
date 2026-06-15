/*
 * XREFs of ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180018810
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180073BE0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x18001ACAC (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18002D020 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPoli.c)
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x18002DA28 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_S_guid_ @ 0x180076C80 (WPP_SF_S_guid_.c)
 *     WPP_SF_Sg @ 0x180076E18 (WPP_SF_Sg.c)
 */

void __fastcall CAudioSession::RecalculateSessionVolume(
        __int64 a1,
        unsigned int a2,
        GUID *a3,
        unsigned int a4,
        char a5,
        __int64 *a6)
{
  char *v8; // rbx
  __int64 v9; // rdi
  int CurrentPolicyGain; // r14d
  int v11; // xmm6_4
  unsigned int v12; // r13d
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  void (__fastcall *v16)(__int64, _QWORD, __int64, float *, int, int, unsigned int, char *, __int64, __int64); // rax
  int v17; // r8d
  CAudioDGProcess *v18; // rcx
  int v19; // xmm6_4
  int v20; // r15d
  __int64 (__fastcall *v21)(CAudioSession *); // rax
  CAudioSession *v22; // rcx
  GUID *v23; // rax
  int v24; // [rsp+28h] [rbp-79h]
  bool v25; // [rsp+68h] [rbp-39h] BYREF
  float v26; // [rsp+6Ch] [rbp-35h] BYREF
  size_t Size; // [rsp+70h] [rbp-31h] BYREF
  __int64 v28; // [rsp+78h] [rbp-29h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-21h] BYREF
  __int64 v30; // [rsp+88h] [rbp-19h]
  char *v31; // [rsp+90h] [rbp-11h]
  unsigned __int64 v32; // [rsp+98h] [rbp-9h]
  GUID *v33; // [rsp+A0h] [rbp-1h]
  bool v34; // [rsp+F8h] [rbp+57h]

  v26 = FLOAT_1_0;
  v8 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v23 = a3;
    if ( !a3 )
      v23 = &GUID_00000000_0000_0000_0000_000000000000;
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 105, (_DWORD)a3, *(_QWORD *)(a1 + 776), (__int64)v23);
  }
  v9 = a1 - 16;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(
                        (CAudioSession *)(a1 - 16),
                        a6,
                        &v25,
                        (struct SessionPolicyGains *)&v26,
                        &v28);
  if ( CurrentPolicyGain )
    goto LABEL_42;
  LOBYTE(v30) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(v9 + 864);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v11 = *(_DWORD *)(v9 + 904);
  v34 = *(_DWORD *)(v9 + 908) != 0;
  if ( (_BYTE)v30 )
    LeaveCriticalSection(lpCriticalSection);
  LOBYTE(v30) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 848);
  CurrentPolicyGain = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v12 = *(_DWORD *)(a1 + 1000);
  Size = 0LL;
  v13 = v12;
  if ( (int)ATL::AtlMultiply<unsigned __int64>(&Size, v12, 4LL) < 0 || (v8 = (char *)malloc(Size)) == 0LL )
  {
    CurrentPolicyGain = -2147024882;
    if ( !(_BYTE)v30 )
      goto LABEL_43;
    LeaveCriticalSection(lpCriticalSection);
LABEL_42:
    if ( CurrentPolicyGain >= 0 )
      goto LABEL_26;
LABEL_43:
    AudSrvTraceLoggingErrorHelper("CAudioSession::RecalculateSessionVolume", 0x1274u, CurrentPolicyGain);
    goto LABEL_26;
  }
  if ( v12 )
  {
    v14 = 0LL;
    do
    {
      *(_DWORD *)&v8[v14] = *(_DWORD *)(v14 + *(_QWORD *)(a1 + 1008));
      v14 += 4LL;
      --v13;
    }
    while ( v13 );
  }
  if ( (_BYTE)v30 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !a5 )
  {
    LOBYTE(v15) = v25;
    v16 = *(void (__fastcall **)(__int64, _QWORD, __int64, float *, int, int, unsigned int, char *, __int64, __int64))(*(_QWORD *)v9 + 448LL);
    LOBYTE(v24) = v34;
    if ( (char *)v16 == (char *)CPerStreamVolumeAudioSession::UpdateAudioVolume )
      CPerStreamVolumeAudioSession::UpdateAudioVolume(a1 - 16, a2, v15, &v26, v24, v11, v12, v8, v28, 50000LL);
    else
      v16(a1 - 16, a2, v15, &v26, v24, v11, v12, v8, v28, 50000LL);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(a1 - 16, v14);
  LOBYTE(v30) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 848);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      106,
      v17,
      *(_QWORD *)(a1 + 776),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 888)));
    v18 = WPP_GLOBAL_Control;
  }
  v19 = *(_DWORD *)(a1 + 888);
  v20 = *(_DWORD *)(a1 + 892);
  if ( (_BYTE)v30 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v18 = WPP_GLOBAL_Control;
  }
  if ( !a2 )
  {
    LODWORD(v31) = v19;
    v32 = (unsigned __int64)a3;
    BYTE4(v31) = v20 != 0;
    lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionVolumeChanged::`vftable';
LABEL_36:
    v30 = a1 - 16;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
      (LPCRITICAL_SECTION)(a1 + 544),
      (void (__fastcall ***)(_QWORD, CAudioSessionManager **))&lpCriticalSection);
    v18 = WPP_GLOBAL_Control;
    goto LABEL_22;
  }
  if ( a2 == 1 )
  {
    v31 = v8;
    lpCriticalSection = (LPCRITICAL_SECTION)&CAudioChannelVolumeChanged::`vftable';
    v32 = __PAIR64__(a4, v12);
    v33 = a3;
    goto LABEL_36;
  }
LABEL_22:
  if ( v18 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v18 + 28) & 0x40) != 0 && *((_BYTE *)v18 + 25) >= 5u )
    WPP_SF_S(*((_QWORD *)v18 + 2), 107LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, *(_QWORD *)(a1 + 776));
  v21 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v9 + 16LL);
  v22 = (CAudioSession *)(a1 - 16);
  if ( v21 != CAudioSession::Release )
  {
    v21(v22);
    goto LABEL_42;
  }
  CAudioSession::Release(v22);
LABEL_26:
  free(v8);
}
