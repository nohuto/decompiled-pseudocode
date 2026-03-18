/*
 * XREFs of ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199770
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2)
{
  unsigned int *v2; // rdi
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v5; // r14
  __int64 v6; // rcx
  struct DXGDEVICE *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned int v10; // esi
  __int64 v11; // rax
  struct _KTHREAD *v12; // r8
  int v13; // ecx
  struct _EX_RUNDOWN_REF *v14; // rdx
  __int64 v15; // rcx
  ULONG_PTR v16; // r9
  ULONG_PTR Count; // rcx
  _QWORD *v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rax
  _BYTE v22[16]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v23[144]; // [rsp+40h] [rbp-39h] BYREF
  int v24; // [rsp+E0h] [rbp+67h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+E8h] [rbp+6Fh] BYREF
  struct DXGDEVICE *v26; // [rsp+F0h] [rbp+77h] BYREF
  struct DXGDEVICE *v27; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = (unsigned int *)*((_QWORD *)a1 + 9);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, a2);
  v24 = 0;
  v5 = Current;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, v2[6], Current, &v27);
  v7 = v27;
  if ( v27 )
  {
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22,
      v27);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v7, 0, v9, 0);
    v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23);
    if ( v24 < 0 )
    {
LABEL_19:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v23);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22);
      goto LABEL_20;
    }
    v10 = v2[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v5 + 25));
    v11 = (v10 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v11 < *((_DWORD *)v5 + 60)
      && (v12 = v5[28],
          v13 = *((_DWORD *)v12 + 4 * v11 + 2),
          ((v10 >> 25) & 0x60) == (*((_BYTE *)v12 + 16 * v11 + 8) & 0x60))
      && (v13 & 0x2000) == 0
      && (v13 & 0x1F) != 0
      && (*((_BYTE *)v12 + 16 * (unsigned int)v11 + 8) & 0x1F) == 5 )
    {
      v14 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v12 + 2 * (unsigned int)v11);
    }
    else
    {
      v14 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v25, v14);
    ExReleasePushLockSharedEx(v5 + 25, 0LL);
    KeLeaveCriticalRegion();
    if ( v25 && (v16 = v25[3].Count) != 0 )
    {
      Count = v25[1].Count;
      v18 = (_QWORD *)*((_QWORD *)v7 + 2);
      if ( *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) == v18[2] )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v18[66] + 8LL) + 1184LL))(
                v18[67],
                v16,
                v2[8]);
LABEL_18:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v25);
        goto LABEL_19;
      }
      v19 = (_QWORD *)WdLogNewEntry5_WdError(Count);
      v19[3] = v7;
      v19[4] = v25;
      v19[5] = -1073741811LL;
      WdLogEvent5_WdError(v19);
    }
    else
    {
      v20 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v20 + 24) = v2[7];
      WdLogEvent5_WdAssertion(v20);
    }
    v24 = -1073741811;
    goto LABEL_18;
  }
  v8 = WdLogNewEntry5_WdAssertion(v6);
  *(_QWORD *)(v8 + 24) = v2[6];
  WdLogEvent5_WdAssertion(v8);
  v24 = -1073741811;
LABEL_20:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v24, 4u);
  if ( v26 && _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
  return 1;
}
