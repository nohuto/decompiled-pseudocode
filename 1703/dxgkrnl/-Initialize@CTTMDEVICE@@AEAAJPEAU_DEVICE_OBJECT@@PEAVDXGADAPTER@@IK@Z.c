/*
 * XREFs of ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C01196FC
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C011B5B8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     RtlStringCbLengthW @ 0x1C00117CC (RtlStringCbLengthW.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00AC7FC (MonitorGetMonitorDeviceInterfaceName.c)
 *     MonitorGetCCDMonitorID @ 0x1C00AF60C (MonitorGetCCDMonitorID.c)
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
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int MonitorHandle; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  size_t pcbLength; // [rsp+50h] [rbp+8h] BYREF

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
    LODWORD(CCDMonitorID) = MonitorGetMonitorDeviceInterfaceName(
                              a3,
                              (unsigned int)v6,
                              0x104uLL,
                              (NTSTRSAFE_PWSTR)this + 44);
  else
    LODWORD(CCDMonitorID) = -1073741632;
  if ( (_DWORD)CCDMonitorID == -1073741632 )
  {
    MonitorHandle = MonitorGetMonitorHandle(a3, (unsigned int)v6, 0LL, this, (struct HDXGMONITOR__ **)&pcbLength);
    CCDMonitorID = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
      goto LABEL_12;
    }
    CCDMonitorID = (int)MonitorGetCCDMonitorID(
                          (struct HDXGMONITOR__ *)pcbLength,
                          0x103u,
                          (unsigned __int16 *)this + 44,
                          v19);
    MonitorReleaseMonitorHandle(a3, (struct HDXGMONITOR__ *)pcbLength, this, v21);
    if ( (int)CCDMonitorID < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v20[6] = 0LL;
      goto LABEL_12;
    }
LABEL_5:
    v12 = RtlStringCbLengthW(*((STRSAFE_PCNZWCH *)this + 77), *((unsigned __int16 *)this + 305), &pcbLength);
    CCDMonitorID = v12;
    if ( v12 >= 0 )
    {
      *((_WORD *)this + 304) = pcbLength;
      return (unsigned int)CCDMonitorID;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v20[6] = 1LL;
LABEL_12:
    v20[5] = CCDMonitorID;
    v20[4] = v6;
    v20[3] = a3;
    WdLogEvent5_WdError(v20);
    return (unsigned int)CCDMonitorID;
  }
  if ( (int)CCDMonitorID >= 0 )
    goto LABEL_5;
  return (unsigned int)CCDMonitorID;
}
