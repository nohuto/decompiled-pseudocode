/*
 * XREFs of MonitorGetNextMonitorSourceMode @ 0x1C00D7910
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00D7574 (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00D777C (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v8; // esi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax

  if ( a1 && a3 && a4 )
  {
    v8 = 0;
    *a3 = 0LL;
    *a4 = 0;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 280), 1u);
    if ( a2 )
    {
      v9 = (_QWORD *)(a1 + 200);
      v10 = *(_QWORD **)(a1 + 200);
      if ( v10 == (_QWORD *)(a1 + 200) )
      {
LABEL_21:
        v17 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v17 + 24) = a2;
        *(_QWORD *)(v17 + 32) = a1;
        WdLogEvent5_WdError(v17);
        v16 = -1071774928;
        goto LABEL_19;
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
        goto LABEL_21;
      }
LABEL_9:
      v12 = (_QWORD *)*v11;
      if ( (_QWORD *)*v11 != v9 )
      {
        if ( v12 )
        {
          v13 = v12 - 12;
          goto LABEL_12;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 200);
      if ( v15 != a1 + 200 )
      {
        if ( v15 )
        {
          v13 = (_QWORD *)(v15 - 96);
          goto LABEL_12;
        }
LABEL_20:
        v13 = 0LL;
LABEL_12:
        if ( v13 )
        {
          *a3 = v13;
          *a4 = *((_DWORD *)v13 + 28);
LABEL_14:
          ExReleaseResourceLite((PERESOURCE)(a1 + 280));
          KeLeaveCriticalRegion();
          return v8;
        }
      }
    }
    v16 = 1075708748;
LABEL_19:
    v8 = v16;
    goto LABEL_14;
  }
  return 3221225485LL;
}
