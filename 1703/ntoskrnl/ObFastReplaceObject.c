/*
 * XREFs of ObFastReplaceObject @ 0x14011AE74
 * Callers:
 *     MmChangeSectionBackingFile @ 0x140118718 (MmChangeSectionBackingFile.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 *     CcChangeBackingFileObject @ 0x14014A840 (CcChangeBackingFileObject.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 *     SeDeassignPrimaryToken @ 0x140549F1C (SeDeassignPrimaryToken.c)
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 *     SeExchangePrimaryToken @ 0x1406F6594 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     ObReferenceObjectExWithTag @ 0x1400445F0 (ObReferenceObjectExWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140049B60 (ObpTraceObjectDereferenceIfActive.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReplaceObject(volatile __int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  unsigned int v6; // ebx
  signed __int64 BugCheckParameter4; // rdx

  if ( a2 )
    ObReferenceObjectExWithTag(a2, 15);
  v4 = _InterlockedExchange64(a1, (a2 | 0xF) & -(__int64)(a2 != 0));
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v6 = v4 & 0xF;
    if ( v6 )
    {
      ObpTraceObjectDereferenceIfActive(v5 - 48);
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 48), -v6) - v6;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v5, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v5 - 48);
      }
    }
  }
  return v5;
}
