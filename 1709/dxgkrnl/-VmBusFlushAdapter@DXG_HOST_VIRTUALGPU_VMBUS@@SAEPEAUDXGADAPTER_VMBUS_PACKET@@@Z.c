/*
 * XREFs of ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193390
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // r8d
  unsigned int v7; // r14d
  unsigned int v8; // edi
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // r14
  _QWORD **v13; // rsi
  _QWORD *i; // rbx
  DXGADAPTER *v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v18[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v19[40]; // [rsp+58h] [rbp-28h] BYREF
  int v20; // [rsp+B0h] [rbp+30h] BYREF
  struct DXGADAPTER *v21; // [rsp+B8h] [rbp+38h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v2 = *((_QWORD *)a1 + 5);
  v20 = -1073741811;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v16,
    *(_DWORD *)(v1 + 24),
    *(struct _KTHREAD ***)(v2 + 192),
    &v21);
  if ( !v21 )
  {
    v5 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v5 + 24) = *(unsigned int *)(v1 + 24);
LABEL_3:
    WdLogEvent5_WdError(v5);
    goto LABEL_17;
  }
  if ( !*((_QWORD *)v21 + 289) )
  {
    v5 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v5 + 24) = 2053LL;
    goto LABEL_3;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v17, v21, 0LL);
  v7 = v6 + 2;
  if ( (int)COREADAPTERACCESS::AcquireExclusive(&v17, v6 + 2) >= 0 )
  {
    v8 = v7 + 1;
    v9 = *((_QWORD *)a1 + 5);
    v10 = *(_DWORD *)(v1 + 28) - (v7 + 1);
    if ( !v10 )
    {
      v8 = v7;
LABEL_12:
      v12 = v9 + 56;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v9 + 56));
      v13 = (_QWORD **)(v9 + 152);
      for ( i = *v13; i != v13; i = (_QWORD *)*i )
        DXGDEVICE::FlushScheduler(i - 11, v8);
      *(_QWORD *)(v12 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v12, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_16;
    }
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_12;
    if ( v11 == 1 )
    {
      v8 = 4;
      goto LABEL_12;
    }
  }
LABEL_16:
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
LABEL_17:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v20, 4u);
  if ( v16 )
    DXGADAPTER::ReleaseReferenceNoTracking(v16);
  return 1;
}
