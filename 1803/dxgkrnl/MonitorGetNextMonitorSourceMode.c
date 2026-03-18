/*
 * XREFs of MonitorGetNextMonitorSourceMode @ 0x1C00B7C40
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00B78E4 (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00B7AB0 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v8; // esi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rax

  if ( a1 && a3 && a4 )
  {
    v8 = 0;
    *a3 = 0LL;
    *a4 = 0;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 296), 1u);
    v9 = (_QWORD *)(a1 + 216);
    v10 = *(_QWORD **)(a1 + 216);
    if ( a2 )
    {
      if ( v10 == v9 )
      {
LABEL_19:
        v15 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v15 + 24) = a2;
        *(_QWORD *)(v15 + 32) = a1;
        WdLogEvent5_WdError(v15);
        v14 = -1071774928;
        goto LABEL_17;
      }
      v11 = (_QWORD *)(a2 + 96);
      if ( v10 != (_QWORD *)(a2 + 96) )
      {
        while ( v9 != v10 )
        {
          v10 = (_QWORD *)*v10;
          if ( v10 == v11 )
            goto LABEL_9;
        }
        goto LABEL_19;
      }
LABEL_9:
      v10 = (_QWORD *)*v11;
    }
    if ( v10 != v9 )
    {
      v12 = v10 ? (__int64)(v10 - 12) : 0LL;
      if ( v12 )
      {
        *a3 = v12;
        *a4 = *(_DWORD *)(v12 + 112);
LABEL_15:
        ExReleaseResourceLite((PERESOURCE)(a1 + 296));
        KeLeaveCriticalRegion();
        return v8;
      }
    }
    v14 = 1075708748;
LABEL_17:
    v8 = v14;
    goto LABEL_15;
  }
  return 3221225485LL;
}
