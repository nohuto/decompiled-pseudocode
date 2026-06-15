/*
 * XREFs of ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180014190
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18008DE10 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z @ 0x180015F34 (-GetCurrentSessionGain@CAudioSession@@IEAAJAEA_NAEAMAEA_J@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180015FB0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18001D520 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPoli.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180026BB4 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S_guid_ @ 0x1800906D4 (WPP_SF_S_guid_.c)
 *     WPP_SF_Sg @ 0x18009086C (WPP_SF_Sg.c)
 */

void __fastcall CAudioSession::RecalculateSessionVolume(
        __int64 a1,
        unsigned int a2,
        GUID *a3,
        unsigned int a4,
        char a5,
        __int64 *a6)
{
  char *v6; // rbx
  __int64 v9; // rdi
  int CurrentPolicyGain; // r14d
  unsigned int v11; // r12d
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  void (__fastcall *v15)(__int64, _QWORD, __int64, __int128 *, int, int, unsigned int, char *, __int64, __int64); // rax
  int v16; // r8d
  CVolumeStrip *v17; // rcx
  int v18; // xmm6_4
  int v19; // r15d
  __int64 (__fastcall *v20)(CAudioSession *); // rax
  CAudioSession *v21; // rcx
  GUID *v22; // rax
  int v23; // [rsp+28h] [rbp-99h]
  bool v24; // [rsp+68h] [rbp-59h] BYREF
  int v25; // [rsp+6Ch] [rbp-55h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-51h] BYREF
  __int64 v27; // [rsp+78h] [rbp-49h]
  char *v28; // [rsp+80h] [rbp-41h]
  unsigned __int64 v29; // [rsp+88h] [rbp-39h]
  GUID *v30; // [rsp+90h] [rbp-31h]
  void *Block; // [rsp+98h] [rbp-29h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-11h] BYREF
  int v35; // [rsp+C0h] [rbp-1h]
  int v36; // [rsp+C4h] [rbp+3h]
  bool v37; // [rsp+118h] [rbp+57h] BYREF
  unsigned int v38; // [rsp+120h] [rbp+5Fh]
  unsigned int v39; // [rsp+130h] [rbp+6Fh]

  v39 = a4;
  v38 = a2;
  v6 = 0LL;
  v34 = _xmm;
  Block = 0LL;
  v35 = 1065353216;
  v36 = 1065353216;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v22 = a3;
    if ( !a3 )
      v22 = &GUID_00000000_0000_0000_0000_000000000000;
    WPP_SF_S_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 112, (_DWORD)a3, *(_QWORD *)(a1 + 848), (__int64)v22);
  }
  v9 = a1 - 16;
  CurrentPolicyGain = CAudioSession::GetCurrentPolicyGain(
                        (CAudioSession *)(a1 - 16),
                        a6,
                        &v24,
                        (struct SessionPolicyGains *)&v34,
                        &v33);
  if ( CurrentPolicyGain )
    goto LABEL_40;
  CurrentPolicyGain = CAudioSession::GetCurrentSessionGain((CAudioSession *)(a1 - 16), &v37, (float *)&v25, &v32);
  if ( CurrentPolicyGain )
    goto LABEL_40;
  LOBYTE(v27) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 864);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v11 = *(_DWORD *)(a1 + 1016);
  v12 = v11;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&Block, v11);
  v6 = (char *)Block;
  if ( !Block )
  {
    CurrentPolicyGain = -2147024882;
    if ( !(_BYTE)v27 )
      goto LABEL_41;
    LeaveCriticalSection(lpCriticalSection);
LABEL_40:
    if ( CurrentPolicyGain >= 0 )
      goto LABEL_29;
LABEL_41:
    AudSrvTraceLoggingErrorHelper("CAudioSession::RecalculateSessionVolume", 0x12ACu, CurrentPolicyGain);
    goto LABEL_29;
  }
  if ( v11 )
  {
    v13 = 0LL;
    do
    {
      *(_DWORD *)&v6[v13] = *(_DWORD *)(v13 + *(_QWORD *)(a1 + 1024));
      v13 += 4LL;
      --v12;
    }
    while ( v12 );
  }
  if ( (_BYTE)v27 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !a5 )
  {
    LOBYTE(v14) = v24;
    v15 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, int, int, unsigned int, char *, __int64, __int64))(*(_QWORD *)v9 + 456LL);
    LOBYTE(v23) = v37;
    if ( (char *)v15 == (char *)CPerStreamVolumeAudioSession::UpdateAudioVolume )
      CPerStreamVolumeAudioSession::UpdateAudioVolume(a1 - 16, v38, v14, &v34, v23, v25, v11, v6, v33, v32);
    else
      v15(a1 - 16, v38, v14, &v34, v23, v25, v11, v6, v33, v32);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(a1 - 16, v13);
  LOBYTE(v27) = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 864);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_Sg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      113,
      v16,
      *(_QWORD *)(a1 + 848),
      *(_OWORD *)&_mm_cvtps_pd((__m128)*(unsigned int *)(a1 + 904)));
    v17 = WPP_GLOBAL_Control;
  }
  v18 = *(_DWORD *)(a1 + 904);
  v19 = *(_DWORD *)(a1 + 908);
  if ( (_BYTE)v27 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v17 = WPP_GLOBAL_Control;
  }
  if ( !v38 )
  {
    LODWORD(v28) = v18;
    v29 = (unsigned __int64)a3;
    BYTE4(v28) = v19 != 0;
    lpCriticalSection = (LPCRITICAL_SECTION)&CAudioSessionVolumeChanged::`vftable';
LABEL_38:
    v27 = a1 - 16;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(a1 + 616));
    v17 = WPP_GLOBAL_Control;
    goto LABEL_23;
  }
  if ( v38 == 1 )
  {
    v28 = v6;
    lpCriticalSection = (LPCRITICAL_SECTION)&CAudioChannelVolumeChanged::`vftable';
    v29 = __PAIR64__(v39, v11);
    v30 = a3;
    goto LABEL_38;
  }
LABEL_23:
  if ( v17 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v17 + 28) & 0x40) != 0 && *((_BYTE *)v17 + 25) >= 5u )
    WPP_SF_S(*((_QWORD *)v17 + 2), 114LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, *(_QWORD *)(a1 + 848));
  v20 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v9 + 16LL);
  v21 = (CAudioSession *)(a1 - 16);
  if ( v20 != CAudioSession::Release )
  {
    v20(v21);
    goto LABEL_40;
  }
  CAudioSession::Release(v21);
LABEL_29:
  free(v6);
}
