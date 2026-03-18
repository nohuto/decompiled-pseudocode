/*
 * XREFs of ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C01A5EAC
 * Callers:
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C01AD1CC (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00D8C70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall IsFenceObjectSignaled(unsigned int a1, struct DXGPROCESS *a2, struct DXGCONTEXT *a3, int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r9
  int v15; // r8d
  _DWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v24; // r9
  unsigned __int8 v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  bool v29; // zf
  _BYTE v30[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 767LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 168));
  v13 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v13 < *((_DWORD *)a2 + 52)
    && (v14 = *((_QWORD *)a2 + 24),
        v15 = *(_DWORD *)(v14 + 16LL * v13 + 8),
        (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x30))
    && (v15 & 0x1000) == 0
    && (v15 & 0xF) != 0
    && (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0xF) == 8 )
  {
    v16 = *(_DWORD **)(v14 + 16LL * v13);
  }
  else
  {
    v16 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)a2 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v21 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v21 + 24) = a2;
    *(_QWORD *)(v21 + 32) = v5;
LABEL_12:
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  if ( v16[36] != 3 )
  {
    v21 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v21 + 24) = 784LL;
    goto LABEL_12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)(v16 + 8), v19, v20);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                       (DXGSYNCOBJECT *)v16,
                       *(struct ADAPTER_RENDER **)(*((_QWORD *)a3 + 2) + 16LL));
  v25 = (*(__int64 (__fastcall **)(struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(v24 + 8) + 768LL))(VidSchSyncObject);
  v29 = v30[8] == 0;
  *a4 = v25;
  if ( !v29 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v26, v27, v28);
  return 0LL;
}
