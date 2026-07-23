/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x140117BC4
 * Callers:
 *     IoMakeAssociatedIrpEx @ 0x140117BB0 (IoMakeAssociatedIrpEx.c)
 *     IoMakeAssociatedIrp @ 0x140155AA0 (IoMakeAssociatedIrp.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x140008E14 (IopSetDiskIoAttributionExtension.c)
 *     IopIrpHasExtensionType @ 0x140117EC8 (IopIrpHasExtensionType.c)
 *     IoSetActivityIdIrp @ 0x14014A2C0 (IoSetActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  __int64 v4; // r9
  bool v6; // al
  unsigned int v7; // r10d
  __int64 v8; // r9
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v10; // di
  __int16 v11; // di
  __int64 v12; // r15
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  _SLIST_ENTRY **v17; // rdx
  __int16 Number; // ax
  bool v19; // al
  _SLIST_ENTRY *result; // rax
  char v21; // [rsp+80h] [rbp+18h]
  char v22; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v22 = 0;
  v4 = a2;
  v6 = (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
  v7 = 6;
  if ( v6 && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL, a3, a2)
    || (unsigned __int8)IopIrpHasExtensionType(a1, v7, a3, v4)
    || v8 && (*(_DWORD *)(v8 + 48) & 0x8000000) != 0 )
  {
    ++v3;
    v22 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  v10 = 72 * v3 + 208;
  if ( v3 > (char)IopLargeIrpStackLocations )
    goto LABEL_30;
  v21 = 4;
  if ( v3 == 1 )
  {
    v12 = 0LL;
  }
  else
  {
    if ( v3 <= (char)IopMediumIrpStackLocations )
    {
      v11 = (char)IopMediumIrpStackLocations;
      v12 = 1LL;
    }
    else
    {
      v11 = (char)IopLargeIrpStackLocations;
      v12 = 2LL;
    }
    v10 = 72 * v11 + 208;
  }
  P = CurrentPrcb->PPLookasideList[v12].P;
  ++P->TotalAllocates;
  v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v14 )
  {
    ++P->AllocateMisses;
    P = CurrentPrcb->PPLookasideList[v12].L;
    ++P->TotalAllocates;
    v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v14 )
      ++P->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    if ( !v14 )
      goto LABEL_30;
    if ( *((_QWORD *)&v14[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * v3 + 208) )
    {
      v10 = *((_WORD *)&v14[3].Next + 4);
      goto LABEL_18;
    }
    ++P->TotalFrees;
    ExFreePoolWithTag(v14, 0);
LABEL_30:
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x20707249u);
    v14 = result;
    if ( !result )
      return result;
    goto LABEL_19;
  }
LABEL_18:
  if ( !v14 )
    goto LABEL_30;
LABEL_19:
  memset(v14, 0, v10);
  BYTE2(v14[4].Next) = v3;
  LOWORD(v14->Next) = 6;
  BYTE3(v14[4].Next) = v3 + 1;
  WORD1(v14->Next) = v10;
  BYTE6(v14[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v14[2].Next + 1) = v14 + 2;
  v14[2].Next = v14 + 2;
  v17 = &v14[4 * v3 + 13].Next + v3;
  *((_QWORD *)&v14[11].Next + 1) = v17;
  Number = CurrentPrcb->Number;
  LODWORD(v14[1].Next) |= 8u;
  WORD2(v14->Next) = Number;
  LODWORD(v14[1].Next) |= *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v14[4].Next) |= v21;
  *((_QWORD *)&v14[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v14[1].Next + 1) = a1;
  if ( v22 )
  {
    --BYTE3(v14[4].Next);
    --BYTE2(v14[4].Next);
    *((_QWORD *)&v14[11].Next + 1) = v17 - 9;
    *((_QWORD *)&v14[12].Next + 1) = v17 - 9;
  }
  v19 = (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
  if ( v19 && (unsigned __int8)IopIrpHasExtensionType(a1, 0LL, v15, v16) )
    IoSetActivityIdIrp(v14, *(_QWORD *)(a1 + 200) + 24LL);
  if ( (unsigned __int8)IopIrpHasExtensionType(a1, 6LL, v15, v16) )
    IopSetDiskIoAttributionExtension(
      (__int64)v14,
      *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL),
      *((_QWORD *)&v14[9].Next + 1),
      1);
  return v14;
}
