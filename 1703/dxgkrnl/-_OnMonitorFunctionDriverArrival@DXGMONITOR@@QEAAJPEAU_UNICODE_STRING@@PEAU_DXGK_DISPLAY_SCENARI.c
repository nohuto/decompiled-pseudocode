/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C011C7D0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_ReadHMDPresenceFromDescriptor@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0107108 (-_ReadHMDPresenceFromDescriptor@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z @ 0x1C0107138 (-_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0107654 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI0@Z @ 0x1C0107884 (-_ReadHMDPresenceFromRegistry@DXGMONITOR@@AEAAJPEAI0@Z.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0107964 (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0107C3C (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0107EE0 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0108180 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C01091F8 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115208 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJII@Z @ 0x1C01E6108 (-_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJII@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C01E61E4 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C01E6F38 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  char v7; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rcx
  unsigned __int16 v16; // ax
  PVOID v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // esi
  unsigned int v24; // edx
  unsigned int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  unsigned int v30; // ebp
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _BOOL8 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v42; // [rsp+78h] [rbp+10h] BYREF

  v7 = 1;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 24) & 1) == 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v33);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !*((_DWORD *)this + 29) )
  {
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry((struct _DEVICE_OBJECT **)this, v8, v10, v11) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a3, 0LL, v14);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this, v12, v13, v14);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf((PDEVICE_OBJECT *)this);
  }
  v15 = (void *)*((_QWORD *)this + 12);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_WORD *)this + 44) = 0;
  v16 = SourceString->Length + 2;
  *((_WORD *)this + 45) = v16;
  v17 = operator new(v16, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 12) = v17;
  if ( v17 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 88), SourceString);
    DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, v20, v21, v22);
    v23 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v41);
    if ( (int)(v23 + 0x80000000) < 0 || v23 == -1073741772 )
    {
      if ( (v24 = v41, v23 == -1073741772) && *((_DWORD *)this + 130) || v23 >= 0 && *((_DWORD *)this + 130) != v41 )
      {
        *((_DWORD *)this + 130) = v41;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v24);
        MONITOR_MGR::_IssueMonitorEvent(
          *((_QWORD *)this + 2),
          *((unsigned int *)this + 7),
          9LL,
          *((unsigned int *)this + 130),
          *((_DWORD *)this + 94),
          a3);
      }
    }
    v41 = 0;
    v42 = 0;
    v25 = 0;
    if ( (int)DXGMONITOR::_ReadHMDPresenceFromDescriptor(this, &v41) >= 0 )
    {
      v30 = v41;
      v36 = v41 == 1;
      if ( v36 != *((_BYTE *)this + 524) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v36, v26, v27, v28);
        WdLogEvent5_WdAssertion(v37);
      }
    }
    else
    {
      v29 = DXGMONITOR::_ReadHMDPresenceFromRegistry(this, &v41, &v42);
      v30 = v41;
      v23 = v29;
      v25 = v42;
    }
    if ( v23 >= 0 && ((v30 == 1) != *((_BYTE *)this + 524) || (v25 == 1) != *((_BYTE *)this + 525)) )
    {
      *((_BYTE *)this + 524) = v30 == 1;
      *((_BYTE *)this + 525) = v25 == 1;
      DXGMONITOR::_SaveHMDPresenceToMonitorStore(this, v30, v25);
      if ( v30 == 1 )
      {
        DXGMONITOR::_DestroyTtmDevice(this);
        MONITOR_MGR::_IssueMonitorEvent(
          *((_QWORD *)this + 2),
          *((unsigned int *)this + 7),
          10LL,
          2LL,
          *((_DWORD *)this + 94),
          a3);
      }
      else
      {
        v7 = 0;
      }
      LOBYTE(v38) = v7;
      DXGMONITOR::_UpdateLinkInfo((D3DDDI_VIDEO_PRESENT_TARGET_ID *)this, v38, v39, v40);
    }
    if ( !*((_BYTE *)this + 524) )
      DXGMONITOR::_CreateTtmDevice(this, v26, v27, v28);
    return 0LL;
  }
  else
  {
    v35 = WdLogNewEntry5_WdError(v19, v18);
    WdLogEvent5_WdError(v35);
    return 3221225495LL;
  }
}
