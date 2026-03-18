/*
 * XREFs of ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C010D18C
 * Callers:
 *     MonitorGetContainerIDFromDescriptor @ 0x1C010534C (MonitorGetContainerIDFromDescriptor.c)
 * Callees:
 *     ?EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z @ 0x1C00114F4 (-EDID_V1_GetContainerID@@YAJKPEBEPEAU_GUID@@@Z.c)
 *     ?DisplayID_GetContainerID@@YAJPEAUDisplayIDObj@@PEAU_GUID@@@Z @ 0x1C00370D4 (-DisplayID_GetContainerID@@YAJPEAUDisplayIDObj@@PEAU_GUID@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C010BA54 (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorContainerID(DXGMONITOR *this, struct _GUID *a2)
{
  struct DisplayIDObj *v4; // rcx
  int v5; // edi
  unsigned int v6; // edi
  unsigned __int8 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 *v11; // rsi
  __int64 v12; // rcx
  unsigned int ContainerID; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // [rsp+30h] [rbp+8h] BYREF

  v4 = (DXGMONITOR *)((char *)this + 152);
  if ( *(_QWORD *)v4 && (int)DisplayID_GetContainerID(v4, a2) >= 0 )
    return 0LL;
  if ( !*((_DWORD *)this + 28) )
    return 3221226021LL;
  if ( !*((_QWORD *)this + 16) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v15);
  }
  v5 = *((_DWORD *)this + 28);
  v18 = 0;
  v6 = v5 << 7;
  v7 = (unsigned __int8 *)operator new(v6, 0x4D677844u, PagedPool);
  v11 = v7;
  if ( v7 )
  {
    DXGMONITOR::_GetContiguousEDID(this, v6, &v18, v7);
    if ( v6 != v18 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v17);
    }
    ContainerID = EDID_V1_GetContainerID(v18, v11, a2);
    ExFreePoolWithTag(v11, 0);
    return ContainerID;
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    WdLogEvent5_WdWarning(v16);
    return 3221225495LL;
  }
}
