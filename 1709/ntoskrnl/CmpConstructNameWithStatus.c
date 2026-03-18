/*
 * XREFs of CmpConstructNameWithStatus @ 0x14047F6E0
 * Callers:
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x14047760C (CmpTraceSecurityChanging.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14047D9D0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmpConstructName @ 0x1404E33CC (CmpConstructName.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmpDoWritethroughReparse @ 0x140581B10 (CmpDoWritethroughReparse.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x140598A9C (CmpConstructAndCacheName.c)
 *     CmEtwRunDown @ 0x140689AF4 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140689DE4 (CmpEtwDumpKcb.c)
 *     CmpPublishEventForPcaResolver @ 0x14068A228 (CmpPublishEventForPcaResolver.c)
 *     CmpTraceHiveSaveStart @ 0x14068A6EC (CmpTraceHiveSaveStart.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14068EB9C (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x14068F5F0 (CmpDumpKeyBodyList.c)
 *     CmRealKCBToVirtualPath @ 0x1406909A4 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140690D1C (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406936A0 (CmpReportAuditVirtualizationEvent.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpConstructNameFromKeyNodes @ 0x14047F860 (CmpConstructNameFromKeyNodes.c)
 *     CmpStartKcbStack @ 0x140481B10 (CmpStartKcbStack.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1405E5920 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpSetKcbAtLayerHeight @ 0x140698264 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // si
  int started; // ebx
  __int16 v7; // r10
  struct _PRIVILEGE_SET *v8; // r14
  __int64 v9; // rcx
  struct _KTHREAD *v10; // rcx
  __int64 v13; // r11
  __int64 v14; // r11
  __int16 v15; // r10
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  memset(v16, 0, 0x20uLL);
  v17 = 0LL;
  WORD1(v16[0]) = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v5 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  started = CmpStartKcbStack(v16, *(unsigned __int16 *)(a1 + 58));
  if ( started < 0 )
    goto LABEL_28;
  v7 = *(_WORD *)(a1 + 58);
  WORD1(v16[0]) = v7;
  if ( !v7 )
  {
    v16[1] = a1;
    goto LABEL_6;
  }
  v13 = *(_QWORD *)(a1 + 184);
  if ( v13 )
  {
    do
    {
      CmpSetKcbAtLayerHeight(v16, (unsigned __int16)v7, *(_QWORD *)(v13 + 16));
      v13 = *(_QWORD *)(v14 + 24);
      v7 = v15 - 1;
    }
    while ( v13 );
LABEL_28:
    v7 = WORD1(v16[0]);
  }
LABEL_6:
  v8 = (struct _PRIVILEGE_SET *)v16[3];
  if ( started >= 0 )
  {
    if ( v5 && v7 >= 0 )
    {
      do
      {
        v9 = v7 >= 2 ? *(_QWORD *)(v16[3] + 8LL * (v7 - 2)) : v16[v7 + 1];
        if ( *(_WORD *)(v9 + 58) && *(_BYTE *)(v9 + 57) == 1 )
          break;
        if ( *(_DWORD *)(v9 + 32) != -1 )
        {
          if ( *(_DWORD *)(a1 + 32) == -1 && (*(_DWORD *)(a1 + 176) & 0x40000) != 0 )
            break;
          started = CmpConstructNameFromKeyNodes(v16, &v17);
          if ( started < 0 )
            goto LABEL_16;
          goto LABEL_15;
        }
        --v7;
      }
      while ( v7 >= 0 );
    }
    started = CmpConstructNameFromKcbNameBlocks(a1, &v17);
    if ( started >= 0 )
    {
LABEL_15:
      started = 0;
      *a2 = v17;
    }
  }
LABEL_16:
  if ( v8 )
    MiDeleteSubsection(v8);
  if ( v5 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v10 = KeGetCurrentThread();
    if ( v10->KernelApcDisable++ == -1
      && ($B476B70DB57F76B110DA5B9238C3E934 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
      && !v10->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v10);
    }
  }
  return (unsigned int)started;
}
