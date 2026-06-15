/*
 * XREFs of ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x180019540
 * Callers:
 *     ?AddPendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x180013DA4 (-AddPendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015200 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::AddClientReference(CAudioStream *this)
{
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
      this,
      *((_DWORD *)this + 9));
  }
  (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 9);
}
