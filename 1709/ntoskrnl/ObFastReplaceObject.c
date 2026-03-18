/*
 * XREFs of ObFastReplaceObject @ 0x14001FFA8
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 *     MmChangeSectionBackingFile @ 0x140127FAC (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x14015618C (CcChangeBackingFileObject.c)
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 *     SeDeassignPrimaryToken @ 0x1405907F0 (SeDeassignPrimaryToken.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 *     SeExchangePrimaryToken @ 0x14072E0A8 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140067BA8 (ObpTraceObjectDereferenceIfActive.c)
 *     ObReferenceObjectExWithTag @ 0x14008AAD0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReplaceObject(volatile __int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  unsigned int v6; // ebx
  signed __int64 BugCheckParameter4; // rdx

  if ( a2 )
    ObReferenceObjectExWithTag(a2, 15LL);
  v4 = _InterlockedExchange64(a1, (a2 | 0xF) & -(__int64)(a2 != 0));
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v6 = v4 & 0xF;
    if ( v6 )
    {
      ObpTraceObjectDereferenceIfActive(v5 - 48, v6, 1953261124LL);
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
