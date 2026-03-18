/*
 * XREFs of ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C0108BE8
 * Callers:
 *     MonitorGetMonitorEldInformation @ 0x1C0105750 (MonitorGetMonitorEldInformation.c)
 * Callees:
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C0004444 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00FA000 (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 *     ?_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z @ 0x1C0107084 (-_GetHWMonitorBaseEDIDBlock@DXGMONITOR@@AEAAJPEAPEAE@Z.c)
 *     MonitorLogBadEDID @ 0x1C01E4118 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorEldInformation(
        DXGMONITOR *this,
        struct _MONITOR_PACKED_ELD_INFORMATION *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // r12d
  unsigned __int16 *v7; // rsi
  unsigned __int8 *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  SIZE_T v15; // rax
  unsigned __int16 *v16; // rax
  __int64 v17; // rcx
  int MonitorCCDMonitorID; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned int Length; // r14d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG HashValue; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int16 v42; // [rsp+78h] [rbp+48h] BYREF
  unsigned __int8 *v43; // [rsp+80h] [rbp+50h] BYREF

  v43 = 0LL;
  v6 = 130;
  v7 = 0LL;
  if ( !a2 )
  {
    v33 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v33);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v34 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( (int)DXGMONITOR::_GetHWMonitorBaseEDIDBlock(this, &v43, a3, a4) >= 0 )
  {
    v8 = v43;
    v9 = EDIDV1_FillProductIdManufacturerName(v43, (unsigned __int16 *)&HashValue, &v42);
    v14 = v9;
    if ( v9 >= 0 )
    {
      *((_WORD *)a2 + 4) = HashValue;
      *((_WORD *)a2 + 5) = v42;
      goto LABEL_8;
    }
    v35 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v35 + 24) = v8;
    *(_QWORD *)(v35 + 32) = v14;
    WdLogEvent5_WdWarning(v35);
    MonitorLogBadEDID(v8, (unsigned int)v14);
  }
  *((_DWORD *)a2 + 2) = 0;
  while ( 1 )
  {
LABEL_8:
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    v6 *= 2;
    v15 = 2LL * v6;
    if ( !is_mul_ok(v6, 2uLL) )
      v15 = -1LL;
    v16 = (unsigned __int16 *)operator new(v15, 0x4D677844u, PagedPool);
    v7 = v16;
    if ( !v16 )
      break;
    MonitorCCDMonitorID = DXGMONITOR::_GetMonitorCCDMonitorID(this, 0LL, v6, v16);
    v21 = MonitorCCDMonitorID;
    if ( MonitorCCDMonitorID != -2147483643 && MonitorCCDMonitorID != -1073741789 )
    {
      if ( MonitorCCDMonitorID < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v36 + 24) = this;
        *(_QWORD *)(v36 + 32) = v21;
        WdLogEvent5_WdError(v36);
      }
      else
      {
        HashValue = 0;
        RtlInitUnicodeString(&DestinationString, v7);
        Length = DestinationString.Length;
        DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
        LODWORD(v21) = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
        if ( (int)v21 < 0 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
          WdLogEvent5_WdAssertion(v37);
        }
        *(_QWORD *)a2 = HashValue;
        if ( Length > 2 )
        {
          DestinationString.MaximumLength -= DestinationString.Length;
          v27 = (unsigned __int64)DestinationString.Length >> 1;
          DestinationString.Length = Length - DestinationString.Length;
          DestinationString.Buffer = &v7[v27];
          LODWORD(v21) = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
          if ( (int)v21 < 0 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
            WdLogEvent5_WdAssertion(v38);
          }
          *(_QWORD *)a2 |= (unsigned __int64)HashValue << 32;
        }
      }
LABEL_22:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v21;
    }
    LODWORD(v21) = -1073741789;
    if ( v6 >= 0x410 )
      goto LABEL_22;
  }
  v39 = WdLogNewEntry5_WdLowResource(v17);
  WdLogEvent5_WdLowResource(v39);
  return 3221225495LL;
}
