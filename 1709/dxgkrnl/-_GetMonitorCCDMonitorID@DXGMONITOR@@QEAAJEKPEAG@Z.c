/*
 * XREFs of ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00D8194
 * Callers:
 *     MonitorGetCCDMonitorID @ 0x1C00D8C78 (MonitorGetCCDMonitorID.c)
 *     ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C010BCA4 (-_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z.c)
 * Callees:
 *     ?DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z @ 0x1C00E3814 (-DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z.c)
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
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 IsOnlySingleSourceModeExposed; // al
  const WCHAR *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  NTSTATUS v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  if ( !a3 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v25);
  }
  Destination.Length = 0;
  a4[a3 - 1] = 0;
  v8 = *(_QWORD *)&this[1].Length;
  Destination.MaximumLength = 2 * a3 - 2;
  Destination.Buffer = a4;
  v9 = *(struct ADAPTER_DISPLAY **)(v8 + 8);
  v10 = *(_DWORD *)(*((_QWORD *)v9 + 2) + 300LL);
  if ( (v10 & 0x20) == 0 )
    goto LABEL_6;
  IsOnlySingleSourceModeExposed = DmmIsOnlySingleSourceModeExposed(v9, v10);
  v19 = L"MSNIL";
  if ( !IsOnlySingleSourceModeExposed )
    v19 = L"MSBDD_";
  LODWORD(v14) = RtlAppendUnicodeToString(&Destination, v19);
  if ( (int)v14 < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v26 + 24) = (int)v14;
    WdLogEvent5_WdWarning(v26);
  }
  else
  {
LABEL_6:
    appended = RtlAppendUnicodeStringToString(
                 &Destination,
                 (const UNICODE_STRING *)((char *)this + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 512));
    v14 = appended;
    if ( appended >= 0 )
    {
      v15 = *(_QWORD *)&this[34].Length;
      if ( v15 && !*(_DWORD *)(v15 + 16) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v27);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&this[1].Length + 8LL) + 16LL) + 300LL) & 0x20) == 0 )
      {
        v16 = *(_QWORD *)&this[34].Length;
        if ( v16 )
        {
          if ( *(_DWORD *)(v16 + 16) <= 1u )
            return 0LL;
        }
      }
      v23 = RtlAppendUnicodeStringToString(&Destination, this + 33);
      v14 = v23;
      if ( v23 >= 0 )
        return 0LL;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = v14;
  }
  return (unsigned int)v14;
}
