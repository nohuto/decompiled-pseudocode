/*
 * XREFs of RtlDeleteResource @ 0x180008CC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180008D10 (RtlDeleteCriticalSection.c)
 *     sub_180008E24 @ 0x180008E24 (sub_180008E24.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  RtlDeleteCriticalSection(&Resource->CriticalSection);
  ZwClose(Resource->SharedSemaphore);
  ZwClose(Resource->ExclusiveSemaphore);
  sub_180008E24((PSLIST_ENTRY)Resource->DebugInfo);
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
