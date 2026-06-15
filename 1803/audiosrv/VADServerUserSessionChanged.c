/*
 * XREFs of VADServerUserSessionChanged @ 0x180008AC4
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x180008A10 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000524C (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800052B4 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800083E0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008CD0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008D50 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180008D5C (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x180008EC0 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002FDF0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180030D50 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180031CA0 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x1800B5070 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, __int64 a2)
{
  DWORD v2; // r14d
  unsigned int TsAudioProtocol; // r15d
  CAudioSessionManagerProvider *v6; // rbx
  void (__fastcall *v7)(CAudioSessionManagerProvider *); // rax
  unsigned int v8; // r12d
  void (__fastcall *v9)(CAudioSessionManagerProvider *); // rax
  void (__fastcall *v10)(CVolumeProvider *__hidden, unsigned int, unsigned int); // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v17; // rbx
  void (__fastcall *v18)(struct CAudioSessionManagerProvider *); // rax
  LPCRITICAL_SECTION v19; // [rsp+20h] [rbp-59h] BYREF
  char v20; // [rsp+28h] [rbp-51h]
  LPCRITICAL_SECTION v21; // [rsp+30h] [rbp-49h] BYREF
  char v22; // [rsp+38h] [rbp-41h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-39h] BYREF
  char v24; // [rsp+48h] [rbp-31h]
  _BYTE v25[128]; // [rsp+50h] [rbp-29h] BYREF
  __int64 StartPosition; // [rsp+E8h] [rbp+6Fh] BYREF
  struct CAudioSessionManagerProvider *v27; // [rsp+F0h] [rbp+77h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
    TsAudioProtocol = GetTsAudioProtocol(v2);
  else
    TsAudioProtocol = StartPosition;
  v22 = 0;
  v21 = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v21);
  v6 = g_SingletonAudioSessionManagerProvider;
  if ( g_SingletonAudioSessionManagerProvider )
  {
    v7 = *(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
    if ( (char *)v7 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
      ATL::CComObject<CAudioSessionManagerProvider>::AddRef(g_SingletonAudioSessionManagerProvider);
    else
      v7(g_SingletonAudioSessionManagerProvider);
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v21);
    v24 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 64);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v8 = 0;
    if ( *((_QWORD *)v6 + 14) )
    {
      v12 = 0LL;
      do
      {
        _mm_lfence();
        v13 = *(_QWORD *)(*((_QWORD *)v6 + 13) + 8 * v12);
        CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v25);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, v2);
        }
        if ( *(_DWORD *)(v13 + 312) != TsAudioProtocol )
        {
          v20 = 0;
          v19 = (LPCRITICAL_SECTION)(v13 + 24);
          ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v19);
          StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition((__int64 *)(v13 + 64));
          while ( StartPosition )
          {
            v14 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                               v13 + 64,
                               &StartPosition);
            if ( v14 && *(_DWORD *)(v14 + 716) == v2 )
            {
              LOBYTE(v15) = 1;
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v14 + 16) + 32LL))(v14 + 16, 4LL, v15);
            }
          }
          if ( v20 )
          {
            LeaveCriticalSection(v19);
            v20 = 0;
          }
        }
        CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v25);
        v12 = ++v8;
      }
      while ( (unsigned __int64)v8 < *((_QWORD *)v6 + 14) );
    }
    if ( v24 )
      LeaveCriticalSection(lpCriticalSection);
    v9 = *(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v9 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v6);
    else
      v9(v6);
  }
  else if ( v22 )
  {
    LeaveCriticalSection(v21);
  }
  if ( g_pVolumeProvider )
  {
    v10 = *(void (__fastcall **)(CVolumeProvider *__hidden, unsigned int, unsigned int))(*(_QWORD *)g_pVolumeProvider
                                                                                       + 32LL);
    if ( v10 == CVolumeProvider::NotifyNewAudioProtocol )
      CVolumeProvider::NotifyNewAudioProtocol(g_pVolumeProvider, v2, TsAudioProtocol);
    else
      v10(g_pVolumeProvider, v2, TsAudioProtocol);
  }
  if ( a1 != 5 && a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 )
  {
    if ( a1 <= 6 )
      goto LABEL_53;
    if ( a1 <= 9 )
      return 0LL;
    if ( a1 == 11 )
    {
      v27 = 0LL;
      AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v27);
      v17 = v27;
      if ( AudioSessionManagerProvider >= 0 )
        CAudioSessionManagerProvider::NotifySessionTerminate(v27, *(_DWORD *)(a2 + 4));
      if ( v17 )
      {
        v18 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v17 + 16LL);
        if ( (char *)v18 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release(v17);
        else
          v18(v17);
      }
    }
    else
    {
LABEL_53:
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_50e5db73954a39d05dfaedbce4ea5db2_Traceguids, a1);
      }
    }
  }
  return 0LL;
}
