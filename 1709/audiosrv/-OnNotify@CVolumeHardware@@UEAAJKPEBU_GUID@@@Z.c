/*
 * XREFs of ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x180069BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18006A120 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeHardware::OnNotify(CVolumeHardware *this, unsigned int a2, const struct _GUID *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax

  v6 = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_a99c65f464be33b31308c514a5524983_Traceguids, this);
  }
  v7 = *(_QWORD *)&a3->Data1 - *((_QWORD *)this + 32);
  if ( *(_QWORD *)&a3->Data1 == *((_QWORD *)this + 32) )
    v7 = *(_QWORD *)a3->Data4 - *((_QWORD *)this + 33);
  if ( v7 )
  {
    CVolumeHardware::ReadChannelLevelsFromHardware(this);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 40LL))(
           *((_QWORD *)this + 16),
           a2,
           a3);
    v6 = v8;
    if ( v8 < 0 )
      AudSrvTraceLoggingErrorHelper("CVolumeHardware::OnNotify", 1372, v8);
  }
  return v6;
}
