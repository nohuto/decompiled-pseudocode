/*
 * XREFs of IoFreeSfioStreamIdentifier @ 0x140236700
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoFreeSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  __int64 v3; // rcx
  void **FileObjectExtension; // rbx
  NTSTATUS v5; // edi
  KSPIN_LOCK *v6; // rsi
  KIRQL v7; // al
  PVOID *v8; // rcx
  KIRQL v9; // bp
  void **v10; // rdx
  void **v12; // rax

  FileObjectExtension = (void **)IopGetFileObjectExtension((__int64)FileObject, 4, 0LL);
  v5 = -1073741275;
  if ( FileObjectExtension )
  {
    v6 = (KSPIN_LOCK *)(v3 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 184));
    v8 = (PVOID *)*FileObjectExtension;
    v9 = v7;
    if ( *FileObjectExtension != FileObjectExtension )
    {
      while ( 1 )
      {
        v10 = (void **)*v8;
        if ( v8[3] == Signature )
          break;
        v8 = (PVOID *)*v8;
        if ( v10 == FileObjectExtension )
          goto LABEL_5;
      }
      if ( v10[1] != v8 || (v12 = (void **)v8[1], *v12 != v8) )
        __fastfail(3u);
      *v12 = v10;
      v10[1] = v12;
      ExFreePoolWithTag(v8, 0);
      v5 = 0;
    }
LABEL_5:
    KxReleaseSpinLock(v6);
    __writecr8(v9);
  }
  return v5;
}
