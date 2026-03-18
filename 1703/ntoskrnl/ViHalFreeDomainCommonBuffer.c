/*
 * XREFs of ViHalFreeDomainCommonBuffer @ 0x14076C560
 * Callers:
 *     VfFreeCommonBuffer @ 0x140769BD0 (VfFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char __fastcall ViHalFreeDomainCommonBuffer(_QWORD *a1)
{
  char v2; // bl
  __int64 *v3; // rdi
  KIRQL v4; // bp
  __int64 *v5; // rax
  __int64 v7; // rdx
  __int64 *v8; // rcx

  v2 = 0;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1407901D8);
  v5 = (__int64 *)ViDomainCommonBufferList;
  if ( (__int64 *)ViDomainCommonBufferList != &ViDomainCommonBufferList )
  {
    while ( 1 )
    {
      v3 = v5;
      if ( v5[2] == *a1 )
        break;
      v5 = (__int64 *)*v5;
      if ( v5 == &ViDomainCommonBufferList )
        goto LABEL_4;
    }
    v7 = *v5;
    v2 = 1;
    v8 = (__int64 *)v5[1];
    if ( *(__int64 **)(*v5 + 8) != v5 || (__int64 *)*v8 != v5 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
  }
LABEL_4:
  KxReleaseSpinLock(&qword_1407901D8);
  __writecr8(v4);
  if ( v2 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
