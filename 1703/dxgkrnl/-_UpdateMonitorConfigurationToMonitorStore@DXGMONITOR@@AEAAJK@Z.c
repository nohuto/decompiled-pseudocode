/*
 * XREFs of ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C01E6324
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0107D1C (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0108310 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(
        DXGMONITOR *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  const WCHAR *v12; // r8
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int ValueData; // [rsp+50h] [rbp+18h] BYREF
  PCWSTR Path; // [rsp+58h] [rbp+20h] BYREF

  Path = 0LL;
  v4 = a2;
  LODWORD(v8) = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, (void **)&Path, a4);
  if ( (int)v8 >= 0 )
  {
    v11 = WdLogNewEntry5_WdDmmEvent(v7, v6, v9, v10);
    *(_QWORD *)(v11 + 24) = v4;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)this + 7);
    WdLogEvent5_WdDmmEvent(v11);
    v12 = (const WCHAR *)*(&DXGMONITOR::_MonitorConfigInfoTable + 3 * v4);
    ValueData = *(_DWORD *)((char *)this + *((int *)&DXGMONITOR::_MonitorConfigInfoTable + 6 * v4 + 3));
    v13 = RtlWriteRegistryValue(0x40000000u, Path, v12, 4u, &ValueData, 4u);
    v8 = v13;
    if ( v13 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
      v16[3] = v4;
      v16[4] = *((unsigned int *)this + 7);
      v16[5] = v8;
      WdLogEvent5_WdError(v16);
    }
  }
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v8;
}
