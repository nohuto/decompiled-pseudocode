/*
 * XREFs of DpiReportSoftwareDevice @ 0x1C0123350
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
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rax

  if ( !DriverObject
    || (DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverObject),
        (v3 = DriverObjectExtension) == 0LL)
    || DriverObjectExtension[4] != 1953656900
    || DriverObjectExtension[5] != 1 )
  {
    LODWORD(v9) = -1073741811;
    v12 = WdLogNewEntry5_WdError(DriverObject);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    goto LABEL_10;
  }
  v4 = IoReportRootDevice(DriverObject);
  v9 = v4;
  if ( v4 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v12 + 24) = v9;
LABEL_10:
    WdLogEvent5_WdError(v12);
    return (unsigned int)v9;
  }
  v10 = WdLogNewEntry5_WdEvent(v6, v5, v7, v8);
  *(_QWORD *)(v10 + 24) = v3;
  WdLogEvent5_WdEvent(v10);
  return (unsigned int)v9;
}
