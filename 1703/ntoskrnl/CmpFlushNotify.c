/*
 * XREFs of CmpFlushNotify @ 0x1404CB670
 * Callers:
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     CmpRefreshHive @ 0x14067309C (CmpRefreshHive.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpPostNotify @ 0x14048C118 (CmpPostNotify.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 */

void __fastcall CmpFlushNotify(__int64 a1, __int64 a2, __int64 *a3)
{
  char v4; // bp
  __int64 v6; // rdi
  __int64 v7; // rcx
  char *v8; // rbx

  v4 = a2;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    if ( !(_BYTE)a2 )
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2832));
    v7 = *(_QWORD *)(a1 + 16);
    if ( !v7 )
      goto LABEL_14;
    if ( *(_QWORD *)(v7 + 16) != v7 + 16 )
      CmpPostNotify(v7, a2, (__int64)a3, 0x10Bu, 0, 0LL, a3);
    v8 = *(char **)(a1 + 16);
    if ( v8 )
    {
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v8 + 56));
      **((_QWORD **)v8 + 1) = *(_QWORD *)v8;
      if ( *(_QWORD *)v8 )
        *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *((_QWORD *)v8 + 1);
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v4 )
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2832));
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
LABEL_14:
      if ( !v4 )
        ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2832));
    }
  }
}
