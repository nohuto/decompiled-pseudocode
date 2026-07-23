/*
 * XREFs of IopAllocateIrpPrivate @ 0x1400ED9B0
 * Callers:
 *     IoAllocateIrp @ 0x140081530 (IoAllocateIrp.c)
 *     IoAllocateIrpEx @ 0x1400ED920 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IopAllocateIrpWithExtension @ 0x14012BFC8 (IopAllocateIrpWithExtension.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopInitActivityIdIrp @ 0x1401EFC10 (IopInitActivityIdIrp.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

_SLIST_ENTRY *__fastcall IopAllocateIrpPrivate(__int64 a1, char a2, char a3)
{
  char v4; // di
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int *v6; // rcx
  PSLIST_ENTRY v7; // rbx
  __int64 v8; // r15
  unsigned __int16 v9; // r12
  __int16 v10; // r12
  __int64 v11; // r13
  _GENERAL_LOOKASIDE *P; // r15
  char v13; // bp
  char v14; // bp
  _SLIST_ENTRY **v15; // rcx
  _SLIST_ENTRY *result; // rax
  char v17; // [rsp+70h] [rbp+8h]
  char v18; // [rsp+78h] [rbp+10h]

  v17 = 0;
  v4 = a2;
  if ( a1 && (a1 == -1 || (*(_DWORD *)(a1 + 48) & 0x8000000) != 0) )
  {
    v4 = a2 + 1;
    v17 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (IopIrpStackProfilerFlags & 3) != 0 && (IopIrpStackProfilerFlags & 4) != 0 && v4 < 20 )
  {
    v6 = &CurrentPrcb->MxCsr + v4;
    ++v6[6528];
    ++CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps;
    if ( v6[6528] - v6[6549] > IopIrpStackProfilerMinSizeThreshold
      && CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps - CurrentPrcb->IoIrpStackProfilerPrevious.TotalIrps > IopIrpStackProfilerSampleSize )
    {
      _m_prefetchw(&IopIrpStackProfilerFlags);
      if ( (_InterlockedAnd(&IopIrpStackProfilerFlags, 0xFFFFFFFB) & 4) != 0 )
        KeInsertQueueDpc(&IopIrpStackProfilerDpc, 0LL, 0LL);
    }
  }
  v7 = 0LL;
  v8 = v4;
  v18 = 0;
  v9 = 72 * v4 + 208;
  if ( v4 <= (char)IopLargeIrpStackLocations && (!a3 || CurrentPrcb->LookasideIrpFloat > 0) )
  {
    v18 = 4;
    if ( v4 != 1 )
    {
      if ( v4 <= (char)IopMediumIrpStackLocations )
      {
        LODWORD(v7) = 1;
        v10 = 9 * (char)IopMediumIrpStackLocations;
      }
      else
      {
        LODWORD(v7) = 2;
        v10 = 9 * (char)IopLargeIrpStackLocations;
      }
      v9 = 8 * v10 + 208;
    }
    v11 = (int)v7;
    P = CurrentPrcb->PPLookasideList[(int)v7].P;
    ++P->TotalAllocates;
    v7 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v7 )
    {
      ++P->AllocateMisses;
      P = CurrentPrcb->PPLookasideList[v11].L;
      ++P->TotalAllocates;
      v7 = RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( !v7 )
        ++P->AllocateMisses;
    }
    if ( (IopIrpStackProfilerFlags & 3) != 0 && v7 )
    {
      if ( *((_QWORD *)&v7[3].Next + 1) < (unsigned __int64)(unsigned __int16)(72 * v4 + 208) )
      {
        ++P->TotalFrees;
        ExFreePoolWithTag(v7, 0);
        v13 = 0;
        goto LABEL_37;
      }
      v9 = *((_WORD *)&v7[3].Next + 4);
    }
    v8 = v4;
  }
  v13 = 0;
  if ( v7 )
  {
    if ( a3 && IopIrpCreditsEnabled > 1 )
    {
      _InterlockedDecrement(&CurrentPrcb->LookasideIrpFloat);
      v13 = 8;
    }
    a3 = 0;
    goto LABEL_23;
  }
LABEL_37:
  if ( a3 )
    result = (_SLIST_ENTRY *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v9, 0x20707249u);
  else
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x20707249u);
  v7 = result;
  if ( !result )
    return result;
  v8 = v4;
LABEL_23:
  memset(v7, 0, v9);
  v14 = v18 | v13;
  BYTE2(v7[4].Next) = v4;
  LOWORD(v7->Next) = 6;
  BYTE3(v7[4].Next) = v4 + 1;
  WORD1(v7->Next) = v9;
  BYTE6(v7[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v7[2].Next + 1) = v7 + 2;
  v7[2].Next = v7 + 2;
  v15 = &v7[4 * v8 + 13].Next + v8;
  *((_QWORD *)&v7[11].Next + 1) = v15;
  WORD2(v7->Next) = CurrentPrcb->Number;
  HIBYTE(v7[4].Next) = v14;
  if ( a3 )
    HIBYTE(v7[4].Next) = v14 | 1;
  if ( v17 )
  {
    --BYTE3(v7[4].Next);
    --BYTE2(v7[4].Next);
    *((_QWORD *)&v7[11].Next + 1) = v15 - 9;
    *((_QWORD *)&v7[12].Next + 1) = v15 - 9;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
      IopInitActivityIdIrp(v7);
  }
  return v7;
}
