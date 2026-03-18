/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C011D180 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_ReadHMDPresenceFromDescriptor@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C01096B0 (-_ReadHMDPresenceFromDescriptor@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z @ 0x1C01096FC (-_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0109C84 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI0@Z @ 0x1C0109F68 (-_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI0@Z.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C010A048 (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C010A320 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C010AA88 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C010AE24 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C010C118 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D634 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJII@Z @ 0x1C0200744 (-_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJII@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02008BC (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C0201864 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v6; // di
  __int64 v7; // rcx
  void *v8; // rcx
  unsigned __int16 v9; // ax
  PVOID v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // esi
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rdx
  unsigned int v17; // r14d
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned int v28; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+78h] [rbp+10h] BYREF

  v6 = 1;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString) + 24) = this;
  if ( (*((_BYTE *)this + 24) & 1) == 0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( *((_DWORD *)this + 104) != 1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !*((_DWORD *)this + 29) )
  {
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry((struct _DEVICE_OBJECT **)this) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a3, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf((PDEVICE_OBJECT *)this);
  }
  v8 = (void *)*((_QWORD *)this + 12);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_WORD *)this + 44) = 0;
  v9 = SourceString->Length + 2;
  *((_WORD *)this + 45) = v9;
  v10 = operator new(v9, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 12) = v10;
  if ( v10 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 88), SourceString);
    DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, v12);
    v13 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v28);
    v14 = v13 + 0x80000000;
    if ( (int)v14 < 0 || v13 == -1073741772 )
    {
      if ( (v15 = v28, v13 == -1073741772) && *((_DWORD *)this + 140) || v13 >= 0 && *((_DWORD *)this + 140) != v28 )
      {
        *((_DWORD *)this + 140) = v28;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v15);
        MONITOR_MGR::_IssueMonitorEvent(
          *((_QWORD *)this + 2),
          *((unsigned int *)this + 7),
          9LL,
          *((unsigned int *)this + 140),
          *((_DWORD *)this + 104),
          a3);
      }
    }
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v14) + 1569) )
    {
      if ( *((_BYTE *)this + 564) )
        return 0LL;
      v28 = 0;
      v29 = 0;
      v17 = 0;
      if ( (int)DXGMONITOR::_ReadHMDPresenceFromDescriptor(this, &v28) >= 0 )
      {
        v20 = v28;
        if ( v28 == 1 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v18);
          WdLogEvent5_WdAssertion(v26);
        }
      }
      else
      {
        v19 = DXGMONITOR::_ReadHMDPresenceFromRegistry(this, &v28, &v29);
        v20 = v28;
        v13 = v19;
        v17 = v29;
      }
      if ( v13 >= 0 && ((v20 == 1) != *((_BYTE *)this + 564) || (v17 == 1) != *((_BYTE *)this + 565)) )
      {
        *((_BYTE *)this + 564) = v20 == 1;
        *((_BYTE *)this + 565) = v17 == 1;
        DXGMONITOR::_SaveHMDPresenceToMonitorStore(this, v20, v17);
        if ( v20 == 1 )
        {
          DXGMONITOR::_DestroyTtmDevice(this);
          MONITOR_MGR::_IssueMonitorEvent(
            *((_QWORD *)this + 2),
            *((unsigned int *)this + 7),
            10LL,
            2LL,
            *((_DWORD *)this + 104),
            a3);
        }
        else
        {
          v6 = 0;
        }
        DXGMONITOR::_UpdateLinkInfo((D3DDDI_VIDEO_PRESENT_TARGET_ID *)this, v6, v27);
      }
    }
    if ( !*((_BYTE *)this + 564) )
      DXGMONITOR::_CreateTtmDevice(this, v16);
    return 0LL;
  }
  v25 = WdLogNewEntry5_WdError(v11);
  WdLogEvent5_WdError(v25);
  return 3221225495LL;
}
