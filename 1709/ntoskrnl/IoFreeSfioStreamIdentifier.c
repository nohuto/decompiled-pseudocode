/*
 * XREFs of IoFreeSfioStreamIdentifier @ 0x1401F93E0
 * Callers:
 *     <none>
 * Callees:
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoFreeSfioStreamIdentifier(PFILE_OBJECT FileObject, PVOID Signature)
{
  __int64 v3; // rcx
  PVOID **FileObjectExtension; // rbx
  NTSTATUS v5; // edi
  KSPIN_LOCK *v6; // rsi
  KIRQL v7; // al
  PVOID *v8; // rcx
  KIRQL v9; // bp
  PVOID *v11; // rax
  PVOID **v12; // rdx

  FileObjectExtension = (PVOID **)IopGetFileObjectExtension((__int64)FileObject, 4, 0LL);
  v5 = -1073741275;
  if ( FileObjectExtension )
  {
    v6 = (KSPIN_LOCK *)(v3 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 184));
    v8 = *FileObjectExtension;
    v9 = v7;
    while ( v8 != (PVOID *)FileObjectExtension )
    {
      if ( v8[3] == Signature )
      {
        v11 = (PVOID *)*v8;
        if ( *((PVOID **)*v8 + 1) != v8 || (v12 = (PVOID **)v8[1], *v12 != v8) )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        ExFreePoolWithTag(v8, 0);
        v5 = 0;
        break;
      }
      v8 = (PVOID *)*v8;
    }
    KxReleaseSpinLock(v6);
    __writecr8(v9);
  }
  return v5;
}
