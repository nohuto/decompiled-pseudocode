/*
 * XREFs of ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r8d
  unsigned int v8; // r15d
  unsigned int v9; // edi
  __int64 v10; // r14
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // r15
  _QWORD **v14; // r14
  _QWORD *i; // rbx
  DXGADAPTER *v17; // [rsp+30h] [rbp-29h] BYREF
  __int64 v18; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v19[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v20[72]; // [rsp+68h] [rbp+Fh] BYREF
  int v21; // [rsp+C8h] [rbp+6Fh] BYREF
  struct DXGADAPTER *v22; // [rsp+D0h] [rbp+77h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  v4 = *((_QWORD *)a1 + 5);
  v21 = -1073741811;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v17,
    *(_DWORD *)(v2 + 24),
    *(struct _KTHREAD ***)(v4 + 208),
    &v22);
  if ( v22 )
  {
    if ( !*((_QWORD *)v22 + 308) )
    {
      v6 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v6 + 24) = 2349LL;
      goto LABEL_4;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v18, v22, 0LL);
    v8 = v7 + 2;
    if ( (int)COREADAPTERACCESS::AcquireExclusive(&v18) >= 0 )
    {
      v9 = v8 + 1;
      v10 = *((_QWORD *)a1 + 5);
      v11 = *(_DWORD *)(v3 + 28) - (v8 + 1);
      if ( !v11 )
      {
        v9 = v8;
LABEL_13:
        v13 = v10 + 56;
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v10 + 56));
        v14 = (_QWORD **)(v10 + 176);
        for ( i = *v14; i != v14; i = (_QWORD *)*i )
          DXGDEVICE::FlushScheduler(i - 11, v9);
        *(_QWORD *)(v13 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_17;
      }
      v12 = v11 - 1;
      if ( !v12 )
        goto LABEL_13;
      if ( v12 == 1 )
      {
        v9 = 4;
        goto LABEL_13;
      }
    }
LABEL_17:
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    goto LABEL_18;
  }
  v6 = WdLogNewEntry5_WdError(v5);
  *(_QWORD *)(v6 + 24) = *(unsigned int *)(v3 + 24);
LABEL_4:
  WdLogEvent5_WdError(v6);
LABEL_18:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v21, 4u);
  if ( v17 )
    DXGADAPTER::ReleaseReferenceNoTracking(v17);
  LOBYTE(v2) = 1;
  return v2;
}
