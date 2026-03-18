/*
 * XREFs of IopAllocateIrpPrivate @ 0x140082210
 * Callers:
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrp @ 0x1400DEBD0 (IoAllocateIrp.c)
 *     IopAllocateIrpWithExtension @ 0x1400FFE44 (IopAllocateIrpWithExtension.c)
 *     IoAllocateIrpEx @ 0x1401108F0 (IoAllocateIrpEx.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopInitActivityIdIrp @ 0x1401F5318 (IopInitActivityIdIrp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopAllocateIrpPrivate(__int64 a1, char a2, char a3)
{
  char v3; // r13
  char v5; // si
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned __int16 v10; // bp
  __int16 v11; // bp
  _GENERAL_LOOKASIDE *P; // r12
  char v13; // r14
  char v14; // r14
  __int64 v15; // rcx
  PVOID result; // rax
  __int64 v18; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+78h] [rbp+10h]

  v3 = 0;
  v5 = a2;
  if ( a1 && (a1 == -1 || (*(_DWORD *)(a1 + 48) & 0x8000000) != 0) )
  {
    v5 = a2 + 1;
    v3 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (IopIrpStackProfilerFlags & 3) != 0 && (IopIrpStackProfilerFlags & 4) != 0 && v5 < 20 )
  {
    v7 = &CurrentPrcb->MxCsr + v5;
    ++v7[6448];
    ++CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps;
    if ( v7[6448] - v7[6469] > IopIrpStackProfilerMinSizeThreshold
      && CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps - CurrentPrcb->IoIrpStackProfilerPrevious.TotalIrps > IopIrpStackProfilerSampleSize )
    {
      _m_prefetchw(&IopIrpStackProfilerFlags);
      if ( (_InterlockedAnd(&IopIrpStackProfilerFlags, 0xFFFFFFFB) & 4) != 0 )
        KeInsertQueueDpc(&IopIrpStackProfilerDpc, 0LL, 0LL);
    }
  }
  v8 = 0LL;
  v9 = v5;
  v19 = 0;
  v10 = 72 * v5 + 208;
  if ( v5 <= (char)IopLargeIrpStackLocations && (!a3 || CurrentPrcb->LookasideIrpFloat > 0) )
  {
    v19 = 4;
    if ( v5 != 1 )
    {
      if ( v5 <= (char)IopMediumIrpStackLocations )
      {
        v11 = (char)IopMediumIrpStackLocations;
        v8 = 1LL;
      }
      else
      {
        v11 = (char)IopLargeIrpStackLocations;
        v8 = 2LL;
      }
      v10 = 72 * v11 + 208;
    }
    v18 = v8;
    P = CurrentPrcb->PPLookasideList[v8].P;
    ++P->TotalAllocates;
    v8 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v8 )
    {
      ++P->AllocateMisses;
      P = CurrentPrcb->PPLookasideList[v18].L;
      ++P->TotalAllocates;
      v8 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( !v8 )
        ++P->AllocateMisses;
    }
    if ( (IopIrpStackProfilerFlags & 3) != 0 && v8 )
    {
      if ( *(_QWORD *)(v8 + 56) < (unsigned __int64)(unsigned __int16)(72 * v5 + 208) )
      {
        ++P->TotalFrees;
        ExFreePoolWithTag((PVOID)v8, 0);
        goto LABEL_40;
      }
      v10 = *(_WORD *)(v8 + 56);
    }
    v9 = v5;
  }
  v13 = 0;
  if ( v8 )
  {
    if ( a3 && IopIrpCreditsEnabled > 1 )
    {
      _InterlockedDecrement(&CurrentPrcb->LookasideIrpFloat);
      v13 = 8;
    }
    a3 = 0;
    goto LABEL_23;
  }
LABEL_40:
  if ( a3 )
    result = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v10, 0x20707249u);
  else
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x20707249u);
  v8 = (__int64)result;
  if ( !result )
    return result;
  v9 = v5;
  v13 = 0;
LABEL_23:
  memset((void *)v8, 0, v10);
  v14 = v19 | v13;
  *(_BYTE *)(v8 + 66) = v5;
  *(_WORD *)v8 = 6;
  *(_BYTE *)(v8 + 67) = v5 + 1;
  *(_WORD *)(v8 + 2) = v10;
  *(_BYTE *)(v8 + 70) = KeGetCurrentThread()->ApcStateIndex;
  *(_QWORD *)(v8 + 40) = v8 + 32;
  *(_QWORD *)(v8 + 32) = v8 + 32;
  v15 = v8 + 8 * (v9 + 8 * v9 + 26);
  *(_QWORD *)(v8 + 184) = v15;
  *(_WORD *)(v8 + 4) = CurrentPrcb->Number;
  *(_BYTE *)(v8 + 71) = v14;
  if ( a3 )
    *(_BYTE *)(v8 + 71) = v14 | 1;
  if ( v3 )
  {
    --*(_BYTE *)(v8 + 67);
    --*(_BYTE *)(v8 + 66);
    *(_QWORD *)(v8 + 184) = v15 - 72;
    *(_QWORD *)(v8 + 200) = v15 - 72;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
      IopInitActivityIdIrp(v8);
  }
  return (PVOID)v8;
}
