/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x14017692C
 * Callers:
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x1400AD1B0 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1400C74F0 (MmAllocateIndependentPages.c)
 *     qsort @ 0x140189210 (qsort.c)
 *     HvlpCommitLpIndices @ 0x1401A55CC (HvlpCommitLpIndices.c)
 *     HvlpUpdateLpcbIndex @ 0x1401A56D0 (HvlpUpdateLpcbIndex.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HvlpEnableNextLogicalProcessor @ 0x14022768C (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x1402278D8 (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x140227C80 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x140227CE0 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x140228110 (HvlpSelectVpSet.c)
 *     HvlpDiscoverTopologyLocal @ 0x140717D08 (HvlpDiscoverTopologyLocal.c)
 */

__int64 __fastcall HvlStartBootLogicalProcessors(int a1)
{
  unsigned int MaximumProcessorCount; // eax
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  void *IndependentPages; // rax
  unsigned __int64 v6; // rsi
  int ApicIdAndNumaNode; // ebx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned __int16 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // r11
  __int64 LpcbByApicId; // rax
  char v18; // r10
  unsigned int v19; // edi
  char v20[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+58h] [rbp-30h]
  __int64 v24; // [rsp+68h] [rbp-20h]
  int v25; // [rsp+90h] [rbp+8h] BYREF

  v25 = a1;
  if ( (HvlpFlags & 2) == 0 )
    return 0LL;
  v25 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, char *, int *))off_140397D98[0])(11LL, 64LL, v20, &v25) >= 0 && v25 == 64 )
  {
    HvlpQueryProcessorNode = v21;
    HvlpQueryProximityId = v23;
    HvlpQueryProximityNode = v22;
    HvlpQueryNodeDistance = v24;
  }
  else
  {
    HvlpQueryProcessorNode = 0LL;
    HvlpQueryProximityId = 0LL;
    HvlpQueryProximityNode = 0LL;
    HvlpQueryNodeDistance = 0LL;
  }
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  v3 = MaximumProcessorCount;
  v4 = 36 * MaximumProcessorCount;
  IndependentPages = (void *)MmAllocateIndependentPages(v4, -1);
  v6 = (unsigned __int64)IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, v4);
    CurrentPrcb = KeGetCurrentPrcb();
    dword_140453514 = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_140453518, &unk_14045351C);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_34;
    qword_140453530 = (__int64)CurrentPrcb->StatisticsPage;
    dword_140453528 = CurrentPrcb->Number;
    HvlpCpuVendor = CurrentPrcb->CpuVendor;
    HvlpDiscoverTopologyLocal(v9, (unsigned int)dword_140453518, &unk_140453520, &unk_140453524);
    LODWORD(HvlpLogicalProcessorCount) = 1;
    HvlpLogicalProcessorRegions[0] = 1;
    ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v3, v6);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_34;
    v10 = 1;
    if ( (unsigned int)v3 > 1 )
    {
      v11 = (unsigned __int16 *)(v6 + 44);
      do
      {
        if ( *((_BYTE *)v11 - 7) )
        {
          if ( (int)HvlpEnableNextLogicalProcessor(*((unsigned int *)v11 - 1), *v11) < 0 )
            break;
          LODWORD(HvlpLogicalProcessorCount) = HvlpLogicalProcessorCount + 1;
          *((_BYTE *)v11 - 6) = 1;
        }
        ++v10;
        v11 += 18;
      }
      while ( v10 < (unsigned int)v3 );
    }
    ApicIdAndNumaNode = HvlpSelectVpSet((unsigned int)v3, v6);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_34;
    if ( (_DWORD)v3 )
    {
      v15 = v6 + 1;
      v16 = v3;
      do
      {
        if ( *(_BYTE *)v15 || *(_BYTE *)(v15 + 2) )
        {
          LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v15 + 3));
          if ( v18 )
            *(_DWORD *)(LpcbByApicId + 48) = 1;
          if ( *(_BYTE *)(v15 + 2) )
          {
            ++HvlpActiveProcessorCount;
            *(_BYTE *)(LpcbByApicId + 112) = 1;
          }
        }
        v15 += 36LL;
        --v16;
      }
      while ( v16 );
    }
    if ( (HvlpRootFlags & 0x800) == 0 )
      goto LABEL_33;
    if ( HvlpActiveProcessorCount != (_DWORD)HvlpLogicalProcessorCount )
    {
      qsort(HvlpLogicalProcessorRegions, (unsigned int)HvlpLogicalProcessorCount, 0x78uLL, HvlpCompareActiveLpcbs);
      v19 = 0;
      if ( (_DWORD)HvlpLogicalProcessorCount )
      {
        do
        {
          ApicIdAndNumaNode = HvlpUpdateLpcbIndex(&HvlpLogicalProcessorRegions[30 * v19], v19);
          if ( ApicIdAndNumaNode < 0 )
            goto LABEL_34;
        }
        while ( ++v19 < (unsigned int)HvlpLogicalProcessorCount );
      }
    }
    ApicIdAndNumaNode = HvlpCommitLpIndices(v13, v12, v14, v15);
    if ( ApicIdAndNumaNode >= 0 )
LABEL_33:
      ApicIdAndNumaNode = 0;
LABEL_34:
    MmFreeIndependentPages(v6, v4);
    return (unsigned int)ApicIdAndNumaNode;
  }
  return (unsigned int)-1073741670;
}
