/*
 * XREFs of ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x1400404F4
 * Callers:
 *     ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140042300 (-UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::SetLoopbackConstriction(CPipeInstance *this, __int64 a2)
{
  int v2; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 30) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21), a2);
    if ( v2 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x37u,
          (__int64)&WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
          v2);
      }
      AudDGTraceLoggingErrorHelper("CPipeInstance::SetLoopbackConstriction", 0x105Bu, v2);
    }
  }
  return (unsigned int)v2;
}
