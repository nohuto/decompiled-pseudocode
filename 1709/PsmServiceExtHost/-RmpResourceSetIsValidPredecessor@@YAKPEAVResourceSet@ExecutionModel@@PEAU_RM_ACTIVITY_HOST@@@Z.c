/*
 * XREFs of ?RmpResourceSetIsValidPredecessor@@YAKPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004164
 * Callers:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008140 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpResourceSetIsValidPredecessor(
        struct ExecutionModel::ResourceSet *a1,
        struct _RM_ACTIVITY_HOST *a2)
{
  return *((_DWORD *)a1 + 350) == 2 && *((_BYTE *)a1 + 12);
}
