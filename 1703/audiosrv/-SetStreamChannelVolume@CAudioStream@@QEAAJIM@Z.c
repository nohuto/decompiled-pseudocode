/*
 * XREFs of ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x180096A68
 * Callers:
 *     ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x1800A1740 (-SetChannelVolume@CVADServer@@UEAAJIM@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdg @ 0x1800878A0 (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioStream::SetStreamChannelVolume(CAudioStream *this, unsigned int a2, float a3)
{
  __int64 v4; // rdi

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x23u,
      (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids,
      this,
      a2,
      a3);
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 22) )
  {
    *(float *)(*((_QWORD *)this + 14) + 4 * v4) = a3;
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 128LL))(this);
    return 0LL;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetStreamChannelVolume", 1357, -2147024809);
    return 2147942487LL;
  }
}
