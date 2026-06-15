/*
 * XREFs of ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x1400573A4
 * Callers:
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140057DE4 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005C458 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005C820 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400193F4 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 */

BOOL __fastcall UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>(LPCVOID *a1, unsigned int a2)
{
  void *v3; // rcx
  BOOL result; // eax

  v3 = (void *)*a1;
  if ( v3 )
  {
    if ( a2 )
      AERTUnlockMemory(v3, a2);
    result = UnmapViewOfFile(*a1);
    *a1 = 0LL;
  }
  return result;
}
