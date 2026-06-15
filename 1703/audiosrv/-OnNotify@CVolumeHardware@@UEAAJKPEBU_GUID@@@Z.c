/*
 * XREFs of ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x180085EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180086420 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 */

__int64 __fastcall CVolumeHardware::OnNotify(CVolumeHardware *this, unsigned int a2, const struct _GUID *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax

  v6 = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Au,
      (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids,
      this);
  }
  v7 = *(_QWORD *)&a3->Data1 - *((_QWORD *)this + 32);
  if ( *(_QWORD *)&a3->Data1 == *((_QWORD *)this + 32) )
    v7 = *(_QWORD *)a3->Data4 - *((_QWORD *)this + 33);
  if ( v7 )
  {
    CVolumeHardware::ReadChannelLevelsFromHardware(this);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 48LL))(
           *((_QWORD *)this + 16),
           a2,
           a3);
    v6 = v8;
    if ( v8 < 0 )
      AudSrvTraceLoggingErrorHelper("CVolumeHardware::OnNotify", 1372, v8);
  }
  return v6;
}
