/*
 * XREFs of ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x1800B6440
 * Callers:
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x1800C26E0 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdg @ 0x1800A5068 (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioStream::SetStreamChannelVolume(CAudioStream *this, unsigned int a2, float a3, int *a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  float v9; // xmm7_4
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Fu,
      (__int64)&WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
      this,
      a2,
      a3);
  }
  if ( (unsigned int)v5 < *((_DWORD *)this + 23) )
  {
    v8 = *((_QWORD *)this + 14);
    v9 = *(float *)(v8 + 4 * v5);
    *(float *)(v8 + 4 * v5) = a3;
    (*(void (__fastcall **)(CAudioStream *, _QWORD, _QWORD))(*(_QWORD *)this + 120LL))(this, 0LL, 0LL);
    if ( a4 )
      *a4 = v9 == a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x573,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
