/*
 * XREFs of ?VmBusFlushDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

unsigned __int8 __fastcall VmBusFlushDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdi
  struct _KTHREAD **v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD v14[2]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v16[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v17[72]; // [rsp+68h] [rbp+Fh] BYREF
  int v18; // [rsp+C0h] [rbp+67h] BYREF
  struct DXGDEVICE *v19; // [rsp+C8h] [rbp+6Fh] BYREF
  struct DXGDEVICE *v20; // [rsp+D0h] [rbp+77h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v2 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
  v18 = -1073741811;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v20, *(unsigned int *)(v1 + 16), v2, &v19);
  if ( v19 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14, v19);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v15, (__int64)v19, 0LL, v7, 0);
    v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v15);
    if ( v18 >= 0 )
    {
      DXGDEVICE::FlushScheduler(v19, *(unsigned int *)(v1 + 20));
    }
    else
    {
      v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      *(_QWORD *)(v12 + 24) = v18;
      WdLogEvent5_WdAssertion(v12);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v17);
    COREACCESS::~COREACCESS((COREACCESS *)v16);
    if ( v14[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v14);
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v6 + 24) = *(unsigned int *)(v1 + 16);
    WdLogEvent5_WdError(v6);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v18, 4u);
  if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
  return 1;
}
