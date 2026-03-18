/*
 * XREFs of CmpCleanupLightWeightPrepare @ 0x14054EBE4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14054BE4C (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14054EAD4 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpFreeKeyByCell @ 0x1405150FC (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1405154A4 (CmpFreeValue.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14054F7E4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14057DF08 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140703F30 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 */

void __fastcall CmpCleanupLightWeightPrepare(__int64 a1)
{
  __int64 v1; // rdi
  __int64 NextElement; // rax
  __int64 v3; // rbx
  void *v4; // r8
  int v5; // eax
  __int64 v6; // rcx
  unsigned int *v7; // rcx
  ULONG_PTR v8; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v9 = 0LL;
    v1 = a1 + 16;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            NextElement = CmListGetNextElement(v1, &v9, 0LL);
            v3 = NextElement;
            if ( !NextElement )
              return;
            v4 = *(void **)(NextElement + 104);
          }
          while ( !v4 );
          v5 = *(_DWORD *)(NextElement + 68);
          if ( !v5 )
          {
LABEL_16:
            CmpFreeKeyByCell(
              *(_QWORD *)(*(_QWORD *)(v3 + 48) + 24LL),
              *(unsigned int *)(*(_QWORD *)(v3 + 48) + 32LL),
              0);
            v4 = *(void **)(v3 + 104);
            goto LABEL_17;
          }
          if ( v5 != 1 )
            break;
LABEL_23:
          *(_QWORD *)(v3 + 104) = 0LL;
        }
        if ( v5 != 2 )
          break;
LABEL_17:
        if ( v4 )
        {
          CmpLightWeightCleanupModifyKeyDataUoW(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 24LL));
          *(_QWORD *)(v3 + 104) = 0LL;
        }
        v6 = *(_QWORD *)(v3 + 112);
        if ( v6 )
        {
          CmpCleanupDiscardReplaceContext(v6);
          CmSiFreeMemory(*(PPRIVILEGE_SET *)(v3 + 112));
          goto LABEL_21;
        }
      }
      if ( v5 == 3 )
        goto LABEL_23;
      if ( v5 > 3 )
      {
        if ( v5 <= 6 )
        {
          CmpLightWeightCleanupSetValueKeyUoW(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 24LL), v4);
          v7 = *(unsigned int **)(v3 + 112);
          *(_QWORD *)(v3 + 104) = 0LL;
          if ( v7 )
          {
            v8 = *v7;
            if ( (_DWORD)v8 != -1 )
            {
              CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 24LL), v8);
              v7 = *(unsigned int **)(v3 + 112);
            }
            CmpFreeTransientPoolWithTag(v7, 0x77554D43u);
LABEL_21:
            *(_QWORD *)(v3 + 112) = 0LL;
          }
        }
        else
        {
          switch ( v5 )
          {
            case 9:
              ExFreePoolWithTag(v4, 0x77554D43u);
              goto LABEL_23;
            case 10:
              goto LABEL_23;
            case 12:
              goto LABEL_16;
          }
        }
      }
    }
  }
}
