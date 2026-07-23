/*
 * XREFs of RtlDeleteResource @ 0x180029F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     sub_180029EA4 @ 0x180029EA4 (sub_180029EA4.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  RtlDeleteCriticalSection(&Resource->CriticalSection);
  ZwClose(Resource->SharedSemaphore);
  ZwClose(Resource->ExclusiveSemaphore);
  sub_180029EA4((PSLIST_ENTRY)Resource->DebugInfo);
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
