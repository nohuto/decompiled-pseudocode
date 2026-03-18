/*
 * XREFs of ViHalTrackDomainCommonBuffer @ 0x14076C708
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1402503E0 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ViHalTrackDomainCommonBuffer(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  KIRQL v4; // di
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_1407901D8);
  v3 = ViDomainCommonBufferList;
  v4 = v2;
  if ( *(__int64 **)(ViDomainCommonBufferList + 8) != &ViDomainCommonBufferList )
    __fastfail(3u);
  *a1 = ViDomainCommonBufferList;
  a1[1] = &ViDomainCommonBufferList;
  *(_QWORD *)(v3 + 8) = a1;
  ViDomainCommonBufferList = (__int64)a1;
  KxReleaseSpinLock(&qword_1407901D8);
  result = v4;
  __writecr8(v4);
  return result;
}
