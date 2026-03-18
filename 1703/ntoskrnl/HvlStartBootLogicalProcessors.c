/*
 * XREFs of HvlStartBootLogicalProcessors @ 0x140155358
 * Callers:
 *     KeStartAllProcessors @ 0x140808F4C (KeStartAllProcessors.c)
 * Callees:
 *     qsort @ 0x14016AA40 (qsort.c)
 *     HvlpCommitLpIndices @ 0x14017B4BC (HvlpCommitLpIndices.c)
 *     HvlpUpdateLpcbIndex @ 0x14017B5D8 (HvlpUpdateLpcbIndex.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1401E5790 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpGetLpcbByApicId @ 0x1401E59DC (HvlpGetLpcbByApicId.c)
 *     HvlpQueryApicIdAndNumaNode @ 0x1401E5D38 (HvlpQueryApicIdAndNumaNode.c)
 *     HvlpSelectLpSet @ 0x1401E5E1C (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1401E6278 (HvlpSelectVpSet.c)
 *     MmFreeIndependentPages @ 0x14056B860 (MmFreeIndependentPages.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 *     HvlpDiscoverTopologyLocal @ 0x140687780 (HvlpDiscoverTopologyLocal.c)
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
  __int64 v13; // r8
  int v14; // r10d
  char *v15; // r9
  __int64 v16; // rbx
  __int64 LpcbByApicId; // rax
  char v18; // r11
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
  if ( ((int (__fastcall *)(__int64, __int64, char *, int *))off_14033C718[0])(11LL, 64LL, v20, &v25) >= 0 && v25 == 64 )
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
    dword_1403E8DB4 = 0;
    ApicIdAndNumaNode = HvlpQueryApicIdAndNumaNode(0LL, &dword_1403E8DB8, &unk_1403E8DBC);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_35;
    qword_1403E8DD0 = (__int64)CurrentPrcb->StatisticsPage;
    dword_1403E8DC8 = CurrentPrcb->Number;
    HvlpCpuVendor = CurrentPrcb->CpuVendor;
    HvlpDiscoverTopologyLocal(v9, (unsigned int)dword_1403E8DB8, &unk_1403E8DC0, &unk_1403E8DC4);
    LODWORD(HvlpLogicalProcessorCount) = 1;
    HvlpLogicalProcessorRegions[0] = 1;
    ApicIdAndNumaNode = HvlpSelectLpSet((unsigned int)v3, v6);
    if ( ApicIdAndNumaNode < 0 )
      goto LABEL_35;
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
      goto LABEL_35;
    v14 = HvlpActiveProcessorCount;
    if ( (_DWORD)v3 )
    {
      v15 = v6 + 1;
      v16 = v3;
      do
      {
        if ( *v15 || v15[2] )
        {
          LpcbByApicId = HvlpGetLpcbByApicId(*(unsigned int *)(v15 + 3), v12, v13, v15);
          if ( v18 )
            *(_DWORD *)(LpcbByApicId + 40) = 1;
          if ( v15[2] )
          {
            ++v14;
            *(_BYTE *)(LpcbByApicId + 104) = 1;
          }
        }
        v15 += 36;
        --v16;
      }
      while ( v16 );
      HvlpActiveProcessorCount = v14;
    }
    if ( (HvlpRootFlags & 0x800) == 0 )
      goto LABEL_34;
    if ( v14 != (_DWORD)HvlpLogicalProcessorCount )
    {
      qsort(HvlpLogicalProcessorRegions, (unsigned int)HvlpLogicalProcessorCount, 0x70uLL, HvlpCompareActiveLpcbs);
      v19 = 0;
      if ( (_DWORD)HvlpLogicalProcessorCount )
      {
        do
        {
          ApicIdAndNumaNode = HvlpUpdateLpcbIndex(&HvlpLogicalProcessorRegions[28 * v19], v19);
          if ( ApicIdAndNumaNode < 0 )
            goto LABEL_35;
        }
        while ( ++v19 < (unsigned int)HvlpLogicalProcessorCount );
      }
    }
    ApicIdAndNumaNode = HvlpCommitLpIndices();
    if ( ApicIdAndNumaNode >= 0 )
LABEL_34:
      ApicIdAndNumaNode = 0;
LABEL_35:
    MmFreeIndependentPages(v6, v4);
    return (unsigned int)ApicIdAndNumaNode;
  }
  return (unsigned int)-1073741670;
}
