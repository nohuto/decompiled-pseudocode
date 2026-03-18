/*
 * XREFs of ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00FA000
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C00AF60C (MonitorGetCCDMonitorID.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0108BE8 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 * Callees:
 *     ?DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z @ 0x1C01D23E4 (-DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorCCDMonitorID(DXGMONITOR *this, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  int v5; // edi
  char v6; // bp
  __int64 v8; // rax
  struct ADAPTER_DISPLAY *v9; // rcx
  unsigned int v10; // edx
  NTSTATUS appended; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 IsOnlySingleSourceModeExposed; // al
  const WCHAR *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  NTSTATUS v30; // eax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  v5 = a3;
  v6 = a2;
  if ( !(_DWORD)a3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a4 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v21);
  }
  Destination.Length = 0;
  a4[v5 - 1] = 0;
  v8 = *((_QWORD *)this + 2);
  Destination.Buffer = a4;
  Destination.MaximumLength = 2 * (v5 - 1);
  v9 = *(struct ADAPTER_DISPLAY **)(v8 + 8);
  v10 = *(_DWORD *)(*((_QWORD *)v9 + 2) + 300LL);
  if ( (v10 & 0x20) == 0 )
    goto LABEL_6;
  IsOnlySingleSourceModeExposed = DmmIsOnlySingleSourceModeExposed(v9, v10);
  v23 = L"MSNIL";
  if ( !IsOnlySingleSourceModeExposed )
    v23 = L"MSBDD_";
  LODWORD(v16) = RtlAppendUnicodeToString(&Destination, v23);
  if ( (int)v16 < 0 )
  {
    v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    *(_QWORD *)(v28 + 24) = (int)v16;
    WdLogEvent5_WdWarning(v28);
  }
  else
  {
LABEL_6:
    appended = RtlAppendUnicodeStringToString(
                 &Destination,
                 (PCUNICODE_STRING)((char *)this + (-(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 472));
    v16 = appended;
    if ( appended >= 0 )
    {
      v17 = *((_QWORD *)this + 63);
      if ( v17 && !*(_DWORD *)(v17 + 16) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        WdLogEvent5_WdAssertion(v29);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL) + 300LL) & 0x20) == 0 )
      {
        v18 = *((_QWORD *)this + 63);
        if ( v18 )
        {
          if ( *(_DWORD *)(v18 + 16) <= 1u )
            return 0LL;
        }
      }
      v30 = RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 488));
      v16 = v30;
      if ( v30 >= 0 )
        return 0LL;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = v16;
  }
  return (unsigned int)v16;
}
