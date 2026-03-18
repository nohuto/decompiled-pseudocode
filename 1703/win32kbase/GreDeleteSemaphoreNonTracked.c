/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C0092750
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C005845C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall GreDeleteSemaphoreNonTracked(struct _ERESOURCE *P)
{
  if ( P )
  {
    ExDeleteResourceLite(P);
    ExFreePoolWithTag(P, 0);
  }
}
