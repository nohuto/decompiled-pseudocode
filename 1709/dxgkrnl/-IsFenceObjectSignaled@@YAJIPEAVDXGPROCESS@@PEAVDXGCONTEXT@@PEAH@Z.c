/*
 * XREFs of ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C01BFA98
 * Callers:
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C01C6C20 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C008AAE4 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@IPEAE@Z @ 0x1C0196A04 (-VmBusSendIsSyncObjectSignaled@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJEC.c)
 */

__int64 __fastcall IsFenceObjectSignaled(unsigned int a1, struct DXGPROCESS *a2, struct DXGCONTEXT *a3, int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  int IsSyncObjectSignaled; // ebx
  int v20; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v22; // r9
  _BYTE v23[40]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v24; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 777LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 200));
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)a2 + 60)
    && (v11 = *((_QWORD *)a2 + 28),
        v12 = *(_DWORD *)(v11 + 16 * v10 + 8),
        (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60))
    && (v12 & 0x2000) == 0
    && (v12 & 0x1F) != 0
    && (*(_BYTE *)(v11 + 16LL * (unsigned int)v10 + 8) & 0x1F) == 8 )
  {
    v13 = *(_DWORD **)(v11 + 16LL * (unsigned int)v10);
  }
  else
  {
    v13 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)a2 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( !v13 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = a2;
    *(_QWORD *)(v15 + 32) = v5;
LABEL_12:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( v13[40] != 3 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = 794LL;
    goto LABEL_12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(v13 + 8));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v17 = *((_QWORD *)a3 + 2);
  if ( !*((_BYTE *)a3 + 401) )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v13, *(struct ADAPTER_RENDER **)(v17 + 16));
    v20 = (*(unsigned __int8 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v22 + 8) + 768LL))(VidSchSyncObject);
    goto LABEL_19;
  }
  v18 = *(_QWORD *)(v17 + 16);
  v24 = 0;
  IsSyncObjectSignaled = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendIsSyncObjectSignaled(
                           (struct VMBCHANNEL__ **)(*(_QWORD *)(v18 + 16) + 3888LL),
                           a2,
                           (struct DXGSYNCOBJECT *)v13,
                           v5,
                           &v24);
  if ( IsSyncObjectSignaled >= 0 )
  {
    v20 = v24 == 1;
LABEL_19:
    *a4 = v20;
    IsSyncObjectSignaled = 0;
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return (unsigned int)IsSyncObjectSignaled;
}
