/*
 * XREFs of DpiReportSoftwareDevice @ 0x1C0205810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiReportSoftwareDevice(PDRIVER_OBJECT DriverObject)
{
  _DWORD *DriverObjectExtension; // rax
  _DWORD *v3; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !DriverObject
    || (DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverObject),
        (v3 = DriverObjectExtension) == 0LL)
    || DriverObjectExtension[4] != 1953656900
    || DriverObjectExtension[5] != 1 )
  {
    LODWORD(v7) = -1073741811;
    v8 = WdLogNewEntry5_WdError(DriverObject);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    goto LABEL_9;
  }
  v4 = IoReportRootDevice(DriverObject);
  v7 = v4;
  if ( v4 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = v7;
LABEL_9:
    WdLogEvent5_WdError(v8);
    return (unsigned int)v7;
  }
  v9 = WdLogNewEntry5_WdEvent(v6, v5);
  *(_QWORD *)(v9 + 24) = v3;
  WdLogEvent5_WdEvent(v9);
  return (unsigned int)v7;
}
