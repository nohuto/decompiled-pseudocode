/*
 * XREFs of RtlAvlInsertNodeEx @ 0x140098EF0
 * Callers:
 *     MiInsertClone @ 0x14000163C (MiInsertClone.c)
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiFlowThroughInsertNode @ 0x14003B434 (MiFlowThroughInsertNode.c)
 *     MiInsertSubsectionNode @ 0x14005E7E0 (MiInsertSubsectionNode.c)
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiUpdatePageFileSectionList @ 0x140119284 (MiUpdatePageFileSectionList.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 *     MiBeginLargePageAccessor @ 0x14012981C (MiBeginLargePageAccessor.c)
 *     MiCombiningInProgress @ 0x14012CB20 (MiCombiningInProgress.c)
 *     MiInsertMappingNode @ 0x140135178 (MiInsertMappingNode.c)
 *     MiSessionInsertImage @ 0x140148C0C (MiSessionInsertImage.c)
 *     MiUpdatePageFileList @ 0x140159DA0 (MiUpdatePageFileList.c)
 *     MiAddMdlTracker @ 0x14020E384 (MiAddMdlTracker.c)
 *     MiCreateKernelStackNode @ 0x140211DB8 (MiCreateKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x140211F64 (MiMakeIoRangePermanent.c)
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14021D2DC (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x14021E7A8 (MiMergePageNodes.c)
 *     MiUpdatePerSessionProto @ 0x1402214F0 (MiUpdatePerSessionProto.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     MiFinishCreateSection @ 0x14050CC90 (MiFinishCreateSection.c)
 *     MiInsertSharedCommitNode @ 0x140512070 (MiInsertSharedCommitNode.c)
 *     MiAweViewInserter @ 0x1406B8510 (MiAweViewInserter.c)
 *     MiCreateEnclaveRegions @ 0x14080480C (MiCreateEnclaveRegions.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14004B4D0 (RtlpTreeDoubleRotateNodes.c)
 */

__int64 __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  __int64 result; // rax
  bool v6; // r9
  _BYTE *v8; // r8
  char v9; // cl
  char v10; // di
  unsigned __int64 *v11; // r11
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx

  result = 0LL;
  v6 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = a2;
  if ( !a2 )
  {
    *a1 = a4;
    return result;
  }
  result = a3;
  v8 = (_BYTE *)(a2 + 16);
  *(_QWORD *)(a2 + 8 * result) = a4;
  v9 = ~(-2 * v6) & 3;
  v10 = *(_BYTE *)(a2 + 16) & 3;
  if ( v10 )
  {
LABEL_5:
    if ( v10 == v9 )
    {
      if ( (*(_BYTE *)(a4 + 16) & 3) != v10 )
      {
        result = RtlpTreeDoubleRotateNodes(a1, a2, a4, v6);
        *(_BYTE *)(v15 + 16) &= 0xFCu;
        *(_BYTE *)(a4 + 16) &= 0xFCu;
        if ( v10 == (*(_BYTE *)(result + 16) & 3) )
        {
          *(_BYTE *)(v15 + 16) ^= (v10 ^ *(_BYTE *)(v15 + 16) ^ 0xFE) & 3;
          *(_BYTE *)(result + 16) &= 0xFCu;
        }
        else
        {
          if ( v10 == ((*(_BYTE *)(result + 16) ^ 0xFE) & 3) )
            *(_BYTE *)(a4 + 16) = v10 | *(_BYTE *)(a4 + 16) & 0xFC;
          *(_BYTE *)(result + 16) &= 0xFCu;
        }
        return result;
      }
      if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      v11 = (unsigned __int64 *)(a2 + 8LL * v6);
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
      v13 = (unsigned __int64 *)(a4 + 8LL * !v6);
      *(_QWORD *)(a4 + 16) = v12 | *(_DWORD *)(a4 + 16) & 3;
      v14 = *v13;
      if ( *v13 )
      {
        v16 = *(_QWORD *)(v14 + 16);
        if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != a4 )
          __fastfail(0x1Du);
        *(_QWORD *)(v14 + 16) = a2 | v16 & 3;
      }
      *v11 = v14;
      *v13 = a2;
      result = a4 | *(_DWORD *)(a2 + 16) & 3;
      *(_QWORD *)(a2 + 16) = result;
      *(_BYTE *)(a4 + 16) &= 0xFCu;
    }
    *(_BYTE *)(a2 + 16) &= 0xFCu;
    return result;
  }
  while ( 1 )
  {
    a4 = a2;
    *v8 = v9 | *v8 & 0xFC;
    result = a2;
    a2 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return result;
    v8 = (_BYTE *)(a2 + 16);
    v6 = *(_QWORD *)a2 != result;
    v9 = ~(-2 * v6) & 3;
    v10 = *(_BYTE *)(a2 + 16) & 3;
    if ( v10 )
      goto LABEL_5;
  }
}
