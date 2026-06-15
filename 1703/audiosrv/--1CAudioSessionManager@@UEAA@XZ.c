/*
 * XREFs of ??1CAudioSessionManager@@UEAA@XZ @ 0x180092A60
 * Callers:
 *     ??_GCAudioSessionManager@@UEAAPEAXI@Z @ 0x180092B58 (--_GCAudioSessionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA@XZ @ 0x18002EA20 (--1-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x18007C2F0 (--1-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotificationPr.c)
 *     ?RemoveAll@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXXZ @ 0x18009431C (-RemoveAll@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800943AC (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 */

void __fastcall CAudioSessionManager::~CAudioSessionManager(CAudioSessionManager *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 30) - 24LL));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  while ( *((_QWORD *)this + 23) )
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
      (char *)this + 176,
      0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::~CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>((void **)this + 26);
  ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::~CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>((void **)this + 22);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAll((char *)this + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
