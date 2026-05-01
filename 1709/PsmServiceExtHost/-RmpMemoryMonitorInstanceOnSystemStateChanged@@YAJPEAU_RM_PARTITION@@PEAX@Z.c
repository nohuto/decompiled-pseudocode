/*
 * XREFs of ?RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180020480
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001EFC8 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18002057C (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorInstanceOnSystemStateChanged(struct _RM_PARTITION *a1, unsigned int *a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdx
  int IdealTimerState; // edi
  int v5; // ebx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v10; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v13; // [rsp+60h] [rbp-38h]
  int v14; // [rsp+68h] [rbp-30h]
  int v15; // [rsp+6Ch] [rbp-2Ch]
  int *v16; // [rsp+70h] [rbp-28h]
  int v17; // [rsp+78h] [rbp-20h]
  int v18; // [rsp+7Ch] [rbp-1Ch]

  v2 = (__int64 *)((char *)a1 + 40);
  IdealTimerState = RmpMemoryMonitorGetIdealTimerState(*a2);
  v5 = RmpMemoryMonitorGetIdealTimerState(*(unsigned int *)(v3 + 4));
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v10;
    v16 = &v11;
    v10 = IdealTimerState;
    v14 = 4;
    v11 = v5;
    v17 = 4;
    TlgWrite(v6, &unk_180059F06, v7, v8, 4u, &pData);
  }
  if ( IdealTimerState )
  {
    if ( !v5 )
    {
      TpSetTimer(v2[8], 0LL, 0LL, 0LL);
      TpWaitForTimer(v2[8], 1LL);
      return 0LL;
    }
  }
  else if ( !v5 )
  {
    return 0LL;
  }
  if ( v5 != IdealTimerState )
    RmpMemoryMonitorSetTimer(v2, v5, 4);
  return 0LL;
}
