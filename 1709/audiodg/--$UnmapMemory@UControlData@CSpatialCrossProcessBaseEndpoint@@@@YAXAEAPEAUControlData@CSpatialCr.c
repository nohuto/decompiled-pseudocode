/*
 * XREFs of ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x140059AD0
 * Callers:
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x14005A508 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005F2C8 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005F644 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x140017F5C (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
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
