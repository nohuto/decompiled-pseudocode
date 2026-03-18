/*
 * XREFs of ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0108864
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C011953C (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C011B22C (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C000F2BC (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C000F3B0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C000F460 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z @ 0x1C0107084 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDiagInfo(
        DXGMONITOR *this,
        struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  int HWMonitorBaseEDIDBlock; // eax
  unsigned __int8 *v7; // rcx
  struct _STRING v9; // [rsp+20h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  WCHAR v11[4]; // [rsp+40h] [rbp-40h] BYREF
  __int16 v12; // [rsp+48h] [rbp-38h]
  WCHAR SourceString[4]; // [rsp+50h] [rbp-30h] BYREF
  WCHAR v14[4]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]

  v4 = *((_DWORD *)this + 94);
  *(_QWORD *)&v9.Length = 0LL;
  *(_DWORD *)a2 = v4;
  HWMonitorBaseEDIDBlock = DXGMONITOR::_GetHWMonitorBaseEDIDBlock(this, (unsigned __int8 **)&v9, a3, a4);
  *(_QWORD *)SourceString = 0LL;
  *(_QWORD *)v11 = 0LL;
  v12 = 0;
  *(_QWORD *)v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  if ( HWMonitorBaseEDIDBlock >= 0 )
  {
    v7 = *(unsigned __int8 **)&v9.Length;
    *((_DWORD *)a2 + 1) = 1;
    EDIDV1_ObtainMonitorManufacturerName(v7, SourceString);
    EDIDV1_ObtainMonitorProductCodeID(*(unsigned __int8 **)&v9.Length, v11);
    EDIDV1_ObtainMonitorSerialNumber(*(unsigned __int8 **)&v9.Length, v14);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitAnsiString(&v9, (PCSZ)a2 + 8);
  v9.MaximumLength = 4;
  RtlUnicodeStringToAnsiString(&v9, &DestinationString, 0);
  RtlInitUnicodeString(&DestinationString, v11);
  RtlInitAnsiString(&v9, (PCSZ)a2 + 12);
  v9.MaximumLength = 5;
  RtlUnicodeStringToAnsiString(&v9, &DestinationString, 0);
  RtlInitUnicodeString(&DestinationString, v14);
  RtlInitAnsiString(&v9, (PCSZ)a2 + 17);
  v9.MaximumLength = 14;
  RtlUnicodeStringToAnsiString(&v9, &DestinationString, 0);
  return 0LL;
}
