/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00D82E4
 * Callers:
 *     MonitorFillMonitorDeviceInfo @ 0x1C00F3400 (MonitorFillMonitorDeviceInfo.c)
 *     _lambda_36c2ba6a7cba07a048b6de3ef88fdf59_::operator() @ 0x1C01C2DFC (_lambda_36c2ba6a7cba07a048b6de3ef88fdf59_--operator().c)
 * Callees:
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C00093F8 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C000EC78 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(DXGMONITOR *this, struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  int v2; // edi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // ecx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = 0;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_QWORD *)this + 16) )
    return 3223126017LL;
  memset((char *)a2 + 36, 0, 0x80uLL);
  v5 = EDIDV1_ObtainDisplayConfigFriendlyName(
         (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
         (unsigned __int16 *)a2 + 18);
  v7 = v5;
  if ( v5 < 0 )
  {
    v10 = WdLogNewEntry5_WdDmmEvent(v6);
    *(_QWORD *)(v10 + 24) = *((_QWORD *)this + 16) + 24LL;
    *(_QWORD *)(v10 + 32) = v7;
    WdLogEvent5_WdDmmEvent(v10);
    v8 = 0;
  }
  else
  {
    v8 = 1;
  }
  *((_DWORD *)a2 + 5) = v8 | *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
  result = EDIDV1_FillProductIdManufacturerName(
             (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
             (unsigned __int16 *)a2 + 14,
             (unsigned __int16 *)a2 + 15);
  if ( (int)result >= 0 )
    v2 = 4;
  *((_DWORD *)a2 + 5) = v2 | *((_DWORD *)a2 + 5) & 0xFFFFFFFB;
  return result;
}
