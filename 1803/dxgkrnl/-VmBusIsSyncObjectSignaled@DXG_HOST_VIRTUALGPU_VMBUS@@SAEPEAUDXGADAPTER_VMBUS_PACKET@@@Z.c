/*
 * XREFs of ?VmBusIsSyncObjectSignaled@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F980
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0016B88 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D45C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusIsSyncObjectSignaled(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  struct ADAPTER_RENDER **v4; // r13
  __int64 v5; // rcx
  PERESOURCE *Global; // rax
  __int64 v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v16; // r9
  char v17; // al
  int v18; // ecx
  _BYTE v20[16]; // [rsp+28h] [rbp-39h] BYREF
  _BYTE v21[16]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v22[8]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v23[32]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v24[40]; // [rsp+70h] [rbp+Fh] BYREF
  int v25; // [rsp+D0h] [rbp+6Fh] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(struct ADAPTER_RENDER ***)(*((_QWORD *)a1 + 5) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, (struct DXGADAPTER *const)v4, 0LL);
    v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
    if ( v25 >= 0 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v5);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v21, Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v21);
      v7 = *((_QWORD *)a1 + 6);
      v8 = *(_DWORD *)(v3 + 24);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 208));
      v9 = (v8 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v9 < *(_DWORD *)(v7 + 248)
        && (v10 = *(_QWORD *)(v7 + 232),
            v11 = *(_DWORD *)(v10 + 16 * v9 + 8),
            ((v8 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60))
        && (v11 & 0x2000) == 0
        && (v11 & 0x1F) == 8 )
      {
        v12 = *(_QWORD *)(v10 + 16LL * (unsigned int)v9);
      }
      else
      {
        v12 = 0LL;
      }
      ExReleasePushLockSharedEx(v7 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( v12 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(v12 + 32), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v12, v4[308]);
        v17 = (*(__int64 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v16 + 8) + 880LL))(VidSchSyncObject);
        v18 = v25;
        if ( !v17 )
          v18 = -1071775484;
        v25 = v18;
        if ( v20[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v14 + 24) = v7;
        *(_QWORD *)(v14 + 32) = *(unsigned int *)(v3 + 24);
        WdLogEvent5_WdError(v14);
        v25 = -1073741811;
      }
      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v21);
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v25, 4u);
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    COREACCESS::~COREACCESS((COREACCESS *)v23);
    LOBYTE(v2) = 1;
  }
  return v2;
}
