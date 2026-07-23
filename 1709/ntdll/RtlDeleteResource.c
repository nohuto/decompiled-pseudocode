/*
 * XREFs of RtlDeleteResource @ 0x180061430
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180061480 (RtlDeleteCriticalSection.c)
 *     RtlpFreeDebugInfo @ 0x180061594 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  RtlpFreeDebugInfo(Resource->DebugInfo);
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
