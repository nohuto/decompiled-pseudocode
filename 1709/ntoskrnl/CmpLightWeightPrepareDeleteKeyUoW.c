/*
 * XREFs of CmpLightWeightPrepareDeleteKeyUoW @ 0x14069F714
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14044BDE0 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140472B60 (CmpCleanupDiscardReplaceContext.c)
 *     CmpRemoveSubKeyFromList @ 0x140473308 (CmpRemoveSubKeyFromList.c)
 *     CmpMarkKeyDirty @ 0x1404735A4 (CmpMarkKeyDirty.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14069809C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14069EC58 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14069F310 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteKeyUoW(__int64 *a1)
{
  __int64 v1; // rsi
  ULONG_PTR v3; // r14
  unsigned int *v4; // rdi
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  PVOID TransientPoolWithTag; // rax
  unsigned int *v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+5Ch] [rbp+14h]

  v13 = -1;
  v14 = 0;
  v1 = 0LL;
  v3 = *(_QWORD *)(a1[6] + 24);
  v4 = *(unsigned int **)(a1[10] + 104);
  v12 = v4;
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
      if ( CmpRemoveSubKeyFromList(v3, (int *)&v4[(v7 >> 31) + 3], v7) )
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
  v5 = CmpLightWeightCreateModificationData((__int64)a1, &v12);
  v4 = v12;
  v6 = v5;
  if ( v5 >= 0 )
    goto LABEL_5;
LABEL_18:
  if ( v4 )
    CmpLightWeightCleanupModifyKeyDataUoW(v3, v4);
  return (unsigned int)v6;
}
