/*
 * XREFs of ?AERTLockMemory@@YAJPEAX_K@Z @ 0x140047000
 * Callers:
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140056070 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z.c)
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005DDC8 (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x140047388 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

signed int __fastcall AERTLockMemory(void *lpAddress, SIZE_T a2)
{
  signed int result; // eax

  if ( VirtualLock(lpAddress, a2) )
    return 0;
  result = IncreaseProcessWorkingSet(a2);
  if ( result < 0 )
    return result;
  if ( VirtualLock(lpAddress, a2) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
