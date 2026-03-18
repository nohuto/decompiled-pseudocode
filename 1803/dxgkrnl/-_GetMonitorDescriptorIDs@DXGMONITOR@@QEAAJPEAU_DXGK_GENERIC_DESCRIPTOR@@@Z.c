/*
 * XREFs of ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C023A150
 * Callers:
 *     MonitorGetMonitorDescriptorIDs @ 0x1C022E200 (MonitorGetMonitorDescriptorIDs.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C0018614 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C00186C8 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0047588 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     MonitorLogBadEDID @ 0x1C022E99C (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDescriptorIDs(
        DXGMONITOR *this,
        struct _DXGK_GENERIC_DESCRIPTOR *a2,
        __int64 a3)
{
  DXGMONITOR *v4; // rbx
  __int64 v5; // rax
  unsigned __int8 *v6; // rdi
  __int64 **v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbp
  int IsEDIDBaseBlock; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // eax
  WCHAR v22; // ax
  __int128 v23; // xmm1
  __int64 v24; // xmm0_8
  __int64 v25; // rax
  unsigned __int16 v26[8]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-38h]
  WCHAR v29; // [rsp+48h] [rbp-30h]

  v4 = this;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  a2->HardwareId[0] = 0;
  v6 = 0LL;
  a2->InstanceId[0] = 0;
  a2->CompatibleId[0] = 0;
  a2->DeviceText[0] = 0;
  if ( !*((_DWORD *)v4 + 32) )
    goto LABEL_18;
  v7 = (__int64 **)*((_QWORD *)v4 + 17);
  if ( !v7 )
    goto LABEL_18;
  v8 = *v7;
  if ( !v8 )
    goto LABEL_18;
  do
  {
    if ( *((_DWORD *)v8 + 2) == 2 )
      break;
    v8 = (__int64 *)*v8;
  }
  while ( v8 );
  if ( v8 )
  {
    v9 = (__int64)(v8 + 3);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v8 + 24);
    v4 = (DXGMONITOR *)IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock >= 0 )
    {
      v6 = (unsigned __int8 *)v9;
      LODWORD(v4) = 0;
    }
    else
    {
      v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v14 + 24) = v9;
      *(_QWORD *)(v14 + 32) = v4;
      WdLogEvent5_WdWarning(v14);
      MonitorLogBadEDID(v9, (int)v4);
    }
    if ( (int)v4 >= 0 )
    {
      result = EDIDV1_IsEDIDBaseBlock(v6);
      if ( (int)result < 0 )
        return result;
      v16 = EDIDV1_ObtainMonitorManufacturerName(v6, v26);
      v4 = (DXGMONITOR *)v16;
      if ( v16 >= 0 )
      {
        v21 = EDIDV1_ObtainMonitorProductCodeID(v6, &v26[3]);
        v4 = (DXGMONITOR *)v21;
        if ( v21 >= 0 )
        {
          v22 = v29;
          v23 = v27;
          v26[7] = 0;
          *(_OWORD *)a2->HardwareId = *(_OWORD *)v26;
          v24 = v28;
          *(_OWORD *)&a2->HardwareId[8] = v23;
          *(_QWORD *)&a2->HardwareId[16] = v24;
          a2->HardwareId[20] = v22;
          return 0LL;
        }
      }
      v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = v6;
      *(_QWORD *)(v20 + 32) = v4;
      WdLogEvent5_WdWarning(v20);
      MonitorLogBadEDID((__int64)v6, (int)v4);
    }
  }
  else
  {
LABEL_18:
    v25 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v25 + 24) = v4;
    WdLogEvent5_WdWarning(v25);
    LODWORD(v4) = -1071841279;
  }
  return (unsigned int)v4;
}
