/*
 * XREFs of ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180079440
 * Callers:
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x180079390 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??A?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z @ 0x18006C3E8 (--A-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAAEAK_K@Z.c)
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x18006C504 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x1800791D0 (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x1800791F8 (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x180079238 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCAudioSessionNotificationProcess@@@Z @ 0x1800792F0 (-Add@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotification.c)
 *     ?RemoveAt@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18007A7FC (-RemoveAt@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSessionNotific.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::AddInterface(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  unsigned int i; // r14d
  bool v5; // zf
  _QWORD *v6; // rax
  _DWORD *v7; // rax
  ATL::CAtlException *v9; // rbx
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v12; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+80h] [rbp+18h]
  unsigned __int64 v16; // [rsp+88h] [rbp+20h]

  v2 = a1;
  v3 = 0;
  EnterCriticalSection(a1);
  for ( i = 0; ; ++i )
  {
    v5 = i == *(_QWORD *)&v2[1].LockCount;
    if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
      break;
    v6 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v2[1].DebugInfo, i);
    if ( operator==(v6, a2) )
    {
      v5 = i == *(_QWORD *)&v2[1].LockCount;
      break;
    }
  }
  if ( v5 )
  {
    try
    {
      v16 = ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::Add(
              &v2[1].DebugInfo,
              a2);
    }
    catch ( ATL::CAtlException *v11 )
    {
      v9 = v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      v3 = *(_DWORD *)v9;
      if ( *(int *)v9 < 0 )
      {
        v2 = a1;
        goto LABEL_14;
      }
      v2 = a1;
    }
    v3 = 0;
    try
    {
      ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&v2[1].SpinCount);
    }
    catch ( ATL::CAtlException *v12 )
    {
      v10 = v12;
      if ( *(_DWORD *)v12 == -1073741571 )
        _o__resetstkoflw();
      v15 = *(_DWORD *)v10;
      v3 = *(_DWORD *)v10;
      v2 = a1;
      if ( v15 < 0 )
        ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::RemoveAt(
          &a1[1],
          v16);
    }
  }
  else
  {
    v7 = (_DWORD *)ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::operator[](&v2[1].SpinCount, i);
    ++*v7;
  }
LABEL_14:
  LeaveCriticalSection(v2);
  CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess((CAudioSessionNotificationProcess *)a2);
  return v3;
}
