/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x14014BC98
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14014BA18 (MiCountSystemImageCommitment.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreePrivateFixupEntryForSystemImage(ULONG_PTR BugCheckParameter2, int a2)
{
  PVOID *v3; // rdi
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // bp
  __int64 v8; // rax
  __int64 **v9; // rcx

  v3 = 0LL;
  v5 = ExAcquireSpinLockExclusive(&dword_1403883C8);
  v6 = (__int64 *)qword_140388380;
  v7 = v5;
  while ( v6 != &qword_140388380 )
  {
    v3 = (PVOID *)v6;
    if ( BugCheckParameter2 == v6[2] )
    {
      if ( !a2 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403883C8);
        __writecr8(v7);
        return v6;
      }
      v8 = *v6;
      if ( *(__int64 **)(*v6 + 8) != v6 || (v9 = (__int64 **)v6[1], *v9 != v6) )
        __fastfail(3u);
      *v9 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      break;
    }
    v6 = (__int64 *)*v6;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403883C8);
  __writecr8(v7);
  if ( a2 )
  {
    if ( v6 == &qword_140388380 )
      KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
    ExFreePoolWithTag(v3[5], 0);
    ExFreePoolWithTag(v3, 0);
  }
  return 0LL;
}
