/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x1400A4924
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x1400A4910 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x14015D6A0 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14003F0B0 (IopSetDiskIoAttributionExtension.c)
 *     IopIrpHasExtensionType @ 0x1400A4C7C (IopIrpHasExtensionType.c)
 *     IoSetActivityIdIrp @ 0x140162500 (IoSetActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  bool v5; // al
  unsigned int v6; // r10d
  __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v9; // di
  __int16 v10; // di
  __int64 v11; // r15
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v13; // rbx
  _SLIST_ENTRY **v14; // rdx
  __int16 Number; // ax
  bool v16; // al
  _SLIST_ENTRY *result; // rax
  char v18; // [rsp+80h] [rbp+18h]
  char v19; // [rsp+88h] [rbp+20h]

  v19 = 0;
  v5 = (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
  v6 = 6;
  if ( v5 && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL)
    || (unsigned __int8)IopIrpHasExtensionType(a1, v6)
    || v7 && (*(_DWORD *)(v7 + 48) & 0x8000000) != 0 )
  {
    ++a3;
    v19 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  v9 = 72 * a3 + 208;
  if ( a3 > (char)IopLargeIrpStackLocations )
    goto LABEL_28;
  v18 = 4;
  if ( a3 == 1 )
  {
    v11 = 0LL;
  }
  else
  {
    if ( a3 <= (char)IopMediumIrpStackLocations )
    {
      v10 = (char)IopMediumIrpStackLocations;
      v11 = 1LL;
    }
    else
    {
      v10 = (char)IopLargeIrpStackLocations;
      v11 = 2LL;
    }
    v9 = 72 * v10 + 208;
  }
  P = CurrentPrcb->PPLookasideList[v11].P;
  ++P->TotalAllocates;
  v13 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v13 )
  {
    ++P->AllocateMisses;
    P = CurrentPrcb->PPLookasideList[v11].L;
    ++P->TotalAllocates;
    v13 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v13 )
      ++P->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    if ( !v13 )
      goto LABEL_28;
    if ( *((_QWORD *)&v13[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
    {
      v9 = *((_QWORD *)&v13[3].Next + 1);
      goto LABEL_18;
    }
    ++P->TotalFrees;
    ExFreePoolWithTag(v13, 0);
LABEL_28:
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x20707249u);
    v13 = result;
    if ( !result )
      return result;
    goto LABEL_19;
  }
LABEL_18:
  if ( !v13 )
    goto LABEL_28;
LABEL_19:
  memset(v13, 0, v9);
  BYTE2(v13[4].Next) = a3;
  LOWORD(v13->Next) = 6;
  BYTE3(v13[4].Next) = a3 + 1;
  WORD1(v13->Next) = v9;
  BYTE6(v13[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v13[2].Next + 1) = v13 + 2;
  v13[2].Next = v13 + 2;
  v14 = &v13[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v13[11].Next + 1) = v14;
  Number = CurrentPrcb->Number;
  LODWORD(v13[1].Next) |= 8u;
  WORD2(v13->Next) = Number;
  LODWORD(v13[1].Next) |= *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v13[4].Next) |= v18;
  *((_QWORD *)&v13[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v13[1].Next + 1) = a1;
  if ( v19 )
  {
    --BYTE3(v13[4].Next);
    --BYTE2(v13[4].Next);
    *((_QWORD *)&v13[11].Next + 1) = v14 - 9;
    *((_QWORD *)&v13[12].Next + 1) = v14 - 9;
  }
  v16 = (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
  if ( v16 && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
    IoSetActivityIdIrp(v13, *(_QWORD *)(a1 + 200) + 24LL);
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 6LL) )
    IopSetDiskIoAttributionExtension(
      (__int64)v13,
      *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL),
      *((_QWORD *)&v13[9].Next + 1),
      1);
  return v13;
}
