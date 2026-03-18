/*
 * XREFs of ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C010B6E0
 * Callers:
 *     MonitorCreatePhysicalMonitor @ 0x1C0104ED8 (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0120768 (MonitorNotifyDeviceNodeReady.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C000F930 (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C000FA54 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C000FBBC (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0012220 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     MonitorLogBadEDID @ 0x1C0123F58 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDiagInfo(
        DXGMONITOR *this,
        struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *a2,
        __int64 a3)
{
  unsigned __int8 *v3; // rsi
  DXGMONITOR *v5; // rbx
  __int64 **v6; // rax
  __int64 *v7; // rax
  unsigned __int8 *v8; // rdi
  int IsEDIDBaseBlock; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  struct _STRING v16; // [rsp+20h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  WCHAR v18[4]; // [rsp+40h] [rbp-40h] BYREF
  __int16 v19; // [rsp+48h] [rbp-38h]
  WCHAR SourceString[4]; // [rsp+50h] [rbp-30h] BYREF
  WCHAR v21[4]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+70h] [rbp-10h]

  v3 = 0LL;
  *(_DWORD *)a2 = *((_DWORD *)this + 104);
  v5 = this;
  if ( !*((_DWORD *)this + 28) )
    goto LABEL_14;
  v6 = (__int64 **)*((_QWORD *)this + 15);
  if ( !v6 )
    goto LABEL_14;
  v7 = *v6;
  if ( !v7 )
    goto LABEL_14;
  do
  {
    if ( *((_DWORD *)v7 + 2) == 2 )
      break;
    v7 = (__int64 *)*v7;
  }
  while ( v7 );
  if ( v7 )
  {
    v8 = (unsigned __int8 *)(v7 + 3);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v7 + 24);
    v5 = (DXGMONITOR *)IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v14 + 24) = v8;
      *(_QWORD *)(v14 + 32) = v5;
      WdLogEvent5_WdWarning(v14);
      MonitorLogBadEDID(v8, (unsigned int)v5);
    }
    else
    {
      v3 = v8;
      LODWORD(v5) = 0;
    }
  }
  else
  {
LABEL_14:
    v15 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v15 + 24) = v5;
    WdLogEvent5_WdWarning(v15);
    LODWORD(v5) = -1071841279;
  }
  *(_QWORD *)SourceString = 0LL;
  *(_QWORD *)v18 = 0LL;
  v19 = 0;
  *(_QWORD *)v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  if ( (int)v5 >= 0 )
  {
    *((_DWORD *)a2 + 1) = 1;
    EDIDV1_ObtainMonitorManufacturerName(v3, SourceString);
    EDIDV1_ObtainMonitorProductCodeID(v3, v18);
    EDIDV1_ObtainMonitorSerialNumber(v3, v21);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitAnsiString(&v16, (PCSZ)a2 + 8);
  v16.MaximumLength = 4;
  RtlUnicodeStringToAnsiString(&v16, &DestinationString, 0);
  RtlInitUnicodeString(&DestinationString, v18);
  RtlInitAnsiString(&v16, (PCSZ)a2 + 12);
  v16.MaximumLength = 5;
  RtlUnicodeStringToAnsiString(&v16, &DestinationString, 0);
  RtlInitUnicodeString(&DestinationString, v21);
  RtlInitAnsiString(&v16, (PCSZ)a2 + 17);
  v16.MaximumLength = 14;
  RtlUnicodeStringToAnsiString(&v16, &DestinationString, 0);
  return 0LL;
}
