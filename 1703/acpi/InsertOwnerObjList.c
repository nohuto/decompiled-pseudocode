/*
 * XREFs of InsertOwnerObjList @ 0x1C001C0D4
 * Callers:
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     InitializeNativeNamespace @ 0x1C0022FC4 (InitializeNativeNamespace.c)
 *     MigrateDefunctObjectsToNewOwner @ 0x1C005D77C (MigrateDefunctObjectsToNewOwner.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall InsertOwnerObjList(struct _EX_RUNDOWN_REF *a1, struct _EX_RUNDOWN_REF *a2)
{
  BOOLEAN result; // al

  a2[6].Count = (unsigned __int64)a1;
  if ( a1 )
  {
    a2[7].Count = a1[3].Count;
    a1[3].Count = (unsigned __int64)a2;
    return ExAcquireRundownProtection(a1 + 4);
  }
  return result;
}
