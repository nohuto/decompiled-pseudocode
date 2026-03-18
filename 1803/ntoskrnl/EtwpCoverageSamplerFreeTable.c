/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x1407B7634
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x1407B414C (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1407B6098 (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerCleanup @ 0x1407B7488 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x1407B7744 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageSamplerFreeTable(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[3];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x56777445u);
    P[3] = 0LL;
  }
  ExFreePoolWithTag(P, 0x56777445u);
}
