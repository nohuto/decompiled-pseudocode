/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x140139988
 * Callers:
 *     KeStartAllProcessors @ 0x14082E140 (KeStartAllProcessors.c)
 * Callees:
 *     qsort @ 0x14015F450 (qsort.c)
 *     HvlpCommitLpIndices @ 0x14017AD2C (HvlpCommitLpIndices.c)
 *     HvlpUpdateLpcbIndex @ 0x14017AE30 (HvlpUpdateLpcbIndex.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1401EA5DC (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x1401EA830 (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1401EABE0 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x1401EAC40 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1401EB098 (HvlpSelectVpSet.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 *     MmFreeIndependentPages @ 0x1405D59B0 (MmFreeIndependentPages.c)
 *     HvlpDiscoverTopologyLocal @ 0x1406B319C (HvlpDiscoverTopologyLocal.c)
 */

__int64 __fastcall HvlStartBootLogicalProcessors(int a1)
{
  unsigned int MaximumProcessorCount; // eax
  __int64 v3; // rdi
  size_t v4; // r14
  char *IndependentPages; // rax
  char *v6; // rsi
  int ApicIdAndNumaNode; // ebx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned __int16 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char *v15; // r9
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
  if ( ((int (__fastcall *)(__int64, __int64, char *, int *))off_140354F48[0])(11LL, 64LL, v20, &v25) >= 0 && v25 == 64 )
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
  IndependentPages = (char *)MmAllocateIndependentPages(v4, 0xFFFFFFFFLL);
  v6 = IndependentPages;
  if ( IndependentPages )
  {
    memset(IndependentPages, 0, v4);
    CurrentPrcb = KeGetCurrentPrcb();
    dword_140408354 = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_140408358, &unk_14040835C);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_34;
    qword_140408370 = (__int64)CurrentPrcb->StatisticsPage;
    dword_140408368 = CurrentPrcb->Number;
    HvlpCpuVendor = CurrentPrcb->CpuVendor;
    HvlpDiscoverTopologyLocal(v9, (unsigned int)dword_140408358, &unk_140408360, &unk_140408364);
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
        if ( *v15 || v15[2] )
        {
          LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v15 + 3));
          if ( v18 )
            *(_DWORD *)(LpcbByApicId + 48) = 1;
          if ( v15[2] )
          {
            ++HvlpActiveProcessorCount;
            *(_BYTE *)(LpcbByApicId + 112) = 1;
          }
        }
        v15 += 36;
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
