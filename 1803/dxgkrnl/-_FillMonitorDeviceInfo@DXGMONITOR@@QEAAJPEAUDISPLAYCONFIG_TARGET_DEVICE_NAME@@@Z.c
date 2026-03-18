/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00B8134
 * Callers:
 *     MonitorFillMonitorDeviceInfo @ 0x1C01075B8 (MonitorFillMonitorDeviceInfo.c)
 *     _lambda_9701550c22e6dfba19810e7e8a87dbd3_::operator() @ 0x1C010FCA0 (_lambda_9701550c22e6dfba19810e7e8a87dbd3_--operator().c)
 * Callees:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0002EC0 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C000BCF4 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(DXGMONITOR *this, struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  int v2; // edi
  int v5; // eax
  __int64 v6; // rbx
  int v7; // ecx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = 0;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)this + 18) )
    return 3223126017LL;
  memset((char *)a2 + 36, 0, 0x80uLL);
  v5 = EDIDV1_ObtainDisplayConfigFriendlyName(
         (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
         (unsigned __int16 *)a2 + 18);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v10 + 24) = *((_QWORD *)this + 18) + 24LL;
    *(_QWORD *)(v10 + 32) = v6;
    WdLogEvent5_WdDmmEvent(v10);
    v7 = 0;
  }
  else
  {
    v7 = 1;
  }
  *((_DWORD *)a2 + 5) = v7 | *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
  result = EDIDV1_FillProductIdManufacturerName(
             (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
             (unsigned __int16 *)a2 + 14,
             (unsigned __int16 *)a2 + 15);
  if ( (int)result >= 0 )
    v2 = 4;
  *((_DWORD *)a2 + 5) = v2 | *((_DWORD *)a2 + 5) & 0xFFFFFFFB;
  return result;
}
