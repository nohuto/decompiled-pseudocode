/*
 * XREFs of ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x180019690
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180004700 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::GetSessionInfo(CAudioStream *this, struct IAudioSessionInfo **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v4 = a2 == 0LL ? 0x80004003 : 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_c45047042f6d344739c91af1a021533b_Traceguids,
      *((_QWORD *)this + 7));
  }
  if ( a2 )
  {
    v5 = *((_QWORD *)this + 7);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a2 = (struct IAudioSessionInfo *)*((_QWORD *)this + 7);
  }
  return v4;
}
