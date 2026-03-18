/*
 * XREFs of CmpConstructNameWithStatus @ 0x1405014C0
 * Callers:
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14043F980 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpDoWritethroughReparse @ 0x140448B84 (CmpDoWritethroughReparse.c)
 *     CmpConstructAndCacheName @ 0x140459200 (CmpConstructAndCacheName.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 *     CmpQueryKeyName @ 0x1404FC190 (CmpQueryKeyName.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpPublishEventForPcaResolver @ 0x14057CDD4 (CmpPublishEventForPcaResolver.c)
 *     CmEtwRunDown @ 0x140660B64 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140660E60 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x140661590 (CmpTraceHiveSaveStart.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140665298 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x140665BB0 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x140666C60 (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140668668 (CmpReportAuditVirtualizationEvent.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405039C0 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1406659C0 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpSetKcbAtLayerHeight @ 0x14066DD6C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  BOOLEAN v6; // bp
  __int16 v7; // si
  struct _PRIVILEGE_SET *v8; // rdi
  __int16 v9; // r10
  __int64 v10; // rcx
  int v11; // eax
  int v12; // ebx
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  SIZE_T v16; // r15
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v18; // r11
  __int64 v19; // r11
  __int16 v20; // r10
  _QWORD v21[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  WORD1(v21[0]) = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v6 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v7 = *(_WORD *)(a1 + 58);
  v8 = 0LL;
  if ( v7 >= 2 && v7 != 1 )
  {
    v16 = 8LL * (unsigned int)(v7 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v5, v16, 0x35364D43u);
    v8 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v8 = (struct _PRIVILEGE_SET *)v21[3];
      v12 = -1073741670;
      goto LABEL_15;
    }
    memset(TransientPoolWithTag, 0, v16);
  }
  v9 = *(_WORD *)(a1 + 58);
  LOWORD(v21[0]) = v7;
  v21[3] = v8;
  WORD1(v21[0]) = v9;
  if ( v9 )
  {
    v18 = *(_QWORD *)(a1 + 184);
    if ( v18 )
    {
      do
      {
        CmpSetKcbAtLayerHeight(v21, (unsigned __int16)v9, *(_QWORD *)(v18 + 16));
        v18 = *(_QWORD *)(v19 + 24);
        v9 = v20 - 1;
      }
      while ( v18 );
      v8 = (struct _PRIVILEGE_SET *)v21[3];
      v9 = WORD1(v21[0]);
    }
  }
  else
  {
    v21[1] = a1;
  }
  if ( v6 && v9 >= 0 )
  {
    do
    {
      v10 = v9 >= 2 ? *((_QWORD *)v8 + v9 - 2) : v21[v9 + 1];
      if ( *(_WORD *)(v10 + 58) && *(_BYTE *)(v10 + 57) == 1 )
        break;
      if ( *(_DWORD *)(v10 + 32) != -1 )
      {
        if ( *(_DWORD *)(a1 + 32) == -1 && (*(_DWORD *)(a1 + 176) & 0x40000) != 0 )
          break;
        v11 = CmpConstructNameFromKeyNodes(v21, &v22);
        v8 = (struct _PRIVILEGE_SET *)v21[3];
        v12 = v11;
        if ( v11 < 0 )
          goto LABEL_15;
        goto LABEL_14;
      }
      --v9;
    }
    while ( v9 >= 0 );
  }
  v12 = CmpConstructNameFromKcbNameBlocks(a1, &v22);
  if ( v12 >= 0 )
  {
LABEL_14:
    v12 = 0;
    *a2 = v22;
  }
LABEL_15:
  if ( v8 )
    MiDeleteSubsection(v8);
  if ( v6 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($69CD3F157F9F39B6F7113F2231989901 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v13);
    }
  }
  return (unsigned int)v12;
}
