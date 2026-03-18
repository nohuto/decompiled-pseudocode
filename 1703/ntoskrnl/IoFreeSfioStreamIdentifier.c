/*
 * XREFs of IoFreeSfioStreamIdentifier @ 0x1401F3950
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoFreeSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  PVOID **FileObjectExtension; // rbx
  NTSTATUS v5; // edi
  KIRQL v6; // al
  PVOID *v7; // rcx
  KIRQL v8; // r14
  PVOID *v10; // rdx
  PVOID **v11; // rax

  FileObjectExtension = (PVOID **)IopGetFileObjectExtension((__int64)FileObject, 4, 0LL);
  v5 = -1073741275;
  if ( FileObjectExtension )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&FileObject->IrpListLock);
    v7 = *FileObjectExtension;
    v8 = v6;
    while ( v7 != (PVOID *)FileObjectExtension )
    {
      if ( v7[3] == Signature )
      {
        v10 = (PVOID *)*v7;
        v11 = (PVOID **)v7[1];
        if ( *((PVOID **)*v7 + 1) != v7 || *v11 != v7 )
          __fastfail(3u);
        *v11 = v10;
        v10[1] = v11;
        ExFreePoolWithTag(v7, 0);
        v5 = 0;
        break;
      }
      v7 = (PVOID *)*v7;
    }
    KxReleaseSpinLock(&FileObject->IrpListLock);
    __writecr8(v8);
  }
  return v5;
}
