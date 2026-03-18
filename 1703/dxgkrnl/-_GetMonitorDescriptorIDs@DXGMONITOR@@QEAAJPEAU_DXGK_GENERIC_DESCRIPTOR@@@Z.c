/*
 * XREFs of ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C0108A44
 * Callers:
 *     MonitorGetMonitorDescriptorIDs @ 0x1C0105C74 (MonitorGetMonitorDescriptorIDs.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C000F3B0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C000F460 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C001029C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z @ 0x1C0107084 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z.c)
 *     MonitorLogBadEDID @ 0x1C01E4118 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDescriptorIDs(
        DXGMONITOR *this,
        struct _DXGK_GENERIC_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  unsigned __int8 *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  int v14; // eax
  WCHAR v15; // ax
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int8 *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 v21[8]; // [rsp+28h] [rbp-50h] BYREF
  __int128 v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-30h]
  WCHAR v24; // [rsp+50h] [rbp-28h]

  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  a2->HardwareId[0] = 0;
  a2->InstanceId[0] = 0;
  a2->CompatibleId[0] = 0;
  a2->DeviceText[0] = 0;
  v20 = 0LL;
  result = DXGMONITOR::_GetHWMonitorBaseEDIDBlock(this, &v20, a3, a4);
  if ( (int)result >= 0 )
  {
    v7 = v20;
    result = EDIDV1_IsEDIDBaseBlock(v20);
    if ( (int)result >= 0 )
    {
      v8 = EDIDV1_ObtainMonitorManufacturerName(v7, v21);
      v13 = v8;
      if ( v8 < 0 || (v14 = EDIDV1_ObtainMonitorProductCodeID(v7, &v21[3]), v13 = v14, v14 < 0) )
      {
        v19 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
        *(_QWORD *)(v19 + 24) = v7;
        *(_QWORD *)(v19 + 32) = v13;
        WdLogEvent5_WdWarning(v19);
        MonitorLogBadEDID(v7, (unsigned int)v13);
        return (unsigned int)v13;
      }
      else
      {
        v15 = v24;
        v16 = v22;
        v21[7] = 0;
        *(_OWORD *)a2->HardwareId = *(_OWORD *)v21;
        v17 = v23;
        *(_OWORD *)&a2->HardwareId[8] = v16;
        *(_QWORD *)&a2->HardwareId[16] = v17;
        a2->HardwareId[20] = v15;
        return 0LL;
      }
    }
  }
  return result;
}
