/*
 * XREFs of ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18007A2D4
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::CloseAudioHandle(CAudioStream *this)
{
  struct IUnknown **v2; // rdi
  __int64 *v3; // rdi
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

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
    v3 = (__int64 *)((char *)this + 192);
    if ( *((_QWORD *)this + 24) )
    {
      v4 = *v3;
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      if ( *v3 )
        ATL::AtlComPtrAssign((struct IUnknown **)this + 24, 0LL);
    }
  }
  v5 = (*(__int64 (__fastcall **)(CAudioResourceManager *, _QWORD, char *))(*(_QWORD *)g_AudioResourceManager + 32LL))(
         g_AudioResourceManager,
         *((_QWORD *)this + 7),
         (char *)this + 8);
  v6 = *((_QWORD *)this + 7);
  v10 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 80LL))(v6, &v10);
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 224LL))(
    v10,
    2LL,
    0xFFFFFFFFLL,
    *((unsigned int *)this + 101));
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v10);
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_QWORD *)this + 6) = 0LL;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::CloseAudioHandle", 536, v5);
  v8 = (char *)*((_QWORD *)this + 64);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    SetEvent(v8);
  return (unsigned int)v5;
}
