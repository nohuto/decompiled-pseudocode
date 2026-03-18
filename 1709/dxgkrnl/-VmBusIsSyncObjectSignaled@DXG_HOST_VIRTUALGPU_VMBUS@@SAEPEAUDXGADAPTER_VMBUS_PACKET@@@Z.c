/*
 * XREFs of ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01937B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C008AAE4 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusIsSyncObjectSignaled(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // r15
  struct ADAPTER_RENDER **v3; // r13
  __int64 v4; // r14
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v13; // r9
  char v14; // al
  int v15; // ecx
  _BYTE v17[16]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v19[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v20[40]; // [rsp+58h] [rbp-28h] BYREF
  int v21; // [rsp+B0h] [rbp+30h] BYREF

  v2 = *((_QWORD *)a1 + 9);
  v3 = *(struct ADAPTER_RENDER ***)(*((_QWORD *)a1 + 5) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, (struct DXGADAPTER *const)v3, 0LL);
  v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18);
  if ( v21 >= 0 )
  {
    v4 = *((_QWORD *)a1 + 6);
    v5 = *(_DWORD *)(v2 + 24);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v4 + 200));
    v6 = (v5 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v6 < *(_DWORD *)(v4 + 240)
      && (v7 = *(_QWORD *)(v4 + 224),
          v8 = *(_DWORD *)(v7 + 16 * v6 + 8),
          ((v5 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60))
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) != 0
      && (*(_BYTE *)(v7 + 16LL * (unsigned int)v6 + 8) & 0x1F) == 8 )
    {
      v9 = *(_QWORD *)(v7 + 16LL * (unsigned int)v6);
    }
    else
    {
      v9 = 0LL;
    }
    ExReleasePushLockSharedEx(v4 + 200, 0LL);
    KeLeaveCriticalRegion();
    if ( v9 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(v9 + 32));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v9, v3[289]);
      v14 = (*(__int64 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v13 + 8) + 768LL))(VidSchSyncObject);
      v15 = v21;
      if ( !v14 )
        v15 = -1071775484;
      v21 = v15;
      if ( v17[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v11 + 24) = v4;
      *(_QWORD *)(v11 + 32) = *(unsigned int *)(v2 + 24);
      WdLogEvent5_WdError(v11);
      v21 = -1073741811;
    }
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v21, 4u);
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  return 1;
}
