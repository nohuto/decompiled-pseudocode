/*
 * XREFs of ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18007A1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x1800791D0 (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 *     WPP_SF_dd @ 0x180089EEC (WPP_SF_dd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManagerNotification::Invoke(__int64 a1, CAudioSessionNotificationProcess *a2)
{
  int MediaEvent; // edi
  int v5; // ebp
  unsigned int v6; // eax
  __int64 v7; // r8
  int v8; // eax
  unsigned __int16 v9; // dx

  MediaEvent = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 780LL);
  if ( v5 && v5 != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2) )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2);
      WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids);
    }
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), v6, v7);
  if ( !MediaEvent )
  {
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_19;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    v9 = 39;
    goto LABEL_16;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    v9 = 38;
LABEL_16:
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, (__int64)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, v8);
  }
  if ( MediaEvent < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerNotification::Invoke", 1031, MediaEvent);
LABEL_19:
  CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess(a2);
  return (unsigned int)MediaEvent;
}
