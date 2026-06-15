/*
 * XREFs of ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x18002F120
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?GetSessionInfo@CAudioStream@@W7EAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x180065A80 (-GetSessionInfo@CAudioStream@@W7EAAJPEAPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::GetSessionInfo(CAudioStream *this, struct IAudioSessionInfo **a2)
{
  int v2; // ebx
  struct IAudioSessionInfo *v5; // rcx

  v2 = 0;
  if ( !a2 )
    v2 = -2147467261;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
      *((_QWORD *)this + 8));
  }
  if ( v2 >= 0 )
  {
    v5 = (struct IAudioSessionInfo *)*((_QWORD *)this + 8);
    if ( v5 )
    {
      (*(void (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v5 + 8LL))(v5);
      v5 = (struct IAudioSessionInfo *)*((_QWORD *)this + 8);
    }
    *a2 = v5;
  }
  return (unsigned int)v2;
}
