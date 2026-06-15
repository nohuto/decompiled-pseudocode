/*
 * XREFs of ?RemovePendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x18007A6F4
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18007BE1C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::RemovePendingStreamCreate(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]

  v4 = -2147023728;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 272);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = 0LL;
  v6 = *((_QWORD *)this + 40);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)this + 39);
      if ( *(struct CAudioStream **)(v7 + 8 * v5) == a2 )
        break;
      if ( ++v5 >= v6 )
        goto LABEL_8;
    }
    if ( v5 >= v6 )
      ATL::AtlThrowImpl(-2147024809);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 8 * v5) + 72LL))(*(_QWORD *)(v7 + 8 * v5));
    ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt((char *)this + 312);
    v4 = 0;
  }
LABEL_8:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
