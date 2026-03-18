/*
 * XREFs of RtlAvlInsertNodeEx @ 0x1400A2A10
 * Callers:
 *     MiUpdatePageFileSectionList @ 0x14001F824 (MiUpdatePageFileSectionList.c)
 *     MiInsertVad @ 0x14003ECC0 (MiInsertVad.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiInsertSubsectionNode @ 0x1400B747C (MiInsertSubsectionNode.c)
 *     MiBeginPageAccessor @ 0x1400C73E4 (MiBeginPageAccessor.c)
 *     MiCombiningInProgress @ 0x1400CF508 (MiCombiningInProgress.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 *     MiInsertClone @ 0x140120184 (MiInsertClone.c)
 *     MiInsertMappingNode @ 0x140125C94 (MiInsertMappingNode.c)
 *     MiFlowThroughInsertNode @ 0x1401303B8 (MiFlowThroughInsertNode.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     MiUpdatePageFileList @ 0x14014FF48 (MiUpdatePageFileList.c)
 *     MiSessionInsertImage @ 0x1401550D4 (MiSessionInsertImage.c)
 *     MiAddMdlTracker @ 0x140215AE4 (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140216690 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiCreateKernelStackNode @ 0x1402196D0 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402199D4 (MiMakeIoRangePermanent.c)
 *     MiUpdatePerSessionProto @ 0x14022E1A8 (MiUpdatePerSessionProto.c)
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x140236734 (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1402375C0 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x140237794 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x140237FA0 (MiMergePageNodes.c)
 *     MiFinishCreateSection @ 0x14049B8E0 (MiFinishCreateSection.c)
 *     MiInsertSharedCommitNode @ 0x1404D0A10 (MiInsertSharedCommitNode.c)
 *     ExpWnfCreateNameInstance @ 0x1405010B0 (ExpWnfCreateNameInstance.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 *     MiAweViewInserter @ 0x1406E51E0 (MiAweViewInserter.c)
 *     PsCallEnclave @ 0x14071B2E0 (PsCallEnclave.c)
 *     MiCreateEnclaveRegions @ 0x140850F58 (MiCreateEnclaveRegions.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14005DF54 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  __int64 v5; // rax
  bool v6; // r9
  _BYTE *v8; // r8
  char v9; // bl
  _BOOL8 v10; // r8
  _QWORD *v11; // r9
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r10

  LOBYTE(v5) = 0;
  v6 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = a2;
  if ( a2 )
  {
    v5 = a3;
    v8 = (_BYTE *)(a2 + 16);
    *(_QWORD *)(a2 + 8 * v5) = a4;
    LOBYTE(v5) = ~(-2 * v6) & 3;
    v9 = *(_BYTE *)(a2 + 16) & 3;
    if ( v9 )
    {
LABEL_5:
      if ( v9 == (_BYTE)v5 )
      {
        if ( (*(_BYTE *)(a4 + 16) & 3) == v9 )
        {
          if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
            __fastfail(0x1Du);
          v10 = !v6;
          v11 = (_QWORD *)(a2 + 8LL * v6);
          if ( *v11 != a4 )
            __fastfail(0x1Du);
          v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v12 )
          {
            if ( *(_QWORD *)(v12 + 8) == a2 )
            {
              *(_QWORD *)(v12 + 8) = a4;
            }
            else
            {
              if ( *(_QWORD *)v12 != a2 )
                __fastfail(0x1Du);
              *(_QWORD *)v12 = a4;
            }
          }
          else
          {
            if ( *a1 != a2 )
              __fastfail(0x1Du);
            *a1 = a4;
          }
          *(_QWORD *)(a4 + 16) = v12 | *(_DWORD *)(a4 + 16) & 3;
          v13 = *(_QWORD *)(a4 + 8 * v10);
          if ( v13 )
          {
            v16 = *(_QWORD *)(v13 + 16);
            if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != a4 )
              __fastfail(0x1Du);
            *(_QWORD *)(v13 + 16) = a2 | v16 & 3;
          }
          *v11 = v13;
          *(_QWORD *)(a4 + 8 * v10) = a2;
          v5 = a4 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v5;
          *(_BYTE *)(a4 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
        }
        else
        {
          v5 = RtlpTreeDoubleRotateNodes(a1, a2, a4, v6);
          *(_BYTE *)(v14 + 16) &= 0xFCu;
          v15 = v5;
          LOBYTE(v5) = *(_BYTE *)(a4 + 16) & 0xFC;
          *(_BYTE *)(a4 + 16) = v5;
          if ( v9 == (*(_BYTE *)(v15 + 16) & 3) )
          {
            LOBYTE(v5) = (v9 ^ *(_BYTE *)(v14 + 16) ^ 0xFE) & 3;
            *(_BYTE *)(v14 + 16) ^= v5;
            *(_BYTE *)(v15 + 16) &= 0xFCu;
          }
          else
          {
            if ( v9 == ((*(_BYTE *)(v15 + 16) ^ 0xFE) & 3) )
            {
              LOBYTE(v5) = v9 | v5;
              *(_BYTE *)(a4 + 16) = v5;
            }
            *(_BYTE *)(v15 + 16) &= 0xFCu;
          }
        }
      }
      else
      {
        *(_BYTE *)(a2 + 16) &= 0xFCu;
      }
    }
    else
    {
      while ( 1 )
      {
        a4 = a2;
        *v8 = v5 | *v8 & 0xFC;
        a2 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !a2 )
          break;
        v8 = (_BYTE *)(a2 + 16);
        v6 = *(_QWORD *)a2 != a4;
        LOBYTE(v5) = ~(-2 * v6) & 3;
        v9 = *(_BYTE *)(a2 + 16) & 3;
        if ( v9 )
          goto LABEL_5;
      }
    }
  }
  else
  {
    *a1 = a4;
  }
  return v5;
}
