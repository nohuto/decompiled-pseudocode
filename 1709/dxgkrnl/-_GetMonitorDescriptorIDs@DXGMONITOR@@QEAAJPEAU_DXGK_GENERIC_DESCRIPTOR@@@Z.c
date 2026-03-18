/*
 * XREFs of ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C010B914
 * Callers:
 *     MonitorGetMonitorDescriptorIDs @ 0x1C01054E0 (MonitorGetMonitorDescriptorIDs.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C000FA54 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C000FBBC (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0012220 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     MonitorLogBadEDID @ 0x1C0123F58 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDescriptorIDs(
        DXGMONITOR *this,
        struct _DXGK_GENERIC_DESCRIPTOR *a2,
        __int64 a3)
{
  DXGMONITOR *v4; // rbx
  unsigned __int8 *v5; // rdi
  __int64 **v6; // rax
  __int64 *v7; // rax
  unsigned __int8 *v8; // rbp
  int IsEDIDBaseBlock; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  WCHAR v19; // ax
  __int128 v20; // xmm1
  __int64 v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int16 v26[8]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-38h]
  WCHAR v29; // [rsp+48h] [rbp-30h]

  v4 = this;
  if ( !a2 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  a2->HardwareId[0] = 0;
  v5 = 0LL;
  a2->InstanceId[0] = 0;
  a2->CompatibleId[0] = 0;
  a2->DeviceText[0] = 0;
  if ( !*((_DWORD *)v4 + 28) )
    goto LABEL_21;
  v6 = (__int64 **)*((_QWORD *)v4 + 15);
  if ( !v6 )
    goto LABEL_21;
  v7 = *v6;
  if ( !v7 )
    goto LABEL_21;
  do
  {
    if ( *((_DWORD *)v7 + 2) == 2 )
      break;
    v7 = (__int64 *)*v7;
  }
  while ( v7 );
  if ( !v7 )
  {
LABEL_21:
    v25 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v25 + 24) = v4;
    WdLogEvent5_WdWarning(v25);
    LODWORD(v4) = -1071841279;
    return (unsigned int)v4;
  }
  v8 = (unsigned __int8 *)(v7 + 3);
  IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v7 + 24);
  v4 = (DXGMONITOR *)IsEDIDBaseBlock;
  if ( IsEDIDBaseBlock < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v23 + 24) = v8;
    *(_QWORD *)(v23 + 32) = v4;
    WdLogEvent5_WdWarning(v23);
    MonitorLogBadEDID(v8, (unsigned int)v4);
  }
  else
  {
    v5 = v8;
    LODWORD(v4) = 0;
  }
  if ( (int)v4 < 0 )
    return (unsigned int)v4;
  result = EDIDV1_IsEDIDBaseBlock(v5);
  if ( (int)result < 0 )
    return result;
  v14 = EDIDV1_ObtainMonitorManufacturerName(v5, v26);
  v4 = (DXGMONITOR *)v14;
  if ( v14 < 0 || (v18 = EDIDV1_ObtainMonitorProductCodeID(v5, &v26[3]), v4 = (DXGMONITOR *)v18, v18 < 0) )
  {
    v24 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v24 + 24) = v5;
    *(_QWORD *)(v24 + 32) = v4;
    WdLogEvent5_WdWarning(v24);
    MonitorLogBadEDID(v5, (unsigned int)v4);
    return (unsigned int)v4;
  }
  v19 = v29;
  v20 = v27;
  v26[7] = 0;
  *(_OWORD *)a2->HardwareId = *(_OWORD *)v26;
  v21 = v28;
  *(_OWORD *)&a2->HardwareId[8] = v20;
  *(_QWORD *)&a2->HardwareId[16] = v21;
  a2->HardwareId[20] = v19;
  return 0LL;
}
