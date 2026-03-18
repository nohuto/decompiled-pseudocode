/*
 * XREFs of ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C01CFCCC
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C01CEE94 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0028EF8 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00ABA7C (MonitorGetMonitorHandle.c)
 *     MonitorGetCCDMonitorID @ 0x1C00AD104 (MonitorGetCCDMonitorID.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00C6594 (MonitorGetMonitorDeviceInterfaceName.c)
 */

__int64 __fastcall CTTMDEVICE::Initialize(
        CTTMDEVICE *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rbp
  unsigned int v9; // eax
  bool v10; // zf
  __int64 CCDMonitorID; // rbx
  int MonitorHandle; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = a4;
  DXGADAPTER::IsCoreResourceSharedOwner(a3);
  v9 = a5;
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 20) = v6;
  *((_DWORD *)this + 21) = v9;
  memset((char *)this + 88, 0, 0x208uLL);
  *((_DWORD *)this + 152) = 34078720;
  v10 = MONITOR_MGR::_UsingCCDNameForTTM == 0;
  *((_QWORD *)this + 77) = (char *)this + 88;
  if ( v10 )
    LODWORD(CCDMonitorID) = MonitorGetMonitorDeviceInterfaceName(a3, (unsigned int)v6, 260LL, (char *)this + 88);
  else
    LODWORD(CCDMonitorID) = -1073741632;
  if ( (_DWORD)CCDMonitorID != -1073741632 )
  {
    if ( (int)CCDMonitorID < 0 )
      return (unsigned int)CCDMonitorID;
    goto LABEL_11;
  }
  MonitorHandle = MonitorGetMonitorHandle(a3, (unsigned int)v6, 0LL, this, &v20);
  CCDMonitorID = MonitorHandle;
  if ( MonitorHandle >= 0 )
  {
    CCDMonitorID = (int)MonitorGetCCDMonitorID((struct HDXGMONITOR__ *)v20, 0x103u, (unsigned __int16 *)this + 44);
    MonitorReleaseMonitorHandle(a3, v20, this, v15);
    if ( (int)CCDMonitorID < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v14[6] = 0LL;
      goto LABEL_7;
    }
LABEL_11:
    v17 = RtlStringCbLengthW(*((const unsigned __int16 **)this + 77), *((unsigned __int16 *)this + 305), &v20);
    CCDMonitorID = v17;
    if ( v17 >= 0 )
    {
      *((_WORD *)this + 304) = v20;
      return (unsigned int)CCDMonitorID;
    }
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v14[6] = 1LL;
    goto LABEL_7;
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
LABEL_7:
  v14[5] = CCDMonitorID;
  v14[4] = v6;
  v14[3] = a3;
  WdLogEvent5_WdError(v14);
  return (unsigned int)CCDMonitorID;
}
