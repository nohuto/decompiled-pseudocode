/*
 * XREFs of ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C018BD44
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C018BE04 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0ppp @ 0x1C002CACC (McTemplateK0ppp.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICE::ReportDeviceSyncObjects(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 ***v4; // rdi
  __int64 **i; // rbx
  __int64 *v6; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 8002LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = (__int64 ***)((char *)this + 408);
  for ( i = *v4; i != (__int64 **)v4 && i; i = (__int64 **)*i )
  {
    v6 = i[4];
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v6 + 4));
    if ( bTracingEnabled )
    {
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)i[4], (struct ADAPTER_RENDER *)i[2][2]);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp(v8, &EventReportSyncObject, v9, VidSchSyncObject, *((unsigned int *)i + 10), v10);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)v6 + 4);
  }
}
