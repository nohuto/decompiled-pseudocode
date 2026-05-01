/*
 * XREFs of ?RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180034C70
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x1800368FC (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x180036AC4 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorInstanceOnSystemStateChanged(struct _RM_PARTITION *a1, unsigned int *a2)
{
  char *v2; // rsi
  __int64 v3; // rdx
  int IdealTimerState; // edi
  unsigned int v5; // ebx
  const struct _TlgProvider_t *v6; // rcx
  int v8; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v11; // [rsp+60h] [rbp-38h]
  int v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  int *v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  v2 = (char *)a1 + 40;
  IdealTimerState = RmpMemoryMonitorGetIdealTimerState(*a2);
  v5 = RmpMemoryMonitorGetIdealTimerState(*(unsigned int *)(v3 + 4));
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v8;
    v14 = (int *)&v9;
    v8 = IdealTimerState;
    v12 = 4;
    v9 = v5;
    v15 = 4;
    TlgWrite(v6, &unk_1800801D0, 0LL, 0LL, 4u, &pData);
  }
  if ( IdealTimerState )
  {
    if ( !v5 )
    {
      TpSetTimer(*((_QWORD *)v2 + 8), 0LL, 0LL, 0LL);
      TpWaitForTimer(*((_QWORD *)v2 + 8), 1LL);
      return 0LL;
    }
  }
  else if ( !v5 )
  {
    return 0LL;
  }
  if ( v5 != IdealTimerState )
    RmpMemoryMonitorSetTimer(v2, v5, 4LL);
  return 0LL;
}
