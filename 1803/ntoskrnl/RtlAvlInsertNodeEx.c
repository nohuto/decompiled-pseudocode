/*
 * XREFs of RtlAvlInsertNodeEx @ 0x1400E7830
 * Callers:
 *     MiCombiningInProgress @ 0x140004A14 (MiCombiningInProgress.c)
 *     MiInsertVad @ 0x14001F3B0 (MiInsertVad.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     MiInsertSubsectionNode @ 0x14004D364 (MiInsertSubsectionNode.c)
 *     MiInsertMappingNode @ 0x1400C5508 (MiInsertMappingNode.c)
 *     MiFlowThroughInsertNode @ 0x1400D2638 (MiFlowThroughInsertNode.c)
 *     MiBeginPageAccessor @ 0x1400E7730 (MiBeginPageAccessor.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 *     MiInsertClone @ 0x1401426E0 (MiInsertClone.c)
 *     MiProcessLoaderEntry @ 0x140160F88 (MiProcessLoaderEntry.c)
 *     MiSessionInsertImage @ 0x14016C34C (MiSessionInsertImage.c)
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiUpdatePageFileList @ 0x14017DF20 (MiUpdatePageFileList.c)
 *     MiAddMdlTracker @ 0x1402539C4 (MiAddMdlTracker.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140254378 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiCreateKernelStackNode @ 0x1402562D0 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402564B0 (MiMakeIoRangePermanent.c)
 *     MmManageFaultRange @ 0x140262270 (MmManageFaultRange.c)
 *     MiUpdatePerSessionProto @ 0x140268350 (MiUpdatePerSessionProto.c)
 *     MiReplaceSystemProtoPtesNode @ 0x14026A73C (MiReplaceSystemProtoPtesNode.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14026E0FC (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x14026F18C (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14026F364 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x14026FBA8 (MiMergePageNodes.c)
 *     MiFinishCreateSection @ 0x1404C37A0 (MiFinishCreateSection.c)
 *     ExpWnfCreateNameInstance @ 0x1404F5F84 (ExpWnfCreateNameInstance.c)
 *     MiInsertSharedCommitNode @ 0x140595350 (MiInsertSharedCommitNode.c)
 *     MiProcessCrcList @ 0x1405B6E90 (MiProcessCrcList.c)
 *     MiAweViewInserter @ 0x14074F714 (MiAweViewInserter.c)
 *     PsCallEnclave @ 0x14077EDB0 (PsCallEnclave.c)
 *     MiCreateEnclaveRegions @ 0x14089D418 (MiCreateEnclaveRegions.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1400E7A3C (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  _BYTE *v6; // r10
  char v7; // r9
  char v8; // di
  _BOOL8 v9; // r10
  _QWORD *v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8

  LOBYTE(v4) = 0;
  a4[2] = a2;
  *a4 = 0LL;
  v5 = (unsigned __int64)a4;
  a4[1] = 0LL;
  if ( a2 )
  {
    v6 = (_BYTE *)(a2 + 16);
    *(_QWORD *)(a2 + 8LL * a3) = a4;
    v7 = *(_BYTE *)(a2 + 16);
    LOBYTE(v4) = ~(-2 * a3) & 3;
    v8 = v7 & 3;
    if ( (v7 & 3) != 0 )
    {
LABEL_6:
      if ( v8 == (_BYTE)v4 )
      {
        if ( (*(_BYTE *)(v5 + 16) & 3) == v8 )
        {
          if ( (*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
            __fastfail(0x1Du);
          v9 = !a3;
          v10 = (_QWORD *)(a2 + 8LL * a3);
          if ( *v10 != v5 )
            __fastfail(0x1Du);
          v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v11 )
          {
            if ( *(_QWORD *)(v11 + 8) == a2 )
            {
              *(_QWORD *)(v11 + 8) = v5;
            }
            else
            {
              if ( *(_QWORD *)v11 != a2 )
                __fastfail(0x1Du);
              *(_QWORD *)v11 = v5;
            }
          }
          else
          {
            if ( *a1 != a2 )
              __fastfail(0x1Du);
            *a1 = v5;
          }
          *(_QWORD *)(v5 + 16) = v11 | *(_DWORD *)(v5 + 16) & 3;
          v12 = *(_QWORD *)(v5 + 8 * v9);
          if ( v12 )
          {
            v15 = *(_QWORD *)(v12 + 16);
            if ( (v15 & 0xFFFFFFFFFFFFFFFCuLL) != v5 )
              __fastfail(0x1Du);
            *(_QWORD *)(v12 + 16) = a2 | v15 & 3;
          }
          *v10 = v12;
          *(_QWORD *)(v5 + 8 * v9) = a2;
          v4 = v5 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v4;
          *(_BYTE *)(v5 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
        }
        else
        {
          v4 = RtlpTreeDoubleRotateNodes(a1, a2, v5, a3);
          *(_BYTE *)(v13 + 16) &= 0xFCu;
          v14 = v4;
          LOBYTE(v4) = *(_BYTE *)(v5 + 16) & 0xFC;
          *(_BYTE *)(v5 + 16) = v4;
          if ( v8 == (*(_BYTE *)(v14 + 16) & 3) )
          {
            LOBYTE(v4) = (v8 ^ *(_BYTE *)(v13 + 16) ^ 0xFE) & 3;
            *(_BYTE *)(v13 + 16) ^= v4;
            *(_BYTE *)(v14 + 16) &= 0xFCu;
          }
          else
          {
            if ( v8 == ((*(_BYTE *)(v14 + 16) ^ 0xFE) & 3) )
            {
              LOBYTE(v4) = v8 | v4;
              *(_BYTE *)(v5 + 16) = v4;
            }
            *(_BYTE *)(v14 + 16) &= 0xFCu;
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
        v5 = a2;
        *v6 = v4 | v7 & 0xFC;
        a2 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !a2 )
          break;
        v6 = (_BYTE *)(a2 + 16);
        v7 = *(_BYTE *)(a2 + 16);
        a3 = *(_QWORD *)a2 != v5;
        LOBYTE(v4) = ~(-2 * a3) & 3;
        v8 = v7 & 3;
        if ( (v7 & 3) != 0 )
          goto LABEL_6;
      }
    }
  }
  else
  {
    *a1 = (unsigned __int64)a4;
  }
  return v4;
}
