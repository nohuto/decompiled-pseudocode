/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18007A900
 * Callers:
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x180079620 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??A?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z @ 0x18006C3E8 (--A-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z.c)
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x18006D604 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x1800791D0 (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x1800791F8 (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x180079238 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18007A7FC (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        CAudioSessionNotificationProcess *this)
{
  __int64 *v2; // r14
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // edi
  _QWORD *v5; // rax
  _DWORD *v6; // rax
  unsigned int i; // r15d
  ATL::CAtlException *v9; // [rsp+28h] [rbp-40h] BYREF

  v2 = (__int64 *)this;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
    {
      v5 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                       &v3[1].DebugInfo,
                       i);
      if ( operator==(v5, v2) )
      {
        v6 = (_DWORD *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](&v3[1].SpinCount, i);
        --*v6;
        if ( !*(_DWORD *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](
                           &v3[1].SpinCount,
                           i) )
        {
          ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
            &v3[1].DebugInfo,
            i);
          ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&v3[1].SpinCount, i);
          goto LABEL_10;
        }
      }
    }
  }
  catch ( ATL::CAtlException *v9 )
  {
    v3 = lpCriticalSection;
    v2 = (__int64 *)this;
    v4 = *(_DWORD *)v9;
  }
LABEL_10:
  LeaveCriticalSection(v3);
  CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess((CAudioSessionNotificationProcess *)v2);
  return v4;
}
