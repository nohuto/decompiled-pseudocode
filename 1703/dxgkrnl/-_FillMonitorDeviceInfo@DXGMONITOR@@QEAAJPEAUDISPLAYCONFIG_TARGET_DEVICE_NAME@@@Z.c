/*
 * XREFs of ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00FA110
 * Callers:
 *     MonitorFillMonitorDeviceInfo @ 0x1C008BE70 (MonitorFillMonitorDeviceInfo.c)
 * Callees:
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C0004444 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0004534 (-EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall DXGMONITOR::_FillMonitorDeviceInfo(
        DXGMONITOR *this,
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  int v13; // ecx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = 0;
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_QWORD *)this + 16) )
    return 3223126017LL;
  memset((char *)a2 + 36, 0, 0x80uLL);
  v7 = EDIDV1_ObtainDisplayConfigFriendlyName(
         (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
         (unsigned __int16 *)a2 + 18);
  v12 = v7;
  if ( v7 < 0 )
  {
    v16 = WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
    *(_QWORD *)(v16 + 24) = *((_QWORD *)this + 16) + 24LL;
    *(_QWORD *)(v16 + 32) = v12;
    WdLogEvent5_WdDmmEvent(v16);
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  *((_DWORD *)a2 + 5) = v13 | *((_DWORD *)a2 + 5) & 0xFFFFFFFE;
  result = EDIDV1_FillProductIdManufacturerName(
             (unsigned __int8 *)(*((_QWORD *)this + 16) + 24LL),
             (unsigned __int16 *)a2 + 14,
             (unsigned __int16 *)a2 + 15);
  if ( (int)result >= 0 )
    v4 = 4;
  *((_DWORD *)a2 + 5) = v4 | *((_DWORD *)a2 + 5) & 0xFFFFFFFB;
  return result;
}
