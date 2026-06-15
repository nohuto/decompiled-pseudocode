/*
 * XREFs of ??0CAudioSession@@IEAA@XZ @ 0x18001A44C
 * Callers:
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x18002D03C (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800790AC (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x18001491C (-UpdateRehashThresholds@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CEleme.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

CAudioSession *__fastcall CAudioSession::CAudioSession(CAudioSession *this)
{
  struct ATL::CStringData *(__fastcall *v2)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *NilString; // rax
  struct ATL::CStringData *(__fastcall *v4)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *v5; // rax
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *v7; // rax
  struct ATL::CStringData *(__fastcall *v8)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *v9; // rax
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *v11; // rax
  struct ATL::CStringData *(__fastcall *v12)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *v13; // rax
  struct ATL::CStringData *(__fastcall *v14)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *v15; // rax

  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 48));
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 128));
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 200));
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_WORD *)this + 150) = 0;
  *((_BYTE *)this + 302) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 78) = 180000;
  v2 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v2 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v2((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 40) = (char *)NilString + 24;
  v4 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v4 == ATL::CAtlStringMgr::GetNilString )
    v5 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v5 = v4((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 41) = (char *)v5 + 24;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 352));
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 432));
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 17;
  *((_QWORD *)this + 63) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 131) = 10;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 123) = 1061158912;
  *((_DWORD *)this + 124) = 1048576000;
  *((_DWORD *)this + 125) = 1074790400;
  ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::UpdateRehashThresholds((__int64)this + 472);
  *((_DWORD *)this + 136) = 0;
  *((_BYTE *)this + 548) = 0;
  *((_QWORD *)this + 69) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 560));
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_DWORD *)this + 156) = 0;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 680));
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v6 == ATL::CAtlStringMgr::GetNilString )
    v7 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v7 = v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 90) = (char *)v7 + 24;
  v8 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v8 == ATL::CAtlStringMgr::GetNilString )
    v9 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v9 = v8((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 91) = (char *)v9 + 24;
  v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v10 == ATL::CAtlStringMgr::GetNilString )
    v11 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v11 = v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 92) = (char *)v11 + 24;
  v12 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v12 == ATL::CAtlStringMgr::GetNilString )
    v13 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v13 = v12((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 95) = (char *)v13 + 24;
  *((_DWORD *)this + 192) = 0;
  *(GUID *)((char *)this + 744) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 195) = -1;
  *((_DWORD *)this + 194) = 0;
  *((_DWORD *)this + 196) = 0;
  v14 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v14 == ATL::CAtlStringMgr::GetNilString )
    v15 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v15 = v14((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 99) = (char *)v15 + 24;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 20, 0, 0);
  *((_QWORD *)this + 105) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_QWORD *)this + 107) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 864));
  *((_QWORD *)this + 113) = 1065353216LL;
  *((_QWORD *)this + 115) = &AudioSrvVolumeTelemetry::`vftable';
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_DWORD *)this + 236) = 0;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 952));
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 115) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 252) = 0;
  *((_DWORD *)this + 254) = 0;
  *((_QWORD *)this + 128) = 0LL;
  *((_BYTE *)this + 1032) = 0;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 104) = 0;
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 412));
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 420));
  *((_QWORD *)this + 49) = GetTickCount64();
  return this;
}
