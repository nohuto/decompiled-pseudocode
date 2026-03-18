/*
 * XREFs of ?VmBusFlushAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D590
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

unsigned __int8 __fastcall VmBusFlushAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // r8d
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // r14
  _QWORD **v13; // rsi
  _QWORD *i; // rdi
  DXGADAPTER *v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  char v18[32]; // [rsp+38h] [rbp-48h] BYREF
  char v19[40]; // [rsp+58h] [rbp-28h] BYREF
  int v20; // [rsp+B0h] [rbp+30h] BYREF
  struct DXGADAPTER *v21; // [rsp+B8h] [rbp+38h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v2 = *((_QWORD *)a1 + 5);
  v20 = -1073741811;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v16,
    *(unsigned int *)(v1 + 16),
    *(struct _KTHREAD ***)(v2 + 88),
    &v21);
  if ( !v21 )
  {
    v5 = WdLogNewEntry5_WdError(v4, 0LL);
    *(_QWORD *)(v5 + 24) = *(unsigned int *)(v1 + 16);
LABEL_3:
    WdLogEvent5_WdError(v5);
    goto LABEL_19;
  }
  if ( !*((_QWORD *)v21 + 286) )
  {
    v5 = WdLogNewEntry5_WdError(v4, v21);
    *(_QWORD *)(v5 + 24) = 5606LL;
    goto LABEL_3;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v17, v21, 0LL);
  v7 = v6 + 2;
  if ( (int)COREADAPTERACCESS::AcquireExclusive(&v17, v6 + 2) < 0 )
    goto LABEL_18;
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_DWORD *)(v1 + 20) - v7;
  if ( !v9 )
  {
    v7 = 1;
LABEL_14:
    v12 = v8 + 48;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v8 + 48));
    v13 = (_QWORD **)(v8 + 144);
    for ( i = *v13; i != v13; i = (_QWORD *)*i )
      DXGDEVICE::FlushScheduler(i - 11, v7);
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_18;
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_14;
  v11 = v10 - 1;
  if ( !v11 )
  {
    v7 = 3;
    goto LABEL_14;
  }
  if ( v11 == 1 )
  {
    v7 = 4;
    goto LABEL_14;
  }
LABEL_18:
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
LABEL_19:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v20, 4u);
  if ( v16 )
    DXGADAPTER::ReleaseReference(v16);
  return 1;
}
