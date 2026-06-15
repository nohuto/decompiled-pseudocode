/*
 * XREFs of ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180096508
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioStream::CloseAudioHandle(CAudioStream *this)
{
  struct IUnknown **v2; // rdi
  int v3; // eax
  unsigned int v4; // edi
  char *v5; // rcx

  if ( *((_DWORD *)this + 33) == 2 )
  {
    v2 = (struct IUnknown **)((char *)this + 176);
    if ( *((_QWORD *)this + 22) )
    {
      Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)this + 176));
      if ( *v2 )
        ATL::AtlComPtrAssign(v2, 0LL);
    }
    if ( *((_QWORD *)this + 23) )
    {
      Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)this + 184));
      if ( *((_QWORD *)this + 23) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 23, 0LL);
    }
    if ( *((_QWORD *)this + 24) )
    {
      Microsoft::WRL::WeakRef::~WeakRef((CAudioStream *)((char *)this + 192));
      if ( *((_QWORD *)this + 24) )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 24, 0LL);
    }
  }
  v3 = (*(__int64 (__fastcall **)(CAudioResourceManager *, _QWORD, char *))(*(_QWORD *)g_AudioResourceManager + 32LL))(
         g_AudioResourceManager,
         *((_QWORD *)this + 8),
         (char *)this + 8);
  v4 = v3;
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::CloseAudioHandle", 466, v3);
  v5 = (char *)*((_QWORD *)this + 66);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(v5);
  return v4;
}
