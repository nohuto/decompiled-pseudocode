/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x1405E70E8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405E1D68 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14051804C (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
 */

void __fastcall PiPnpRtlFreeInstallerClassChangeInfo(unsigned int **P, __int64 a2, void *a3)
{
  unsigned int *v4; // rcx
  unsigned int *v5; // rcx
  unsigned int *v6; // rax

  if ( P )
  {
    v4 = *P;
    if ( v4 )
      PiDmObjectRelease(v4);
    v5 = P[1];
    if ( v5 )
      PiDmObjectRelease(v5);
    v6 = P[2];
    if ( v6 )
    {
      PiDmRemoveCacheReferenceForObject(v6[7], *((_QWORD *)v6 + 2), a3);
      PiDmObjectRelease(P[2]);
    }
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
