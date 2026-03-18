/*
 * XREFs of CMFUnmapModules @ 0x1405EEF50
 * Callers:
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CMFUnmapModules(__int16 a1)
{
  PVOID *v2; // rdi
  PVOID *v3; // rbx
  __int64 v4; // rbp
  PVOID v6; // rcx
  PVOID v7; // rcx

  if ( (a1 & 0x20) != 0 )
  {
    v2 = (PVOID *)CMFSegmentSectionPointer;
    _InterlockedExchange64((volatile __int64 *)&CMFSegmentSectionPointer, 0LL);
    if ( v2 )
    {
      v3 = v2;
      v4 = 30LL;
      do
      {
        if ( *v3 )
        {
          ObfDereferenceObject(*v3);
          *v3 = 0LL;
        }
        ++v3;
        --v4;
      }
      while ( v4 );
      ExFreePoolWithTag(v2, 0);
    }
  }
  if ( (a1 & 0x10) != 0 )
  {
    v6 = CMFDirectorySectionPointer;
    if ( CMFDirectorySectionPointer )
    {
      if ( v6 == (PVOID)_InterlockedCompareExchange64(
                          (volatile signed __int64 *)&CMFDirectorySectionPointer,
                          0LL,
                          (signed __int64)CMFDirectorySectionPointer) )
        ObfDereferenceObject(v6);
    }
  }
  if ( (a1 & 0x100) != 0 )
  {
    v7 = CMFHitsSectionPointer;
    if ( CMFHitsSectionPointer )
    {
      if ( v7 == (PVOID)_InterlockedCompareExchange64(
                          (volatile signed __int64 *)&CMFHitsSectionPointer,
                          0LL,
                          (signed __int64)CMFHitsSectionPointer) )
        ObfDereferenceObject(v7);
    }
  }
  return 0LL;
}
