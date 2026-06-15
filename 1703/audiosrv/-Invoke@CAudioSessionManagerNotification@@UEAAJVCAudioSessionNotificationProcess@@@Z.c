/*
 * XREFs of ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180093D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dd @ 0x180090690 (WPP_SF_dd.c)
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x180092AF0 (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManagerNotification::Invoke(__int64 a1, CAudioSessionNotificationProcess *a2)
{
  int MediaEvent; // edi
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  unsigned __int16 v10; // dx

  MediaEvent = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 852LL);
  if ( v5 && v5 != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2) )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2);
      WPP_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
        v6);
    }
    goto LABEL_19;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), v7, v8);
  if ( !MediaEvent )
  {
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_19;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    v10 = 42;
    goto LABEL_16;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    v10 = 41;
LABEL_16:
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, v9);
  }
  if ( MediaEvent < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerNotification::Invoke", 1065, MediaEvent);
LABEL_19:
  CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess(a2);
  return (unsigned int)MediaEvent;
}
