/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C006EC20
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C006DB88 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
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
