/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x14014463C
 * Callers:
 *     MiCountSystemImageCommitment @ 0x1401443B8 (MiCountSystemImageCommitment.c)
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreePrivateFixupEntryForSystemImage(ULONG_PTR BugCheckParameter2, int a2)
{
  PVOID *v3; // rdi
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // bp
  __int64 v8; // rcx
  __int64 **v9; // rax

  v3 = 0LL;
  v5 = ExAcquireSpinLockExclusive(&dword_14036C088);
  v6 = (__int64 *)qword_14036C040;
  v7 = v5;
  while ( v6 != &qword_14036C040 )
  {
    v3 = (PVOID *)v6;
    if ( BugCheckParameter2 == v6[2] )
    {
      if ( !a2 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036C088);
        __writecr8(v7);
        return v6;
      }
      v8 = *v6;
      v9 = (__int64 **)v6[1];
      if ( *(__int64 **)(*v6 + 8) != v6 || *v9 != v6 )
        __fastfail(3u);
      *v9 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      break;
    }
    v6 = (__int64 *)*v6;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036C088);
  __writecr8(v7);
  if ( a2 )
  {
    if ( v6 == &qword_14036C040 )
      KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
    ExFreePoolWithTag(v3[5], 0);
    ExFreePoolWithTag(v3, 0);
  }
  return 0LL;
}
