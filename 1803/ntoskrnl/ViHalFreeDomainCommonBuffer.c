/*
 * XREFs of ViHalFreeDomainCommonBuffer @ 0x14081B394
 * Callers:
 *     VfFreeCommonBuffer @ 0x140818A00 (VfFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

char __fastcall ViHalFreeDomainCommonBuffer(_QWORD *a1)
{
  char v2; // bl
  void *v3; // rdi
  KIRQL v4; // bp
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 **v8; // rdx

  v2 = 0;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1408421E8);
  v5 = ViDomainCommonBufferList;
  if ( (__int64 *)ViDomainCommonBufferList != &ViDomainCommonBufferList )
  {
    while ( 1 )
    {
      v3 = (void *)v5;
      v6 = *(__int64 **)v5;
      if ( *(_QWORD *)(v5 + 16) == *a1 )
        break;
      v5 = *(_QWORD *)v5;
      if ( v6 == &ViDomainCommonBufferList )
        goto LABEL_4;
    }
    v2 = 1;
    if ( v6[1] != v5 || (v8 = *(__int64 ***)(v5 + 8), *v8 != (__int64 *)v5) )
      __fastfail(3u);
    *v8 = v6;
    v6[1] = (__int64)v8;
  }
LABEL_4:
  KxReleaseSpinLock(&qword_1408421E8);
  __writecr8(v4);
  if ( v2 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
