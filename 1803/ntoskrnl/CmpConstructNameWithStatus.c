/*
 * XREFs of CmpConstructNameWithStatus @ 0x1404ABC50
 * Callers:
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404A53D0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpConstructName @ 0x1404A724C (CmpConstructName.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404E1604 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1404E1C30 (CmpTraceSecurityChanging.c)
 *     CmpDoWritethroughReparse @ 0x1405529F0 (CmpDoWritethroughReparse.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x14057FA5C (CmpConstructAndCacheName.c)
 *     CmRealKCBToVirtualPath @ 0x1405C06B0 (CmRealKCBToVirtualPath.c)
 *     CmpDumpKeyBodyList @ 0x1405ED2C0 (CmpDumpKeyBodyList.c)
 *     CmEtwRunDown @ 0x1406EDEF0 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x1406EE1C0 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x1406EE62C (CmpPublishEventForPcaResolver.c)
 *     CmpTraceHiveSaveStart @ 0x1406EEB08 (CmpTraceHiveSaveStart.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1406F2D58 (CmpIsHiveAlreadyLoaded.c)
 *     CmVirtualKCBToRealPath @ 0x1406F456C (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406F6578 (CmpReportAuditVirtualizationEvent.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpConstructNameFromKeyNodes @ 0x1404ABDD0 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406F34B4 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpSetKcbAtLayerHeight @ 0x1406FB3E8 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // bp
  __int16 v6; // bx
  struct _PRIVILEGE_SET *v7; // rdi
  __int16 v8; // r10
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ebx
  struct _KTHREAD *v12; // rcx
  SIZE_T v15; // r15
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v17; // r11
  __int64 v18; // r11
  __int16 v19; // r10
  _QWORD v20[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  WORD1(v20[0]) = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v5 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v6 = *(_WORD *)(a1 + 58);
  v7 = 0LL;
  v8 = v6;
  if ( v6 >= 2 )
  {
    v8 = *(_WORD *)(a1 + 58);
    if ( v6 != 1 )
    {
      v15 = 8LL * (unsigned int)(v6 - 1);
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v15, 0x35364D43u);
      v7 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        v7 = (struct _PRIVILEGE_SET *)v20[3];
        v11 = -1073741670;
        goto LABEL_15;
      }
      memset(TransientPoolWithTag, 0, v15);
      v8 = *(_WORD *)(a1 + 58);
    }
  }
  LOWORD(v20[0]) = v6;
  v20[3] = v7;
  WORD1(v20[0]) = v8;
  if ( v8 )
  {
    v17 = *(_QWORD *)(a1 + 184);
    if ( v17 )
    {
      do
      {
        CmpSetKcbAtLayerHeight(v20, (unsigned __int16)v8, *(_QWORD *)(v17 + 16));
        v17 = *(_QWORD *)(v18 + 24);
        v8 = v19 - 1;
      }
      while ( v17 );
      v7 = (struct _PRIVILEGE_SET *)v20[3];
      v8 = WORD1(v20[0]);
    }
  }
  else
  {
    v20[1] = a1;
  }
  if ( v5 && v8 >= 0 )
  {
    do
    {
      v9 = v8 >= 2 ? *((_QWORD *)v7 + v8 - 2) : v20[v8 + 1];
      if ( *(_WORD *)(v9 + 58) && *(_BYTE *)(v9 + 57) == 1 )
        break;
      if ( *(_DWORD *)(v9 + 32) != -1 )
      {
        if ( *(_DWORD *)(a1 + 32) == -1 && (*(_DWORD *)(a1 + 176) & 0x40000) != 0 )
          break;
        v10 = CmpConstructNameFromKeyNodes(v20, &v21);
        v7 = (struct _PRIVILEGE_SET *)v20[3];
        v11 = v10;
        if ( v10 < 0 )
          goto LABEL_15;
        goto LABEL_14;
      }
      --v8;
    }
    while ( v8 >= 0 );
  }
  v11 = CmpConstructNameFromKcbNameBlocks(a1, &v21);
  if ( v11 >= 0 )
  {
LABEL_14:
    v11 = 0;
    *a2 = v21;
  }
LABEL_15:
  if ( v7 )
    CmSiFreeMemory(v7);
  if ( v5 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v12 = KeGetCurrentThread();
    if ( v12->KernelApcDisable++ == -1
      && ($005F0E83B22994B61E86C72E0CE43C71 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return (unsigned int)v11;
}
