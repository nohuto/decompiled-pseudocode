/*
 * XREFs of ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00B8028
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C00AD104 (MonitorGetCCDMonitorID.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0235CEC (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 * Callees:
 *     ?DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z @ 0x1C0213A80 (-DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorCCDMonitorID(
        const UNICODE_STRING *this,
        char a2,
        int a3,
        unsigned __int16 *a4)
{
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
  __int64 v27; // rax
  __int64 v28; // rax
  NTSTATUS v29; // eax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a4 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  Destination.Length = 0;
  a4[a3 - 1] = 0;
  v8 = *(_QWORD *)&this[2].Length;
  Destination.MaximumLength = 2 * a3 - 2;
  Destination.Buffer = a4;
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
    v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v27 + 24) = (int)v16;
    WdLogEvent5_WdWarning(v27);
  }
  else
  {
LABEL_6:
    appended = RtlAppendUnicodeStringToString(
                 &Destination,
                 (const UNICODE_STRING *)((char *)this + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 528));
    v16 = appended;
    if ( appended >= 0 )
    {
      v17 = *(_QWORD *)&this[35].Length;
      if ( v17 && !*(_DWORD *)(v17 + 16) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v28);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[2].Length + 8LL) + 16LL) + 300LL) & 0x20) == 0 )
      {
        v18 = *(_QWORD *)&this[35].Length;
        if ( v18 )
        {
          if ( *(_DWORD *)(v18 + 16) <= 1u )
            return 0LL;
        }
      }
      v29 = RtlAppendUnicodeStringToString(&Destination, this + 34);
      v16 = v29;
      if ( v29 >= 0 )
        return 0LL;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = v16;
  }
  return (unsigned int)v16;
}
