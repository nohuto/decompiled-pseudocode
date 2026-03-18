/*
 * XREFs of CmpLightWeightPrepareDeleteKeyUoW @ 0x140674B74
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140669CF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1404CFF1C (CmpCleanupDiscardReplaceContext.c)
 *     CmpMarkKeyDirty @ 0x1404D177C (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1404D1F10 (CmpRemoveSubKeyFromList.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14066DB80 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140673CA8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x140674640 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteKeyUoW(__int64 *a1)
{
  __int64 v1; // rsi
  ULONG_PTR v3; // r14
  _DWORD *v4; // rdi
  int ModificationData; // eax
  int v6; // ebx
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  PVOID TransientPoolWithTag; // rax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+5Ch] [rbp+14h]

  v13 = -1;
  v14 = 0;
  v1 = 0LL;
  v3 = *(_QWORD *)(a1[6] + 24);
  v4 = *(_DWORD **)(a1[10] + 104);
  P = v4;
  if ( v4 )
  {
    ++*v4;
LABEL_5:
    v7 = *(unsigned int *)(a1[6] + 32);
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, int *))(v3 + 8))(v3, v7, &v13) )
    {
LABEL_6:
      v6 = -1073741670;
      goto LABEL_18;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(v3 + 16))(v3, &v13);
    if ( !CmpMarkKeyDirty(v3, (unsigned int)v7, 0)
      || !HvpMarkCellDirty(v3, *(unsigned int *)(*(_QWORD *)(a1[6] + 64) + 32LL), 0) )
    {
      v6 = -1073741443;
      goto LABEL_18;
    }
    v9 = *(_QWORD *)(a1[6] + 184);
    if ( !v9 || *(_QWORD *)(v9 + 32) == v9 + 32 )
      goto LABEL_24;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(v8, 0x20uLL, 0x31374D43u);
    v1 = (__int64)TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      goto LABEL_6;
    memset(TransientPoolWithTag, 0, 0x20uLL);
    *(_DWORD *)(v1 + 8) = -1073741823;
    *(_QWORD *)(v1 + 24) = v1 + 16;
    *(_QWORD *)(v1 + 16) = v1 + 16;
    v6 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(a1[6], v1);
    if ( v6 >= 0 )
    {
LABEL_24:
      if ( CmpRemoveSubKeyFromList(v3, &v4[(v7 >> 31) + 3], v7) )
      {
        --v4[(v7 >> 31) + 1];
        v6 = 0;
        a1[13] = (__int64)v4;
        a1[14] = v1;
        return (unsigned int)v6;
      }
      v6 = -1073741670;
    }
    if ( v1 )
    {
      CmpCleanupDiscardReplaceContext((_QWORD *)v1);
      MiDeleteSubsection((PPRIVILEGE_SET)v1);
    }
    goto LABEL_18;
  }
  ModificationData = CmpLightWeightCreateModificationData((__int64)a1, (unsigned int **)&P);
  v4 = P;
  v6 = ModificationData;
  if ( ModificationData >= 0 )
    goto LABEL_5;
LABEL_18:
  if ( v4 )
    CmpLightWeightCleanupModifyKeyDataUoW(v3, v4);
  return (unsigned int)v6;
}
