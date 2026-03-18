/*
 * XREFs of MiFreePrivateFixupEntryForSystemImage @ 0x140169C50
 * Callers:
 *     MiCountSystemImageCommitment @ 0x140169A08 (MiCountSystemImageCommitment.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x1405F8C24 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
  v5 = ExAcquireSpinLockExclusive(&dword_1403CB548);
  v6 = (__int64 *)qword_1403CB500;
  v7 = v5;
  while ( v6 != &qword_1403CB500 )
  {
    v3 = (PVOID *)v6;
    if ( BugCheckParameter2 == v6[2] )
    {
      if ( !a2 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB548);
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
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB548);
  __writecr8(v7);
  if ( a2 )
  {
    if ( v6 == &qword_1403CB500 )
      KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
    ExFreePoolWithTag(v3[5], 0);
    ExFreePoolWithTag(v3, 0);
  }
  return 0LL;
}
