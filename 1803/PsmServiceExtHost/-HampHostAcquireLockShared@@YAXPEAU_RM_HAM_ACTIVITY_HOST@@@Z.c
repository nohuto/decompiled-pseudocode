/*
 * XREFs of ?HampHostAcquireLockShared@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AB0
 * Callers:
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800023B0 (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostAcquireLockShared(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  HampHostAcquireLockSharedEx(a1, 0LL);
}
