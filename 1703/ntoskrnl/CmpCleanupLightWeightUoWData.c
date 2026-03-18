/*
 * XREFs of CmpCleanupLightWeightUoWData @ 0x1406697FC
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x1406697BC (CmpCleanupLightWeightPrepare.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1404CFF1C (CmpCleanupDiscardReplaceContext.c)
 *     CmpFreeKeyByCell @ 0x1404D1394 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1404D154C (CmpFreeValue.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140673CA8 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140673CF8 (CmpLightWeightCleanupSetValueKeyUoW.c)
 */

void __fastcall CmpCleanupLightWeightUoWData(__int64 a1)
{
  int v2; // eax
  void *v3; // rdx
  _QWORD *v4; // rcx
  unsigned int *v5; // rax
  ULONG_PTR v6; // rdx

  if ( !*(_QWORD *)(a1 + 104) )
    return;
  v2 = *(_DWORD *)(a1 + 68);
  switch ( v2 )
  {
    case 0:
      goto LABEL_11;
    case 1:
      goto LABEL_23;
    case 2:
      goto LABEL_12;
    case 3:
LABEL_23:
      *(_QWORD *)(a1 + 104) = 0LL;
      return;
  }
  if ( v2 <= 3 )
    return;
  if ( v2 > 6 )
  {
    if ( v2 == 9 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 104), 0x77554D43u);
      *(_QWORD *)(a1 + 104) = 0LL;
      return;
    }
    if ( v2 != 10 )
    {
      if ( v2 != 12 )
        return;
LABEL_11:
      CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), *(_DWORD *)(*(_QWORD *)(a1 + 48) + 32LL), 0);
LABEL_12:
      v3 = *(void **)(a1 + 104);
      if ( v3 )
      {
        CmpLightWeightCleanupModifyKeyDataUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), v3);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
      v4 = *(_QWORD **)(a1 + 112);
      if ( v4 )
      {
        CmpCleanupDiscardReplaceContext(v4);
        MiDeleteSubsection(*(PPRIVILEGE_SET *)(a1 + 112));
LABEL_16:
        *(_QWORD *)(a1 + 112) = 0LL;
        return;
      }
      return;
    }
    goto LABEL_23;
  }
  CmpLightWeightCleanupSetValueKeyUoW(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), *(_QWORD *)(a1 + 104));
  v5 = *(unsigned int **)(a1 + 112);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( v5 )
  {
    v6 = *v5;
    if ( (_DWORD)v6 != -1 )
      CmpFreeValue(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), v6);
    CmpFreeTransientPoolWithTag(*(PVOID *)(a1 + 112), 0x77554D43u);
    goto LABEL_16;
  }
}
