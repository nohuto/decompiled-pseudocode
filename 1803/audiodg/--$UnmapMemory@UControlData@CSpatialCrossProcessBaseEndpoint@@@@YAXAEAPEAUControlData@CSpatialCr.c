/*
 * XREFs of ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x140057724
 * Callers:
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400581B0 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005C818 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005CC1C (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400185C8 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 */

BOOL __fastcall UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>(void **a1, unsigned int a2)
{
  void *v3; // rcx
  BOOL result; // eax

  v3 = *a1;
  if ( v3 )
  {
    if ( a2 )
    {
      AERTUnlockMemory(v3, a2);
      v3 = *a1;
    }
    result = UnmapViewOfFile(v3);
    *a1 = 0LL;
  }
  return result;
}
