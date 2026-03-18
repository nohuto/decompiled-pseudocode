/*
 * XREFs of ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01863D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(struct VMBPACKETCOMPLETION__ **a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int *v5; // rbx
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v7; // rsi
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // r14d
  __int64 v13; // rax
  struct _KTHREAD *v14; // r8
  int v15; // ecx
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rcx
  ULONG_PTR v18; // r9
  ULONG_PTR Count; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rax
  struct DXGDEVICE *v24; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v25[24]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v26[144]; // [rsp+50h] [rbp-39h] BYREF
  int v27; // [rsp+F8h] [rbp+6Fh] BYREF
  struct _EX_RUNDOWN_REF *v28; // [rsp+100h] [rbp+77h] BYREF
  struct DXGDEVICE *v29; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v5 = (unsigned int *)v2;
  if ( !v2 )
    return v2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4, v3);
  v27 = 0;
  v7 = Current;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, v5[6], Current, &v24);
  v9 = v24;
  if ( !v24 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = v5[6];
    WdLogEvent5_WdAssertion(v10);
    v27 = -1073741811;
    goto LABEL_20;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v25,
    v24);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v9, 0, v11, 0);
  v27 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26);
  if ( v27 >= 0 )
  {
    v12 = v5[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 26));
    v13 = (v12 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < *((_DWORD *)v7 + 62)
      && (v14 = v7[29],
          v15 = *((_DWORD *)v14 + 4 * v13 + 2),
          ((v12 >> 25) & 0x60) == (*((_BYTE *)v14 + 16 * v13 + 8) & 0x60))
      && (v15 & 0x2000) == 0
      && (v15 & 0x1F) == 5 )
    {
      v16 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v14 + 2 * (unsigned int)v13);
    }
    else
    {
      v16 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28, v16);
    ExReleasePushLockSharedEx(v7 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( v28 && (v18 = v28[3].Count) != 0 )
    {
      Count = v28[1].Count;
      v20 = (_QWORD *)*((_QWORD *)v9 + 2);
      if ( *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) == v20[2] )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v20[68] + 8LL) + 1200LL))(
                v20[69],
                v18,
                v5[8]);
LABEL_18:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
        goto LABEL_19;
      }
      v21 = (_QWORD *)WdLogNewEntry5_WdError(Count);
      v21[3] = v9;
      v21[4] = v28;
      v21[5] = -1073741811LL;
      WdLogEvent5_WdError(v21);
    }
    else
    {
      v22 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v22 + 24) = v5[7];
      WdLogEvent5_WdAssertion(v22);
    }
    v27 = -1073741811;
    goto LABEL_18;
  }
LABEL_19:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v25);
LABEL_20:
  VmBusCompletePacket(a1[8], &v27, 4u);
  if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
  LOBYTE(v2) = 1;
  return v2;
}
