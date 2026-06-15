/*
 * XREFs of ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001CA50
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800190E0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180027B60 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CAudioStream@@UEAAKXZ @ 0x18001D3B0 (-Release@CAudioStream@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 */

__int64 __fastcall CAudioStream::ReleaseClientReference(CAudioStream *this)
{
  unsigned __int32 v2; // edi
  unsigned int (__fastcall *v3)(CAudioStream *__hidden); // rax

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
      this,
      *((_DWORD *)this + 9));
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 9);
  if ( !v2 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16);
  v3 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this + 16LL);
  if ( v3 == CAudioStream::Release )
    CAudioStream::Release(this);
  else
    v3(this);
  return v2;
}
