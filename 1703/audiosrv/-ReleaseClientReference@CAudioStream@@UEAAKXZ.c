/*
 * XREFs of ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019490
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x1800148D0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180015200 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18001D0E0 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180032590 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::ReleaseClientReference(CAudioStream *this)
{
  unsigned __int32 v2; // edi
  unsigned int (__fastcall *v3)(CAudioStream *__hidden); // rax

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
      this,
      *((_DWORD *)this + 9));
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 9);
  if ( !v2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16);
  v3 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this + 16LL);
  if ( v3 == CAudioStream::Release )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16);
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 1LL);
    }
  }
  else
  {
    v3(this);
  }
  return v2;
}
