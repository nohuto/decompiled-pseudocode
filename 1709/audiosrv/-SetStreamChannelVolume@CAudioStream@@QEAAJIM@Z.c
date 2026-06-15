/*
 * XREFs of ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x18007D56C
 * Callers:
 *     ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x18008C940 (-SetChannelVolume@CVADServer@@UEAAJIM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x18006BA64 (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioStream::SetStreamChannelVolume(CAudioStream *this, unsigned int a2, float a3)
{
  __int64 v4; // rdi

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x22u,
      (__int64)&WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
      this,
      a2,
      a3);
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 21) )
  {
    *(float *)(*((_QWORD *)this + 14) + 4 * v4) = a3;
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 120LL))(this);
    return 0LL;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetStreamChannelVolume", 1303, -2147024809);
    return 2147942487LL;
  }
}
